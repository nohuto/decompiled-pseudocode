/*
 * XREFs of Feature_1615179064__private_IsEnabledFallback @ 0x1C00045A0
 * Callers:
 *     Feature_1615179064__private_IsEnabledDeviceUsage @ 0x1C00045BC (Feature_1615179064__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C0002CA0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_1615179064__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_1615179064__private_descriptor);
}
