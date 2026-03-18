/*
 * XREFs of ?Worker@CTDR_SUBMIT_REPORT_THREAD@@MEAAXXZ @ 0x1C0306D00
 * Callers:
 *     <none>
 * Callees:
 *     ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0306300 (-TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 */

void __fastcall CTDR_SUBMIT_REPORT_THREAD::Worker(CTDR_SUBMIT_REPORT_THREAD *this, __int64 a2, __int64 a3, __int64 a4)
{
  TdrDereferenceRecoveryContext(*((_QWORD **)this + 3), 0, a3, a4);
}
