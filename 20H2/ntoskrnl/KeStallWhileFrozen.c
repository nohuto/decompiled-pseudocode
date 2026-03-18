/*
 * XREFs of KeStallWhileFrozen @ 0x14051C000
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckStall @ 0x14051C240 (KiCheckStall.c)
 */

__int64 KeStallWhileFrozen()
{
  return KiCheckStall(KeGetCurrentPrcb(), 0LL);
}
