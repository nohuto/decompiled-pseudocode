/*
 * XREFs of Feature_3207179578__private_IsEnabledFallback @ 0x1C00045F4
 * Callers:
 *     Feature_3207179578__private_IsEnabledDeviceUsage @ 0x1C0004610 (Feature_3207179578__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C0002CA0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_3207179578__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&wil_details_featureDescriptors_a);
}
