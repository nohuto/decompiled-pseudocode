/*
 * XREFs of HalpTimerMarkHiberPhase @ 0x1404B4FC4
 * Callers:
 *     HaliLocateHiberRanges @ 0x140999550 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x140387900 (PoSetHiberRange.c)
 */

void __fastcall HalpTimerMarkHiberPhase(__int64 a1)
{
  if ( !a1 )
  {
    if ( HalpTimerReferencePage )
      PoSetHiberRange(0LL, 0x10000u, HalpTimerReferencePage, 0x1000uLL, 0x636C6168u);
  }
}
