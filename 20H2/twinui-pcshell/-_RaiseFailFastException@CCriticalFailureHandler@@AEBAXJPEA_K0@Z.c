/*
 * XREFs of ?_RaiseFailFastException@CCriticalFailureHandler@@AEBAXJPEA_K0@Z @ 0x18046C468
 * Callers:
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18046C03C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 *     ?_RaiseFailFastExceptionInvalidOXID@CCriticalFailureHandler@@AEBAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z @ 0x18046C554 (-_RaiseFailFastExceptionInvalidOXID@CCriticalFailureHandler@@AEBAXPEAU_EXCEPTION_RECORD@@PEAU_CO.c)
 */

void __fastcall CCriticalFailureHandler::_RaiseFailFastException(
        CCriticalFailureHandler *this,
        int a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  ULONG_PTR v5; // rbx
  unsigned int v7; // r9d
  __int64 v8; // rcx
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+28h] [rbp-59h] BYREF

  v5 = a2;
  memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
  pExceptionRecord.ExceptionCode = dword_1805C383C;
  v8 = 1LL;
  pExceptionRecord.NumberParameters = 1;
  pExceptionRecord.ExceptionFlags = 1;
  pExceptionRecord.ExceptionInformation[0] = v5;
  if ( a3 )
  {
    v8 = 2LL;
    pExceptionRecord.ExceptionInformation[1] = *a3;
    pExceptionRecord.NumberParameters = 2;
  }
  if ( a4 )
  {
    v8 = (unsigned int)(v8 + 1);
    pExceptionRecord.ExceptionInformation[2] = *a4;
    pExceptionRecord.NumberParameters = v8;
  }
  if ( (_DWORD)v5 == -2147418094 || (_DWORD)v5 == -2147022986 )
    CCriticalFailureHandler::_RaiseFailFastExceptionInvalidOXID(
      (CCriticalFailureHandler *)v8,
      &pExceptionRecord,
      (struct _CONTEXT *)1,
      v7);
  else
    RaiseFailFastException(&pExceptionRecord, 0LL, 1u);
}
