/*
 * XREFs of KeStallWhileFrozen @ 0x140517FE0
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckStall @ 0x140518220 (KiCheckStall.c)
 */

__int64 KeStallWhileFrozen()
{
  return KiCheckStall(KeGetCurrentPrcb(), 0LL);
}
