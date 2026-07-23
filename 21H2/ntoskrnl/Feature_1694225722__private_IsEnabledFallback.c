/*
 * XREFs of Feature_1694225722__private_IsEnabledFallback @ 0x1403F940C
 * Callers:
 *     Feature_1694225722__private_IsEnabledDeviceUsage @ 0x1403F93D4 (Feature_1694225722__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1403F1CF4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_1694225722__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_1694225722__private_descriptor);
}
