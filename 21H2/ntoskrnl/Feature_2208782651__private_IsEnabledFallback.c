/*
 * XREFs of Feature_2208782651__private_IsEnabledFallback @ 0x1403F1388
 * Callers:
 *     Feature_2208782651__private_IsEnabledDeviceUsage @ 0x1403F1350 (Feature_2208782651__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1403F0AB0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_2208782651__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_2208782651__private_descriptor);
}
