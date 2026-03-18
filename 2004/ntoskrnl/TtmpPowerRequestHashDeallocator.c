/*
 * XREFs of TtmpPowerRequestHashDeallocator @ 0x1408FCAC4
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x1408FC770 (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall TtmpPowerRequestHashDeallocator(void *a1)
{
  ExFreePoolWithTag(a1, 0x52507454u);
}
