/*
 * XREFs of MiHandleSpecialPurposeMemoryCachedFault @ 0x140599EBC
 * Callers:
 *     MmCopyToCachedPage @ 0x1402BE8E0 (MmCopyToCachedPage.c)
 *     MiResolveTransitionFault @ 0x140325B30 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x140328690 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x140239060 (MiLockNestedPageAtDpcInline.c)
 *     MiReleaseFreshPage @ 0x140268408 (MiReleaseFreshPage.c)
 *     MiReturnFreeZeroPage @ 0x14026845C (MiReturnFreeZeroPage.c)
 *     MiLockLeafPage @ 0x1402738F0 (MiLockLeafPage.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MiReplaceTransitionPage @ 0x1402E7704 (MiReplaceTransitionPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402E89B0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiLockTransitionLeafPageEx @ 0x140315D60 (MiLockTransitionLeafPageEx.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 *     MiComputeFaultNode @ 0x140339370 (MiComputeFaultNode.c)
 *     MiInitializePageColorBase @ 0x140339C20 (MiInitializePageColorBase.c)
 *     MiDiscardTransitionPteEx @ 0x1403941B0 (MiDiscardTransitionPteEx.c)
 *     MiPageAvailableEx @ 0x1403AD018 (MiPageAvailableEx.c)
 *     MiReuseStandbyPage @ 0x1405B3FA4 (MiReuseStandbyPage.c)
 */

ULONG_PTR __fastcall MiHandleSpecialPurposeMemoryCachedFault(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        ULONG_PTR a4)
{
  __int64 v6; // r9
  __int64 v9; // r15
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  int v13; // edx
  signed __int32 v14; // ecx
  unsigned int v15; // r12d
  unsigned int v16; // r14d
  __int64 Page; // rbx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v25; // rbx
  __int128 v26; // [rsp+20h] [rbp-38h] BYREF
  __int64 **v27; // [rsp+60h] [rbp+8h] BYREF

  v27 = 0LL;
  v26 = 0LL;
  v6 = 0LL;
  v9 = **(_QWORD **)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a4 + 40) >> 43) & 0x3FFLL)) + 16624LL);
  if ( *(__int64 *)(a4 + 40) < 0 )
  {
    v10 = *(_QWORD *)(a4 + 16);
    if ( (v10 & 0x400) != 0 )
    {
      if ( qword_140C50780 && (v10 & 0x10) == 0 )
        v10 &= ~qword_140C50780;
      v6 = *(_QWORD *)(v10 >> 16);
    }
  }
  if ( a1 )
  {
    v11 = MiComputeFaultNode(a1, v6, &v27);
    v12 = *(_QWORD *)(a1 + 56);
    v13 = v11;
  }
  else
  {
    v13 = (*(_DWORD *)(v6 + 56) >> 20) & 0x7F;
    v12 = 0LL;
  }
  MiInitializePageColorBase(v12, v13, (__int64)&v26);
  v14 = _InterlockedExchangeAdd((volatile signed __int32 *)v26, 1u);
  v15 = HIDWORD(v26) | v14 & DWORD2(v26);
  v16 = 9;
  if ( (unsigned int)MiGetSystemRegionType(a2) != 12 )
    v16 = 1;
  Page = MiGetPage(v9, v15, v16);
  if ( Page != -1 )
    goto LABEL_26;
  v18 = *(_QWORD *)(v9 + 16896);
  v19 = v18 - 1;
  if ( !v18 )
    v19 = 0LL;
  if ( MiPageAvailableEx(v9, v19, v16) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    Page = MiGetPage(v20, v15, v16 & 0xFFFFFFFE);
    if ( Page == -1 )
      return 0LL;
    if ( (unsigned __int64)a3 < 0xFFFFF68000000000uLL || (unsigned __int64)a3 > 0xFFFFF6FFFFFFFFFFuLL )
      v21 = MiLockLeafPage(a3, 2LL);
    else
      v21 = MiLockTransitionLeafPageEx((ULONG_PTR)a3, 0LL, 1);
    a4 = v21;
    if ( !v21 )
    {
      v22 = 48 * Page - 0x220000000000LL;
LABEL_30:
      MiReleaseFreshPage(v22);
      return 0LL;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v21 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x100) == 0 )
    {
      v23 = 48 * Page - 0x220000000000LL;
      MiLockNestedPageAtDpcInline(v23);
      MiReturnFreeZeroPage(v23, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return a4;
    }
LABEL_26:
    v25 = 48 * Page - 0x220000000000LL;
    if ( (MiUnlinkPageFromListEx(a4, 4) & 3) == 0 && *(char *)(a4 + 35) >= 0 )
    {
      MiLockNestedPageAtDpcInline(v25);
      MiReplaceTransitionPage(a4, v25, 6, 0LL);
      *(_QWORD *)(a4 + 16) = ZeroPte;
      MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(a4 + 16));
      MiReturnFreeZeroPage(a4, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiInsertPageInList(v25, 4u);
      return v25;
    }
    MiDiscardTransitionPteEx(a4, 0);
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v22 = v25;
    goto LABEL_30;
  }
  MiReuseStandbyPage(a4);
  MiReturnFreeZeroPage(a4, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 0LL;
}
