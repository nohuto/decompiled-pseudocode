/*
 * XREFs of MmObtainChargesToLockPagedPool @ 0x140792150
 * Callers:
 *     MiCreatePagingFileMap @ 0x1406826EC (MiCreatePagingFileMap.c)
 *     PopPreallocateHibernateMemory @ 0x140791ECC (PopPreallocateHibernateMemory.c)
 *     HalpMcExportAndChargeNeededData @ 0x1407920C8 (HalpMcExportAndChargeNeededData.c)
 * Callees:
 *     MiChargeResident @ 0x140344234 (MiChargeResident.c)
 */

_BOOL8 __fastcall MmObtainChargesToLockPagedPool(__int16 a1, __int64 a2)
{
  return (unsigned int)MiChargeResident(&MiSystemPartition, ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12, 1024LL) != 0;
}
