/*
 * XREFs of ?RegisterWinSqmProvider@@YAKXZ @ 0x1C0058FB4
 * Callers:
 *     WinSqmStartSession @ 0x1C0058E08 (WinSqmStartSession.c)
 * Callees:
 *     ?IsSessionDisabled@@YAHPEBU_GUID@@K@Z @ 0x1C005904C (-IsSessionDisabled@@YAHPEBU_GUID@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RegisterWinSqmProvider(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 v4; // rax
  unsigned int v5; // edi
  int i; // ebx
  __int64 v8; // rax
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  v4 = _InterlockedCompareExchange64(&qword_1C02507E8, 255LL, 0LL);
  if ( v4 )
  {
    switch ( v4 )
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
          v8 = _InterlockedExchange64(&qword_1C02507E8, qword_1C02507E8);
          if ( v8 != 255 )
            break;
        }
        if ( i == 10 )
          v8 = _InterlockedCompareExchange64(&qword_1C02507E8, 204LL, 255LL);
        return v8 != 221 ? 0x5B4 : 0;
      default:
        return 1460;
    }
  }
  else
  {
    if ( qword_1C024C800 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    v5 = EtwRegister(&Microsoft_Windows_SQM_Provider, 0LL, 0LL, &qword_1C024C800);
    if ( (unsigned int)IsSessionDisabled(0LL, 0) )
      dword_1C024C7F8 |= 1u;
    _InterlockedExchange64(&qword_1C02507E8, v5 != 0 ? 238LL : 221LL);
  }
  return v5;
}
