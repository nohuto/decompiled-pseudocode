/*
 * XREFs of TtmpPowerRequestHashAllocator @ 0x1408FB7B0
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x1408FB480 (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall TtmpPowerRequestHashAllocator(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x52507454u);
}
