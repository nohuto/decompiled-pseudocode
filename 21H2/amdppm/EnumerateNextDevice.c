/*
 * XREFs of EnumerateNextDevice @ 0x1C0001650
 * Callers:
 *     ComputeHyperThreadedProcessorEnergyUsingMsr @ 0x1C0001350 (ComputeHyperThreadedProcessorEnergyUsingMsr.c)
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
