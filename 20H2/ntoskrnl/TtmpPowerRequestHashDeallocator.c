/*
 * XREFs of TtmpPowerRequestHashDeallocator @ 0x1409026EC
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x140902398 (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall TtmpPowerRequestHashDeallocator(void *a1)
{
  ExFreePoolWithTag(a1, 0x52507454u);
}
