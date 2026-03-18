/*
 * XREFs of DebugOW @ 0x1C0066160
 * Callers:
 *     <none>
 * Callees:
 *     DebugOutPort @ 0x1C0066180 (DebugOutPort.c)
 */

__int64 __fastcall DebugOW(__int64 a1, __int64 a2)
{
  return DebugOutPort(a2, 2LL);
}
