/*
 * XREFs of _xxxWaitMessageEx@12 @ 0xA19D2
 * Callers:
 *     _NtUserWaitMessage@0 @ 0xA3C46 (_NtUserWaitMessage@0.c)
 *     _xxxOldNextWindow@4 @ 0x15D8AF (_xxxOldNextWindow@4.c)
 *     _xxxMoveSize@12 @ 0x177959 (_xxxMoveSize@12.c)
 *     _xxxMNLoop@16 @ 0x195C44 (_xxxMNLoop@16.c)
 *     _xxxHelpLoop@4 @ 0x1AC7AC (_xxxHelpLoop@4.c)
 * Callees:
 *     _xxxSleepThread2@20 @ 0x4510E (_xxxSleepThread2@20.c)
 *     _IsInsideMPH@0 @ 0xA19FC (_IsInsideMPH@0.c)
 *     _ClientWaitMessageExMPH@8 @ 0x18A18E (_ClientWaitMessageExMPH@8.c)
 */

int __thiscall xxxWaitMessageEx(void *this, int a2)
{
  if ( IsInsideMPH() )
    return ClientWaitMessageExMPH(this);
  else
    return xxxSleepThread2(1u, 0, a2);
}
