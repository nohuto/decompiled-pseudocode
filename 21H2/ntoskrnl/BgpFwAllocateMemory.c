/*
 * XREFs of BgpFwAllocateMemory @ 0x1403AA2B8
 * Callers:
 *     BgpRasPrintGlyph @ 0x1403A8390 (BgpRasPrintGlyph.c)
 *     RaspAllocateMemory @ 0x1403AA258 (RaspAllocateMemory.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x1403AA7E0 (BgpFwQueryBootGraphicsInformation.c)
 *     BcpGetProgressMessages @ 0x1403CABF8 (BcpGetProgressMessages.c)
 *     BgpTxtGetRegionContext @ 0x140AABF48 (BgpTxtGetRegionContext.c)
 *     BgpTxtCreateRegion @ 0x140AAC868 (BgpTxtCreateRegion.c)
 *     TxtpAddCacheEntry @ 0x140AAD338 (TxtpAddCacheEntry.c)
 *     BgpGxRectangleCreate @ 0x140AAD404 (BgpGxRectangleCreate.c)
 *     BgpFwLibraryInitialize @ 0x140AAD490 (BgpFwLibraryInitialize.c)
 *     ResFwpPageInBackground @ 0x140AADC00 (ResFwpPageInBackground.c)
 *     BgpConsoleInitialize @ 0x140AAE560 (BgpConsoleInitialize.c)
 *     BgpDisplayCharacterGetContext @ 0x140AAE79C (BgpDisplayCharacterGetContext.c)
 *     BgpBcInitializeCriticalMode @ 0x140B55C50 (BgpBcInitializeCriticalMode.c)
 *     BgpFoInitialize @ 0x140B5616C (BgpFoInitialize.c)
 *     FopInitializeFonts @ 0x140B56268 (FopInitializeFonts.c)
 *     FopReadMappingTable @ 0x140B565BC (FopReadMappingTable.c)
 *     FopReadCmapTable @ 0x140B5678C (FopReadCmapTable.c)
 *     FopValidateFontNameTable @ 0x140B568E8 (FopValidateFontNameTable.c)
 *     FopReadNamingTable @ 0x140B56A6C (FopReadNamingTable.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140221A30 (MiFreePagesFromMdl.c)
 *     MmAllocatePagesForMdlEx @ 0x1402630A0 (MmAllocatePagesForMdlEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     BgpFwReserveAllocate @ 0x1403AA42C (BgpFwReserveAllocate.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall BgpFwAllocateMemory(unsigned __int64 a1)
{
  int v1; // ebp
  __int64 v2; // rdi
  ULONG_PTR v3; // rbx
  unsigned int v4; // r14d
  __int64 v5; // r15
  SIZE_T v6; // rsi
  __int64 Pool2; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rax
  PMDL PagesForMdl; // rax

  if ( !a1 )
    return 0LL;
  if ( (dword_140C0DF90 & 0x800) == 0 )
  {
    v1 = dword_140C0DF90 & 0x8000;
    v2 = 0LL;
    v3 = 0LL;
    v4 = v1 != 0 ? 1262634818 : 1263093570;
    v5 = v1 != 0 ? 48LL : 32LL;
    v6 = v5 + a1;
    if ( v5 + a1 >= a1 && v6 < 0xFFFFEFFF )
    {
      if ( v6 < 0x1000 )
      {
        Pool2 = ExAllocatePool2(64LL, v6, v4);
LABEL_7:
        if ( !Pool2 )
          goto LABEL_20;
        v2 = v5 + Pool2;
        if ( v1 )
        {
          v8 = qword_140C0E060;
          v9 = (_QWORD *)(v2 - 40);
          if ( *(__int64 **)(qword_140C0E060 + 8) != &qword_140C0E060 )
            __fastfail(3u);
          *v9 = qword_140C0E060;
          v9[1] = &qword_140C0E060;
          *(_QWORD *)(v8 + 8) = v9;
          qword_140C0E060 = v2 - 40;
        }
        *(_DWORD *)(v2 - 24) = v4;
        *(_QWORD *)(v2 - 16) = v6;
        *(_QWORD *)(v2 - 8) = v3;
        if ( !v2 )
        {
LABEL_20:
          if ( v3 )
          {
            MiFreePagesFromMdl(v3, 0);
            ExFreeHeapPool(v3);
          }
        }
        return v2;
      }
      v6 = (v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v6, MmCached, 5u);
      v3 = (ULONG_PTR)PagesForMdl;
      if ( PagesForMdl )
      {
        if ( (PagesForMdl->MdlFlags & 5) != 0 )
          Pool2 = (__int64)PagesForMdl->MappedSystemVa;
        else
          Pool2 = (__int64)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000010u);
        goto LABEL_7;
      }
    }
    return v2;
  }
  return BgpFwReserveAllocate();
}
