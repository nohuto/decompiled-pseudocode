/*
 * XREFs of AnFwDisplayProgressIndicator @ 0x1409F1370
 * Callers:
 *     BgpFwLibraryDisable @ 0x1409F0FE8 (BgpFwLibraryDisable.c)
 *     BgDisplayProgressIndicator @ 0x1409F1334 (BgDisplayProgressIndicator.c)
 * Callees:
 *     KeInitializeDpc @ 0x140204F10 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x140236170 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x140355110 (KeInitializeTimerEx.c)
 *     BgpFwFreeMemory @ 0x140398840 (BgpFwFreeMemory.c)
 *     BgpTxtDisplayCharacter @ 0x1403AF7F4 (BgpTxtDisplayCharacter.c)
 *     BgpGxRectangleDestroy @ 0x1409EF290 (BgpGxRectangleDestroy.c)
 *     LogFwStat @ 0x1409EF7D8 (LogFwStat.c)
 *     AnFwpDisableProgressTimer @ 0x1409F04EC (AnFwpDisableProgressTimer.c)
 *     RaspClearCache @ 0x1409F05FC (RaspClearCache.c)
 *     AnFwpProgressAnimationManual @ 0x1409F4288 (AnFwpProgressAnimationManual.c)
 */

__int64 __fastcall AnFwDisplayProgressIndicator(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // al
  unsigned __int16 i; // ax
  _UNKNOWN **v6; // rdi
  __int64 v7; // rax

  LOBYTE(a3) = byte_140CDB060;
  if ( !(_BYTE)a1 && !byte_140CDB060 )
    return 0LL;
  v3 = 0;
  if ( (dword_140C132D0 & 0x100000) != 0 )
    v3 = (dword_140C132D0 & 0x1000) != 0;
  if ( !(_BYTE)a1 )
  {
    if ( (dword_140C132D0 & 0xC00) != 0xC00 && !v3 )
      AnFwpDisableProgressTimer(3072LL);
    word_140C10DC8 = -7989;
    BgpTxtDisplayCharacter(qword_140C13390, 0xE0CBu, 0, 0LL, 0LL);
    v6 = (_UNKNOWN **)TxtpTextCache;
    v7 = *(_QWORD *)TxtpTextCache;
    if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
LABEL_25:
      __fastfail(3u);
    while ( 1 )
    {
      if ( *(_UNKNOWN ***)(v7 + 8) != v6 )
        goto LABEL_25;
      TxtpTextCache = (_UNKNOWN *)v7;
      *(_QWORD *)(v7 + 8) = &TxtpTextCache;
      if ( v6 == &TxtpTextCache )
        break;
      BgpGxRectangleDestroy((__int64)v6[6]);
      BgpFwFreeMemory((__int64)v6);
      v6 = (_UNKNOWN **)TxtpTextCache;
      if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
        goto LABEL_25;
      v7 = *(_QWORD *)TxtpTextCache;
    }
    dword_140C02C30 = 0;
    if ( RasterizerInitialized )
      RaspClearCache();
    return 0LL;
  }
  if ( byte_140CDB060 )
  {
    if ( v3 )
      goto LABEL_18;
    return 3221225659LL;
  }
  else if ( qword_140C13390 )
  {
    if ( (dword_140C132D0 & 0x40000) == 0 )
    {
      byte_140CDB060 = 1;
      if ( !v3 )
      {
        word_140C10DC8 = -8110;
        LogFwStat(1, 2, 0LL);
        for ( i = word_140C10DC8; i <= 0xE0CBu; i = ++word_140C10DC8 )
          BgpTxtDisplayCharacter(qword_140C13390, i, 1, 0LL, 0LL);
        word_140C10DC8 = -7989;
        BgpTxtDisplayCharacter(qword_140C13390, 0xE0CBu, 0, 0LL, 0LL);
        qword_140CDB068 = LogFwStat(0, 2, 0LL).QuadPart;
        KeInitializeTimerEx(&stru_140CF3000, NotificationTimer);
        KeInitializeDpc(&stru_140CF2F80, AnFwpProgressIndicatorTimer, 0LL);
        KeSetCoalescableTimer(&stru_140CF3000, 0LL, 0x1Eu, 0, &stru_140CF2F80);
        return 0LL;
      }
      qword_140CDB068 = 0LL;
      word_140C10DC8 = -8111;
LABEL_18:
      AnFwpProgressAnimationManual(a1, (unsigned int)dword_140C132D0, a3);
      return 0LL;
    }
    return 3221225473LL;
  }
  else
  {
    return 3221225626LL;
  }
}
