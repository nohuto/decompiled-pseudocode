/*
 * XREFs of IrqArbRetestAllocation @ 0x1C00B6E30
 * Callers:
 *     <none>
 * Callees:
 *     IrqArbpPrepareForTestOrConflict @ 0x1C0092040 (IrqArbpPrepareForTestOrConflict.c)
 *     ArbRetestAllocation @ 0x1C00B8140 (ArbRetestAllocation.c)
 */

__int64 __fastcall IrqArbRetestAllocation(__int64 a1, __int64 *a2)
{
  __int64 result; // rax

  result = IrqArbpPrepareForTestOrConflict(a1, *a2);
  if ( (int)result >= 0 )
    return ArbRetestAllocation(a1, a2);
  return result;
}
