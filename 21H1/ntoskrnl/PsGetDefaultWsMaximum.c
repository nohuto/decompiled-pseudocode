/*
 * XREFs of PsGetDefaultWsMaximum @ 0x1403284D8
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1406F0E98 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 PsGetDefaultWsMaximum()
{
  return PspMaximumWorkingSet;
}
