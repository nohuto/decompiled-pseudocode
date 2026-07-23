/*
 * XREFs of NtTerminateProcess @ 0x1406B0E40
 * Callers:
 *     <none>
 * Callees:
 *     PspUnlockProcessExclusive @ 0x14024A0C8 (PspUnlockProcessExclusive.c)
 *     KeForceResumeThread @ 0x1402677AC (KeForceResumeThread.c)
 *     PspLockProcessExclusive @ 0x14029AC00 (PspLockProcessExclusive.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockProcessExclusiveUnsafe @ 0x140582A70 (PspUnlockProcessExclusiveUnsafe.c)
 *     PspLogAuditTerminateRemoteProcessEvent @ 0x14061FE68 (PspLogAuditTerminateRemoteProcessEvent.c)
 *     PspExitThread @ 0x14063F658 (PspExitThread.c)
 *     PspTerminateProcess @ 0x1406B1000 (PspTerminateProcess.c)
 *     PspTerminateAllThreads @ 0x1406B1130 (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x1406B14D0 (PspTerminateThreadByPointer.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR Process; // rbx
  KPROCESSOR_MODE PreviousMode; // r12
  NTSTATUS result; // eax
  _DWORD *v7; // r14
  int v8; // r13d
  int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  __int64 v18; // r8
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
      v16 = *(_DWORD *)(Process + 1124);
      do
      {
        v17 = v16;
        v16 = _InterlockedCompareExchange((volatile signed __int32 *)(Process + 1124), v16 | 0x40000000, v16);
      }
      while ( v17 != v16 );
      if ( (v16 & 0x40000008) != 0 )
      {
        PspUnlockProcessExclusive(Process, (__int64)CurrentThread);
        LOBYTE(v18) = 1;
        PspTerminateThreadByPointer(CurrentThread, (unsigned int)ExitStatus, v18);
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
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v13, v14, v15);
      PspExitThread(ExitStatus);
      __debugbreak();
    }
  }
  else
  {
    PspLogAuditTerminateRemoteProcessEvent(v8, v9);
  }
LABEL_16:
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v10, v11, v12);
  return v9;
}
