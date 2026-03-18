/*
 * XREFs of IrqArbIrqFromGsiv @ 0x1C00B690C
 * Callers:
 *     IrqArbGetNextAllocationRange @ 0x1C009A780 (IrqArbGetNextAllocationRange.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C009D25C (IrqArbpFindSuitableRangePci.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C00B6B6C (IrqArbpAssignIrqFromLinkNode.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1C00BDE8C (IrqPolicyGetDistributionDisposition.c)
 * Callees:
 *     IrqArbpLookupIsaOverrideByGsiv @ 0x1C009BAFC (IrqArbpLookupIsaOverrideByGsiv.c)
 */

__int64 __fastcall IrqArbIrqFromGsiv(int a1)
{
  char v1; // al
  unsigned int v2; // ecx
  unsigned int v3; // edx
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  v1 = IrqArbpLookupIsaOverrideByGsiv(a1, &v5);
  v3 = v5;
  if ( !v1 )
    return v2;
  return v3;
}
