/*
 * XREFs of MmObtainChargesToLockPagedPool @ 0x140792E70
 * Callers:
 *     MiCreatePagingFileMap @ 0x1406861B8 (MiCreatePagingFileMap.c)
 *     PopPreallocateHibernateMemory @ 0x140792BEC (PopPreallocateHibernateMemory.c)
 *     HalpMcExportAndChargeNeededData @ 0x140792DE8 (HalpMcExportAndChargeNeededData.c)
 * Callees:
 *     MiChargeResident @ 0x14027BBC8 (MiChargeResident.c)
 */

_BOOL8 __fastcall MmObtainChargesToLockPagedPool(__int16 a1, __int64 a2)
{
  return (unsigned int)MiChargeResident(&MiSystemPartition, ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12, 1024LL) != 0;
}
