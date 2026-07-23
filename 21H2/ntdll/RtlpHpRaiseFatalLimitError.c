/*
 * XREFs of RtlpHpRaiseFatalLimitError @ 0x18010876C
 * Callers:
 *     HeapCommitFailAvoidTriageRules @ 0x180107E50 (HeapCommitFailAvoidTriageRules.c)
 *     RtlpHpHeapHandleError @ 0x1801084C0 (RtlpHpHeapHandleError.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     memset @ 0x1800A4740 (memset.c)
 *     RtlReportFatalFailure @ 0x1800FF500 (RtlReportFatalFailure.c)
 */

void __fastcall RtlpHpRaiseFatalLimitError(void *a1)
{
  EXCEPTION_RECORD v2; // [rsp+20h] [rbp-B8h] BYREF

  memset(&v2, 0, sizeof(v2));
  v2.ExceptionRecord = 0LL;
  v2.ExceptionCode = qword_180169810;
  v2.ExceptionInformation[0] = dword_1801697F8;
  v2.ExceptionInformation[1] = qword_180169800;
  v2.ExceptionInformation[2] = qword_180169818;
  v2.ExceptionInformation[3] = qword_180169820;
  v2.ExceptionFlags = 1;
  v2.ExceptionAddress = a1;
  v2.NumberParameters = 4;
  RtlReportFatalFailure(&v2);
}
