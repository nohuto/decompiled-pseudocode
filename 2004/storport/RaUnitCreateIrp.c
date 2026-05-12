/*
 * XREFs of RaUnitCreateIrp @ 0x1C000FDDC
 * Callers:
 *     RaDriverCreateIrp @ 0x1C0071690 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1C0071740 (RaDriverCloseIrp.c)
 * Callees:
 *     RaidHandleCreateCloseIrp @ 0x1C000FDF4 (RaidHandleCreateCloseIrp.c)
 */

__int64 __fastcall RaUnitCreateIrp(__int64 a1)
{
  return RaidHandleCreateCloseIrp(*(unsigned int *)(a1 + 48));
}
