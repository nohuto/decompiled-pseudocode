/*
 * XREFs of ResetEnumerationContext @ 0x1C0003A38
 * Callers:
 *     ComputeProcessorEnergyMsrEx @ 0x1C0005F10 (ComputeProcessorEnergyMsrEx.c)
 *     InitLegacyPccInternal @ 0x1C000DF4C (InitLegacyPccInternal.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C002440C (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C00244FC (RetrieveEfficiencyClassInformation.c)
 *     ValidatePerfDomainSymmetry @ 0x1C00245DC (ValidatePerfDomainSymmetry.c)
 *     InitPerfStatesInternal @ 0x1C002480C (InitPerfStatesInternal.c)
 *     ProcLibTraceControlCallback @ 0x1C0026590 (ProcLibTraceControlCallback.c)
 *     CpcHighestNotifyWorker @ 0x1C002D9E4 (CpcHighestNotifyWorker.c)
 *     RegisterHvLegacyPcc @ 0x1C0030390 (RegisterHvLegacyPcc.c)
 *     RegisterHvPerfStates @ 0x1C0030AF0 (RegisterHvPerfStates.c)
 *     InitCpcStatesInternal @ 0x1C0033C90 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C00351F4 (InitPerfFeedbackInternal.c)
 *     RegisterKernelPepPerf @ 0x1C0036610 (RegisterKernelPepPerf.c)
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
