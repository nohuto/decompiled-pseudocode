/*
 * XREFs of ?EtwpGetWaitCursorType@@YAKQEAUtagCURSOR@@@Z @ 0x1C0127404
 * Callers:
 *     EtwTraceWaitCursor @ 0x1C0049900 (EtwTraceWaitCursor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetWaitCursorType(struct tagCURSOR *const a1)
{
  __int64 result; // rax

  if ( a1 == (struct tagCURSOR *const)qword_1C0247F58 )
    return 102LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C02492C0 )
    return 111LL;
  result = 0LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C0249D88 )
    return 116LL;
  return result;
}
