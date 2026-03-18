/*
 * XREFs of ObpCloseHandle @ 0x140637590
 * Callers:
 *     ObCloseHandle @ 0x140637550 (ObCloseHandle.c)
 *     ObpSetDeviceMap @ 0x1406E7654 (ObpSetDeviceMap.c)
 * Callees:
 *     ExHandleLogBadReference @ 0x1402011B8 (ExHandleLogBadReference.c)
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ObpIsKernelHandle @ 0x140264120 (ObpIsKernelHandle.c)
 *     ExQueryHandleExceptionsPermanency @ 0x14037E020 (ExQueryHandleExceptionsPermanency.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x140510460 (KeRaiseUserException.c)
 *     ObReferenceProcessHandleTable @ 0x14061F2E4 (ObReferenceProcessHandleTable.c)
 *     ObCloseHandleTableEntry @ 0x140628AD0 (ObCloseHandleTableEntry.c)
 *     ExMapHandleToPointer @ 0x140638490 (ExMapHandleToPointer.c)
 */

__int64 __fastcall ObpCloseHandle(unsigned __int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r14
  ULONG_PTR v4; // rdi
  char v5; // r12
  struct _EX_RUNDOWN_REF *Process; // rsi
  unsigned __int64 Count; // rbx
  PEPROCESS v8; // rbp
  volatile signed __int64 *v9; // rax
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
  Process = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  if ( !ObpIsKernelHandle(a1, a2) )
  {
    v8 = (PEPROCESS)Process;
    if ( KeGetCurrentThread()->ApcStateIndex == 1 )
    {
      Count = ObReferenceProcessHandleTable(Process);
      if ( Count )
      {
        v5 = 1;
        goto LABEL_3;
      }
    }
    else
    {
      Count = Process[174].Count;
      if ( Count != ObpKernelHandleTable )
        goto LABEL_3;
    }
    return (unsigned int)-1073741816;
  }
  Count = ObpKernelHandleTable;
  v4 ^= 0xFFFFFFFF80000000uLL;
  v8 = PsInitialSystemProcess;
LABEL_3:
  --CurrentThread->KernelApcDisable;
  v9 = (volatile signed __int64 *)ExMapHandleToPointer(Count, v4);
  if ( v9 )
  {
    v13 = ObCloseHandleTableEntry(Count, v9, v8, v4, a2, 0);
LABEL_5:
    v14 = v13;
    goto LABEL_6;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v10, v11, v12);
  if ( v4 >= 0xFFFFFFFFFFFFFFFAuLL || v4 == 0 )
    goto LABEL_29;
  ExQueryHandleExceptionsPermanency(Count, &v17, &v16);
  if ( (*(_BYTE *)(Count + 44) & 0x10) != 0 && v16 )
    ExHandleLogBadReference(Count, v4, a2);
  if ( !a2 )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 && Process[170].Count && (_BYTE)KdDebuggerEnabled )
      KeBugCheckEx(0x93u, v4, 1uLL, 0LL, 0LL);
    goto LABEL_29;
  }
  if ( (NtGlobalFlag & 0x400000) == 0 && !Process[175].Count && !*(_QWORD *)(Count + 96) )
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
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v8[1].ProfileListHead.Blink);
  return v14;
}
