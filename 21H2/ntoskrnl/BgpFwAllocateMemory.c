/*
 * XREFs of BgpFwAllocateMemory @ 0x14039C6D4
 * Callers:
 *     BgpFwQueryBootGraphicsInformation @ 0x14039C4B4 (BgpFwQueryBootGraphicsInformation.c)
 *     BgpRasPrintGlyph @ 0x1403B1CB8 (BgpRasPrintGlyph.c)
 *     RaspAllocateMemory @ 0x1403B3B78 (RaspAllocateMemory.c)
 *     BcpGetProgressMessages @ 0x1403BCBAC (BcpGetProgressMessages.c)
 *     BgpTxtGetRegionContext @ 0x1409F3944 (BgpTxtGetRegionContext.c)
 *     BgpFwLibraryInitialize @ 0x1409F39E8 (BgpFwLibraryInitialize.c)
 *     BgpTxtCreateRegion @ 0x1409F40D4 (BgpTxtCreateRegion.c)
 *     BgpGxRectangleCreate @ 0x1409F42C0 (BgpGxRectangleCreate.c)
 *     ResFwpPageInBackground @ 0x1409F444C (ResFwpPageInBackground.c)
 *     TxtpAddCacheEntry @ 0x1409F55FC (TxtpAddCacheEntry.c)
 *     BgpConsoleInitialize @ 0x1409F5820 (BgpConsoleInitialize.c)
 *     BgpDisplayCharacterGetContext @ 0x1409F5A4C (BgpDisplayCharacterGetContext.c)
 *     BgpFoInitialize @ 0x140A96E18 (BgpFoInitialize.c)
 *     FopInitializeFonts @ 0x140A96F14 (FopInitializeFonts.c)
 *     FopReadMappingTable @ 0x140A97050 (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x140A97228 (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x140A973B4 (FopReadCmapTable.c)
 *     FopReadNamingTable @ 0x140A97730 (FopReadNamingTable.c)
 *     BgpBcInitializeCriticalMode @ 0x140A97A10 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x1402945E0 (MmAllocatePagesForMdlEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiFreePagesFromMdl @ 0x14030A23C (MiFreePagesFromMdl.c)
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     BgpFwReserveAllocate @ 0x14039C85C (BgpFwReserveAllocate.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BgpFwAllocateMemory(unsigned __int64 a1)
{
  int v1; // ebp
  char *v2; // rdi
  ULONG_PTR v3; // rbx
  ULONG v4; // r14d
  __int64 v5; // r15
  SIZE_T v6; // rsi
  char *PoolWithTag; // rax
  __int64 v8; // rcx
  char *v9; // rax
  PMDL PagesForMdl; // rax

  if ( !a1 )
    return 0LL;
  if ( (dword_140C134F0 & 0x800) == 0 )
  {
    v1 = dword_140C134F0 & 0x8000;
    v2 = 0LL;
    v3 = 0LL;
    v4 = v1 != 0 ? 1262634818 : 1263093570;
    v5 = v1 != 0 ? 48LL : 32LL;
    v6 = v5 + a1;
    if ( v5 + a1 >= a1 && v6 < 0xFFFFEFFF )
    {
      if ( v6 < 0x1000 )
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v5 + a1, v4);
LABEL_7:
        if ( !PoolWithTag )
          goto LABEL_20;
        v2 = &PoolWithTag[v5];
        if ( v1 )
        {
          v8 = qword_140C135C0;
          v9 = v2 - 40;
          if ( *(__int64 **)(qword_140C135C0 + 8) != &qword_140C135C0 )
            __fastfail(3u);
          *(_QWORD *)v9 = qword_140C135C0;
          *((_QWORD *)v9 + 1) = &qword_140C135C0;
          *(_QWORD *)(v8 + 8) = v9;
          qword_140C135C0 = (__int64)(v2 - 40);
        }
        *((_DWORD *)v2 - 6) = v4;
        *((_QWORD *)v2 - 2) = v6;
        *((_QWORD *)v2 - 1) = v3;
        if ( !v2 )
        {
LABEL_20:
          if ( v3 )
          {
            MiFreePagesFromMdl(v3, 0);
            ExFreeHeapPool(v3);
          }
        }
        return (__int64)v2;
      }
      v6 = (v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v6, MmCached, 5u);
      v3 = (ULONG_PTR)PagesForMdl;
      if ( PagesForMdl )
      {
        if ( (PagesForMdl->MdlFlags & 5) != 0 )
          PoolWithTag = (char *)PagesForMdl->MappedSystemVa;
        else
          PoolWithTag = (char *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000010u);
        goto LABEL_7;
      }
    }
    return (__int64)v2;
  }
  return BgpFwReserveAllocate();
}
