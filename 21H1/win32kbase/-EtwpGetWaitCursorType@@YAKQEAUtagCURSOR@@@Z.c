/*
 * XREFs of ?EtwpGetWaitCursorType@@YAKQEAUtagCURSOR@@@Z @ 0x1C012D3F4
 * Callers:
 *     EtwTraceWaitCursor @ 0x1C003C890 (EtwTraceWaitCursor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetWaitCursorType(struct tagCURSOR *const a1)
{
  __int64 result; // rax

  if ( a1 == (struct tagCURSOR *const)qword_1C024DF58 )
    return 102LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C024F2C0 )
    return 111LL;
  result = 0LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C024FD88 )
    return 116LL;
  return result;
}
