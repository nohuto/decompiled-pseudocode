/*
 * XREFs of SeUnregisterLogonSessionTerminatedRoutine @ 0x14091FF30
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140202D60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140202EF0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall SeUnregisterLogonSessionTerminatedRoutine(PSE_LOGON_SESSION_TERMINATED_ROUTINE CallbackRoutine)
{
  NTSTATUS v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  PSE_LOGON_SESSION_TERMINATED_ROUTINE v5; // rbx
  PVOID *v6; // rdx

  v1 = 0;
  if ( !CallbackRoutine )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&SepRmNotifyMutex);
  v5 = (PSE_LOGON_SESSION_TERMINATED_ROUTINE)SeFileSystemNotifyRoutinesHead;
  v6 = &SeFileSystemNotifyRoutinesHead;
  if ( !SeFileSystemNotifyRoutinesHead )
    goto LABEL_8;
  do
  {
    if ( *((PSE_LOGON_SESSION_TERMINATED_ROUTINE *)v5 + 1) == CallbackRoutine )
      break;
    v6 = (PVOID *)v5;
    v5 = *(PSE_LOGON_SESSION_TERMINATED_ROUTINE *)v5;
  }
  while ( v5 );
  if ( v5 )
  {
    *v6 = *(PVOID *)v5;
    ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
LABEL_8:
    ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return -1073741275;
  }
  return v1;
}
