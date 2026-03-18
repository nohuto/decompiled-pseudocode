/*
 * XREFs of ?UnregisterWinSqmProvider@@YAKXZ @ 0x1C0054420
 * Callers:
 *     WinSqmEndSession @ 0x1C005437C (WinSqmEndSession.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 UnregisterWinSqmProvider(void)
{
  signed __int64 v0; // rax
  REGHANDLE v1; // rcx
  unsigned int v2; // edx
  int i; // ebx
  __int64 v5; // rax
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  v0 = _InterlockedCompareExchange64(&qword_1C02567A8, 170LL, 221LL);
  switch ( v0 )
  {
    case 221LL:
      v1 = qword_1C0252818;
      if ( !qword_1C0252818 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL);
        v1 = qword_1C0252818;
      }
      v2 = EtwUnregister(v1);
      dword_1C0252810 = 0;
      qword_1C0252818 = 0LL;
      _InterlockedExchange64(&qword_1C02567A8, v2 != 0 ? 238LL : 221LL);
      break;
    case 153LL:
      return 0;
    case 119LL:
      return 1359;
    case 170LL:
      Interval.QuadPart = -1000000LL;
      for ( i = 0; i < 10; ++i )
      {
        KeDelayExecutionThread(1, 0, &Interval);
        v5 = _InterlockedExchange64(&qword_1C02567A8, qword_1C02567A8);
        if ( v5 != 170 )
          break;
      }
      if ( i == 10 )
        v5 = _InterlockedCompareExchange64(&qword_1C02567A8, 136LL, 170LL);
      return v5 != 153 ? 0x5B4 : 0;
    default:
      return 1460;
  }
  return v2;
}
