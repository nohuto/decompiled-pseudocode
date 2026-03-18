/*
 * XREFs of IrqArbTestAllocation @ 0x1C0095810
 * Callers:
 *     <none>
 * Callees:
 *     IrqArbpPrepareForTestOrConflict @ 0x1C0092040 (IrqArbpPrepareForTestOrConflict.c)
 *     ArbTestAllocation @ 0x1C00956A0 (ArbTestAllocation.c)
 */

__int64 __fastcall IrqArbTestAllocation(__int64 a1, __int64 *a2)
{
  __int64 result; // rax

  result = IrqArbpPrepareForTestOrConflict(a1, *a2);
  if ( (int)result >= 0 )
    return ArbTestAllocation(a1, (__int64 **)a2);
  return result;
}
