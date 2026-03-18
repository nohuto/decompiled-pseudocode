/*
 * XREFs of MiGetUsedPtesHandle @ 0x1402D03D0
 * Callers:
 *     MiInsertPhysicalPteMapping @ 0x140213558 (MiInsertPhysicalPteMapping.c)
 *     MiEvictPageTableLock @ 0x140229100 (MiEvictPageTableLock.c)
 *     MiReducePteUseCount @ 0x14023210C (MiReducePteUseCount.c)
 *     MiUpdatePageTableUseCount @ 0x140257F64 (MiUpdatePageTableUseCount.c)
 *     MiSplitPrivatePage @ 0x14028E238 (MiSplitPrivatePage.c)
 *     MiDeletePteList @ 0x1402C3BA0 (MiDeletePteList.c)
 *     MiCompleteRestrictedImageFault @ 0x1402CB710 (MiCompleteRestrictedImageFault.c)
 *     MiDecommitPages @ 0x1402CE240 (MiDecommitPages.c)
 *     MiIsPageTableDeletable @ 0x1402D01A8 (MiIsPageTableDeletable.c)
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x14032EA60 (MiProtectPrivateMemory.c)
 *     MiReservePageFileSpaceForPage @ 0x14033B190 (MiReservePageFileSpaceForPage.c)
 *     MiInPagePageTable @ 0x140353230 (MiInPagePageTable.c)
 *     MiUpdatePrivateDemandZeroView @ 0x140593E88 (MiUpdatePrivateDemandZeroView.c)
 *     MiCommitHotPatchTable @ 0x1405A3418 (MiCommitHotPatchTable.c)
 *     MiUpdateAwePageTable @ 0x1405AC9A0 (MiUpdateAwePageTable.c)
 *     MiDeleteLargeUserPde @ 0x1405B07F4 (MiDeleteLargeUserPde.c)
 *     MiInsertLargeUserMapping @ 0x1405C2898 (MiInsertLargeUserMapping.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiGetUsedPtesHandle(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v2 = *(_QWORD *)v1;
  if ( v1 >= 0xFFFFF6FB7DBED000uLL
    && v1 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v5 = v2 | 0x20;
      v6 = *((_QWORD *)&Flink->Flink + ((v1 >> 3) & 0x1FF));
      if ( (v6 & 0x20) == 0 )
        v5 = v2;
      v2 = v5;
      if ( (v6 & 0x42) != 0 )
        v2 = v5 | 0x42;
    }
  }
  v7 = v2;
  return 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v7) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
}
