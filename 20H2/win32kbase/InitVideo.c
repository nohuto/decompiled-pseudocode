/*
 * XREFs of InitVideo @ 0x1C0095238
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C008DFF4 (-UserInitialize@@YAJXZ.c)
 *     xxxRemoteConnect @ 0x1C011C440 (xxxRemoteConnect.c)
 * Callees:
 *     InitUserScreen @ 0x1C001F2FC (InitUserScreen.c)
 *     DrvSetDisplayConfig @ 0x1C006C8A0 (DrvSetDisplayConfig.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C00953AC (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x1C00956B4 (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 *     DrvInitConsole @ 0x1C00957D0 (DrvInitConsole.c)
 *     UpdateExternalMonitorConnectedStatus @ 0x1C0095A14 (UpdateExternalMonitorConnectedStatus.c)
 *     DrvCloseGraphicsDevices @ 0x1C00BDB00 (DrvCloseGraphicsDevices.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

struct _MDEV *__fastcall InitVideo(__int64 a1)
{
  __int16 v1; // di
  int v2; // ebx
  __int64 v4; // rcx
  struct _DEVCAPS *v5; // rdx
  int v6; // eax
  struct _MDEV *v8; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v9; // [rsp+B0h] [rbp+18h] BYREF

  v1 = gProtocolType;
  v8 = 0LL;
  v2 = 0;
  if ( (int)DrvInitConsole() < 0 )
    return 0LL;
  if ( !gbNonServiceSession && !gbFirstConnectionDone )
  {
    gbBaseVideo = 0;
    gProtocolType = -1;
    v2 = 1;
  }
  DispBrokerUpdateKernelDisplayPolicies();
  if ( (int)DrvSetDisplayConfig(0, 0LL, 2447LL, 0x802u, 0LL, 0, 0LL, 0LL, 0LL, &v8, 0LL, 0LL, 0LL, 0LL, a1) < 0 )
    return 0LL;
  if ( !gProtocolType )
  {
    LOBYTE(v4) = 1;
    UpdateExternalMonitorConnectedStatus(v4);
  }
  v5 = gpGdiDevCaps;
  gbBaseVideo = 0;
  *(_QWORD *)(gpDispInfo + 40) = *(_QWORD *)v8;
  *(_QWORD *)(gpDispInfo + 16) = v8;
  v9 = *(_QWORD *)(gpDispInfo + 40);
  vGetDeviceCaps((struct PDEVOBJ *)&v9, v5);
  if ( !(unsigned int)InitUserScreen() )
    return 0LL;
  if ( v2 )
  {
    if ( !v1 )
      RtlSetActiveConsoleId(0xFFFFFFFFLL);
    DrvCloseGraphicsDevices(1LL);
  }
  else
  {
    if ( qword_1C0250778 )
      v6 = qword_1C0250778();
    else
      v6 = -1073741637;
    if ( v6 >= 0 )
    {
      if ( qword_1C0250780 )
        qword_1C0250780();
    }
  }
  gdwHydraHint |= 4u;
  return v8;
}
