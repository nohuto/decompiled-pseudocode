/*
 * XREFs of BgpTxtDestroyRegion @ 0x1409F40EC
 * Callers:
 *     BgpDisplayCharacterDestroyContext @ 0x1409F3FBC (BgpDisplayCharacterDestroyContext.c)
 *     BgpFwLibraryDisable @ 0x1409F3FE8 (BgpFwLibraryDisable.c)
 *     BgpDisplayCharacterGetContext @ 0x1409F4A4C (BgpDisplayCharacterGetContext.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BD60 (BgpFwFreeMemory.c)
 *     BgpGxRectangleDestroy @ 0x1409F2290 (BgpGxRectangleDestroy.c)
 *     RaspClearCache @ 0x1409F35FC (RaspClearCache.c)
 */

void __fastcall BgpTxtDestroyRegion(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  _UNKNOWN **v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r9

  if ( a1 && (*(_DWORD *)(a1 + 64) & 1) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 24);
    if ( v5 )
      BgpGxRectangleDestroy(v5, a2, a3, a4);
    v6 = *(_QWORD *)(a1 + 32);
    if ( v6 )
      BgpGxRectangleDestroy(v6, a2, a3, a4);
    if ( (*(_DWORD *)(a1 + 60) & 1) != 0 )
    {
      v7 = (_UNKNOWN **)TxtpTextCache;
      v8 = *(_QWORD *)TxtpTextCache;
      if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
LABEL_9:
        __fastfail(3u);
      while ( 1 )
      {
        if ( *(_UNKNOWN ***)(v8 + 8) != v7 )
          goto LABEL_9;
        TxtpTextCache = (_UNKNOWN *)v8;
        *(_QWORD *)(v8 + 8) = &TxtpTextCache;
        if ( v7 == &TxtpTextCache )
          break;
        BgpGxRectangleDestroy((__int64)v7[6], a2, a3, a4);
        BgpFwFreeMemory((__int64)v7, v9, v10, v11);
        v7 = (_UNKNOWN **)TxtpTextCache;
        if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
          goto LABEL_9;
        v8 = *(_QWORD *)TxtpTextCache;
      }
      dword_140C02CA8 = 0;
      if ( RasterizerInitialized )
        RaspClearCache();
    }
    BgpFwFreeMemory(a1, a2, a3, a4);
  }
}
