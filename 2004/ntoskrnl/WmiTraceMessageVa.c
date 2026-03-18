/*
 * XREFs of WmiTraceMessageVa @ 0x1405A1300
 * Callers:
 *     <none>
 * Callees:
 *     EtwpTraceMessageVa @ 0x14026CF20 (EtwpTraceMessageVa.c)
 */

__int64 __fastcall WmiTraceMessageVa(unsigned __int64 a1, char a2, signed __int32 *a3, __int16 a4, __int64 a5)
{
  return EtwpTraceMessageVa(a1, a2, a3, a4, a5, 0);
}
