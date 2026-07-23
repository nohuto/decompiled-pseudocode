/*
 * XREFs of KeStallWhileFrozen @ 0x14051DD20
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckStall @ 0x14051DF60 (KiCheckStall.c)
 */

__int64 KeStallWhileFrozen()
{
  return KiCheckStall(KeGetCurrentPrcb(), 0LL);
}
