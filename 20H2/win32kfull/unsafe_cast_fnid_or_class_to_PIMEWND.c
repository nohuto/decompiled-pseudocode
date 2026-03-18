/*
 * XREFs of unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C00BC63C
 * Callers:
 *     xxxCreateDefaultImeWindow @ 0x1C00BC098 (xxxCreateDefaultImeWindow.c)
 *     ImeCanDestroyDefIMEforChild @ 0x1C00BC434 (ImeCanDestroyDefIMEforChild.c)
 *     zzzImeCanDestroyDefIME @ 0x1C00BC4F8 (zzzImeCanDestroyDefIME.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01E25F4 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall unsafe_cast_fnid_or_class_to_PIMEWND(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int16 v6; // ax

  if ( !a1 )
    return 0LL;
  v5 = a1[5];
  if ( (*(_WORD *)(v5 + 42) & 0x1000) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, v5, a4);
    v5 = a1[5];
  }
  v6 = *(_WORD *)(v5 + 42);
  if ( (v6 & 0x1000) != 0 || (v6 & 0x2FFF) != 0x2A9 && **(_WORD **)(a1[17] + 8LL) != *(_WORD *)(gpsi + 898LL) )
    return 0LL;
  if ( *(_DWORD *)(v5 + 252) )
    return a1[35];
  return *(_QWORD *)(v5 + 296);
}
