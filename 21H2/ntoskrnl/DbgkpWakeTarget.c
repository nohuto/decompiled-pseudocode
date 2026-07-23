/*
 * XREFs of DbgkpWakeTarget @ 0x140885C70
 * Callers:
 *     DbgkClearProcessDebugObject @ 0x140773150 (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x140884990 (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x140885970 (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x1408860B0 (NtDebugContinue.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     PsResumeThread @ 0x140641B00 (PsResumeThread.c)
 *     DbgkpFreeDebugEvent @ 0x140884C24 (DbgkpFreeDebugEvent.c)
 */

void __fastcall DbgkpWakeTarget(char *P)
{
  int v1; // eax
  struct _EX_RUNDOWN_REF *v3; // rdi

  v1 = *((_DWORD *)P + 19);
  v3 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)P + 8);
  if ( (v1 & 0x20) != 0 )
  {
    PsResumeThread(*((_QWORD *)P + 8), 0LL);
    v1 = *((_DWORD *)P + 19);
  }
  if ( (v1 & 8) != 0 )
  {
    ExReleaseRundownProtection(v3 + 159);
    v1 = *((_DWORD *)P + 19);
  }
  if ( (v1 & 2) != 0 )
    DbgkpFreeDebugEvent(P);
  else
    KeSetEvent((PRKEVENT)(P + 16), 0, 0);
}
