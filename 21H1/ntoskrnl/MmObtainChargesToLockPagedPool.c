/*
 * XREFs of MmObtainChargesToLockPagedPool @ 0x14077BBF0
 * Callers:
 *     MiCreatePagingFileMap @ 0x14063F164 (MiCreatePagingFileMap.c)
 *     PopPreallocateHibernateMemory @ 0x14077B96C (PopPreallocateHibernateMemory.c)
 *     HalpMcExportAndChargeNeededData @ 0x14077BB68 (HalpMcExportAndChargeNeededData.c)
 * Callees:
 *     MiChargeResident @ 0x1403550AC (MiChargeResident.c)
 */

_BOOL8 __fastcall MmObtainChargesToLockPagedPool(__int16 a1, __int64 a2)
{
  return (unsigned int)MiChargeResident(&MiSystemPartition, ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12, 1024LL) != 0;
}
