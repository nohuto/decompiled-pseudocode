/*
 * XREFs of GetPreparsedData @ 0x1C015DD5C
 * Callers:
 *     RIMExtractPointerPropertyValues @ 0x1C015FBA0 (RIMExtractPointerPropertyValues.c)
 *     RIMGetPointerDeviceProperties @ 0x1C0160B00 (RIMGetPointerDeviceProperties.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C006DF18 (HMValidateHandleNoSecure.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GetPreparsedData(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax

  v4 = 0;
  if ( *a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v7 = HMValidateHandleNoSecure(*(_QWORD *)(a1 + 736), 19);
  v12 = v7;
  if ( v7 )
  {
    v13 = *(_QWORD *)(v7 + 464);
    if ( !*(_QWORD *)(v13 + 16) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
      v13 = *(_QWORD *)(v12 + 464);
    }
    v14 = *(_QWORD *)(v13 + 16);
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 880);
    if ( !v14 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
      v14 = *(_QWORD *)(a1 + 880);
    }
  }
  *a2 = v14;
  LOBYTE(v4) = v14 != 0;
  return v4;
}
