/*
 * XREFs of HvlQueryHvHwpPerfSupport @ 0x140549E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HvlQueryHvHwpPerfSupport()
{
  return HvlpRootSchedulerEnabled == 0;
}
