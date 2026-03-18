/*
 * XREFs of KeGetProcessQosFromPolicy @ 0x14050EDB8
 * Callers:
 *     PspSetProcessPpmPolicy @ 0x140701220 (PspSetProcessPpmPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessQosFromPolicy(int a1)
{
  return KiProcessPolicyToQosMappingTable[a1];
}
