/*
 * XREFs of PerfInfoLogIpiReceive @ 0x1405AA3C0
 * Callers:
 *     KiIpiProcessRequests @ 0x14020FCE0 (KiIpiProcessRequests.c)
 * Callees:
 *     EtwTraceTimedEvent @ 0x14022D15C (EtwTraceTimedEvent.c)
 */

__int64 __fastcall PerfInfoLogIpiReceive(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // [rsp+38h] [rbp-20h] BYREF
  int v5; // [rsp+40h] [rbp-18h]

  v5 = a2;
  v4 = a3;
  return EtwTraceTimedEvent(3953, 0x40400000u, (__int64)&v4, 12, 4196866, a1);
}
