/*
 * XREFs of RaiseException @ 0x1403D2DE0
 * Callers:
 *     _raise_exc_ex @ 0x1403D2ED0 (_raise_exc_ex.c)
 * Callees:
 *     RtlRaiseException @ 0x1402E6830 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 */

void __cdecl RaiseException(
        DWORD dwExceptionCode,
        DWORD dwExceptionFlags,
        DWORD nNumberOfArguments,
        const ULONG_PTR *lpArguments)
{
  char v4; // di
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-C8h] BYREF

  v4 = dwExceptionFlags;
  memset(&ExceptionRecord.NumberParameters + 1, 0, 0x7CuLL);
  HIDWORD(ExceptionRecord.ExceptionRecord) = 0;
  ExceptionRecord.ExceptionAddress = RaiseException;
  ExceptionRecord.ExceptionCode = dwExceptionCode;
  *(_QWORD *)&ExceptionRecord.ExceptionFlags = v4 & 1;
  if ( lpArguments )
  {
    if ( nNumberOfArguments > 0xF )
      nNumberOfArguments = 15;
    ExceptionRecord.NumberParameters = nNumberOfArguments;
    if ( nNumberOfArguments )
      memmove(ExceptionRecord.ExceptionInformation, lpArguments, 8LL * nNumberOfArguments);
  }
  else
  {
    ExceptionRecord.NumberParameters = 0;
  }
  RtlRaiseException(&ExceptionRecord);
}
