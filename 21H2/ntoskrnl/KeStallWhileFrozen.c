/*
 * XREFs of KeStallWhileFrozen @ 0x140573650
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckStall @ 0x140302560 (KiCheckStall.c)
 */

__int64 KeStallWhileFrozen()
{
  return KiCheckStall((__int64)KeGetCurrentPrcb(), 0);
}
