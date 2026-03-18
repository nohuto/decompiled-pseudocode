/*
 * XREFs of _strtoui64_0 @ 0x1C0031AC9
 * Callers:
 *     ConvertToInteger @ 0x1C000BDD0 (ConvertToInteger.c)
 *     DebugExpr @ 0x1C0065CCC (DebugExpr.c)
 *     DebugInPort @ 0x1C0065EB0 (DebugInPort.c)
 *     DebugOutPort @ 0x1C0066180 (DebugOutPort.c)
 *     DebugRunMethod @ 0x1C00662B0 (DebugRunMethod.c)
 *     IsNumber @ 0x1C0066694 (IsNumber.c)
 *     DbgParseOneArg @ 0x1C006B680 (DbgParseOneArg.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned __int64 __cdecl strtoui64_0(const char *String, char **EndPtr, int Radix)
{
  return _strtoui64(String, EndPtr, Radix);
}
