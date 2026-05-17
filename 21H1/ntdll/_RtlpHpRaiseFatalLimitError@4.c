/*
 * XREFs of _RtlpHpRaiseFatalLimitError@4 @ 0x4B36DBB0
 * Callers:
 *     _HeapCommitFailAvoidTriageRules@0 @ 0x4B36D480 (_HeapCommitFailAvoidTriageRules@0.c)
 *     _RtlpHpHeapHandleError@12 @ 0x4B36D980 (_RtlpHpHeapHandleError@12.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlReportFatalFailure@4 @ 0x4B366A5D (_RtlReportFatalFailure@4.c)
 */

void __thiscall __noreturn RtlpHpRaiseFatalLimitError(void *this)
{
  EXCEPTION_RECORD v2; // [esp+8h] [ebp-58h] BYREF

  memset(&v2, 0, sizeof(v2));
  v2.ExceptionRecord = 0;
  v2.ExceptionCode = dword_4B3A3974;
  v2.ExceptionInformation[0] = dword_4B3A3968;
  v2.ExceptionInformation[1] = dword_4B3A396C;
  v2.ExceptionInformation[2] = dword_4B3A3978;
  v2.ExceptionFlags = 1;
  v2.ExceptionAddress = this;
  v2.NumberParameters = 4;
  v2.ExceptionInformation[3] = dword_4B3A397C;
  RtlReportFatalFailure(&v2);
}
