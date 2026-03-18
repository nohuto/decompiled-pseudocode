/*
 * XREFs of PcisuppReleasePciRouting @ 0x1C00B6928
 * Callers:
 *     PcisuppAcquirePciInterfaces @ 0x1C00903EC (PcisuppAcquirePciInterfaces.c)
 *     PcisuppReleasePciInterfaces @ 0x1C00B6818 (PcisuppReleasePciInterfaces.c)
 * Callees:
 *     <none>
 */

void PcisuppReleasePciRouting()
{
  if ( InterruptRouting )
  {
    ExFreePoolWithTag(InterruptRouting, 0);
    InterruptRouting = 0LL;
  }
}
