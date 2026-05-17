/*
 * XREFs of Feature_2482235707__private_IsEnabledFallback @ 0x18009CD40
 * Callers:
 *     Feature_2482235707__private_IsEnabledDeviceUsage @ 0x18009CD18 (Feature_2482235707__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_2482235707__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_2482235707__private_descriptor);
}
