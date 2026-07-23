/*
 * XREFs of Feature_1815603512__private_IsEnabledFallback @ 0x1403F91A8
 * Callers:
 *     Feature_1815603512__private_IsEnabledDeviceUsage @ 0x1403F9170 (Feature_1815603512__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1403F1CF4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_1815603512__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_1815603512__private_descriptor);
}
