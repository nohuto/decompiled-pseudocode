/*
 * XREFs of ?Worker@CTDR_SUBMIT_REPORT_THREAD@@MEAAXXZ @ 0x1C02661F0
 * Callers:
 *     <none>
 * Callees:
 *     ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C02657C4 (-TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 */

void __fastcall CTDR_SUBMIT_REPORT_THREAD::Worker(CTDR_SUBMIT_REPORT_THREAD *this)
{
  TdrDereferenceRecoveryContext(*((_QWORD **)this + 3), 0);
}
