/*
 * XREFs of TppWorkerpInnerExceptionFilter @ 0x180113008
 * Callers:
 *     TppWorkerThread @ 0x180052B20 (TppWorkerThread.c)
 * Callees:
 *     RtlReportException @ 0x1800DCCF0 (RtlReportException.c)
 *     TppExceptionFilter @ 0x1801124F4 (TppExceptionFilter.c)
 *     TppTerminateProcess @ 0x1801126E0 (TppTerminateProcess.c)
 */

__int64 __fastcall TppWorkerpInnerExceptionFilter(_EXCEPTION_POINTERS *a1, __int64 a2, _DWORD *a3)
{
  LONG v5; // eax
  unsigned __int32 v6; // ebx
  EXCEPTION_RECORD *ExceptionRecord; // rcx

  v5 = TppExceptionFilter(a1, a2);
  v6 = v5;
  if ( !v5 )
    *a3 = 1;
  if ( v5 == 1 )
  {
    ExceptionRecord = a1->ExceptionRecord;
    if ( a1->ExceptionRecord->ExceptionCode == -1073741571 )
    {
      RtlReportException(ExceptionRecord, a1->ContextRecord, 3u);
    }
    else
    {
      if ( ExceptionRecord->ExceptionCode <= -1073740022
        || ExceptionRecord->ExceptionCode > -1073740018 && ExceptionRecord->ExceptionCode != -1073740016 )
      {
        TppTerminateProcess((NTSTATUS **)a1);
        __debugbreak();
      }
      return (unsigned __int32)-1;
    }
  }
  return v6;
}
