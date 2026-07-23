/*
 * XREFs of Feature_3106716987__private_IsEnabledDeviceUsage @ 0x18009D104
 * Callers:
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180117278 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x1801177E4 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

__int64 Feature_3106716987__private_IsEnabledDeviceUsage()
{
  __int64 v1; // [rsp+8h] [rbp+8h]

  LODWORD(v1) = Feature_3106716987__private_featureState;
  if ( (Feature_3106716987__private_featureState & 0x10) != 0 )
    return Feature_3106716987__private_featureState & 1;
  else
    return Feature_3106716987__private_IsEnabledFallback(v1, 3LL);
}
