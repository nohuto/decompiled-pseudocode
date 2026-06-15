/*
 * XREFs of sub_180036DC0 @ 0x180036DC0
 * Callers:
 *     sub_180036A50 @ 0x180036A50 (sub_180036A50.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall sub_180036DC0(PVOID P)
{
  BOOLEAN result; // al

  if ( P )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return result;
}
