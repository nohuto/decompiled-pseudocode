/*
 * XREFs of AnFwpDisableProgressTimer @ 0x1409F64EC
 * Callers:
 *     AnFwDisplayFade @ 0x1409F4C00 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F7370 (AnFwDisplayProgressIndicator.c)
 *     AnFwpBackgroundUpdateTimer @ 0x1409FA1B0 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x1402479F0 (KeCancelTimer.c)
 *     BgpFwFreeMemory @ 0x14039B490 (BgpFwFreeMemory.c)
 *     BgpGxRectangleDestroy @ 0x1409F5290 (BgpGxRectangleDestroy.c)
 *     RaspClearCache @ 0x1409F65FC (RaspClearCache.c)
 */

void __fastcall AnFwpDisableProgressTimer(_BOOL8 a1)
{
  _UNKNOWN **v1; // rbx
  __int64 v2; // rax

  if ( byte_140CDAFE0 )
  {
    LOBYTE(a1) = 0;
    if ( (dword_140C13330 & 0x100000) != 0 )
      a1 = (dword_140C13330 & 0x1000) != 0;
    byte_140CDAFE0 = 0;
    if ( (dword_140C13330 & 0xC00) != 0xC00 && !a1 )
      KeCancelTimer(&stru_140CF2F80);
    v1 = (_UNKNOWN **)TxtpTextCache;
    v2 = *(_QWORD *)TxtpTextCache;
    if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
LABEL_15:
      __fastfail(3u);
    while ( 1 )
    {
      if ( *(_UNKNOWN ***)(v2 + 8) != v1 )
        goto LABEL_15;
      TxtpTextCache = (_UNKNOWN *)v2;
      *(_QWORD *)(v2 + 8) = &TxtpTextCache;
      if ( v1 == &TxtpTextCache )
        break;
      BgpGxRectangleDestroy((__int64)v1[6]);
      BgpFwFreeMemory((__int64)v1);
      v1 = (_UNKNOWN **)TxtpTextCache;
      if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
        goto LABEL_15;
      v2 = *(_QWORD *)TxtpTextCache;
    }
    dword_140C02C68 = 0;
    if ( RasterizerInitialized )
      RaspClearCache(a1);
  }
}
