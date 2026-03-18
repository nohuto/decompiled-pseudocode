/*
 * XREFs of MmObtainChargesToLockPagedPool @ 0x1407845F0
 * Callers:
 *     MiCreatePagingFileMap @ 0x14060A014 (MiCreatePagingFileMap.c)
 *     PopPreallocateHibernateMemory @ 0x14078436C (PopPreallocateHibernateMemory.c)
 *     HalpMcExportAndChargeNeededData @ 0x140784568 (HalpMcExportAndChargeNeededData.c)
 * Callees:
 *     MiChargeResident @ 0x1402F90CC (MiChargeResident.c)
 */

_BOOL8 __fastcall MmObtainChargesToLockPagedPool(__int16 a1, __int64 a2)
{
  return (unsigned int)MiChargeResident(&MiSystemPartition, ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12, 1024LL) != 0;
}
