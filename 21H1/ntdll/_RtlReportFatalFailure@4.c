/*
 * XREFs of _RtlReportFatalFailure@4 @ 0x4B366A5D
 * Callers:
 *     _RtlReportCriticalFailure@12 @ 0x4B3669C7 (_RtlReportCriticalFailure@12.c)
 *     _RtlpHpRaiseFatalLimitError@4 @ 0x4B36DBB0 (_RtlpHpRaiseFatalLimitError@4.c)
 * Callees:
 *     _ZwTerminateProcess@8 @ 0x4B2F2C40 (_ZwTerminateProcess@8.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlRaiseException@4 @ 0x4B308940 (_RtlRaiseException@4.c)
 *     _RtlReportException@12 @ 0x4B33A4D0 (_RtlReportException@12.c)
 */

void __thiscall __noreturn RtlReportFatalFailure(EXCEPTION_RECORD *this)
{
  RtlRaiseException(this);
}
