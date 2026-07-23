/*
 * XREFs of NtTerminateProcess @ 0x1406B4060
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     PspLockProcessExclusive @ 0x140268180 (PspLockProcessExclusive.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     KeForceResumeThread @ 0x1402FA0EC (KeForceResumeThread.c)
 *     PspUnlockProcessExclusive @ 0x1403598F8 (PspUnlockProcessExclusive.c)
 *     PspUnlockProcessExclusiveUnsafe @ 0x14057D400 (PspUnlockProcessExclusiveUnsafe.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F5C50 (ObReferenceObjectByHandleWithTag.c)
 *     PspExitThread @ 0x1406B05E0 (PspExitThread.c)
 *     PspTerminateAllThreads @ 0x1406B369C (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x1406B3A40 (PspTerminateThreadByPointer.c)
 *     PspTerminateProcess @ 0x1406B3CF4 (PspTerminateProcess.c)
 *     PspLogAuditTerminateRemoteProcessEvent @ 0x14070E7C8 (PspLogAuditTerminateRemoteProcessEvent.c)
 */

NTSTATUS __cdecl NtTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  struct _KTHREAD *CurrentThread; // rdi
  BOOL v3; // ebp
  ULONG_PTR Process; // rbx
  KPROCESSOR_MODE PreviousMode; // r12
  NTSTATUS result; // eax
  _DWORD *v8; // r14
  unsigned int v9; // r13d
  unsigned int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  __int64 v16; // r8
  _DWORD *v17; // r9
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
      v14 = *(_DWORD *)(Process + 1124);
      do
      {
        v15 = v14;
        v14 = _InterlockedCompareExchange((volatile signed __int32 *)(Process + 1124), v14 | 0x40000000, v14);
      }
      while ( v15 != v14 );
      if ( (v14 & 0x40000008) != 0 )
      {
        PspUnlockProcessExclusive(Process, (__int64)CurrentThread);
        LOBYTE(v16) = 1;
        PspTerminateThreadByPointer((__int64)CurrentThread, (unsigned int)ExitStatus, v16, v17);
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
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      PspExitThread(ExitStatus);
      __debugbreak();
    }
  }
  else
  {
    PspLogAuditTerminateRemoteProcessEvent(v9, v10);
  }
LABEL_18:
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v10;
}
