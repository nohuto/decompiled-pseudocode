/*
 * XREFs of PspEnumJobsAndProcessesInJobHierarchy @ 0x14068A3B8
 * Callers:
 *     NtSetInformationJobObject @ 0x14061AF00 (NtSetInformationJobObject.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x140656408 (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspRemoveIoAttribution @ 0x1406564E0 (PspRemoveIoAttribution.c)
 *     PspSetJobIoAttribution @ 0x140656A24 (PspSetJobIoAttribution.c)
 *     PspIsSetJobIoAttribution @ 0x140656F54 (PspIsSetJobIoAttribution.c)
 *     PspEnforceLimits @ 0x14065775C (PspEnforceLimits.c)
 *     PspEstablishJobHierarchy @ 0x140659124 (PspEstablishJobHierarchy.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140699E9C (PspQueryJobHierarchyAccountingInformation.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ECDEC (PspAllocateAndQueryNotificationChannel.c)
 *     PspFreezeJobTree @ 0x1406ED1B4 (PspFreezeJobTree.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1406F0F28 (PspAddSchedulingGroupToJobChain.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1406FB4B4 (PspQueryJobHierarchyProcessIdList.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x1407049B8 (PspSetEnergyTrackingStateJobTree.c)
 *     PspSetBackgroundJobTree @ 0x14070A2E0 (PspSetBackgroundJobTree.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x1407106AC (PspDoesJobHierarchyPermitUILimits.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140903A14 (PspTerminateSiloSubsystemProcesses.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x140905C80 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspRemoveRateControl @ 0x140905EAC (PspRemoveRateControl.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x140905F44 (PspSendNoWakeChargeLimitNotification.c)
 *     PspSetJobRateControl @ 0x1409062E0 (PspSetJobRateControl.c)
 *     PspEnumProcessesInJobHierarchy @ 0x14090B430 (PspEnumProcessesInJobHierarchy.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14020AF40 (ObReferenceObjectSafeWithTag.c)
 *     PspCallJobHierarchyCallbacks @ 0x14068A5BC (PspCallJobHierarchyCallbacks.c)
 *     PspUnlockJob @ 0x14068AAF0 (PspUnlockJob.c)
 *     PspLockJobShared @ 0x14068AB5C (PspLockJobShared.c)
 *     PspGetNextChildJob @ 0x14068B098 (PspGetNextChildJob.c)
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
