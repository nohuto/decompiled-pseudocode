/*
 * XREFs of KeGetProcessQosFromPolicy @ 0x1405126E8
 * Callers:
 *     PspSetProcessPpmPolicy @ 0x1406D4950 (PspSetProcessPpmPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessQosFromPolicy(int a1)
{
  return KiProcessPolicyToQosMappingTable[a1];
}
