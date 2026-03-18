/*
 * XREFs of DbgkpWakeTarget @ 0x140888570
 * Callers:
 *     DbgkClearProcessDebugObject @ 0x14076EE70 (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x140887290 (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x140888270 (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x1408889B0 (NtDebugContinue.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     PsResumeThread @ 0x1406BC3F0 (PsResumeThread.c)
 *     DbgkpFreeDebugEvent @ 0x140887524 (DbgkpFreeDebugEvent.c)
 */

void __fastcall DbgkpWakeTarget(char *P, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v4; // eax
  struct _EX_RUNDOWN_REF *v6; // rdi

  v4 = *((_DWORD *)P + 19);
  v6 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)P + 8);
  if ( (v4 & 0x20) != 0 )
  {
    PsResumeThread(*((_QWORD *)P + 8), 0LL, a3, a4);
    v4 = *((_DWORD *)P + 19);
  }
  if ( (v4 & 8) != 0 )
  {
    ExReleaseRundownProtection_0(v6 + 159);
    v4 = *((_DWORD *)P + 19);
  }
  if ( (v4 & 2) != 0 )
    DbgkpFreeDebugEvent(P);
  else
    KeSetEvent((PRKEVENT)(P + 16), 0, 0);
}
