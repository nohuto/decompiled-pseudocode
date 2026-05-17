/*
 * XREFs of Feature_3280147768__private_IsEnabledDeviceUsage @ 0x18009D140
 * Callers:
 *     PsspDuplicateSnapshotLocalToRemote @ 0x1801172B8 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18011785C (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

__int64 Feature_3280147768__private_IsEnabledDeviceUsage()
{
  __int64 v1; // [rsp+8h] [rbp+8h]

  LODWORD(v1) = Feature_3280147768__private_featureState;
  if ( (Feature_3280147768__private_featureState & 0x10) != 0 )
    return Feature_3280147768__private_featureState & 1;
  else
    return Feature_3280147768__private_IsEnabledFallback(v1, 3LL);
}
