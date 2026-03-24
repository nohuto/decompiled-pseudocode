/*
 * XREFs of MiLockLeafPage @ 0x140269CD0
 * Callers:
 *     MiActOnPte @ 0x14023C5F0 (MiActOnPte.c)
 *     MiReservePageFileSpaceForPage @ 0x14023D660 (MiReservePageFileSpaceForPage.c)
 *     MiReplacePageOfProtoPool @ 0x140268F5C (MiReplacePageOfProtoPool.c)
 *     MiMakeImageReadOnly @ 0x1402694F0 (MiMakeImageReadOnly.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402696C0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiGetWorkingSetInfoList @ 0x14026E89C (MiGetWorkingSetInfoList.c)
 *     MiTranslatePageForCopy @ 0x1402B4DE4 (MiTranslatePageForCopy.c)
 *     MiDeletePerSessionProtos @ 0x1402CF174 (MiDeletePerSessionProtos.c)
 *     MiSectionCreated @ 0x1402E88CC (MiSectionCreated.c)
 *     MmCopyToCachedPage @ 0x140331500 (MmCopyToCachedPage.c)
 *     MiConvertPrivateToProto @ 0x14036A050 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x14036AB34 (MiResolveProtoCombine.c)
 *     MiPurgeImageSection @ 0x1403A53C4 (MiPurgeImageSection.c)
 *     MiIsSubsectionClean @ 0x140529C34 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x14052A2B0 (MiPurgeSubsection.c)
 *     MiDecrementLargeSubsections @ 0x140540410 (MiDecrementLargeSubsections.c)
 *     MiEliminateStaleExtents @ 0x1405408C8 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x1405409AC (MiEnableLargeSubsection.c)
 *     MiPurgeFileOnlyPfn @ 0x140541D74 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiInvalidPteConforms @ 0x14023B540 (MiInvalidPteConforms.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiLockNestedPageAtDpcInline @ 0x14026AF90 (MiLockNestedPageAtDpcInline.c)
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
      if ( qword_140C4DF40 && (v7 & 0x10) == 0 )
        v8 = v7 & ~qword_140C4DF40;
      goto LABEL_8;
    }
  }
}
