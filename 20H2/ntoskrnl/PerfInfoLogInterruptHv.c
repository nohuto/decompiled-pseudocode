/*
 * XREFs of PerfInfoLogInterruptHv @ 0x1405A8710
 * Callers:
 *     KiHvInterruptSubDispatch @ 0x140402750 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1404028B0 (KiVmbusInterruptSubDispatch.c)
 * Callees:
 *     EtwTraceTimedEvent @ 0x14030EAD8 (EtwTraceTimedEvent.c)
 */

void __fastcall PerfInfoLogInterruptHv(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // [rsp+30h] [rbp-18h] BYREF
  int v4; // [rsp+38h] [rbp-10h]
  int v5; // [rsp+3Ch] [rbp-Ch]

  v5 = 0;
  v3 = a1;
  v4 = a2;
  EtwTraceTimedEvent(0xF43u, 0x20004000u, (__int64)&v3, 12, 0x400A02u, a3);
}
