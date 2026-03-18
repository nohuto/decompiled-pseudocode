/*
 * XREFs of ?xxxRemoteSetDisconnectDisplayMode@@YGJPAUtagDESKTOP@@GPAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0xD2782
 * Callers:
 *     _xxxRemoteDisconnect@0 @ 0xD123C (_xxxRemoteDisconnect@0.c)
 *     _xxxRemoteReconnect@4 @ 0xD18BC (_xxxRemoteReconnect@4.c)
 * Callees:
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 */

int __userpurge xxxRemoteSetDisconnectDisplayMode@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagDESKTOP *a3,
        unsigned __int16 a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  int v8; // edx
  int v9; // ecx
  int v10; // ebx
  char v11; // [esp+Bh] [ebp-1h] BYREF

  v11 = 0;
  SetProtocolType(0xFFFF);
  if ( DrvIsNotUsingGraphicsDevice(*(_DWORD *)(_gpDispInfo + 8)) )
    return 0;
  v10 = xxxUserSetDisplayConfig(0, 0, 2191, 2, a2, 0, 0, &v11, 0, a3);
  if ( v10 >= 0 )
  {
    if ( !(_WORD)a1 )
      RtlSetActiveConsoleId(-1);
  }
  else
  {
    v10 = v11 == 0 ? -1073741823 : -1073741267;
    SetProtocolType(a1);
  }
  if ( v10 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(v9, v8, 9u, 14, (int)&WPP_ce4686b973ab32e3a2c7742364a6f9c9_Traceguids, v10);
  }
  return v10;
}
