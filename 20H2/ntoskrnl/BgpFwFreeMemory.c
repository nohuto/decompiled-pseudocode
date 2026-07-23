/*
 * XREFs of BgpFwFreeMemory @ 0x14039B490
 * Callers:
 *     BgpFwQueryBootGraphicsInformation @ 0x14039BA94 (BgpFwQueryBootGraphicsInformation.c)
 *     RaspFreeMemory @ 0x1403AC608 (RaspFreeMemory.c)
 *     ResFwFreeContext @ 0x1409F407C (ResFwFreeContext.c)
 *     ResFwpPageOutBackground @ 0x1409F4470 (ResFwpPageOutBackground.c)
 *     AnFwDisplayFade @ 0x1409F4C00 (AnFwDisplayFade.c)
 *     BgpGxRectangleDestroy @ 0x1409F5290 (BgpGxRectangleDestroy.c)
 *     BgpFwLibraryInitialize @ 0x1409F59E8 (BgpFwLibraryInitialize.c)
 *     BgpTxtCreateRegion @ 0x1409F60D4 (BgpTxtCreateRegion.c)
 *     ResFwBackgroundTransition @ 0x1409F6408 (ResFwBackgroundTransition.c)
 *     ResFwpPageInBackground @ 0x1409F644C (ResFwpPageInBackground.c)
 *     AnFwpDisableProgressTimer @ 0x1409F64EC (AnFwpDisableProgressTimer.c)
 *     BgpFwLibraryDestroy @ 0x1409F6F0C (BgpFwLibraryDestroy.c)
 *     BgConsoleDestroyInterface @ 0x1409F6F5C (BgConsoleDestroyInterface.c)
 *     BgpDisplayCharacterDestroyContext @ 0x1409F6FBC (BgpDisplayCharacterDestroyContext.c)
 *     BgpFwLibraryDisable @ 0x1409F6FE8 (BgpFwLibraryDisable.c)
 *     BgpTxtDestroyRegion @ 0x1409F70EC (BgpTxtDestroyRegion.c)
 *     BgpFoDestroy @ 0x1409F71CC (BgpFoDestroy.c)
 *     FopFreeFontData @ 0x1409F7294 (FopFreeFontData.c)
 *     FopFreeMappingTable @ 0x1409F7308 (FopFreeMappingTable.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F7370 (AnFwDisplayProgressIndicator.c)
 *     TxtpAddCacheEntry @ 0x1409F75FC (TxtpAddCacheEntry.c)
 *     BgpConsoleInitialize @ 0x1409F7820 (BgpConsoleInitialize.c)
 *     BgpDisplayCharacterGetContext @ 0x1409F7A4C (BgpDisplayCharacterGetContext.c)
 *     BgpFoInitialize @ 0x140A98F88 (BgpFoInitialize.c)
 *     FopReadMappingTable @ 0x140A991C0 (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x140A99398 (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x140A99524 (FopReadCmapTable.c)
 *     FopReadNamingTable @ 0x140A998A0 (FopReadNamingTable.c)
 *     BgpBcInitializeCriticalMode @ 0x140A99B80 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     ExFreeHeapPool @ 0x1402176E0 (ExFreeHeapPool.c)
 *     RtlClearBits @ 0x140268180 (RtlClearBits.c)
 *     MmUnmapLockedPages @ 0x140295370 (MmUnmapLockedPages.c)
 *     MiFreePagesFromMdl @ 0x14034E438 (MiFreePagesFromMdl.c)
 */

void __fastcall BgpFwFreeMemory(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edx
  __int64 v3; // rdx
  __int64 v4; // r8
  _QWORD *v5; // r9
  __int64 v6; // rdx
  struct _MDL *v7; // rcx
  struct _MDL *v8; // rbx
  ULONG v9; // ebx

  v1 = a1 - 24;
  v2 = *(_DWORD *)(a1 - 24);
  if ( v2 == 1262700354 )
  {
    v9 = v1 - qword_140C505E8 - 8;
    RtlClearBits(&stru_140C505F8, v9, *(_DWORD *)(v1 + 8));
    if ( v9 < dword_140C505F0 )
      dword_140C505F0 = v9;
  }
  else
  {
    if ( v2 == 1262634818 )
    {
      v3 = a1 - 40;
      v4 = *(_QWORD *)(a1 - 40);
      if ( *(_QWORD *)(v4 + 8) != a1 - 40 || (v5 = *(_QWORD **)(v3 + 8), *v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      v6 = 48LL;
      *(_QWORD *)(v4 + 8) = v5;
    }
    else
    {
      v6 = 32LL;
    }
    v7 = (struct _MDL *)(a1 - v6);
    if ( *(_QWORD *)(v1 + 8) >= 0x1000uLL )
    {
      v8 = *(struct _MDL **)(v1 + 16);
      MmUnmapLockedPages(v7, v8);
      MiFreePagesFromMdl((ULONG_PTR)v8, 0);
      v7 = v8;
    }
    ExFreeHeapPool((ULONG_PTR)v7);
  }
}
