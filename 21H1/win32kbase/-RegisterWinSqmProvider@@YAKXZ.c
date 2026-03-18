/*
 * XREFs of ?RegisterWinSqmProvider@@YAKXZ @ 0x1C004B294
 * Callers:
 *     WinSqmStartSession @ 0x1C004B0E8 (WinSqmStartSession.c)
 * Callees:
 *     ?IsSessionDisabled@@YAHPEBU_GUID@@K@Z @ 0x1C004B32C (-IsSessionDisabled@@YAHPEBU_GUID@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RegisterWinSqmProvider(__int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v2; // edi
  int i; // ebx
  __int64 v5; // rax
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  v1 = _InterlockedCompareExchange64(&qword_1C02567A8, 255LL, 0LL);
  if ( v1 )
  {
    switch ( v1 )
    {
      case 221LL:
        return 0;
      case 238LL:
        return 1359;
      case 255LL:
        Interval.QuadPart = -1000000LL;
        for ( i = 0; i < 10; ++i )
        {
          KeDelayExecutionThread(1, 0, &Interval);
          v5 = _InterlockedExchange64(&qword_1C02567A8, qword_1C02567A8);
          if ( v5 != 255 )
            break;
        }
        if ( i == 10 )
          v5 = _InterlockedCompareExchange64(&qword_1C02567A8, 204LL, 255LL);
        return v5 != 221 ? 0x5B4 : 0;
      default:
        return 1460;
    }
  }
  else
  {
    if ( qword_1C0252818 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    v2 = EtwRegister(&Microsoft_Windows_SQM_Provider, 0LL, 0LL, &qword_1C0252818);
    if ( (unsigned int)IsSessionDisabled(0LL, 0) )
      dword_1C0252810 |= 1u;
    _InterlockedExchange64(&qword_1C02567A8, v2 != 0 ? 238LL : 221LL);
  }
  return v2;
}
