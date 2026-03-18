/*
 * XREFs of KeQueryProcessorTotalCyclesImprecise @ 0x14024C7A0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 */

__int64 __fastcall KeQueryProcessorTotalCyclesImprecise(__int64 a1)
{
  __int64 result; // rax

  result = KeGetPrcb(a1);
  if ( result )
    return *(_QWORD *)(result + 33152);
  return result;
}
