/*
 * XREFs of Feature_3401902395__private_IsEnabledFallback @ 0x1403F7E8C
 * Callers:
 *     Feature_3401902395__private_IsEnabledDeviceUsage @ 0x1403F7E54 (Feature_3401902395__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1403F1CF4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_3401902395__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_3401902395__private_descriptor);
}
