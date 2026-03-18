/*
 * XREFs of ?OnPointerCursorOperation@@YGXXZ @ 0xAF582
 * Callers:
 *     <none>
 * Callees:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QAE@XZ @ 0xAFB6A (--1ThreadLockedPerfRegion@InputTraceLogging@@QAE@XZ.c)
 *     ?HandlePointerCursorSideOp@@YGXXZ @ 0xB0048 (-HandlePointerCursorSideOp@@YGXXZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QAE@PBDPBU01@@Z @ 0xF0204 (--0ThreadLockedPerfRegion@InputTraceLogging@@QAE@PBDPBU01@@Z.c)
 *     ?RenderCursor@@YGXABUtagPOINTERCURSORDATA@@@Z @ 0x148A86 (-RenderCursor@@YGXABUtagPOINTERCURSORDATA@@@Z.c)
 */

void __stdcall OnPointerCursorOperation()
{
  signed __int32 v0; // esi
  const struct tagPOINTERCURSORDATA *v1; // [esp+0h] [ebp-8h]
  _BYTE v2[4]; // [esp+4h] [ebp-4h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)v2,
    "PointerCursorOperation",
    0);
  HandlePointerCursorSideOp();
  v0 = _InterlockedExchange(&Feedback::gppcdLatest, 0);
  if ( v0 )
  {
    RenderCursor(v1);
    _InterlockedCompareExchange(
      (volatile signed __int32 *)&(&Feedback::gppcdFree)[(v0 - (int)&Feedback::gpcd) / 0xCu],
      v0,
      0);
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v2);
}
