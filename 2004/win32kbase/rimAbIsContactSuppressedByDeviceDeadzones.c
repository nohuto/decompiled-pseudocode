/*
 * XREFs of rimAbIsContactSuppressedByDeviceDeadzones @ 0x1C015B9F8
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C015C704 (rimAbSuppressLowerRankActivityInFrame.c)
 * Callees:
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x1C016FFCC (-IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbIsContactSuppressedByDeviceDeadzones(
        __int64 a1,
        struct tagHPD_CONTACT *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rsi
  int v8; // edi
  RIMDeadzone **i; // rsi

  v4 = 0;
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v7 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v7 + 456) )
  {
    v8 = 0;
    for ( i = (RIMDeadzone **)(v7 + 416); !*i || !(unsigned int)RIMDeadzone::IsInDeadzone(*i, a2); ++i )
    {
      if ( (unsigned int)++v8 >= 5 )
        return v4;
    }
    return 1;
  }
  return v4;
}
