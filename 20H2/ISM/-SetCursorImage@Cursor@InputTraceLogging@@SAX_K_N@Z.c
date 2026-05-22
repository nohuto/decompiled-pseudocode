/*
 * XREFs of ?SetCursorImage@Cursor@InputTraceLogging@@SAX_K_N@Z @ 0x180140244
 * Callers:
 *     ?SetVisible@SystemCursorShape@@QEAAJ_N@Z @ 0x180140590 (-SetVisible@SystemCursorShape@@QEAAJ_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180019010 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x18013D864 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTempl.c)
 *     ?ShapeIdToString@InputTraceLogging@@CAPEBDTSystemCursorShapeIdDetails@@@Z @ 0x1801405F0 (-ShapeIdToString@InputTraceLogging@@CAPEBDTSystemCursorShapeIdDetails@@@Z.c)
 */

void __fastcall InputTraceLogging::Cursor::SetCursorImage(unsigned __int64 a1, unsigned __int8 a2)
{
  int v2; // edi
  LPVOID v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // [rsp+40h] [rbp-18h] BYREF
  __int64 v8; // [rsp+48h] [rbp-10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  v2 = a2;
  v4 = wil::details::static_lazy<InputTraceLogging>::get(
         a1,
         _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v4 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v4 + 1), 8LL) )
  {
    LODWORD(v9) = v2;
    LODWORD(v10) = a1 >> 16;
    v7 = InputTraceLogging::ShapeIdToString(a1);
    v8 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v5,
      byte_1801CE40C,
      v5,
      v6,
      (__int64)&v8,
      (const unsigned __int16 **)&v7,
      (__int64)&v10,
      (__int64)&v9);
  }
}
