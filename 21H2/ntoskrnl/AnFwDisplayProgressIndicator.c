/*
 * XREFs of AnFwDisplayProgressIndicator @ 0x1409F4370
 * Callers:
 *     BgpFwLibraryDisable @ 0x1409F3FE8 (BgpFwLibraryDisable.c)
 *     BgDisplayProgressIndicator @ 0x1409F4334 (BgDisplayProgressIndicator.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x14025FC70 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x140278AE0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x14027B6B0 (KeInitializeDpc.c)
 *     BgpFwFreeMemory @ 0x14039BD60 (BgpFwFreeMemory.c)
 *     BgpTxtDisplayCharacter @ 0x1403B1888 (BgpTxtDisplayCharacter.c)
 *     BgpGxRectangleDestroy @ 0x1409F2290 (BgpGxRectangleDestroy.c)
 *     LogFwStat @ 0x1409F27D8 (LogFwStat.c)
 *     AnFwpDisableProgressTimer @ 0x1409F34EC (AnFwpDisableProgressTimer.c)
 *     RaspClearCache @ 0x1409F35FC (RaspClearCache.c)
 *     AnFwpProgressAnimationManual @ 0x1409F7288 (AnFwpProgressAnimationManual.c)
 */

__int64 __fastcall AnFwDisplayProgressIndicator(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  bool v4; // al
  unsigned __int16 i; // ax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // r9
  _UNKNOWN **v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  _DWORD *v15; // r9

  LOBYTE(a3) = byte_140CDB160;
  if ( !(_BYTE)a1 && !byte_140CDB160 )
    return 0LL;
  v4 = 0;
  if ( (dword_140C134F0 & 0x100000) != 0 )
    v4 = (dword_140C134F0 & 0x1000) != 0;
  if ( !(_BYTE)a1 )
  {
    v7 = dword_140C134F0 & 0xC00;
    if ( (_DWORD)v7 != 3072 && !v4 )
      AnFwpDisableProgressTimer(3072LL, v7, a3, a4);
    word_140C10E70 = -7989;
    BgpTxtDisplayCharacter(qword_140C135B0, 0xE0CBu, 0, 0LL, 0LL);
    v11 = (_UNKNOWN **)TxtpTextCache;
    v12 = *(_QWORD *)TxtpTextCache;
    if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
LABEL_25:
      __fastfail(3u);
    while ( 1 )
    {
      if ( *(_UNKNOWN ***)(v12 + 8) != v11 )
        goto LABEL_25;
      TxtpTextCache = (_UNKNOWN *)v12;
      *(_QWORD *)(v12 + 8) = &TxtpTextCache;
      if ( v11 == &TxtpTextCache )
        break;
      BgpGxRectangleDestroy((__int64)v11[6], v8, v9, v10);
      BgpFwFreeMemory((__int64)v11, v13, v14, v15);
      v11 = (_UNKNOWN **)TxtpTextCache;
      if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
        goto LABEL_25;
      v12 = *(_QWORD *)TxtpTextCache;
    }
    dword_140C02CA8 = 0;
    if ( RasterizerInitialized )
      RaspClearCache();
    return 0LL;
  }
  if ( byte_140CDB160 )
  {
    if ( v4 )
      goto LABEL_18;
    return 3221225659LL;
  }
  else if ( qword_140C135B0 )
  {
    if ( (dword_140C134F0 & 0x40000) == 0 )
    {
      byte_140CDB160 = 1;
      if ( !v4 )
      {
        word_140C10E70 = -8110;
        LogFwStat(1, 2, 0LL);
        for ( i = word_140C10E70; i <= 0xE0CBu; i = ++word_140C10E70 )
          BgpTxtDisplayCharacter(qword_140C135B0, i, 1, 0LL, 0LL);
        word_140C10E70 = -7989;
        BgpTxtDisplayCharacter(qword_140C135B0, 0xE0CBu, 0, 0LL, 0LL);
        qword_140CDB168 = LogFwStat(0, 2, 0LL).QuadPart;
        KeInitializeTimerEx(&stru_140CF3280, NotificationTimer);
        KeInitializeDpc(&stru_140CF3200, AnFwpProgressIndicatorTimer, 0LL);
        KeSetCoalescableTimer(&stru_140CF3280, 0LL, 0x1Eu, 0, &stru_140CF3200);
        return 0LL;
      }
      qword_140CDB168 = 0LL;
      word_140C10E70 = -8111;
LABEL_18:
      AnFwpProgressAnimationManual(a1, (unsigned int)dword_140C134F0, a3);
      return 0LL;
    }
    return 3221225473LL;
  }
  else
  {
    return 3221225626LL;
  }
}
