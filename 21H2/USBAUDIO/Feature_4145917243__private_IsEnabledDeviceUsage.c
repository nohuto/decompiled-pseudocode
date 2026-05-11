/*
 * XREFs of Feature_4145917243__private_IsEnabledDeviceUsage @ 0x1C0003284
 * Callers:
 *     TopologyProcessProcessUnit @ 0x1C0027390 (TopologyProcessProcessUnit.c)
 *     TopologyBuildFilterTopology @ 0x1C00277CC (TopologyBuildFilterTopology.c)
 * Callees:
 *     Feature_4145917243__private_IsEnabledFallback @ 0x1C0003268 (Feature_4145917243__private_IsEnabledFallback.c)
 */

__int64 Feature_4145917243__private_IsEnabledDeviceUsage()
{
  if ( (Feature_4145917243__private_featureState & 0x10) != 0 )
    return Feature_4145917243__private_featureState & 1;
  else
    return Feature_4145917243__private_IsEnabledFallback((unsigned int)Feature_4145917243__private_featureState, 3u);
}
