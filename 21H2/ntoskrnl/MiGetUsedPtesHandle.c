/*
 * XREFs of MiGetUsedPtesHandle @ 0x14030CA60
 * Callers:
 *     MiReservePageFileSpaceForPage @ 0x14023D660 (MiReservePageFileSpaceForPage.c)
 *     MiInsertPhysicalPteMapping @ 0x140298318 (MiInsertPhysicalPteMapping.c)
 *     MiUpdatePageTableUseCount @ 0x1402CF7F4 (MiUpdatePageTableUseCount.c)
 *     MiInPagePageTable @ 0x14030BDC0 (MiInPagePageTable.c)
 *     MiEvictPageTableLock @ 0x14030C620 (MiEvictPageTableLock.c)
 *     MiSplitPrivatePage @ 0x14030CFB0 (MiSplitPrivatePage.c)
 *     MiProtectPrivateMemory @ 0x14030DA00 (MiProtectPrivateMemory.c)
 *     MiCompleteRestrictedImageFault @ 0x14031D0A0 (MiCompleteRestrictedImageFault.c)
 *     MiSetProtectionOnSection @ 0x140332C70 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x140334820 (MiDecommitPages.c)
 *     MiDeletePagablePteRange @ 0x140337360 (MiDeletePagablePteRange.c)
 *     MiReducePteUseCount @ 0x1403F45E0 (MiReducePteUseCount.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14052D398 (MiUpdatePrivateDemandZeroView.c)
 *     MiCommitHotPatchTable @ 0x14053E8C0 (MiCommitHotPatchTable.c)
 *     MiUpdateAwePageTable @ 0x14054E034 (MiUpdateAwePageTable.c)
 *     MiDeleteLargeUserPde @ 0x14054F95C (MiDeleteLargeUserPde.c)
 *     MiInsertLargeUserMapping @ 0x14055E578 (MiInsertLargeUserMapping.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiGetUsedPtesHandle(unsigned __int64 a1, __int64 Process)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v3 = *(_QWORD *)v2;
  if ( v2 >= 0xFFFFF6FB7DBED000uLL && v2 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
  {
    Process = (__int64)KeGetCurrentThread()->ApcState.Process;
    if ( *(_BYTE *)(Process + 912) != 1 && (v3 & 1) != 0 && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process;
      v5 = *(_QWORD *)(Process + 1928);
      if ( v5 )
      {
        Process = v3 | 0x20;
        v6 = *(_QWORD *)(v5 + 8 * ((v2 >> 3) & 0x1FF));
        if ( (v6 & 0x20) == 0 )
          Process = v3;
        v3 = Process;
        if ( (v6 & 0x42) != 0 )
          v3 = Process | 0x42;
      }
    }
  }
  v10 = v3;
  if ( (unsigned int)MiPteInShadowRange(&v10, Process)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v8 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v10 >> 3) & 0x1FF));
      v9 = v3 | 0x20;
      if ( (v8 & 0x20) == 0 )
        v9 = v3;
      v3 = v9;
      if ( (v8 & 0x42) != 0 )
        v3 = v9 | 0x42;
    }
  }
  return 48 * ((v3 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
}
