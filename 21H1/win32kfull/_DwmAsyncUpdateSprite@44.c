/*
 * XREFs of _DwmAsyncUpdateSprite@44 @ 0x2044E
 * Callers:
 *     _GreHintSpriteShape@28 @ 0x23FC0 (_GreHintSpriteShape@28.c)
 *     ?GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@PAUtagMINIWINDOWINFO@@HH@Z @ 0x603A0 (-GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YGXPAUHDEV__@@PAVSFMLOGICALSURFACE@@PAVSURFACE@@1@Z @ 0xAA854 (-vSpDwmMigrateSpriteLSurfReference@@YGXPAUHDEV__@@PAVSFMLOGICALSURFACE@@PAVSURFACE@@1@Z.c)
 *     _GreTransferSpriteStateToDwmState@8 @ 0xE11CA (_GreTransferSpriteStateToDwmState@8.c)
 *     ?CheckAndProcessWindowResizeComplete@@YGXPAVDWMSPRITE@@HPAH@Z @ 0x1CCD3C (-CheckAndProcessWindowResizeComplete@@YGXPAVDWMSPRITE@@HPAH@Z.c)
 *     _GreProtectSpriteContent@16 @ 0x1CE69D (_GreProtectSpriteContent@16.c)
 *     _GreWindowResizeStarted@20 @ 0x1CEC76 (_GreWindowResizeStarted@20.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall DwmAsyncUpdateSprite(
        void *a1,
        int a2,
        int a3,
        int a4,
        _DWORD *a5,
        const void *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  __int64 v11; // kr00_8
  int v12; // edi
  unsigned int v13; // eax
  _DWORD v17[51]; // [esp+28h] [ebp-D0h] BYREF

  do
    v11 = g_cDWMWindowUniqueness;
  while ( _InterlockedCompareExchange64(&g_cDWMWindowUniqueness, g_cDWMWindowUniqueness + 1, g_cDWMWindowUniqueness) != v11 );
  v12 = -1073741823;
  if ( a1 )
  {
    memset(v17, 0, sizeof(v17));
    LOWORD(v17[1]) = 0x8000;
    v17[46] = a3;
    v17[0] = 13369524;
    v17[8] = a4 & 0xFFFFFEFF;
    v17[6] = 1073741830;
    v17[7] = a2;
    if ( a5 )
    {
      v17[43] = *a5;
      v17[44] = a5[1];
      v17[45] = a5[2];
    }
    if ( a6 )
    {
      v17[9] = 1;
      qmemcpy(&v17[10], a6, 0x84u);
    }
    v17[47] = a7;
    v17[48] = a8;
    v17[49] = a9;
    v17[50] = a11;
    if ( a10 && g_cDelayedUpdateSpriteNotifications < 0x14 )
    {
      v13 = g_cDelayedUpdateSpriteNotifications + 1;
      qmemcpy((char *)&g_rgDelayedUpdateSpriteNotifications + 180 * g_cDelayedUpdateSpriteNotifications, &v17[6], 0xB4u);
      v12 = -1073741823;
      g_cDelayedUpdateSpriteNotifications = v13;
      if ( v13 > g_cMaximumSeenDelayedUpdateSpriteNotifications )
        g_cMaximumSeenDelayedUpdateSpriteNotifications = v13;
    }
    else
    {
      EtwUpdateEvent(a2, 1073741830);
      v12 = LpcRequestPort(a1, v17);
    }
    ObfDereferenceObject(a1);
  }
  return v12;
}
