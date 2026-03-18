/*
 * XREFs of KeGetClockOwner @ 0x1403F1870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 KeGetClockOwner()
{
  return (unsigned int)KiClockTimerOwner;
}
