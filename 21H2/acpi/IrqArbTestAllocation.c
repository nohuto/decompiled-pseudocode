/*
 * XREFs of IrqArbTestAllocation @ 0x1C009C8F0
 * Callers:
 *     <none>
 * Callees:
 *     ArbTestAllocation @ 0x1C009C590 (ArbTestAllocation.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1C009C700 (IrqArbpPrepareForTestOrConflict.c)
 */

__int64 __fastcall IrqArbTestAllocation(__int64 a1, __int64 ****a2)
{
  __int64 result; // rax

  result = IrqArbpPrepareForTestOrConflict(a1, *a2);
  if ( (int)result >= 0 )
    return ArbTestAllocation(a1, (__int64 **)a2);
  return result;
}
