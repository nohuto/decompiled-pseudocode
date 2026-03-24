/*
 * XREFs of BgpFwFreeMemory @ 0x14039BD60
 * Callers:
 *     BgpFwQueryBootGraphicsInformation @ 0x14039C364 (BgpFwQueryBootGraphicsInformation.c)
 *     RaspFreeMemory @ 0x1403B2508 (RaspFreeMemory.c)
 *     ResFwFreeContext @ 0x1409F107C (ResFwFreeContext.c)
 *     ResFwpPageOutBackground @ 0x1409F1470 (ResFwpPageOutBackground.c)
 *     AnFwDisplayFade @ 0x1409F1C00 (AnFwDisplayFade.c)
 *     BgpGxRectangleDestroy @ 0x1409F2290 (BgpGxRectangleDestroy.c)
 *     BgpFwLibraryInitialize @ 0x1409F29E8 (BgpFwLibraryInitialize.c)
 *     BgpTxtCreateRegion @ 0x1409F30D4 (BgpTxtCreateRegion.c)
 *     ResFwBackgroundTransition @ 0x1409F3408 (ResFwBackgroundTransition.c)
 *     ResFwpPageInBackground @ 0x1409F344C (ResFwpPageInBackground.c)
 *     AnFwpDisableProgressTimer @ 0x1409F34EC (AnFwpDisableProgressTimer.c)
 *     BgpFwLibraryDestroy @ 0x1409F3F0C (BgpFwLibraryDestroy.c)
 *     BgConsoleDestroyInterface @ 0x1409F3F5C (BgConsoleDestroyInterface.c)
 *     BgpDisplayCharacterDestroyContext @ 0x1409F3FBC (BgpDisplayCharacterDestroyContext.c)
 *     BgpFwLibraryDisable @ 0x1409F3FE8 (BgpFwLibraryDisable.c)
 *     BgpTxtDestroyRegion @ 0x1409F40EC (BgpTxtDestroyRegion.c)
 *     BgpFoDestroy @ 0x1409F41CC (BgpFoDestroy.c)
 *     FopFreeFontData @ 0x1409F4294 (FopFreeFontData.c)
 *     FopFreeMappingTable @ 0x1409F4308 (FopFreeMappingTable.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F4370 (AnFwDisplayProgressIndicator.c)
 *     TxtpAddCacheEntry @ 0x1409F45FC (TxtpAddCacheEntry.c)
 *     BgpConsoleInitialize @ 0x1409F4820 (BgpConsoleInitialize.c)
 *     BgpDisplayCharacterGetContext @ 0x1409F4A4C (BgpDisplayCharacterGetContext.c)
 *     BgpFoInitialize @ 0x140A95E18 (BgpFoInitialize.c)
 *     FopReadMappingTable @ 0x140A96050 (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x140A96228 (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x140A963B4 (FopReadCmapTable.c)
 *     FopReadNamingTable @ 0x140A96730 (FopReadNamingTable.c)
 *     BgpBcInitializeCriticalMode @ 0x140A96A10 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     RtlClearBits @ 0x140206E00 (RtlClearBits.c)
 *     MiFreePagesFromMdl @ 0x1402FF4EC (MiFreePagesFromMdl.c)
 *     MmUnmapLockedPages @ 0x14031CA30 (MmUnmapLockedPages.c)
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 */

void __fastcall BgpFwFreeMemory(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rdx
  __int64 v7; // rdx
  struct _MDL *v8; // rcx
  struct _MDL *v9; // rbx
  __int64 v10; // r8
  ULONG v11; // ebx

  v4 = a1 - 24;
  v5 = *(_DWORD *)(a1 - 24);
  if ( v5 == 1262700354 )
  {
    v11 = v4 - qword_140C50768 - 8;
    RtlClearBits(&BitMapHeader, v11, *(_DWORD *)(v4 + 8));
    if ( v11 < HintIndex )
      HintIndex = v11;
  }
  else
  {
    if ( v5 == 1262634818 )
    {
      v6 = a1 - 40;
      a3 = *(_QWORD *)(a1 - 40);
      if ( *(_QWORD *)(a3 + 8) != a1 - 40 || (a4 = *(_DWORD **)(v6 + 8), *(_QWORD *)a4 != v6) )
        __fastfail(3u);
      *(_QWORD *)a4 = a3;
      v7 = 48LL;
      *(_QWORD *)(a3 + 8) = a4;
    }
    else
    {
      v7 = 32LL;
    }
    v8 = (struct _MDL *)(a1 - v7);
    if ( *(_QWORD *)(v4 + 8) >= 0x1000uLL )
    {
      v9 = *(struct _MDL **)(v4 + 16);
      MmUnmapLockedPages(v8, v9);
      MiFreePagesFromMdl((ULONG_PTR)v9, 0, v10);
      v8 = v9;
    }
    ExFreeHeapPool((ULONG_PTR)v8, v7, a3, a4);
  }
}
