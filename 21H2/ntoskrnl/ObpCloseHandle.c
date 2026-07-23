/*
 * XREFs of ObpCloseHandle @ 0x140684820
 * Callers:
 *     ObpSetDeviceMap @ 0x14061C8E4 (ObpSetDeviceMap.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 * Callees:
 *     ExHandleLogBadReference @ 0x1402011C8 (ExHandleLogBadReference.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ObpIsKernelHandle @ 0x140353610 (ObpIsKernelHandle.c)
 *     ExQueryHandleExceptionsPermanency @ 0x140380BA0 (ExQueryHandleExceptionsPermanency.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x140516160 (KeRaiseUserException.c)
 *     ExMapHandleToPointer @ 0x140685770 (ExMapHandleToPointer.c)
 *     ObReferenceProcessHandleTable @ 0x1406E4F14 (ObReferenceProcessHandleTable.c)
 *     ObCloseHandleTableEntry @ 0x14070CA40 (ObCloseHandleTableEntry.c)
 */

__int64 __fastcall ObpCloseHandle(unsigned __int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r14
  ULONG_PTR v4; // rdi
  char v5; // r12
  struct _KPROCESS *Process; // rsi
  __int64 v7; // rbx
  PEPROCESS v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // eax
  unsigned int v14; // ebx
  char v16; // [rsp+80h] [rbp+18h] BYREF
  char v17; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v16 = 0;
  v4 = a1;
  v5 = 0;
  Process = CurrentThread->ApcState.Process;
  if ( !ObpIsKernelHandle(a1, a2) )
  {
    v8 = Process;
    if ( KeGetCurrentThread()->ApcStateIndex == 1 )
    {
      v7 = ObReferenceProcessHandleTable(Process);
      if ( v7 )
      {
        v5 = 1;
        goto LABEL_3;
      }
    }
    else
    {
      v7 = Process[1].AffinityPadding[8];
      if ( v7 != ObpKernelHandleTable )
        goto LABEL_3;
    }
    return (unsigned int)-1073741816;
  }
  v7 = ObpKernelHandleTable;
  v4 ^= 0xFFFFFFFF80000000uLL;
  v8 = PsInitialSystemProcess;
LABEL_3:
  --CurrentThread->KernelApcDisable;
  v9 = ExMapHandleToPointer(v7, v4);
  if ( v9 )
  {
    v13 = ObCloseHandleTableEntry(v7, v9, v8, v4, a2, 0);
LABEL_5:
    v14 = v13;
    goto LABEL_6;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v10, v11, v12);
  if ( v4 >= 0xFFFFFFFFFFFFFFFAuLL || v4 == 0 )
    goto LABEL_29;
  ExQueryHandleExceptionsPermanency(v7, &v17, &v16);
  if ( (*(_BYTE *)(v7 + 44) & 0x10) != 0 && v16 )
    ExHandleLogBadReference(v7, v4, a2);
  if ( !a2 )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0
      && Process[1].AffinityPadding[4]
      && (_BYTE)KdDebuggerEnabled )
    {
      KeBugCheckEx(0x93u, v4, 1uLL, 0LL, 0LL);
    }
    goto LABEL_29;
  }
  if ( (NtGlobalFlag & 0x400000) == 0 && !Process[1].AffinityPadding[9] && !*(_QWORD *)(v7 + 96) )
  {
LABEL_29:
    v14 = -1073741816;
    if ( v4 + 6 <= 5 )
      v14 = 0;
    goto LABEL_6;
  }
  if ( KeGetCurrentThread()->ApcStateIndex != 1 )
  {
    v13 = KeRaiseUserException(0xC0000008);
    goto LABEL_5;
  }
  v14 = -1073741816;
LABEL_6:
  if ( v5 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&v8[1].ProfileListHead.Blink);
  return v14;
}
