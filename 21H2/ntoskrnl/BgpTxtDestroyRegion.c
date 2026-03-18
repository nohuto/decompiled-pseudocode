/*
 * XREFs of BgpTxtDestroyRegion @ 0x140AAEAF4
 * Callers:
 *     BgpDisplayCharacterGetContext @ 0x140AAE79C (BgpDisplayCharacterGetContext.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140AAE9C8 (BgpDisplayCharacterDestroyContext.c)
 *     BgpFwLibraryDisable @ 0x140AAE9F4 (BgpFwLibraryDisable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1403A8CB4 (BgpFwFreeMemory.c)
 *     RaspClearCache @ 0x140AABB44 (RaspClearCache.c)
 *     BgpGxRectangleDestroy @ 0x140AAD3E0 (BgpGxRectangleDestroy.c)
 */

void __fastcall BgpTxtDestroyRegion(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  _UNKNOWN **v4; // rbx
  __int64 v5; // rax

  if ( a1 && (*(_DWORD *)(a1 + 72) & 1) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    if ( v2 )
      BgpGxRectangleDestroy(v2);
    v3 = *(_QWORD *)(a1 + 32);
    if ( v3 )
      BgpGxRectangleDestroy(v3);
    if ( (*(_DWORD *)(a1 + 60) & 1) != 0 )
    {
      v4 = (_UNKNOWN **)TxtpTextCache;
      v5 = *(_QWORD *)TxtpTextCache;
      if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
FatalListEntryError_130:
        __fastfail(3u);
      while ( 1 )
      {
        if ( *(_UNKNOWN ***)(v5 + 8) != v4 )
          goto FatalListEntryError_130;
        TxtpTextCache = (_UNKNOWN *)v5;
        *(_QWORD *)(v5 + 8) = &TxtpTextCache;
        if ( v4 == &TxtpTextCache )
          break;
        BgpGxRectangleDestroy((__int64)v4[6]);
        BgpFwFreeMemory((__int64)v4);
        v4 = (_UNKNOWN **)TxtpTextCache;
        if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
          goto FatalListEntryError_130;
        v5 = *(_QWORD *)TxtpTextCache;
      }
      dword_140C04460 = 0;
      if ( RasterizerInitialized )
        RaspClearCache();
    }
    BgpFwFreeMemory(a1);
  }
}
