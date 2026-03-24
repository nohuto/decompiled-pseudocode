/*
 * XREFs of Feature_Servicing_CopyFileMoveFileEventLeak__private_IsEnabledFallback @ 0x1403F1658
 * Callers:
 *     Feature_Servicing_CopyFileMoveFileEventLeak__private_IsEnabledDeviceUsage @ 0x1403F1620 (Feature_Servicing_CopyFileMoveFileEventLeak__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1403F0AB0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_CopyFileMoveFileEventLeak__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_Servicing_CopyFileMoveFileEventLeak__private_descriptor);
}
