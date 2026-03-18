/*
 * XREFs of GetPreparsedData @ 0x1C01640AC
 * Callers:
 *     RIMExtractPointerPropertyValues @ 0x1C0165EF0 (RIMExtractPointerPropertyValues.c)
 *     RIMGetPointerDeviceProperties @ 0x1C0166E50 (RIMGetPointerDeviceProperties.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0063044 (HMValidateHandleNoSecure.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GetPreparsedData(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax

  v2 = 0;
  if ( *a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v5 = HMValidateHandleNoSecure(*(_QWORD *)(a1 + 736), 19);
  v7 = v5;
  if ( v5 )
  {
    v8 = *(_QWORD *)(v5 + 464);
    if ( !*(_QWORD *)(v8 + 16) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
      v8 = *(_QWORD *)(v7 + 464);
    }
    v9 = *(_QWORD *)(v8 + 16);
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 880);
    if ( !v9 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
      v9 = *(_QWORD *)(a1 + 880);
    }
  }
  *a2 = v9;
  LOBYTE(v2) = v9 != 0;
  return v2;
}
