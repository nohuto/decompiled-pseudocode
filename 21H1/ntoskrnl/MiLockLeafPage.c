/*
 * XREFs of MiLockLeafPage @ 0x140352AD0
 * Callers:
 *     MiReservePageFileSpaceForPage @ 0x140227DE0 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x140228A50 (MiActOnPte.c)
 *     MmCopyToCachedPage @ 0x14027CC60 (MmCopyToCachedPage.c)
 *     MiSectionCreated @ 0x1402C00A4 (MiSectionCreated.c)
 *     MiTranslatePageForCopy @ 0x140302DD4 (MiTranslatePageForCopy.c)
 *     MiDeletePerSessionProtos @ 0x14031F1CC (MiDeletePerSessionProtos.c)
 *     MiGetWorkingSetInfoList @ 0x140347A3C (MiGetWorkingSetInfoList.c)
 *     MiReplacePageOfProtoPool @ 0x14035032C (MiReplacePageOfProtoPool.c)
 *     MiMakeImageReadOnly @ 0x1403508C0 (MiMakeImageReadOnly.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403524CC (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiConvertPrivateToProto @ 0x140367400 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x140367EE4 (MiResolveProtoCombine.c)
 *     MiPurgeImageSection @ 0x1403A1EA4 (MiPurgeImageSection.c)
 *     MiIsSubsectionClean @ 0x140524134 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x1405247B0 (MiPurgeSubsection.c)
 *     MiDecrementLargeSubsections @ 0x14053A8F0 (MiDecrementLargeSubsections.c)
 *     MiEliminateStaleExtents @ 0x14053ADA8 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x14053AE8C (MiEnableLargeSubsection.c)
 *     MiPurgeFileOnlyPfn @ 0x14053C254 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiInvalidPteConforms @ 0x1402838C0 (MiInvalidPteConforms.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402FE700 (MiLockNestedPageAtDpcInline.c)
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
      if ( qword_140C4DE80 && (v7 & 0x10) == 0 )
        v8 = v7 & ~qword_140C4DE80;
      goto LABEL_8;
    }
  }
}
