/*
 * XREFs of GetPerfDomain @ 0x1C0025284
 * Callers:
 *     InitLegacyPccInternal @ 0x1C000DF4C (InitLegacyPccInternal.c)
 *     ValidatePerfDomainSymmetry @ 0x1C00245DC (ValidatePerfDomainSymmetry.c)
 *     InitPerfStatesInternal @ 0x1C002480C (InitPerfStatesInternal.c)
 *     CpcHighestNotifyWorker @ 0x1C002D9E4 (CpcHighestNotifyWorker.c)
 *     RegisterHvLegacyPcc @ 0x1C0030390 (RegisterHvLegacyPcc.c)
 *     RegisterHvPerfStates @ 0x1C0030AF0 (RegisterHvPerfStates.c)
 *     InitCpcStatesInternal @ 0x1C0033C90 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C00351F4 (InitPerfFeedbackInternal.c)
 *     RegisterKernelPepPerf @ 0x1C0036610 (RegisterKernelPepPerf.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C0001524 (InitializeEnumerationContext.c)
 *     InitializeSingleEnumerationContext @ 0x1C00086D4 (InitializeSingleEnumerationContext.c)
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
