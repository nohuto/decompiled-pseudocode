/*
 * XREFs of EtwpTraceFltTimedIo @ 0x1405A3E30
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceTimedEvent @ 0x1402FF550 (EtwTraceTimedEvent.c)
 */

void __fastcall EtwpTraceFltTimedIo(__int64 a1, int a2, unsigned int a3, unsigned __int16 a4, __int64 a5)
{
  EtwTraceTimedEvent(a4, a3, a1, a2, 0x401803u, a5);
}
