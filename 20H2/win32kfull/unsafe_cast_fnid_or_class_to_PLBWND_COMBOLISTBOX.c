/*
 * XREFs of unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX @ 0x1C01485C8
 * Callers:
 *     xxxGetComboBoxInfo @ 0x1C0148504 (xxxGetComboBoxInfo.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
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
  if ( (v6 & 0x1000) != 0 || (v6 & 0x2FFF) != 0x2A3 && **(_WORD **)(a1[17] + 8LL) != *(_WORD *)(gpsi + 882LL) )
    return 0LL;
  if ( *(_DWORD *)(v5 + 252) )
    return a1[35];
  return *(_QWORD *)(v5 + 296);
}
