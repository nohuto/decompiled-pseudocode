/*
 * XREFs of _RaiseException@16 @ 0x4B2FD740
 * Callers:
 *     __raise_exc_ex @ 0x4B2FDB09 (__raise_exc_ex.c)
 * Callees:
 *     _RtlRaiseException@4 @ 0x4B308940 (_RtlRaiseException@4.c)
 */

void __stdcall __noreturn RaiseException(
        DWORD dwExceptionCode,
        DWORD dwExceptionFlags,
        DWORD nNumberOfArguments,
        const ULONG_PTR *lpArguments)
{
  DWORD v4; // ecx
  EXCEPTION_RECORD ExceptionRecord; // [esp+4h] [ebp-54h] BYREF

  ExceptionRecord.ExceptionRecord = 0;
  ExceptionRecord.ExceptionCode = dwExceptionCode;
  ExceptionRecord.ExceptionFlags = dwExceptionFlags & 1;
  ExceptionRecord.ExceptionAddress = RaiseException;
  if ( lpArguments )
  {
    v4 = nNumberOfArguments;
    if ( nNumberOfArguments > 0xF )
      v4 = 15;
    ExceptionRecord.NumberParameters = v4;
    if ( v4 )
      qmemcpy(ExceptionRecord.ExceptionInformation, lpArguments, 4 * v4);
  }
  else
  {
    ExceptionRecord.NumberParameters = 0;
  }
  RtlRaiseException(&ExceptionRecord);
}
