/*
 * XREFs of MiLockLeafPage @ 0x14034A220
 * Callers:
 *     MiTranslatePageForCopy @ 0x140251058 (MiTranslatePageForCopy.c)
 *     MmCopyToCachedPage @ 0x1402B4910 (MmCopyToCachedPage.c)
 *     MiMakeImageReadOnly @ 0x140319024 (MiMakeImageReadOnly.c)
 *     MiReplacePageOfProtoPool @ 0x1403191F4 (MiReplacePageOfProtoPool.c)
 *     MiDeletePerSessionProtos @ 0x14032D664 (MiDeletePerSessionProtos.c)
 *     MiActOnPte @ 0x1403476D0 (MiActOnPte.c)
 *     MiReservePageFileSpaceForPage @ 0x1403486C0 (MiReservePageFileSpaceForPage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140349C1C (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiGetWorkingSetInfoList @ 0x14034F6A8 (MiGetWorkingSetInfoList.c)
 *     MiSectionCreated @ 0x1403563C4 (MiSectionCreated.c)
 *     MiConvertPrivateToProto @ 0x140369DA0 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x14036A884 (MiResolveProtoCombine.c)
 *     MiPurgeImageSection @ 0x1403A4B04 (MiPurgeImageSection.c)
 *     MiIsSubsectionClean @ 0x140528154 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x1405287D0 (MiPurgeSubsection.c)
 *     MiDecrementLargeSubsections @ 0x14053E910 (MiDecrementLargeSubsections.c)
 *     MiEliminateStaleExtents @ 0x14053EDC8 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x14053EEAC (MiEnableLargeSubsection.c)
 *     MiPurgeFileOnlyPfn @ 0x140540274 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiInvalidPteConforms @ 0x1402C9D60 (MiInvalidPteConforms.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiLockNestedPageAtDpcInline @ 0x14030DC80 (MiLockNestedPageAtDpcInline.c)
 */

__int64 __fastcall MiLockLeafPage(__int64 *a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // r8
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  int v12; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0x7FFFFFFFFFFFFFFFLL;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = *a1;
      v8 = *a1;
      if ( (*a1 & 1) == 0 )
        break;
LABEL_8:
      v9 = 6 * ((v8 >> 12) & 0xFFFFFFFFFLL);
      if ( (*(_QWORD *)(48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
      {
        v10 = 48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        if ( a2 )
        {
          MiLockNestedPageAtDpcInline(
            48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL,
            6 * ((v8 >> 12) & 0xFFFFFFFFFLL),
            v6,
            a4);
        }
        else
        {
          v12 = 0;
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
            goto LABEL_11;
          do
          {
            do
              KeYieldProcessorEx(&v12, v9, v6, a4);
            while ( *(__int64 *)(v10 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) );
        }
        v6 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_11:
        if ( *a1 == v7 )
          return v10;
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), v6);
      }
    }
    if ( (*a1 & 0xC00) != 0x800 )
      return 0LL;
    if ( MiInvalidPteConforms(*a1) )
    {
      v8 = v7;
      if ( qword_140C4DDC0 && (v7 & 0x10) == 0 )
        v8 = v7 & ~qword_140C4DDC0;
      goto LABEL_8;
    }
  }
}
