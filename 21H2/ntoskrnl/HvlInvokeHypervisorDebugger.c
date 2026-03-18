/*
 * XREFs of HvlInvokeHypervisorDebugger @ 0x1405433C0
 * Callers:
 *     KeAccumulateTicks @ 0x1403078A0 (KeAccumulateTicks.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14039DF00 (HvcallInitiateHypercall.c)
 */

__int64 HvlInvokeHypervisorDebugger()
{
  __int64 result; // rax

  result = HvlpFlags;
  if ( (HvlpFlags & 2) == 0 || (result = HvlpRootFlags, (HvlpRootFlags & 1) != 0) )
  {
    if ( HvlHypervisorConnected )
      return HvcallInitiateHypercall(65546);
  }
  return result;
}
