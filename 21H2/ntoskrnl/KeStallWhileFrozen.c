/*
 * XREFs of KeStallWhileFrozen @ 0x14051DAE0
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckStall @ 0x14051DD20 (KiCheckStall.c)
 */

__int64 KeStallWhileFrozen()
{
  return KiCheckStall(KeGetCurrentPrcb(), 0LL);
}
