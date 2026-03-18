/*
 * XREFs of MmReturnChargesToLockPagedPool @ 0x1408C3B90
 * Callers:
 *     MiDeleteSubsectionLargePages @ 0x1403EF524 (MiDeleteSubsectionLargePages.c)
 *     MiCreatePagingFileMap @ 0x14063F164 (MiCreatePagingFileMap.c)
 *     PopEnableHiberFile @ 0x14077B590 (PopEnableHiberFile.c)
 *     HalpUnloadMicrocode @ 0x140861880 (HalpUnloadMicrocode.c)
 * Callees:
 *     MiGetPteAddress @ 0x14027AF40 (MiGetPteAddress.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiDeleteSystemPagableVm @ 0x1402AB670 (MiDeleteSystemPagableVm.c)
 *     MiReturnResident @ 0x1402D4EFC (MiReturnResident.c)
 */

unsigned __int64 __fastcall MmReturnChargesToLockPagedPool(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  char *AnyMultiplexedVm; // rax
  unsigned __int64 v4; // r8
  _OWORD v6[3]; // [rsp+30h] [rbp-38h] BYREF

  v2 = ((a1 & 0xFFF) + a2 + 4095) >> 12;
  memset(v6, 0, sizeof(v6));
  MiGetPteAddress(a1);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, 0LL, v4, v2, 8, v6);
  return MiReturnResident((__int64)&MiSystemPartition, v2);
}
