/*
 * XREFs of ResetEnumerationContext @ 0x1C0001AD4
 * Callers:
 *     InitLegacyPccInternal @ 0x1C000AE18 (InitLegacyPccInternal.c)
 *     ProcLibTraceControlCallback @ 0x1C001E5F0 (ProcLibTraceControlCallback.c)
 *     CpcHighestNotifyWorker @ 0x1C0023004 (CpcHighestNotifyWorker.c)
 *     RegisterHvLegacyPcc @ 0x1C0024470 (RegisterHvLegacyPcc.c)
 *     RegisterHvPerfStates @ 0x1C0024BD0 (RegisterHvPerfStates.c)
 *     ValidatePerfDomainSymmetry @ 0x1C002CF48 (ValidatePerfDomainSymmetry.c)
 *     InitCpcStatesInternal @ 0x1C002DEF8 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C002F464 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C002F820 (InitPerfStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C0031710 (RegisterKernelPepPerf.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C00354E8 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C00357C8 (RetrieveEfficiencyClassInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResetEnumerationContext(__int64 *a1)
{
  __int64 result; // rax

  if ( a1[2] )
  {
    *((_BYTE *)a1 + 24) = 0;
  }
  else
  {
    result = *a1;
    a1[1] = *a1;
  }
  return result;
}
