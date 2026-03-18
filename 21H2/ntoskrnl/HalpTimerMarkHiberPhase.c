/*
 * XREFs of HalpTimerMarkHiberPhase @ 0x14038D480
 * Callers:
 *     HaliLocateHiberRanges @ 0x140A4EB20 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 */

void __fastcall HalpTimerMarkHiberPhase(__int64 a1)
{
  if ( !a1 )
  {
    if ( HalpTimerReferencePage )
      PoSetHiberRange(0LL, 0x10000u, HalpTimerReferencePage, 0x1000uLL, 0x636C6168u);
  }
}
