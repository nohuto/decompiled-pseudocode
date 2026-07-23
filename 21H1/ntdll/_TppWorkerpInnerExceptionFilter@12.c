/*
 * XREFs of _TppWorkerpInnerExceptionFilter@12 @ 0x4B385109
 * Callers:
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 * Callees:
 *     _RtlReportException@12 @ 0x4B33A4D0 (_RtlReportException@12.c)
 *     _TppExceptionFilter@8 @ 0x4B384794 (_TppExceptionFilter@8.c)
 *     _TppTerminateProcess@4 @ 0x4B38492C (_TppTerminateProcess@4.c)
 */

int __thiscall TppWorkerpInnerExceptionFilter(_EXCEPTION_POINTERS *this, _DWORD *a2)
{
  LONG v3; // esi
  EXCEPTION_RECORD *ExceptionRecord; // eax

  v3 = TppExceptionFilter(this);
  if ( !v3 )
    *a2 = 1;
  if ( v3 == 1 )
  {
    ExceptionRecord = this->ExceptionRecord;
    if ( this->ExceptionRecord->ExceptionCode != -1073741571 )
    {
      if ( ExceptionRecord->ExceptionCode > -1073740022
        && (ExceptionRecord->ExceptionCode <= -1073740018 || ExceptionRecord->ExceptionCode == -1073740016) )
      {
        return -1;
      }
      ExceptionRecord = (EXCEPTION_RECORD *)TppTerminateProcess((NTSTATUS **)this);
    }
    RtlReportException(ExceptionRecord, this->ContextRecord, 3u);
  }
  return v3;
}
