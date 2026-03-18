/*
 * XREFs of KeGetProcessQosFromPolicy @ 0x14050E768
 * Callers:
 *     PspSetProcessPpmPolicy @ 0x1406DE590 (PspSetProcessPpmPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessQosFromPolicy(int a1)
{
  return KiProcessPolicyToQosMappingTable[a1];
}
