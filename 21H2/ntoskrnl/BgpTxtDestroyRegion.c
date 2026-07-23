/*
 * XREFs of BgpTxtDestroyRegion @ 0x1409F50EC
 * Callers:
 *     BgpDisplayCharacterDestroyContext @ 0x1409F4FBC (BgpDisplayCharacterDestroyContext.c)
 *     BgpFwLibraryDisable @ 0x1409F4FE8 (BgpFwLibraryDisable.c)
 *     BgpDisplayCharacterGetContext @ 0x1409F5A4C (BgpDisplayCharacterGetContext.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BEB0 (BgpFwFreeMemory.c)
 *     BgpGxRectangleDestroy @ 0x1409F3290 (BgpGxRectangleDestroy.c)
 *     RaspClearCache @ 0x1409F45FC (RaspClearCache.c)
 */

void __fastcall BgpTxtDestroyRegion(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  _UNKNOWN **v4; // rbx
  __int64 v5; // rax

  if ( a1 && (*(_DWORD *)(a1 + 64) & 1) != 0 )
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
LABEL_9:
        __fastfail(3u);
      while ( 1 )
      {
        if ( *(_UNKNOWN ***)(v5 + 8) != v4 )
          goto LABEL_9;
        TxtpTextCache = (_UNKNOWN *)v5;
        *(_QWORD *)(v5 + 8) = &TxtpTextCache;
        if ( v4 == &TxtpTextCache )
          break;
        BgpGxRectangleDestroy((__int64)v4[6]);
        BgpFwFreeMemory((__int64)v4);
        v4 = (_UNKNOWN **)TxtpTextCache;
        if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
          goto LABEL_9;
        v5 = *(_QWORD *)TxtpTextCache;
      }
      dword_140C02CA8 = 0;
      if ( RasterizerInitialized )
        RaspClearCache();
    }
    BgpFwFreeMemory(a1);
  }
}
