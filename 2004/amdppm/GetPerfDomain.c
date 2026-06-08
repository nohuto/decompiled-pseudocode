/*
 * XREFs of GetPerfDomain @ 0x1C0028D38
 * Callers:
 *     InitLegacyPccInternal @ 0x1C000A5E8 (InitLegacyPccInternal.c)
 *     CpcHighestNotifyWorker @ 0x1C00207F0 (CpcHighestNotifyWorker.c)
 *     RegisterHvLegacyPcc @ 0x1C0021C60 (RegisterHvLegacyPcc.c)
 *     RegisterHvPerfStates @ 0x1C00223C0 (RegisterHvPerfStates.c)
 *     ValidatePerfDomainSymmetry @ 0x1C002AEB0 (ValidatePerfDomainSymmetry.c)
 *     InitCpcStatesInternal @ 0x1C002BE58 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C002D3C4 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C002D780 (InitPerfStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C002F5B0 (RegisterKernelPepPerf.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C0001BBC (InitializeEnumerationContext.c)
 *     InitializeSingleEnumerationContext @ 0x1C0002CEC (InitializeSingleEnumerationContext.c)
 */

__int64 __fastcall GetPerfDomain(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // edx
  unsigned int v7; // r9d

  v4 = *(_QWORD *)(a1 + 544);
  if ( v4 )
  {
    *a3 = *(_DWORD *)(v4 + 40);
    v5 = a2;
    v6 = 552;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 1064);
    if ( !v4 || *(_DWORD *)(v4 + 36) <= 1u )
    {
      *a3 = 0;
      InitializeSingleEnumerationContext(a1, a2);
      return v7;
    }
    *a3 = 1;
    v5 = a2;
    v6 = 1072;
  }
  InitializeEnumerationContext(v4 + 16, v6, v5);
  return v7;
}
