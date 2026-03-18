/*
 * XREFs of MiLockLeafPage @ 0x1402738F0
 * Callers:
 *     MiInitializeNewImageSectionProtos @ 0x140243208 (MiInitializeNewImageSectionProtos.c)
 *     MiMakeImageReadOnly @ 0x1402450AC (MiMakeImageReadOnly.c)
 *     MiDeletePerSessionProtos @ 0x14025592C (MiDeletePerSessionProtos.c)
 *     MiPurgeImageSection @ 0x14025AD28 (MiPurgeImageSection.c)
 *     MiTranslatePageForCopy @ 0x14026C808 (MiTranslatePageForCopy.c)
 *     MiReplacePageOfProtoPool @ 0x14026FB78 (MiReplacePageOfProtoPool.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402710C4 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiConvertPrivateToProto @ 0x140272A10 (MiConvertPrivateToProto.c)
 *     MmCopyToCachedPage @ 0x1402BE8E0 (MmCopyToCachedPage.c)
 *     MiGetWorkingSetInfoList @ 0x1402E67E8 (MiGetWorkingSetInfoList.c)
 *     MiResolveProtoCombine @ 0x14033A920 (MiResolveProtoCombine.c)
 *     MiReservePageFileSpaceForPage @ 0x14033B190 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x14033E970 (MiActOnPte.c)
 *     MiIsSubsectionClean @ 0x14058B40C (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x14058BA98 (MiPurgeSubsection.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140599EBC (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiDecrementLargeSubsections @ 0x14059DF58 (MiDecrementLargeSubsections.c)
 *     MiEliminateStaleExtents @ 0x14059E3E8 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x14059E660 (MiEnableLargeSubsection.c)
 *     MiFillFileOnlyProtoAsBad @ 0x14059E7F0 (MiFillFileOnlyProtoAsBad.c)
 *     MiPurgeFileOnlyPfn @ 0x1405A0774 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x140239060 (MiLockNestedPageAtDpcInline.c)
 *     MiInvalidPteConforms @ 0x140273A80 (MiInvalidPteConforms.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14059A31C (MiLockSpecialPurposeMemoryCachedPage.c)
 */

__int64 __fastcall MiLockLeafPage(unsigned __int64 *a1, __int64 a2)
{
  char v2; // r14
  __int64 v4; // r8
  unsigned __int64 i; // r9
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v11; // rdx
  int v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = a2;
  v4 = 0x40000000000000LL;
  for ( i = 0x7FFFFFFFFFFFFFFFLL; ; _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), i) )
  {
    while ( 1 )
    {
      v6 = *a1;
      v7 = *a1;
      if ( (*a1 & 1) != 0 )
        goto LABEL_3;
      if ( (*a1 & 0xC00) != 0x800 )
        return 0LL;
      if ( (unsigned int)MiInvalidPteConforms(*a1, a2, v4, i) )
      {
        v7 = v6;
        if ( qword_140C50780 && (v6 & 0x10) == 0 )
          v7 = v6 & ~qword_140C50780;
LABEL_3:
        v8 = (v7 >> 12) & 0xFFFFFFFFFFLL;
        if ( v8 <= qword_140C50840 )
        {
          a2 = 6 * v8;
          if ( (v4 & *(_QWORD *)(48 * v8 - 0x21FFFFFFFFD8LL)) != 0 )
            break;
        }
      }
    }
    v9 = 48 * v8 - 0x220000000000LL;
    if ( (v2 & 1) != 0 )
    {
      MiLockNestedPageAtDpcInline(48 * v8 - 0x220000000000LL);
    }
    else
    {
      v12 = v2 & 1;
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
        goto LABEL_7;
      do
      {
        do
          KeYieldProcessorEx(&v12);
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
    }
    i = 0x7FFFFFFFFFFFFFFFLL;
    v4 = 0x40000000000000LL;
LABEL_7:
    if ( *a1 == v6 )
      break;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x100) != 0 )
  {
    v11 = v2 & 1 | 2u;
    if ( (v2 & 2) == 0 )
      v11 = v2 & 1;
    return MiLockSpecialPurposeMemoryCachedPage(v9, v11);
  }
  return v9;
}
