/*
 * XREFs of KeStallWhileFrozen @ 0x140518630
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckStall @ 0x140518870 (KiCheckStall.c)
 */

__int64 KeStallWhileFrozen()
{
  return KiCheckStall(KeGetCurrentPrcb(), 0LL);
}
