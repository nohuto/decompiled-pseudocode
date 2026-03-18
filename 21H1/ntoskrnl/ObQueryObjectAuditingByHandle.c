/*
 * XREFs of ObQueryObjectAuditingByHandle @ 0x1406B60A0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ObpIsKernelHandle @ 0x140264120 (ObpIsKernelHandle.c)
 *     ExfUnblockPushLock @ 0x1403F1A30 (ExfUnblockPushLock.c)
 *     ObReferenceProcessHandleTable @ 0x14061F2E4 (ObReferenceProcessHandleTable.c)
 *     ExMapHandleToPointer @ 0x140638490 (ExMapHandleToPointer.c)
 */

NTSTATUS __stdcall ObQueryObjectAuditingByHandle(HANDLE Handle, PBOOLEAN GenerateOnClose)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rbx
  char v5; // r14
  struct _EX_RUNDOWN_REF *Process; // rsi
  unsigned __int64 Count; // rdi
  signed __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  NTSTATUS v13; // ebx
  signed __int32 v15[14]; // [rsp+0h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = (__int64)Handle;
  v5 = 0;
  Process = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  if ( ObpIsKernelHandle((unsigned __int64)Handle, CurrentThread->PreviousMode) )
  {
    Count = ObpKernelHandleTable;
    v4 ^= 0xFFFFFFFF80000000uLL;
  }
  else if ( KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    Count = ObReferenceProcessHandleTable(Process);
    if ( !Count )
      return -1073741816;
    v5 = 1;
  }
  else
  {
    Count = Process[174].Count;
  }
  --CurrentThread->KernelApcDisable;
  v8 = ExMapHandleToPointer((unsigned int *)Count, v4);
  if ( v8 )
  {
    v12 = *v8 >> 17;
    _InterlockedExchangeAdd64(v8, 1uLL);
    _InterlockedOr(v15, 0);
    if ( *(_QWORD *)(Count + 48) )
      ExfUnblockPushLock((volatile __int64 *)(Count + 48), 0LL);
    *GenerateOnClose = (v12 & 4) != 0;
    v13 = 0;
  }
  else
  {
    v13 = -1073741816;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v9, v10, v11);
  if ( v5 )
    ExReleaseRundownProtection_0(Process + 139);
  return v13;
}
