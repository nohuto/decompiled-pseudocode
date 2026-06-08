/*
 * XREFs of EnumerateNextDevice @ 0x1C00039EC
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
