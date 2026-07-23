/*
 * XREFs of CmFcpManagerPublishChangeNotifications @ 0x14087E924
 * Callers:
 *     CmFcManagerUpdateFeatureConfigurations @ 0x14087DE64 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x14087E1C0 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ZwQueryWnfStateData @ 0x1403FD200 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x1403FDF80 (ZwUpdateWnfStateData.c)
 *     CmFcpWorkItemQueueWork @ 0x1404EDC0C (CmFcpWorkItemQueueWork.c)
 */

NTSTATUS __fastcall CmFcpManagerPublishChangeNotifications(__int64 a1, unsigned __int64 a2)
{
  __int64 i; // rbx
  NTSTATUS result; // eax
  __int64 BufferSize; // [rsp+80h] [rbp+28h] BYREF
  unsigned __int64 Buffer; // [rsp+88h] [rbp+30h] BYREF
  WNF_CHANGE_STAMP ChangeStamp; // [rsp+90h] [rbp+38h] BYREF
  unsigned __int64 v7; // [rsp+98h] [rbp+40h] BYREF

  Buffer = a2;
  BufferSize = a1;
  ChangeStamp = 0;
  ExAcquirePushLockSharedEx((ULONG_PTR)&stru_140C48370, 0LL);
  for ( i = qword_140C48378; (__int64 *)i != &qword_140C48378; i = *(_QWORD *)i )
    CmFcpWorkItemQueueWork((PWORK_QUEUE_ITEM)(i + 16));
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140C48370, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&stru_140C48370);
  KeAbPostRelease((ULONG_PTR)&stru_140C48370);
  do
  {
    v7 = 0LL;
    LODWORD(BufferSize) = 8;
    result = ZwQueryWnfStateData(
               &WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
               &CmFcpWnfTypeId,
               0LL,
               &ChangeStamp,
               &v7,
               (PULONG)&BufferSize);
    if ( result < 0 )
      break;
    result = Buffer;
    if ( v7 >= Buffer )
      break;
    result = ZwUpdateWnfStateData(
               &WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
               &Buffer,
               8u,
               &CmFcpWnfTypeId,
               0LL,
               ChangeStamp,
               1u);
  }
  while ( result == -1073741823 );
  return result;
}
