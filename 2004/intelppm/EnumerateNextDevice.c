/*
 * XREFs of EnumerateNextDevice @ 0x1C00039EC
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

__int64 __fastcall EnumerateNextDevice(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // r8
  unsigned int v4; // r9d
  __int64 v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // r8

  *a2 = 0LL;
  v3 = a1[2];
  v4 = -1073741275;
  if ( v3 )
  {
    if ( *((_BYTE *)a1 + 24) )
      return v4;
    *((_BYTE *)a1 + 24) = 1;
    goto LABEL_5;
  }
  v5 = *a1;
  if ( *a1 )
  {
    v6 = (__int64 *)a1[1];
    v7 = *v6;
    a1[1] = *v6;
    if ( v7 != v5 )
    {
      v3 = v7 - *((unsigned int *)a1 + 6);
LABEL_5:
      *a2 = v3;
      return 0;
    }
  }
  return v4;
}
