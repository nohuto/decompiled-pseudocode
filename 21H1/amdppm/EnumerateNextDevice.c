/*
 * XREFs of EnumerateNextDevice @ 0x1C0001860
 * Callers:
 *     ComputeProcessorEnergyUsingMsr @ 0x1C00013A0 (ComputeProcessorEnergyUsingMsr.c)
 *     ComputeHyperThreadedProcessorEnergyUsingMsr @ 0x1C0001560 (ComputeHyperThreadedProcessorEnergyUsingMsr.c)
 *     InitLegacyPccInternal @ 0x1C000A5E8 (InitLegacyPccInternal.c)
 *     ProcLibTraceControlCallback @ 0x1C001C5F0 (ProcLibTraceControlCallback.c)
 *     CpcHighestNotifyWorker @ 0x1C00207F0 (CpcHighestNotifyWorker.c)
 *     RegisterHvLegacyPcc @ 0x1C0021C60 (RegisterHvLegacyPcc.c)
 *     RegisterHvPerfStates @ 0x1C00223C0 (RegisterHvPerfStates.c)
 *     ValidatePerfDomainSymmetry @ 0x1C002AEB0 (ValidatePerfDomainSymmetry.c)
 *     InitCpcStatesInternal @ 0x1C002BE58 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C002D3C4 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C002D780 (InitPerfStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C002F5B0 (RegisterKernelPepPerf.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C0033108 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C00333E8 (RetrieveEfficiencyClassInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EnumerateNextDevice(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 *v7; // rcx
  __int64 v8; // r8

  v2 = a1[2];
  *a2 = 0LL;
  if ( v2 )
  {
    if ( !*((_BYTE *)a1 + 24) )
    {
      *((_BYTE *)a1 + 24) = 1;
      result = 0LL;
      *a2 = v2;
      return result;
    }
  }
  else
  {
    v6 = *a1;
    if ( *a1 )
    {
      v7 = (__int64 *)a1[1];
      v8 = *v7;
      a1[1] = *v7;
      if ( v8 != v6 )
      {
        *a2 = v8 - *((unsigned int *)a1 + 6);
        return 0LL;
      }
    }
  }
  return 3221226021LL;
}
