/*
 * XREFs of Feature_3895685435__private_IsEnabledFallback @ 0x1C00276D8
 * Callers:
 *     Feature_3895685435__private_IsEnabledDeviceUsage @ 0x1C00276A0 (Feature_3895685435__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C002618C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_3895685435__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_3895685435__private_descriptor);
}
