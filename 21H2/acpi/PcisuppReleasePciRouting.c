/*
 * XREFs of PcisuppReleasePciRouting @ 0x1C00B6C48
 * Callers:
 *     PcisuppAcquirePciInterfaces @ 0x1C00906FC (PcisuppAcquirePciInterfaces.c)
 *     PcisuppReleasePciInterfaces @ 0x1C00B6B38 (PcisuppReleasePciInterfaces.c)
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
