/*
 * XREFs of MmReturnChargesToLockPagedPool @ 0x1408CAD20
 * Callers:
 *     MiDeleteSubsectionLargePages @ 0x1403F4D98 (MiDeleteSubsectionLargePages.c)
 *     MiCreatePagingFileMap @ 0x1406826EC (MiCreatePagingFileMap.c)
 *     PopEnableHiberFile @ 0x140791980 (PopEnableHiberFile.c)
 *     HalpUnloadMicrocode @ 0x1408685C0 (HalpUnloadMicrocode.c)
 * Callees:
 *     MiGetPteAddress @ 0x140230160 (MiGetPteAddress.c)
 *     MiDeleteSystemPagableVm @ 0x140236D90 (MiDeleteSystemPagableVm.c)
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiReturnResident @ 0x14026307C (MiReturnResident.c)
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
