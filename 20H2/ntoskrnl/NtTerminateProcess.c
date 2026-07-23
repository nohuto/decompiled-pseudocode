/*
 * XREFs of NtTerminateProcess @ 0x1406991D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KeForceResumeThread @ 0x1402D7860 (KeForceResumeThread.c)
 *     PspLockProcessExclusive @ 0x1402E8F50 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x14032A1F8 (PspUnlockProcessExclusive.c)
 *     PspUnlockProcessExclusiveUnsafe @ 0x140580E30 (PspUnlockProcessExclusiveUnsafe.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140611880 (ObReferenceObjectByHandleWithTag.c)
 *     PspExitThread @ 0x14068390C (PspExitThread.c)
 *     PspTerminateProcess @ 0x1406995B8 (PspTerminateProcess.c)
 *     PspTerminateThreadByPointer @ 0x14069A1F0 (PspTerminateThreadByPointer.c)
 *     PspTerminateAllThreads @ 0x14069A29C (PspTerminateAllThreads.c)
 *     PspLogAuditTerminateRemoteProcessEvent @ 0x1406E0DF8 (PspLogAuditTerminateRemoteProcessEvent.c)
 */

NTSTATUS __cdecl NtTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR Process; // rbx
  KPROCESSOR_MODE PreviousMode; // r12
  NTSTATUS result; // eax
  _DWORD *v7; // r14
  unsigned int v8; // r13d
  unsigned int v9; // ebp
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  __int64 v12; // r8
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( ProcessHandle )
  {
    result = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
               1u,
               (POBJECT_TYPE)PsProcessType,
               PreviousMode,
               0x65547350u,
               &Object,
               0LL);
    if ( result < 0 )
      return result;
    v7 = Object;
  }
  else
  {
    Object = CurrentThread->ApcState.Process;
    v7 = (_DWORD *)Process;
    if ( PreviousMode != 1 && (*(_BYTE *)(Process + 992) & 1) == 0 || (*(_DWORD *)(Process + 2172) & 1) != 0 )
      return -1073741637;
    if ( (CurrentThread->Header.Reserved1 & 0x40) == 0 )
    {
      PspLockProcessExclusive(Process, (__int64)CurrentThread);
      _m_prefetchw((const void *)(Process + 1124));
      v10 = *(_DWORD *)(Process + 1124);
      do
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange((volatile signed __int32 *)(Process + 1124), v10 | 0x40000000, v10);
      }
      while ( v11 != v10 );
      if ( (v10 & 0x40000008) != 0 )
      {
        PspUnlockProcessExclusive(Process, (__int64)CurrentThread);
        LOBYTE(v12) = 1;
        PspTerminateThreadByPointer(CurrentThread, (unsigned int)ExitStatus, v12);
        return 0;
      }
      *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x40u;
      if ( *(_DWORD *)(Process + 2004) == 259 )
        *(_DWORD *)(Process + 2004) = ExitStatus;
      PspUnlockProcessExclusiveUnsafe(Process);
      v9 = PspTerminateAllThreads(Process);
      goto LABEL_16;
    }
    ObfReferenceObjectWithTag((PVOID)Process, 0x65547350u);
  }
  v8 = v7[272];
  --CurrentThread->KernelApcDisable;
  v9 = PspTerminateProcess((ULONG_PTR)v7);
  ObfDereferenceObjectWithTag(v7, 0x65547350u);
  if ( v7 == (_DWORD *)Process )
  {
    if ( PreviousMode == 1 || (*(_BYTE *)(Process + 992) & 1) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 1u);
      KeForceResumeThread((__int64)CurrentThread);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      PspExitThread(ExitStatus);
      __debugbreak();
    }
  }
  else
  {
    PspLogAuditTerminateRemoteProcessEvent(v8, v9);
  }
LABEL_16:
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v9;
}
