/*
 * XREFs of Feature_28420408__private_IsEnabledFallback @ 0x1C00044F8
 * Callers:
 *     Feature_28420408__private_IsEnabledDeviceUsage @ 0x1C0004514 (Feature_28420408__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C0002CA0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_28420408__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_28420408__private_descriptor);
}
