/*
 * XREFs of PspEnumJobsAndProcessesInJobHierarchy @ 0x140612238
 * Callers:
 *     PspQueryJobHierarchyAccountingInformation @ 0x1405F098C (PspQueryJobHierarchyAccountingInformation.c)
 *     PspEnforceLimits @ 0x140615940 (PspEnforceLimits.c)
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 *     PspEstablishJobHierarchy @ 0x140672018 (PspEstablishJobHierarchy.c)
 *     PspIsSetJobIoAttribution @ 0x1406756F4 (PspIsSetJobIoAttribution.c)
 *     PspSetJobIoAttribution @ 0x140675754 (PspSetJobIoAttribution.c)
 *     PspRemoveIoAttribution @ 0x140675FF0 (PspRemoveIoAttribution.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1406762E0 (PspAddSchedulingGroupToJobChain.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406CBAEC (PspAllocateAndQueryNotificationChannel.c)
 *     PspFreezeJobTree @ 0x1406CBEB4 (PspFreezeJobTree.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1406D7B64 (PspQueryJobHierarchyProcessIdList.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1406E1138 (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x1406E2038 (PspSetEnergyTrackingStateJobTree.c)
 *     PspSetBackgroundJobTree @ 0x1406E6470 (PspSetBackgroundJobTree.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x1406ECBCC (PspDoesJobHierarchyPermitUILimits.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140902C04 (PspTerminateSiloSubsystemProcesses.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1409049A0 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspRemoveRateControl @ 0x140904BCC (PspRemoveRateControl.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x140904C64 (PspSendNoWakeChargeLimitNotification.c)
 *     PspSetJobRateControl @ 0x140905000 (PspSetJobRateControl.c)
 *     PspEnumProcessesInJobHierarchy @ 0x14090A180 (PspEnumProcessesInJobHierarchy.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140263E60 (ObReferenceObjectSafeWithTag.c)
 *     PspCallJobHierarchyCallbacks @ 0x14061243C (PspCallJobHierarchyCallbacks.c)
 *     PspUnlockJob @ 0x140612970 (PspUnlockJob.c)
 *     PspLockJobShared @ 0x1406129DC (PspLockJobShared.c)
 *     PspGetNextChildJob @ 0x140612F18 (PspGetNextChildJob.c)
 */

__int64 __fastcall PspEnumJobsAndProcessesInJobHierarchy(_QWORD *Object, int a2, int a3, int a4, __int64 a5, int a6)
{
  int v6; // edi
  unsigned int v8; // r15d
  int v9; // r12d
  _QWORD *v10; // rbx
  __int64 NextChildJob; // rbp
  _QWORD *i; // r14
  _QWORD *v13; // r14
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-58h]
  int v16; // [rsp+98h] [rbp+10h]
  int v17; // [rsp+A0h] [rbp+18h]
  int v18; // [rsp+A8h] [rbp+20h]

  v18 = a4;
  v17 = a3;
  v16 = a2;
  v6 = a6;
  if ( (a6 & 8) != 0 )
    v8 = a6 | 1;
  else
    v8 = a6 & 0xFFFFFFFE;
  v9 = 0;
  v10 = Object;
  if ( (a6 & 8) != 0 )
    v6 = a6 | 1;
  while ( 1 )
  {
    if ( (v6 & 2) == 0 )
    {
      v9 = PspCallJobHierarchyCallbacks((_DWORD)v10, a2, a3, a4, a5, v6);
      if ( v9 < 0 )
        goto LABEL_17;
      v6 = v8;
    }
    NextChildJob = 0LL;
    CurrentThread = KeGetCurrentThread();
    PspLockJobShared(v10, CurrentThread);
    for ( i = (_QWORD *)v10[132]; i != v10 + 132; i = (_QWORD *)*i )
    {
      if ( ObReferenceObjectSafeWithTag((__int64)(i - 130)) )
      {
        NextChildJob = (__int64)(i - 130);
        break;
      }
    }
    PspUnlockJob(v10, CurrentThread);
    if ( !NextChildJob )
    {
      v13 = (_QWORD *)v10[134];
      if ( v10 != Object )
      {
        while ( 1 )
        {
          if ( (v6 & 2) != 0 )
          {
            v9 = PspCallJobHierarchyCallbacks((_DWORD)v10, v16, v17, v18, a5, v8);
            if ( v9 < 0 )
              goto LABEL_17;
          }
          NextChildJob = PspGetNextChildJob(v13, v10);
          if ( !NextChildJob )
          {
            v10 = v13;
            v13 = (_QWORD *)v13[134];
            if ( v10 != Object )
              continue;
          }
          break;
        }
      }
    }
    v10 = (_QWORD *)NextChildJob;
    if ( !NextChildJob )
      break;
    a4 = v18;
    a3 = v17;
    a2 = v16;
  }
  if ( (v6 & 2) == 0 )
    return (unsigned int)v9;
  v9 = PspCallJobHierarchyCallbacks((_DWORD)Object, v16, v17, v18, a5, v6);
LABEL_17:
  if ( v10 )
  {
    while ( v10 != Object )
    {
      ObfDereferenceObjectWithTag(v10, 0x6E457350u);
      v10 = (_QWORD *)v10[134];
    }
  }
  return (unsigned int)v9;
}
