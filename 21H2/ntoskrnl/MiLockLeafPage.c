/*
 * XREFs of MiLockLeafPage @ 0x140257C70
 * Callers:
 *     MiTranslatePageForCopy @ 0x140232F94 (MiTranslatePageForCopy.c)
 *     MiDeletePerSessionProtos @ 0x14024D674 (MiDeletePerSessionProtos.c)
 *     MiReplacePageOfProtoPool @ 0x140256EFC (MiReplacePageOfProtoPool.c)
 *     MiMakeImageReadOnly @ 0x140257490 (MiMakeImageReadOnly.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140257660 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiGetWorkingSetInfoList @ 0x14025C83C (MiGetWorkingSetInfoList.c)
 *     MiSectionCreated @ 0x140299C1C (MiSectionCreated.c)
 *     MiActOnPte @ 0x1402E0E40 (MiActOnPte.c)
 *     MiReservePageFileSpaceForPage @ 0x1402E1EB0 (MiReservePageFileSpaceForPage.c)
 *     MmCopyToCachedPage @ 0x14033C250 (MmCopyToCachedPage.c)
 *     MiConvertPrivateToProto @ 0x14036A200 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x14036ACE4 (MiResolveProtoCombine.c)
 *     MiPurgeImageSection @ 0x1403A5514 (MiPurgeImageSection.c)
 *     MiIsSubsectionClean @ 0x140529E74 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x14052A4F0 (MiPurgeSubsection.c)
 *     MiDecrementLargeSubsections @ 0x140540650 (MiDecrementLargeSubsections.c)
 *     MiEliminateStaleExtents @ 0x140540B08 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x140540BEC (MiEnableLargeSubsection.c)
 *     MiPurgeFileOnlyPfn @ 0x140541FB4 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x140258F30 (MiLockNestedPageAtDpcInline.c)
 *     MiInvalidPteConforms @ 0x1402DFD90 (MiInvalidPteConforms.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockLeafPage(unsigned __int64 *a1, __int64 a2)
{
  int v2; // ebp
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  int v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = a2;
  v4 = 0x7FFFFFFFFFFFFFFFLL;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = *a1;
      v6 = *a1;
      if ( (*a1 & 1) == 0 )
        break;
LABEL_8:
      a2 = 6 * ((v6 >> 12) & 0xFFFFFFFFFLL);
      if ( (*(_QWORD *)(48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
      {
        v7 = 48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        if ( v2 )
        {
          MiLockNestedPageAtDpcInline(48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
        }
        else
        {
          v9 = 0;
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
            goto LABEL_11;
          do
          {
            do
              KeYieldProcessorEx(&v9);
            while ( *(__int64 *)(v7 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) );
        }
        v4 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_11:
        if ( *a1 == v5 )
          return v7;
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), v4);
      }
    }
    if ( (*a1 & 0xC00) != 0x800 )
      return 0LL;
    if ( (unsigned int)MiInvalidPteConforms(*a1, a2) )
    {
      v6 = v5;
      if ( qword_140C4DF80 && (v5 & 0x10) == 0 )
        v6 = v5 & ~qword_140C4DF80;
      goto LABEL_8;
    }
  }
}
