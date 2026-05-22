/*
 * XREFs of ?ServerRectChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBXAEBUtagRECT@@@Z @ 0x1800F0E24
 * Callers:
 *     ?OnTouchpadRectChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x1800F0AA0 (-OnTouchpadRectChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018CC0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1800919C8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall InputTraceLogging::VirtualTouchpad::ServerRectChanged(__int64 a1, const struct tagRECT *a2)
{
  LPVOID v4; // rax
  __int64 v5; // r9
  LONG top; // [rsp+50h] [rbp-18h] BYREF
  LONG left; // [rsp+54h] [rbp-14h] BYREF
  __int64 v8; // [rsp+58h] [rbp-10h] BYREF
  LONG bottom; // [rsp+80h] [rbp+18h] BYREF
  LONG right; // [rsp+88h] [rbp+20h] BYREF

  v4 = wil::details::static_lazy<InputTraceLogging>::get(
         a1,
         _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v4 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v4 + 1), 512LL) )
  {
    bottom = a2->bottom;
    right = a2->right;
    top = a2->top;
    left = a2->left;
    v8 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v5,
      byte_1801CE276,
      0LL,
      v5,
      (__int64)&v8,
      (__int64)&left,
      (__int64)&top,
      (__int64)&right,
      (__int64)&bottom);
  }
}
