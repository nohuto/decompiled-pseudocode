/*
 * XREFs of RaUnitCreateIrp @ 0x1C0010D9C
 * Callers:
 *     RaDriverCreateIrp @ 0x1C0072B60 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1C0072C10 (RaDriverCloseIrp.c)
 * Callees:
 *     RaidHandleCreateCloseIrp @ 0x1C0010DB4 (RaidHandleCreateCloseIrp.c)
 */

__int64 __fastcall RaUnitCreateIrp(__int64 a1)
{
  return RaidHandleCreateCloseIrp(*(unsigned int *)(a1 + 48));
}
