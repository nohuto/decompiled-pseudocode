/*
 * XREFs of SeUnregisterLogonSessionTerminatedRoutine @ 0x14091EC80
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutexUnsafe @ 0x14025BC80 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x14025BE10 (ExReleaseFastMutexUnsafe.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall SeUnregisterLogonSessionTerminatedRoutine(PSE_LOGON_SESSION_TERMINATED_ROUTINE CallbackRoutine)
{
  NTSTATUS v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  PSE_LOGON_SESSION_TERMINATED_ROUTINE v5; // rbx
  PVOID *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
LABEL_8:
    ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v11, v12);
    return -1073741275;
  }
  return v1;
}
