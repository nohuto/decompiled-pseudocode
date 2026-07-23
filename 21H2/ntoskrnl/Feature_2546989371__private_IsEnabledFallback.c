/*
 * XREFs of Feature_2546989371__private_IsEnabledFallback @ 0x1403F8FE8
 * Callers:
 *     Feature_2546989371__private_IsEnabledDeviceUsage @ 0x1403F8FB0 (Feature_2546989371__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1403F1CF4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_2546989371__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_2546989371__private_descriptor);
}
