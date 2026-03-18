/*
 * XREFs of MiLockLeafPage @ 0x1402F6AF0
 * Callers:
 *     MmCopyToCachedPage @ 0x140223C10 (MmCopyToCachedPage.c)
 *     MiSectionCreated @ 0x140267074 (MiSectionCreated.c)
 *     MiReservePageFileSpaceForPage @ 0x1402BAA60 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x1402BB6D0 (MiActOnPte.c)
 *     MiReplacePageOfProtoPool @ 0x1402F4350 (MiReplacePageOfProtoPool.c)
 *     MiMakeImageReadOnly @ 0x1402F48E4 (MiMakeImageReadOnly.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402F64EC (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiGetWorkingSetInfoList @ 0x1403186FC (MiGetWorkingSetInfoList.c)
 *     MiTranslatePageForCopy @ 0x14033FBD4 (MiTranslatePageForCopy.c)
 *     MiDeletePerSessionProtos @ 0x14035CCDC (MiDeletePerSessionProtos.c)
 *     MiConvertPrivateToProto @ 0x140367DC0 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x1403688A4 (MiResolveProtoCombine.c)
 *     MiPurgeImageSection @ 0x1403A2634 (MiPurgeImageSection.c)
 *     MiIsSubsectionClean @ 0x140524784 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x140524E00 (MiPurgeSubsection.c)
 *     MiDecrementLargeSubsections @ 0x14053AF40 (MiDecrementLargeSubsections.c)
 *     MiEliminateStaleExtents @ 0x14053B3F8 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x14053B4DC (MiEnableLargeSubsection.c)
 *     MiPurgeFileOnlyPfn @ 0x14053C8A4 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiInvalidPteConforms @ 0x14022A870 (MiInvalidPteConforms.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiLockNestedPageAtDpcInline @ 0x14033B220 (MiLockNestedPageAtDpcInline.c)
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
          MiLockNestedPageAtDpcInline(48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
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
      if ( qword_140C4DD40 && (v7 & 0x10) == 0 )
        v8 = v7 & ~qword_140C4DD40;
      goto LABEL_8;
    }
  }
}
