/*
 * XREFs of ?UnregisterWinSqmProvider@@YAKXZ @ 0x1C006103C
 * Callers:
 *     WinSqmEndSession @ 0x1C0060F98 (WinSqmEndSession.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UnregisterWinSqmProvider(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 v4; // rax
  REGHANDLE v5; // rcx
  unsigned int v6; // edx
  int i; // ebx
  __int64 v9; // rax
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  v4 = _InterlockedCompareExchange64(&qword_1C02507E8, 170LL, 221LL);
  switch ( v4 )
  {
    case 221LL:
      v5 = qword_1C024C800;
      if ( !qword_1C024C800 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3, a4);
        v5 = qword_1C024C800;
      }
      v6 = EtwUnregister(v5);
      dword_1C024C7F8 = 0;
      qword_1C024C800 = 0LL;
      _InterlockedExchange64(&qword_1C02507E8, v6 != 0 ? 238LL : 221LL);
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
        v9 = _InterlockedExchange64(&qword_1C02507E8, qword_1C02507E8);
        if ( v9 != 170 )
          break;
      }
      if ( i == 10 )
        v9 = _InterlockedCompareExchange64(&qword_1C02507E8, 136LL, 170LL);
      return v9 != 153 ? 0x5B4 : 0;
    default:
      return 1460;
  }
  return v6;
}
