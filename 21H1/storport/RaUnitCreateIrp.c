/*
 * XREFs of RaUnitCreateIrp @ 0x1C000E01C
 * Callers:
 *     RaDriverCreateIrp @ 0x1C0071780 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1C0071830 (RaDriverCloseIrp.c)
 * Callees:
 *     RaidHandleCreateCloseIrp @ 0x1C000E034 (RaidHandleCreateCloseIrp.c)
 */

__int64 __fastcall RaUnitCreateIrp(__int64 a1)
{
  return RaidHandleCreateCloseIrp(*(unsigned int *)(a1 + 48));
}
