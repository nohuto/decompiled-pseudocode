/*
 * XREFs of CmpSyncNextBackupHive @ 0x1408701C0
 * Callers:
 *     NtInitializeRegistry @ 0x140778D10 (NtInitializeRegistry.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwCreateKey @ 0x1403F26D0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1403F2F30 (ZwSetValueKey.c)
 *     CmpFlushBackupHive @ 0x14086FC00 (CmpFlushBackupHive.c)
 *     TryLockShutdownShared @ 0x140871530 (TryLockShutdownShared.c)
 */

__int64 CmpSyncNextBackupHive()
{
  unsigned int v0; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rdx
  BOOLEAN v3; // di
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v14; // [rsp+90h] [rbp+20h]
  int v15; // [rsp+98h] [rbp+28h]
  HANDLE KeyHandle; // [rsp+A0h] [rbp+30h] BYREF

  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( !(unsigned __int8)TryLockShutdownShared() )
    return (unsigned int)-2147483622;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v3 )
  {
    if ( CmpDoIdleProcessing )
    {
      do
      {
        v15 = CmpPeriodicBackupFlushHiveCount;
        if ( (unsigned int)CmpPeriodicBackupFlushHiveCount >= 6 )
          v14 = 0;
        else
          v14 = CmpPeriodicBackupFlushHiveCount + 1;
      }
      while ( _InterlockedCompareExchange(&CmpPeriodicBackupFlushHiveCount, v14, CmpPeriodicBackupFlushHiveCount) != v15 );
      if ( ((__int64)CmpMachineHiveList[25 * v14 + 4] & 1) == 0 && CmpMachineHiveList[25 * v14 + 6] )
        CmpFlushBackupHive(v14);
      if ( v14 == 6 )
      {
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpConfigurationManagerKeyName;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
        {
          _InterlockedIncrement(&CmpBackupCount);
          ZwSetValueKey(KeyHandle, &CmpBackupCountValueName, 0, 4u, &CmpBackupCount, 4u);
          ZwClose(KeyHandle);
        }
        v0 = -2147483622;
      }
      else
      {
        v0 = 0;
      }
      goto LABEL_19;
    }
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v2, v4, v5);
  }
  v0 = -1073741431;
LABEL_19:
  ExReleasePushLockEx((ULONG_PTR)&CmpShutdownLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7, v8);
  if ( v3 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
  }
  return v0;
}
