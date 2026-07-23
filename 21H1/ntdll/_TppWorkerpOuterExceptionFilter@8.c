/*
 * XREFs of _TppWorkerpOuterExceptionFilter@8 @ 0x4B38516A
 * Callers:
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 * Callees:
 *     _RtlReportException@12 @ 0x4B33A4D0 (_RtlReportException@12.c)
 *     _TppExceptionFilter@8 @ 0x4B384794 (_TppExceptionFilter@8.c)
 *     _TppTerminateProcess@4 @ 0x4B38492C (_TppTerminateProcess@4.c)
 */

LONG __fastcall TppWorkerpOuterExceptionFilter(_EXCEPTION_POINTERS *a1, _DWORD *a2)
{
  LONG v3; // esi
  EXCEPTION_RECORD *ExceptionRecord; // eax

  if ( *a2 )
  {
    v3 = 0;
    *a2 = 0;
  }
  else
  {
    v3 = TppExceptionFilter(a1);
    if ( v3 == 1 )
    {
      ExceptionRecord = a1->ExceptionRecord;
      if ( a1->ExceptionRecord->ExceptionCode != -1073741571 )
        ExceptionRecord = (EXCEPTION_RECORD *)TppTerminateProcess((NTSTATUS **)a1);
      RtlReportException(ExceptionRecord, a1->ContextRecord, 3u);
    }
  }
  return v3;
}
