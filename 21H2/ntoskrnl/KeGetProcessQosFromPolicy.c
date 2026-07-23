/*
 * XREFs of KeGetProcessQosFromPolicy @ 0x140514468
 * Callers:
 *     PspSetProcessPpmPolicy @ 0x1406114D0 (PspSetProcessPpmPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessQosFromPolicy(int a1)
{
  return KiProcessPolicyToQosMappingTable[a1];
}
