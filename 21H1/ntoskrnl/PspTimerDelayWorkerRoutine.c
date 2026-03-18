/*
 * XREFs of PspTimerDelayWorkerRoutine @ 0x14057CD60
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     PspApplyTimerDelayProcess @ 0x14057C468 (PspApplyTimerDelayProcess.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PspTimerDelayWorkerRoutine(_QWORD *P)
{
  __int64 v2; // r8

  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(P[4] + 1112LL)) )
  {
    PspApplyTimerDelayProcess(P[4], 0LL, v2);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(P[4] + 1112LL));
  }
  ObfDereferenceObjectWithTag((PVOID)P[4], 0x624A7350u);
  ExFreePoolWithTag(P, 0x65446954u);
}
