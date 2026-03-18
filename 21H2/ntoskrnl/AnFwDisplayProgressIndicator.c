/*
 * XREFs of AnFwDisplayProgressIndicator @ 0x140AAD1C4
 * Callers:
 *     BgDisplayProgressIndicator @ 0x140AAD188 (BgDisplayProgressIndicator.c)
 *     BgpFwLibraryDisable @ 0x140AAE9F4 (BgpFwLibraryDisable.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     BgpTxtDisplayCharacter @ 0x1403A7CAC (BgpTxtDisplayCharacter.c)
 *     BgpFwFreeMemory @ 0x1403A8CB4 (BgpFwFreeMemory.c)
 *     AnFwpProgressAnimationManual @ 0x140AAB478 (AnFwpProgressAnimationManual.c)
 *     AnFwpDisableProgressTimer @ 0x140AABA70 (AnFwpDisableProgressTimer.c)
 *     RaspClearCache @ 0x140AABB44 (RaspClearCache.c)
 *     LogFwStat @ 0x140AACFEC (LogFwStat.c)
 *     BgpGxRectangleDestroy @ 0x140AAD3E0 (BgpGxRectangleDestroy.c)
 */

__int64 __fastcall AnFwDisplayProgressIndicator(char a1)
{
  bool v1; // al
  unsigned __int16 i; // ax
  _QWORD *v4; // rdi
  __int64 v5; // rax

  if ( !a1 && !byte_140CE1AE0 )
    return 0LL;
  v1 = 0;
  if ( (dword_140C0DF90 & 0x100000) != 0 )
    v1 = (dword_140C0DF90 & 0x1000) != 0;
  if ( !a1 )
  {
    if ( (dword_140C0DF90 & 0xC00) != 0xC00 && !v1 )
      AnFwpDisableProgressTimer(3072LL);
    word_140C09770 = -7989;
    BgpTxtDisplayCharacter(qword_140C0E050, 57547LL, 0, 0LL, 0LL);
    v4 = TxtpTextCache;
    v5 = *(_QWORD *)TxtpTextCache;
    if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
LABEL_26:
      __fastfail(3u);
    while ( 1 )
    {
      if ( *(_QWORD **)(v5 + 8) != v4 )
        goto LABEL_26;
      TxtpTextCache = (_UNKNOWN *)v5;
      *(_QWORD *)(v5 + 8) = &TxtpTextCache;
      if ( v4 == &TxtpTextCache )
        break;
      BgpGxRectangleDestroy(v4[6]);
      BgpFwFreeMemory((__int64)v4);
      v4 = TxtpTextCache;
      if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
        goto LABEL_26;
      v5 = *(_QWORD *)TxtpTextCache;
    }
    dword_140C04460 = 0;
    if ( RasterizerInitialized )
      RaspClearCache();
    return 0LL;
  }
  if ( byte_140CE1AE0 )
  {
    if ( v1 )
      goto LABEL_7;
    return 3221225659LL;
  }
  else if ( qword_140C0E050 )
  {
    if ( (dword_140C0DF90 & 0x40000) == 0 )
    {
      byte_140CE1AE0 = 1;
      if ( !v1 )
      {
        word_140C09770 = word_140C0C678;
        LogFwStat(1, 2, 0LL);
        for ( i = word_140C09770; i <= (unsigned __int16)word_140C0C67C; i = ++word_140C09770 )
          BgpTxtDisplayCharacter(qword_140C0E050, i, 1, 0LL, 0LL);
        word_140C09770 = -7989;
        BgpTxtDisplayCharacter(qword_140C0E050, 57547LL, 0, 0LL, 0LL);
        qword_140C54908 = LogFwStat(0, 2, 0LL).QuadPart;
        KeInitializeTimerEx(&stru_140CF7400, NotificationTimer);
        KeInitializeDpc(&stru_140CF73C0, (PKDEFERRED_ROUTINE)AnFwpProgressIndicatorTimer, 0LL);
        KeSetCoalescableTimer(&stru_140CF7400, 0LL, 0x1Eu, 0, &stru_140CF73C0);
        return 0LL;
      }
      qword_140C54908 = 0LL;
      word_140C09770 = word_140C0C678 - 1;
LABEL_7:
      AnFwpProgressAnimationManual();
      return 0LL;
    }
    return 3221225473LL;
  }
  else
  {
    return 3221225626LL;
  }
}
