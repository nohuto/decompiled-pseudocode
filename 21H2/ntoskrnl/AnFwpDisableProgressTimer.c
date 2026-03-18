/*
 * XREFs of AnFwpDisableProgressTimer @ 0x140AABA70
 * Callers:
 *     AnFwDisplayFade @ 0x140AAC1BC (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x140AAD1C4 (AnFwDisplayProgressIndicator.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140AB1400 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     BgpFwFreeMemory @ 0x1403A8CB4 (BgpFwFreeMemory.c)
 *     RaspClearCache @ 0x140AABB44 (RaspClearCache.c)
 *     BgpGxRectangleDestroy @ 0x140AAD3E0 (BgpGxRectangleDestroy.c)
 */

void __fastcall AnFwpDisableProgressTimer(_BOOL8 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rax

  if ( byte_140CE1AE0 )
  {
    LOBYTE(a1) = 0;
    if ( (dword_140C0DF90 & 0x100000) != 0 )
      a1 = (dword_140C0DF90 & 0x1000) != 0;
    byte_140CE1AE0 = 0;
    if ( (dword_140C0DF90 & 0xC00) != 0xC00 && !a1 )
      KeCancelTimer(&stru_140CF7400);
    v1 = TxtpTextCache;
    v2 = *(_QWORD *)TxtpTextCache;
    if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
LABEL_15:
      __fastfail(3u);
    while ( 1 )
    {
      if ( *(_QWORD **)(v2 + 8) != v1 )
        goto LABEL_15;
      TxtpTextCache = (_UNKNOWN *)v2;
      *(_QWORD *)(v2 + 8) = &TxtpTextCache;
      if ( v1 == &TxtpTextCache )
        break;
      BgpGxRectangleDestroy(v1[6]);
      BgpFwFreeMemory((__int64)v1);
      v1 = TxtpTextCache;
      if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
        goto LABEL_15;
      v2 = *(_QWORD *)TxtpTextCache;
    }
    dword_140C04460 = 0;
    if ( RasterizerInitialized )
      RaspClearCache(a1);
  }
}
