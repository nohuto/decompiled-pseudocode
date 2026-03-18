/*
 * XREFs of _strupr_0 @ 0x1C0031ADB
 * Callers:
 *     FindNSObjMainNoLock @ 0x1C0013E20 (FindNSObjMainNoLock.c)
 *     DebugExpr @ 0x1C0065CCC (DebugExpr.c)
 *     DebugNotify @ 0x1C0065FB0 (DebugNotify.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
char *__cdecl strupr_0(char *String)
{
  return _strupr(String);
}
