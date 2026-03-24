/*
 * XREFs of KeGetProcessQosFromPolicy @ 0x140514228
 * Callers:
 *     PspSetProcessPpmPolicy @ 0x1406B2490 (PspSetProcessPpmPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessQosFromPolicy(int a1)
{
  return KiProcessPolicyToQosMappingTable[a1];
}
