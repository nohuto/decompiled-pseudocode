/*
 * XREFs of RaiseException @ 0x1C0012970
 * Callers:
 *     _raise_exc_ex @ 0x1C0012A60 (_raise_exc_ex.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00121B0 (__security_check_cookie.c)
 *     RtlRaiseException_0 @ 0x1C0012E34 (RtlRaiseException_0.c)
 *     memmove @ 0x1C0013AC0 (memmove.c)
 *     memset @ 0x1C0013D80 (memset.c)
 */

void __fastcall RaiseException(DWORD a1, char a2, DWORD a3, const void *a4)
{
  _EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-C8h] BYREF

  memset(&ExceptionRecord.NumberParameters + 1, 0, 0x7CuLL);
  HIDWORD(ExceptionRecord.ExceptionRecord) = 0;
  ExceptionRecord.ExceptionAddress = &RaiseException;
  ExceptionRecord.ExceptionCode = a1;
  *(_QWORD *)&ExceptionRecord.ExceptionFlags = a2 & 1;
  if ( a4 )
  {
    if ( a3 > 0xF )
      a3 = 15;
    ExceptionRecord.NumberParameters = a3;
    if ( a3 )
      memmove(ExceptionRecord.ExceptionInformation, a4, 8LL * a3);
  }
  else
  {
    ExceptionRecord.NumberParameters = 0;
  }
  RtlRaiseException_0(&ExceptionRecord);
}
