/*
 * XREFs of ?TouchpadRect@VirtualTouchpad@InputTraceLogging@@SAX_KAEBUtagRECT@@@Z @ 0x180049394
 * Callers:
 *     ?Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1800444B0 (-Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180018CA0 (-Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1800919C8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall InputTraceLogging::VirtualTouchpad::TouchpadRect(__int64 a1, const struct tagRECT *a2)
{
  const struct _tlgProvider_t *v4; // rax
  int v5; // r9d
  LONG bottom; // ecx
  LONG top; // [rsp+50h] [rbp-18h] BYREF
  LONG left; // [rsp+54h] [rbp-14h] BYREF
  __int64 v9; // [rsp+58h] [rbp-10h] BYREF
  LONG v10; // [rsp+80h] [rbp+18h] BYREF
  LONG right; // [rsp+88h] [rbp+20h] BYREF

  v4 = InputTraceLogging::Provider(a1);
  if ( *(_DWORD *)v4 > 4u && tlgKeywordOn((__int64)v4, 512LL) )
  {
    bottom = a2->bottom;
    top = a2->top;
    left = a2->left;
    v10 = bottom;
    right = a2->right;
    v9 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v5,
      (unsigned int)&unk_1801CF66A,
      0,
      v5,
      (__int64)&v9,
      (__int64)&left,
      (__int64)&top,
      (__int64)&right,
      (__int64)&v10);
  }
}
