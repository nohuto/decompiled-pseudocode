/*
 * XREFs of IsNumber @ 0x1C0067AC4
 * Callers:
 *     DebugExpr @ 0x1C0067114 (DebugExpr.c)
 *     DebugInPort @ 0x1C00672F0 (DebugInPort.c)
 *     DebugNotify @ 0x1C00673F0 (DebugNotify.c)
 *     DebugOutPort @ 0x1C00675C0 (DebugOutPort.c)
 *     DebugRunMethod @ 0x1C00676F0 (DebugRunMethod.c)
 * Callees:
 *     _strtoui64_0 @ 0x1C002F1E9 (_strtoui64_0.c)
 */

char __fastcall IsNumber(const char *a1, int a2)
{
  char v3; // di
  char *EndPtr; // [rsp+40h] [rbp+18h] BYREF

  EndPtr = 0LL;
  v3 = 1;
  if ( strtoui64_0(a1, &EndPtr, a2) == -1LL || a1 == EndPtr || !*a1 )
    return 0;
  return v3;
}
