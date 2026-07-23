/*
 * XREFs of BgpFwFreeMemory @ 0x140398840
 * Callers:
 *     BgpFwQueryBootGraphicsInformation @ 0x140398E44 (BgpFwQueryBootGraphicsInformation.c)
 *     RaspFreeMemory @ 0x1403B0474 (RaspFreeMemory.c)
 *     ResFwFreeContext @ 0x1409EE07C (ResFwFreeContext.c)
 *     ResFwpPageOutBackground @ 0x1409EE470 (ResFwpPageOutBackground.c)
 *     AnFwDisplayFade @ 0x1409EEC00 (AnFwDisplayFade.c)
 *     BgpGxRectangleDestroy @ 0x1409EF290 (BgpGxRectangleDestroy.c)
 *     BgpFwLibraryInitialize @ 0x1409EF9E8 (BgpFwLibraryInitialize.c)
 *     BgpTxtCreateRegion @ 0x1409F00D4 (BgpTxtCreateRegion.c)
 *     ResFwBackgroundTransition @ 0x1409F0408 (ResFwBackgroundTransition.c)
 *     ResFwpPageInBackground @ 0x1409F044C (ResFwpPageInBackground.c)
 *     AnFwpDisableProgressTimer @ 0x1409F04EC (AnFwpDisableProgressTimer.c)
 *     BgpFwLibraryDestroy @ 0x1409F0F0C (BgpFwLibraryDestroy.c)
 *     BgConsoleDestroyInterface @ 0x1409F0F5C (BgConsoleDestroyInterface.c)
 *     BgpDisplayCharacterDestroyContext @ 0x1409F0FBC (BgpDisplayCharacterDestroyContext.c)
 *     BgpFwLibraryDisable @ 0x1409F0FE8 (BgpFwLibraryDisable.c)
 *     BgpTxtDestroyRegion @ 0x1409F10EC (BgpTxtDestroyRegion.c)
 *     BgpFoDestroy @ 0x1409F11CC (BgpFoDestroy.c)
 *     FopFreeFontData @ 0x1409F1294 (FopFreeFontData.c)
 *     FopFreeMappingTable @ 0x1409F1308 (FopFreeMappingTable.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F1370 (AnFwDisplayProgressIndicator.c)
 *     TxtpAddCacheEntry @ 0x1409F15FC (TxtpAddCacheEntry.c)
 *     BgpConsoleInitialize @ 0x1409F1820 (BgpConsoleInitialize.c)
 *     BgpDisplayCharacterGetContext @ 0x1409F1A4C (BgpDisplayCharacterGetContext.c)
 *     BgpFoInitialize @ 0x140A93BDC (BgpFoInitialize.c)
 *     FopReadMappingTable @ 0x140A93E14 (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x140A93FEC (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x140A94178 (FopReadCmapTable.c)
 *     FopReadNamingTable @ 0x140A944F4 (FopReadNamingTable.c)
 *     BgpBcInitializeCriticalMode @ 0x140A94798 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     RtlClearBits @ 0x140244970 (RtlClearBits.c)
 *     ExFreeHeapPool @ 0x14024C790 (ExFreeHeapPool.c)
 *     MmUnmapLockedPages @ 0x14027DBC0 (MmUnmapLockedPages.c)
 *     MiFreePagesFromMdl @ 0x140346FD4 (MiFreePagesFromMdl.c)
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
    v9 = v1 - qword_140C506A8 - 8;
    RtlClearBits(&stru_140C506B8, v9, *(_DWORD *)(v1 + 8));
    if ( v9 < dword_140C506B0 )
      dword_140C506B0 = v9;
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
