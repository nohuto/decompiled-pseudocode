/*
 * XREFs of _strtoui64_0 @ 0x1C002F1E9
 * Callers:
 *     ConvertToInteger @ 0x1C001C420 (ConvertToInteger.c)
 *     DebugExpr @ 0x1C0067114 (DebugExpr.c)
 *     DebugInPort @ 0x1C00672F0 (DebugInPort.c)
 *     DebugOutPort @ 0x1C00675C0 (DebugOutPort.c)
 *     DebugRunMethod @ 0x1C00676F0 (DebugRunMethod.c)
 *     IsNumber @ 0x1C0067AC4 (IsNumber.c)
 *     DbgParseOneArg @ 0x1C006BAA0 (DbgParseOneArg.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned __int64 __cdecl strtoui64_0(const char *String, char **EndPtr, int Radix)
{
  return _strtoui64(String, EndPtr, Radix);
}
