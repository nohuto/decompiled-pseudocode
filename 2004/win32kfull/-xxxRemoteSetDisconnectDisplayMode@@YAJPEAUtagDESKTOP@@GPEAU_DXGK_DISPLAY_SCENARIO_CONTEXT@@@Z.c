/*
 * XREFs of ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011E944
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C011E080 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C01541B0 (xxxRemoteReconnect.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0032D80 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall xxxRemoteSetDisconnectDisplayMode(
        struct tagDESKTOP *a1,
        unsigned __int16 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  int v5; // edx
  int v6; // ecx
  int v7; // ebx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v9; // [rsp+48h] [rbp-10h]
  char v10; // [rsp+68h] [rbp+10h] BYREF

  v10 = 0;
  SetProtocolType(0xFFFFLL);
  if ( (unsigned int)DrvIsNotUsingGraphicsDevice(*(_QWORD *)(gpDispInfo + 16LL)) )
    return 0LL;
  v9 = a3;
  v7 = xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 2LL);
  if ( v7 < 0 )
  {
    v7 = v10 != 0 ? -1073741267 : -1073741823;
    SetProtocolType(a2);
  }
  else if ( !a2 )
  {
    RtlSetActiveConsoleId(0xFFFFFFFFLL);
  }
  if ( v7 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_d(v6, v5, 9, 14, (__int64)&WPP_0f27963f307c3266edb1c5990ca93414_Traceguids, v7, 0LL, &v10, 0LL, v9);
  }
  return (unsigned int)v7;
}
