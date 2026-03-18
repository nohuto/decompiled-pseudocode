/*
 * XREFs of DebugID @ 0x1C0065E70
 * Callers:
 *     <none>
 * Callees:
 *     DebugInPort @ 0x1C0065EB0 (DebugInPort.c)
 */

__int64 __fastcall DebugID(__int64 a1, __int64 a2)
{
  return DebugInPort(a2, 4LL);
}
