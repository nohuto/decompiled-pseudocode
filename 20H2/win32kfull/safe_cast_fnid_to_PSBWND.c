/*
 * XREFs of safe_cast_fnid_to_PSBWND @ 0x1C01D40E8
 * Callers:
 *     xxxEnableScrollBar @ 0x1C00EC140 (xxxEnableScrollBar.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C0244184 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C024477C (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     xxxDoScrollMenu @ 0x1C02451EC (xxxDoScrollMenu.c)
 *     xxxEndScroll @ 0x1C0245424 (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1C0245720 (xxxSBTrackInit.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall safe_cast_fnid_to_PSBWND(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int16 v6; // ax

  if ( !a1 )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 40);
  if ( (*(_WORD *)(v5 + 42) & 0x1000) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v5, a3, a4);
    v5 = *(_QWORD *)(a1 + 40);
  }
  v6 = *(_WORD *)(v5 + 42);
  if ( (v6 & 0x1000) != 0 || (v6 & 0x2FFF) != 0x29A )
    return 0LL;
  if ( *(_DWORD *)(v5 + 252) )
    return *(_QWORD *)(a1 + 280);
  return *(_QWORD *)(v5 + 296);
}
