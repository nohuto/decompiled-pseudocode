/*
 * XREFs of InitVideo @ 0x1C002B12C
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C002C58C (-UserInitialize@@YAJXZ.c)
 *     xxxRemoteConnect @ 0x1C011E780 (xxxRemoteConnect.c)
 * Callees:
 *     InitUserScreen @ 0x1C00139D8 (InitUserScreen.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C002B29C (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x1C002B5A4 (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 *     DrvInitConsole @ 0x1C002B6A4 (DrvInitConsole.c)
 *     UpdateExternalMonitorConnectedStatus @ 0x1C002B904 (UpdateExternalMonitorConnectedStatus.c)
 *     DrvCloseGraphicsDevices @ 0x1C00570E0 (DrvCloseGraphicsDevices.c)
 *     DrvSetDisplayConfig @ 0x1C00B1BD0 (DrvSetDisplayConfig.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InitVideo(__int64 a1)
{
  __int16 v1; // di
  int v2; // ebx
  __int64 v4; // rcx
  struct _DEVCAPS *v5; // rdx
  int v6; // eax
  __int64 v8; // [rsp+A8h] [rbp+10h] BYREF
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
  if ( (int)DrvSetDisplayConfig(0, 0, 2447, 2, 0LL, 0, 0LL, 0LL, 0LL, (__int64)&v8, 0LL, 0LL, 0LL, 0LL, a1) < 0 )
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
    if ( qword_1C0252778 )
      v6 = qword_1C0252778();
    else
      v6 = -1073741637;
    if ( v6 >= 0 )
    {
      if ( qword_1C0252780 )
        qword_1C0252780();
    }
  }
  gdwHydraHint |= 4u;
  return v8;
}
