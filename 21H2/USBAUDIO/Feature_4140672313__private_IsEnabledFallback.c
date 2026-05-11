/*
 * XREFs of Feature_4140672313__private_IsEnabledFallback @ 0x1C0004450
 * Callers:
 *     Feature_4140672313__private_IsEnabledDeviceUsage @ 0x1C000446C (Feature_4140672313__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C0002CA0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_4140672313__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_4140672313__private_descriptor);
}
