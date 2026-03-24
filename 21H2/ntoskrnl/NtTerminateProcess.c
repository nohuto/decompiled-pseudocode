/*
 * XREFs of NtTerminateProcess @ 0x1406D9B60
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402056A0 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KeForceResumeThread @ 0x14027980C (KeForceResumeThread.c)
 *     PspUnlockProcessExclusive @ 0x1402CB978 (PspUnlockProcessExclusive.c)
 *     PspLockProcessExclusive @ 0x1402E98B0 (PspLockProcessExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockProcessExclusiveUnsafe @ 0x140582840 (PspUnlockProcessExclusiveUnsafe.c)
 *     PspExitThread @ 0x14064A838 (PspExitThread.c)
 *     PspLogAuditTerminateRemoteProcessEvent @ 0x1406C0F58 (PspLogAuditTerminateRemoteProcessEvent.c)
 *     PspTerminateProcess @ 0x1406D9D20 (PspTerminateProcess.c)
 *     PspTerminateAllThreads @ 0x1406D9E50 (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x1406DA1F0 (PspTerminateThreadByPointer.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1406F0B80 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall NtTerminateProcess(void *a1, unsigned int a2)
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
  _DWORD *v12; // r9
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  __int64 v15; // r8
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( a1 )
  {
    result = ObReferenceObjectByHandleWithTag(
               a1,
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
      v13 = *(_DWORD *)(Process + 1124);
      do
      {
        v14 = v13;
        v13 = _InterlockedCompareExchange((volatile signed __int32 *)(Process + 1124), v13 | 0x40000000, v13);
      }
      while ( v14 != v13 );
      if ( (v13 & 0x40000008) != 0 )
      {
        PspUnlockProcessExclusive(Process, (__int64)CurrentThread);
        LOBYTE(v15) = 1;
        PspTerminateThreadByPointer(CurrentThread, a2, v15);
        return 0;
      }
      *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x40u;
      if ( *(_DWORD *)(Process + 2004) == 259 )
        *(_DWORD *)(Process + 2004) = a2;
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
      KeForceResumeThread((__int64)CurrentThread, v10, v11, v12);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      PspExitThread(a2);
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
