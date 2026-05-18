/*
 * XREFs of sub_18003EADC @ 0x18003EADC
 * Callers:
 *     sub_18003EB90 @ 0x18003EB90 (sub_18003EB90.c)
 * Callees:
 *     D2D1CreateFactory @ 0x18010E50E (D2D1CreateFactory.c)
 *     memset @ 0x18011E09A (memset.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

void __fastcall sub_18003EADC(__int64 a1)
{
  HRESULT v1; // eax
  ULONG_PTR v2; // rbx
  EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF
  D2D1_FACTORY_OPTIONS v4; // [rsp+C0h] [rbp-18h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+0h]

  if ( !*(_QWORD *)(a1 + 512) )
  {
    v4.debugLevel = D2D1_DEBUG_LEVEL_NONE;
    v1 = D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, &stru_18013DEB0, &v4, (void **)(a1 + 512));
    v2 = v1;
    if ( v1 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v2;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
  }
}
