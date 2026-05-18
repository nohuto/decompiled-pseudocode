/*
 * XREFs of sub_1800443AC @ 0x1800443AC
 * Callers:
 *     sub_180044460 @ 0x180044460 (sub_180044460.c)
 * Callees:
 *     D2D1CreateFactory @ 0x180113DDE (D2D1CreateFactory.c)
 *     memset @ 0x18012396A (memset.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

void __fastcall sub_1800443AC(__int64 a1)
{
  HRESULT v1; // eax
  ULONG_PTR v2; // rbx
  EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF
  D2D1_FACTORY_OPTIONS v4; // [rsp+C0h] [rbp-18h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+0h]

  if ( !*(_QWORD *)(a1 + 512) )
  {
    v4.debugLevel = D2D1_DEBUG_LEVEL_NONE;
    v1 = D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, &stru_180144200, &v4, (void **)(a1 + 512));
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
