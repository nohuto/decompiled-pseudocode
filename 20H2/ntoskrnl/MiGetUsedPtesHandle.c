/*
 * XREFs of MiGetUsedPtesHandle @ 0x1402CC840
 * Callers:
 *     MiProtectPrivateMemory @ 0x1402349C0 (MiProtectPrivateMemory.c)
 *     MiSplitPrivatePage @ 0x1402354F8 (MiSplitPrivatePage.c)
 *     MiUpdatePageTableUseCount @ 0x14023C700 (MiUpdatePageTableUseCount.c)
 *     MiInsertPhysicalPteMapping @ 0x14025F5F8 (MiInsertPhysicalPteMapping.c)
 *     MiCompleteRestrictedImageFault @ 0x1402A07F0 (MiCompleteRestrictedImageFault.c)
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1402B7A70 (MiDecommitPages.c)
 *     MiDeletePagablePteRange @ 0x1402BA840 (MiDeletePagablePteRange.c)
 *     MiInPagePageTable @ 0x1402CBBA0 (MiInPagePageTable.c)
 *     MiEvictPageTableLock @ 0x1402CC400 (MiEvictPageTableLock.c)
 *     MiReservePageFileSpaceForPage @ 0x1403486C0 (MiReservePageFileSpaceForPage.c)
 *     MiReducePteUseCount @ 0x1403F2D98 (MiReducePteUseCount.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14052B898 (MiUpdatePrivateDemandZeroView.c)
 *     MiCommitHotPatchTable @ 0x14053CDC0 (MiCommitHotPatchTable.c)
 *     MiUpdateAwePageTable @ 0x14054C534 (MiUpdateAwePageTable.c)
 *     MiDeleteLargeUserPde @ 0x14054DE8C (MiDeleteLargeUserPde.c)
 *     MiInsertLargeUserMapping @ 0x14055CAA8 (MiInsertLargeUserMapping.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiGetUsedPtesHandle(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rbx
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  struct _LIST_ENTRY *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF

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
  v10 = v2;
  if ( MiPteInShadowRange((unsigned __int64)&v10)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    v7 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v7 )
    {
      v8 = *((_QWORD *)&v7->Flink + (((unsigned __int64)&v10 >> 3) & 0x1FF));
      v9 = v2 | 0x20;
      if ( (v8 & 0x20) == 0 )
        v9 = v2;
      v2 = v9;
      if ( (v8 & 0x42) != 0 )
        v2 = v9 | 0x42;
    }
  }
  return 48 * ((v2 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
}
