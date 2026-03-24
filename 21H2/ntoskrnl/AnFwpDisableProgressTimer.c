/*
 * XREFs of AnFwpDisableProgressTimer @ 0x1409F34EC
 * Callers:
 *     AnFwDisplayFade @ 0x1409F1C00 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F4370 (AnFwDisplayProgressIndicator.c)
 *     AnFwpBackgroundUpdateTimer @ 0x1409F71B0 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x140260240 (KeCancelTimer.c)
 *     BgpFwFreeMemory @ 0x14039BD60 (BgpFwFreeMemory.c)
 *     BgpGxRectangleDestroy @ 0x1409F2290 (BgpGxRectangleDestroy.c)
 *     RaspClearCache @ 0x1409F35FC (RaspClearCache.c)
 */

void __fastcall AnFwpDisableProgressTimer(_BOOL8 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rdx
  _UNKNOWN **v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  _DWORD *v9; // r9

  if ( byte_140CDB160 )
  {
    LOBYTE(a1) = 0;
    if ( (dword_140C134F0 & 0x100000) != 0 )
      a1 = (dword_140C134F0 & 0x1000) != 0;
    v4 = 3072LL;
    byte_140CDB160 = 0;
    if ( (dword_140C134F0 & 0xC00) != 0xC00 && !a1 )
      KeCancelTimer(&stru_140CF3280);
    v5 = (_UNKNOWN **)TxtpTextCache;
    v6 = *(_QWORD *)TxtpTextCache;
    if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
LABEL_15:
      __fastfail(3u);
    while ( 1 )
    {
      if ( *(_UNKNOWN ***)(v6 + 8) != v5 )
        goto LABEL_15;
      TxtpTextCache = (_UNKNOWN *)v6;
      *(_QWORD *)(v6 + 8) = &TxtpTextCache;
      if ( v5 == &TxtpTextCache )
        break;
      BgpGxRectangleDestroy((__int64)v5[6], v4, a3, a4);
      BgpFwFreeMemory((__int64)v5, v7, v8, v9);
      v5 = (_UNKNOWN **)TxtpTextCache;
      if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
        goto LABEL_15;
      v6 = *(_QWORD *)TxtpTextCache;
    }
    dword_140C02CA8 = 0;
    if ( RasterizerInitialized )
      RaspClearCache(a1);
  }
}
