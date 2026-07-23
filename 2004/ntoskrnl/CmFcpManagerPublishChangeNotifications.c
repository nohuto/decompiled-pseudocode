/*
 * XREFs of CmFcpManagerPublishChangeNotifications @ 0x14087B2B4
 * Callers:
 *     CmFcManagerUpdateFeatureConfigurations @ 0x14087A7F4 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x14087AB50 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ZwQueryWnfStateData @ 0x1403F6220 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x1403F6F80 (ZwUpdateWnfStateData.c)
 *     CmFcpWorkItemQueueWork @ 0x1404E885C (CmFcpWorkItemQueueWork.c)
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
  ExAcquirePushLockSharedEx((ULONG_PTR)&stru_140C48170, 0LL);
  for ( i = qword_140C48178; (__int64 *)i != &qword_140C48178; i = *(_QWORD *)i )
    CmFcpWorkItemQueueWork((PWORK_QUEUE_ITEM)(i + 16));
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140C48170, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&stru_140C48170);
  KeAbPostRelease((ULONG_PTR)&stru_140C48170);
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
