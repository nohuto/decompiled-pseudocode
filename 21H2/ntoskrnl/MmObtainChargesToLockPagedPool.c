/*
 * XREFs of MmObtainChargesToLockPagedPool @ 0x14081D080
 * Callers:
 *     MiCreatePagingFileMap @ 0x1406F3A44 (MiCreatePagingFileMap.c)
 *     PopPreallocateHibernateMemory @ 0x14080751C (PopPreallocateHibernateMemory.c)
 *     HalpMcExportAndChargeNeededData @ 0x140824960 (HalpMcExportAndChargeNeededData.c)
 * Callees:
 *     MiChargeResident @ 0x1402821F4 (MiChargeResident.c)
 */

_BOOL8 __fastcall MmObtainChargesToLockPagedPool(__int16 a1, __int64 a2)
{
  return (unsigned int)MiChargeResident(&MiSystemPartition, ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12, 1024LL) != 0;
}
