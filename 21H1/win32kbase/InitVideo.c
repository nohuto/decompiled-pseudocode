/*
 * XREFs of InitVideo @ 0x1C00552E4
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C0014D10 (-UserInitialize@@YAJXZ.c)
 *     xxxRemoteConnect @ 0x1C0054D30 (xxxRemoteConnect.c)
 * Callees:
 *     UpdateExternalMonitorConnectedStatus @ 0x1C0004F38 (UpdateExternalMonitorConnectedStatus.c)
 *     DrvCloseGraphicsDevices @ 0x1C0049260 (DrvCloseGraphicsDevices.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C0055454 (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x1C0055764 (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 *     DrvInitConsole @ 0x1C0055864 (DrvInitConsole.c)
 *     DrvSetDisplayConfig @ 0x1C0098260 (DrvSetDisplayConfig.c)
 *     InitUserScreen @ 0x1C00A7A88 (InitUserScreen.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InitVideo(__int64 a1)
{
  __int16 v1; // di
  int v2; // ebx
  struct _DEVCAPS *v4; // rdx
  int v5; // eax
  __int64 v7; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v8; // [rsp+B0h] [rbp+18h] BYREF

  v1 = gProtocolType;
  v7 = 0LL;
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
  if ( (int)DrvSetDisplayConfig(0, 0, 2447, 2, 0LL, 0, 0LL, 0LL, 0LL, (__int64)&v7, 0LL, 0LL, 0LL, 0LL, a1) < 0 )
    return 0LL;
  if ( !gProtocolType )
    UpdateExternalMonitorConnectedStatus(1);
  v4 = gpGdiDevCaps;
  gbBaseVideo = 0;
  *(_QWORD *)(gpDispInfo + 40) = *(_QWORD *)v7;
  *(_QWORD *)(gpDispInfo + 16) = v7;
  v8 = *(_QWORD *)(gpDispInfo + 40);
  vGetDeviceCaps((struct PDEVOBJ *)&v8, v4);
  if ( !(unsigned int)InitUserScreen() )
    return 0LL;
  if ( v2 )
  {
    if ( !v1 )
      RtlSetActiveConsoleId(0xFFFFFFFFLL);
    DrvCloseGraphicsDevices(1);
  }
  else
  {
    if ( qword_1C0258738 )
      v5 = qword_1C0258738();
    else
      v5 = -1073741637;
    if ( v5 >= 0 )
    {
      if ( qword_1C0258740 )
        qword_1C0258740();
    }
  }
  gdwHydraHint |= 4u;
  return v7;
}
