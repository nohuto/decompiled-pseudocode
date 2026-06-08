/*
 * XREFs of ResetEnumerationContext @ 0x1C0003A38
 * Callers:
 *     ComputeProcessorEnergyMsrEx @ 0x1C0005F20 (ComputeProcessorEnergyMsrEx.c)
 *     InitLegacyPccInternal @ 0x1C000DF4C (InitLegacyPccInternal.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C00257B0 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C00258A0 (RetrieveEfficiencyClassInformation.c)
 *     ValidatePerfDomainSymmetry @ 0x1C0025980 (ValidatePerfDomainSymmetry.c)
 *     InitPerfStatesInternal @ 0x1C0025BB0 (InitPerfStatesInternal.c)
 *     ProcLibTraceControlCallback @ 0x1C0027930 (ProcLibTraceControlCallback.c)
 *     CpcHighestNotifyWorker @ 0x1C002ED44 (CpcHighestNotifyWorker.c)
 *     RegisterHvLegacyPcc @ 0x1C00316F0 (RegisterHvLegacyPcc.c)
 *     RegisterHvPerfStates @ 0x1C0031E50 (RegisterHvPerfStates.c)
 *     InitCpcStatesInternal @ 0x1C0035000 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0036570 (InitPerfFeedbackInternal.c)
 *     RegisterKernelPepPerf @ 0x1C0037A50 (RegisterKernelPepPerf.c)
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
