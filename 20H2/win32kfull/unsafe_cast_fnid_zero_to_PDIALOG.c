/*
 * XREFs of unsafe_cast_fnid_zero_to_PDIALOG @ 0x1C00E88D4
 * Callers:
 *     SetDialogPointer @ 0x1C00E87B0 (SetDialogPointer.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall unsafe_cast_fnid_zero_to_PDIALOG(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int16 v6; // ax
  __int16 v7; // ax

  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 40);
    if ( (*(_WORD *)(v5 + 42) & 0x1000) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v5, a3, a4);
      v5 = *(_QWORD *)(a1 + 40);
    }
    v6 = *(_WORD *)(v5 + 42);
    if ( (v6 & 0x1000) == 0 )
    {
      v7 = v6 & 0x2FFF;
      if ( !v7 )
        return *(_QWORD *)(v5 + 296);
      if ( v7 == 676 )
      {
        if ( *(_DWORD *)(v5 + 252) )
          return *(_QWORD *)(a1 + 280);
        return *(_QWORD *)(v5 + 296);
      }
    }
  }
  return 0LL;
}
