/*
 * XREFs of CmFcpManagerPublishChangeNotifications @ 0x140879FC4
 * Callers:
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140879504 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140879860 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ZwQueryWnfStateData @ 0x1403F4F90 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x1403F5CF0 (ZwUpdateWnfStateData.c)
 *     CmFcpWorkItemQueueWork @ 0x1404E822C (CmFcpWorkItemQueueWork.c)
 */

__int64 __fastcall CmFcpManagerPublishChangeNotifications(__int64 a1, unsigned __int64 a2)
{
  __int64 i; // rbx
  __int64 result; // rax
  unsigned __int64 v4; // [rsp+88h] [rbp+30h] BYREF
  int v5; // [rsp+90h] [rbp+38h]
  unsigned __int64 v6; // [rsp+98h] [rbp+40h]

  v4 = a2;
  v5 = 0;
  ExAcquirePushLockSharedEx((ULONG_PTR)&stru_140C482F0, 0LL);
  for ( i = qword_140C482F8; (__int64 *)i != &qword_140C482F8; i = *(_QWORD *)i )
    CmFcpWorkItemQueueWork((PWORK_QUEUE_ITEM)(i + 16));
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140C482F0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&stru_140C482F0);
  KeAbPostRelease((ULONG_PTR)&stru_140C482F0);
  do
  {
    v6 = 0LL;
    result = ZwQueryWnfStateData((__int64)&WNF_CMFC_FEATURE_CONFIGURATION_CHANGED, (__int64)CmFcpWnfTypeId);
    if ( (int)result < 0 )
      break;
    result = v4;
    if ( v6 >= v4 )
      break;
    result = ZwUpdateWnfStateData((__int64)&WNF_CMFC_FEATURE_CONFIGURATION_CHANGED, (__int64)&v4);
  }
  while ( (_DWORD)result == -1073741823 );
  return result;
}
