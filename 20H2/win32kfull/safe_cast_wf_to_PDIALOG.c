/*
 * XREFs of safe_cast_wf_to_PDIALOG @ 0x1C0156AA8
 * Callers:
 *     xxxSetWindowLong @ 0x1C00F0128 (xxxSetWindowLong.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall safe_cast_wf_to_PDIALOG(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx

  if ( !a1 )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 40);
  if ( (*(_WORD *)(v5 + 42) & 0x1000) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v5, a3, a4);
    v5 = *(_QWORD *)(a1 + 40);
    if ( (*(_WORD *)(v5 + 42) & 0x1000) != 0 )
      return 0LL;
  }
  if ( (*(_BYTE *)(v5 + 18) & 1) == 0 )
    return 0LL;
  if ( *(_DWORD *)(v5 + 252) )
    return *(_QWORD *)(a1 + 280);
  return *(_QWORD *)(v5 + 296);
}
