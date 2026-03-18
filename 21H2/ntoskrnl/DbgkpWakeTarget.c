/*
 * XREFs of DbgkpWakeTarget @ 0x1409289DC
 * Callers:
 *     DbgkClearProcessDebugObject @ 0x1406E9FB0 (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x1409276D0 (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x1409286EC (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x140928E80 (NtDebugContinue.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     PsMultiResumeThread @ 0x1402EEA18 (PsMultiResumeThread.c)
 *     DbgkpFreeDebugEvent @ 0x140927964 (DbgkpFreeDebugEvent.c)
 */

void __fastcall DbgkpWakeTarget(char *P)
{
  int v1; // eax
  struct _EX_RUNDOWN_REF *v3; // rdi

  v1 = *((_DWORD *)P + 19);
  v3 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)P + 8);
  if ( (v1 & 0x20) != 0 )
  {
    PsMultiResumeThread(*((_QWORD *)P + 8), 0LL, 1u);
    v1 = *((_DWORD *)P + 19);
  }
  if ( (v1 & 8) != 0 )
  {
    ExReleaseRundownProtection(v3 + 169);
    v1 = *((_DWORD *)P + 19);
  }
  if ( (v1 & 2) != 0 )
    DbgkpFreeDebugEvent(P);
  else
    KeSetEvent((PRKEVENT)(P + 16), 0, 0);
}
