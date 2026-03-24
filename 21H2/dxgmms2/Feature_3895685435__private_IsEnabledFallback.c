/*
 * XREFs of Feature_3895685435__private_IsEnabledFallback @ 0x1C0017A24
 * Callers:
 *     Feature_3895685435__private_IsEnabledDeviceUsage @ 0x1C00179EC (Feature_3895685435__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C001834C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_3895685435__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_3895685435__private_descriptor);
}
