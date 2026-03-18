/*
 * XREFs of PcisuppReleasePciRouting @ 0x1C00B629C
 * Callers:
 *     PcisuppAcquirePciInterfaces @ 0x1C00A115C (PcisuppAcquirePciInterfaces.c)
 *     PcisuppReleasePciInterfaces @ 0x1C00B61A0 (PcisuppReleasePciInterfaces.c)
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
