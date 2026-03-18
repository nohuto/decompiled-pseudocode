/*
 * XREFs of ?EtwpGetWaitCursorType@@YAKQEAUtagCURSOR@@@Z @ 0x1C01250B4
 * Callers:
 *     EtwTraceWaitCursor @ 0x1C00AAE10 (EtwTraceWaitCursor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetWaitCursorType(struct tagCURSOR *const a1)
{
  __int64 result; // rax

  if ( a1 == (struct tagCURSOR *const)qword_1C0245F58 )
    return 102LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C02472C0 )
    return 111LL;
  result = 0LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C0247D88 )
    return 116LL;
  return result;
}
