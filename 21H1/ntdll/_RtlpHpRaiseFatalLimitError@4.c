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
  size_t v2; // [esp-4h] [ebp-64h]
  EXCEPTION_RECORD v3; // [esp+8h] [ebp-58h] BYREF

  LODWORD(v2) = 80;
  memset(&v3, 0, v2);
  v3.ExceptionRecord = 0;
  v3.ExceptionCode = dword_4B3A3974;
  v3.ExceptionInformation[0] = dword_4B3A3968;
  v3.ExceptionInformation[1] = dword_4B3A396C;
  v3.ExceptionInformation[2] = dword_4B3A3978;
  v3.ExceptionFlags = 1;
  v3.ExceptionAddress = this;
  v3.NumberParameters = 4;
  v3.ExceptionInformation[3] = dword_4B3A397C;
  RtlReportFatalFailure(&v3);
}
