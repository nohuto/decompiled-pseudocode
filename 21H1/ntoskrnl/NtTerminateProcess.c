/*
 * XREFs of NtTerminateProcess @ 0x140709EB0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockProcessExclusive @ 0x14031BD28 (PspUnlockProcessExclusive.c)
 *     PspLockProcessExclusive @ 0x140337FB0 (PspLockProcessExclusive.c)
 *     KeForceResumeThread @ 0x1403560CC (KeForceResumeThread.c)
 *     PspUnlockProcessExclusiveUnsafe @ 0x14057CDC0 (PspUnlockProcessExclusiveUnsafe.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14062B1C0 (ObReferenceObjectByHandleWithTag.c)
 *     PspLogAuditTerminateRemoteProcessEvent @ 0x1406EAB58 (PspLogAuditTerminateRemoteProcessEvent.c)
 *     PspExitThread @ 0x1407064A0 (PspExitThread.c)
 *     PspTerminateAllThreads @ 0x1407094EC (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x140709890 (PspTerminateThreadByPointer.c)
 *     PspTerminateProcess @ 0x140709B44 (PspTerminateProcess.c)
 */

NTSTATUS __cdecl NtTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  struct _KTHREAD *CurrentThread; // rdi
  BOOL v3; // ebp
  ULONG_PTR Process; // rbx
  KPROCESSOR_MODE PreviousMode; // r12
  NTSTATUS result; // eax
  _DWORD *v8; // r14
  int v9; // r13d
  int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  __int64 v19; // r8
  _DWORD *v20; // r9
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
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
    if ( !PreviousMode )
      v3 = (*(_BYTE *)(Process + 992) & 1) == 0;
    v8 = Object;
  }
  else
  {
    Object = CurrentThread->ApcState.Process;
    v8 = (_DWORD *)Process;
    if ( PreviousMode != 1 && (*(_BYTE *)(Process + 992) & 1) == 0 || (*(_DWORD *)(Process + 2172) & 1) != 0 )
      return -1073741637;
    if ( (CurrentThread->Header.Reserved1 & 0x40) == 0 )
    {
      PspLockProcessExclusive(Process, (__int64)CurrentThread);
      _m_prefetchw((const void *)(Process + 1124));
      v17 = *(_DWORD *)(Process + 1124);
      do
      {
        v18 = v17;
        v17 = _InterlockedCompareExchange((volatile signed __int32 *)(Process + 1124), v17 | 0x40000000, v17);
      }
      while ( v18 != v17 );
      if ( (v17 & 0x40000008) != 0 )
      {
        PspUnlockProcessExclusive(Process, (__int64)CurrentThread);
        LOBYTE(v19) = 1;
        PspTerminateThreadByPointer((__int64)CurrentThread, (unsigned int)ExitStatus, v19, v20);
        return 0;
      }
      *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x40u;
      if ( *(_DWORD *)(Process + 2004) == 259 )
        *(_DWORD *)(Process + 2004) = ExitStatus;
      PspUnlockProcessExclusiveUnsafe(Process);
      v10 = PspTerminateAllThreads(Process, (struct _EX_RUNDOWN_REF *)CurrentThread, ExitStatus, 0);
      goto LABEL_18;
    }
    ObfReferenceObjectWithTag((PVOID)Process, 0x65547350u);
  }
  v9 = v8[272];
  --CurrentThread->KernelApcDisable;
  v10 = PspTerminateProcess((ULONG_PTR)v8, (struct _EX_RUNDOWN_REF *)CurrentThread, ExitStatus, v3);
  ObfDereferenceObjectWithTag(v8, 0x65547350u);
  if ( v8 == (_DWORD *)Process )
  {
    if ( PreviousMode == 1 || (*(_BYTE *)(Process + 992) & 1) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 1u);
      KeForceResumeThread((__int64)CurrentThread, v11, v12, v13);
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v14, v15, v16);
      PspExitThread(ExitStatus);
      __debugbreak();
    }
  }
  else
  {
    PspLogAuditTerminateRemoteProcessEvent(v9, v10);
  }
LABEL_18:
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v11, v12, (__int64)v13);
  return v10;
}
