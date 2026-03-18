/*
 * XREFs of PerfInfoLogIpiReceive @ 0x1405A45D0
 * Callers:
 *     KiIpiProcessRequests @ 0x1402EC760 (KiIpiProcessRequests.c)
 * Callees:
 *     EtwTraceTimedEvent @ 0x1402FF550 (EtwTraceTimedEvent.c)
 */

void __fastcall PerfInfoLogIpiReceive(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // [rsp+38h] [rbp-20h] BYREF
  int v4; // [rsp+40h] [rbp-18h]

  v4 = a2;
  v3 = a3;
  EtwTraceTimedEvent(0xF71u, 0x40400000u, (__int64)&v3, 12, 0x400A02u, a1);
}
