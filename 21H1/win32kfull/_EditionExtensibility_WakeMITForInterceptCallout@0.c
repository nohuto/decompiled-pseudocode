/*
 * XREFs of _EditionExtensibility_WakeMITForInterceptCallout@0 @ 0x1478B1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall EditionExtensibility_WakeMITForInterceptCallout()
{
  if ( !_InterlockedCompareExchange(&glDitMouseHandling, 1, 1) )
    return 0;
  EtwTraceWakeDIT(4);
  return WakeDIT(4u);
}
