/*
 * XREFs of Feature_1781732665__private_IsEnabledFallback @ 0x1403F0940
 * Callers:
 *     Feature_1781732665__private_IsEnabledDeviceUsage @ 0x1403F0908 (Feature_1781732665__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1403F0AB0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_1781732665__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_1781732665__private_descriptor);
}
