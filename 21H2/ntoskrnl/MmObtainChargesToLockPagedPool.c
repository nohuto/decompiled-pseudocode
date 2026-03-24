/*
 * XREFs of MmObtainChargesToLockPagedPool @ 0x1407918C0
 * Callers:
 *     MiCreatePagingFileMap @ 0x14061C548 (MiCreatePagingFileMap.c)
 *     PopPreallocateHibernateMemory @ 0x14079163C (PopPreallocateHibernateMemory.c)
 *     HalpMcExportAndChargeNeededData @ 0x140791838 (HalpMcExportAndChargeNeededData.c)
 * Callees:
 *     MiChargeResident @ 0x14025A658 (MiChargeResident.c)
 */

_BOOL8 __fastcall MmObtainChargesToLockPagedPool(__int16 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (unsigned int)MiChargeResident(
                         &MiSystemPartition,
                         ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12,
                         1024LL,
                         a4) != 0;
}
