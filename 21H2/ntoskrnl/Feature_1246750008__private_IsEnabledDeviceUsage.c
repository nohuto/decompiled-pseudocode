/*
 * XREFs of Feature_1246750008__private_IsEnabledDeviceUsage @ 0x1403F911C
 * Callers:
 *     WmipQueryAllDataMultiple @ 0x140932C38 (WmipQueryAllDataMultiple.c)
 *     WmipQuerySingleMultiple @ 0x140933020 (WmipQuerySingleMultiple.c)
 * Callees:
 *     Feature_1246750008__private_IsEnabledFallback @ 0x1403F9154 (Feature_1246750008__private_IsEnabledFallback.c)
 */

__int64 Feature_1246750008__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1246750008__private_featureState & 0x10) != 0 )
    return Feature_1246750008__private_featureState & 1;
  else
    return Feature_1246750008__private_IsEnabledFallback((unsigned int)Feature_1246750008__private_featureState, 3LL);
}
