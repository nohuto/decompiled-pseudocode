/*
 * XREFs of IvtDeleteDevice @ 0x1404DD3B0
 * Callers:
 *     <none>
 * Callees:
 *     ExtEnvFreeMemory @ 0x1404CFF9C (ExtEnvFreeMemory.c)
 */

__int64 __fastcall IvtDeleteDevice(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rcx

  ExtEnvFreeMemory(a1, *(_QWORD *)(a2 + 32));
  return ExtEnvFreeMemory(v3, a2);
}
