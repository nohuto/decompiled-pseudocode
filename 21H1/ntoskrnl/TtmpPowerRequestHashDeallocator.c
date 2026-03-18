/*
 * XREFs of TtmpPowerRequestHashDeallocator @ 0x1408FB7D4
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x1408FB480 (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall TtmpPowerRequestHashDeallocator(void *a1)
{
  ExFreePoolWithTag(a1, 0x52507454u);
}
