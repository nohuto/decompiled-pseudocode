/*
 * XREFs of ObQueryObjectAuditingByHandle @ 0x1407A2A70
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ObpIsKernelHandle @ 0x1402F3558 (ObpIsKernelHandle.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     ObReferenceProcessHandleTable @ 0x14066B3D8 (ObReferenceProcessHandleTable.c)
 *     ExMapHandleToPointer @ 0x1407A1AC0 (ExMapHandleToPointer.c)
 */

NTSTATUS __stdcall ObQueryObjectAuditingByHandle(HANDLE Handle, PBOOLEAN GenerateOnClose)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rbx
  char v5; // r14
  struct _EX_RUNDOWN_REF *Process; // rsi
  unsigned __int64 Count; // rdi
  volatile signed __int64 *v8; // rax
  __int64 v9; // rbx
  NTSTATUS v10; // ebx
  signed __int32 v12[14]; // [rsp+0h] [rbp-38h] BYREF

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
    v9 = *(__int64 *)v8 >> 17;
    _InterlockedExchangeAdd64(v8, 1uLL);
    _InterlockedOr(v12, 0);
    if ( *(_QWORD *)(Count + 48) )
      ExfUnblockPushLock((volatile __int64 *)(Count + 48), 0LL);
    *GenerateOnClose = (v9 & 4) != 0;
    v10 = 0;
  }
  else
  {
    v10 = -1073741816;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  if ( v5 )
    ExReleaseRundownProtection(Process + 139);
  return v10;
}
