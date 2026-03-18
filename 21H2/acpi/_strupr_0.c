/*
 * XREFs of _strupr_0 @ 0x1C002F1FB
 * Callers:
 *     FindNSObjMainNoLock @ 0x1C001F71C (FindNSObjMainNoLock.c)
 *     DebugExpr @ 0x1C0067114 (DebugExpr.c)
 *     DebugNotify @ 0x1C00673F0 (DebugNotify.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
char *__cdecl strupr_0(char *String)
{
  return _strupr(String);
}
