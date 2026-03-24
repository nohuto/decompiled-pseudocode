/*
 * XREFs of _strtoui64_0 @ 0x1C0031D29
 * Callers:
 *     ConvertToInteger @ 0x1C000C190 (ConvertToInteger.c)
 *     DebugExpr @ 0x1C0065E5C (DebugExpr.c)
 *     DebugInPort @ 0x1C0066040 (DebugInPort.c)
 *     DebugOutPort @ 0x1C0066310 (DebugOutPort.c)
 *     DebugRunMethod @ 0x1C0066440 (DebugRunMethod.c)
 *     IsNumber @ 0x1C0066824 (IsNumber.c)
 *     DbgParseOneArg @ 0x1C006B810 (DbgParseOneArg.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned __int64 __cdecl strtoui64_0(const char *String, char **EndPtr, int Radix)
{
  return _strtoui64(String, EndPtr, Radix);
}
