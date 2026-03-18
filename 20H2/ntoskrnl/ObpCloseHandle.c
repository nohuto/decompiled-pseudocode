/*
 * XREFs of ObpCloseHandle @ 0x140627DB0
 * Callers:
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     ObpSetDeviceMap @ 0x1406DD7AC (ObpSetDeviceMap.c)
 * Callees:
 *     ExHandleLogBadReference @ 0x1402011B8 (ExHandleLogBadReference.c)
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ObpIsKernelHandle @ 0x14021E8F0 (ObpIsKernelHandle.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExQueryHandleExceptionsPermanency @ 0x140380810 (ExQueryHandleExceptionsPermanency.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x1405143E0 (KeRaiseUserException.c)
 *     ObCloseHandleTableEntry @ 0x1406160E0 (ObCloseHandleTableEntry.c)
 *     ExMapHandleToPointer @ 0x140628CB0 (ExMapHandleToPointer.c)
 *     ObReferenceProcessHandleTable @ 0x140678474 (ObReferenceProcessHandleTable.c)
 */

__int64 __fastcall ObpCloseHandle(unsigned __int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r14
  ULONG_PTR v4; // rdi
  char v5; // r12
  struct _KPROCESS *Process; // rsi
  __int64 v7; // rbx
  PEPROCESS v8; // rbp
  volatile signed __int64 *v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // ebx
  char v13; // [rsp+80h] [rbp+18h] BYREF
  char v14; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v13 = 0;
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
  v9 = (volatile signed __int64 *)ExMapHandleToPointer(v7, v4);
  if ( v9 )
  {
    v10 = ObCloseHandleTableEntry(v7, v9, (ULONG_PTR)v8, v4, a2, 0);
LABEL_5:
    v11 = v10;
    goto LABEL_6;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v4 >= 0xFFFFFFFFFFFFFFFAuLL || v4 == 0 )
    goto LABEL_29;
  ExQueryHandleExceptionsPermanency(v7, &v14, &v13);
  if ( (*(_BYTE *)(v7 + 44) & 0x10) != 0 && v13 )
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
    v11 = -1073741816;
    if ( v4 + 6 <= 5 )
      v11 = 0;
    goto LABEL_6;
  }
  if ( KeGetCurrentThread()->ApcStateIndex != 1 )
  {
    v10 = KeRaiseUserException(0xC0000008);
    goto LABEL_5;
  }
  v11 = -1073741816;
LABEL_6:
  if ( v5 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v8[1].ProfileListHead.Blink);
  return v11;
}
