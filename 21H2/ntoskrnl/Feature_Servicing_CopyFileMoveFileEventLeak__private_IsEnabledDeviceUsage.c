/*
 * XREFs of Feature_Servicing_CopyFileMoveFileEventLeak__private_IsEnabledDeviceUsage @ 0x1403F14F0
 * Callers:
 *     IopCopyCompleteReadRequest @ 0x1403F1900 (IopCopyCompleteReadRequest.c)
 * Callees:
 *     Feature_Servicing_CopyFileMoveFileEventLeak__private_IsEnabledFallback @ 0x1403F1528 (Feature_Servicing_CopyFileMoveFileEventLeak__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_CopyFileMoveFileEventLeak__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_CopyFileMoveFileEventLeak__private_featureState & 0x10) != 0 )
    return Feature_Servicing_CopyFileMoveFileEventLeak__private_featureState & 1;
  else
    return Feature_Servicing_CopyFileMoveFileEventLeak__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_CopyFileMoveFileEventLeak__private_featureState,
             3LL);
}
