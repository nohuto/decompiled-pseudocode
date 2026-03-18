/*
 * XREFs of TtmpPowerRequestHashAllocator @ 0x1408FCAA0
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x1408FC770 (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall TtmpPowerRequestHashAllocator(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x52507454u);
}
