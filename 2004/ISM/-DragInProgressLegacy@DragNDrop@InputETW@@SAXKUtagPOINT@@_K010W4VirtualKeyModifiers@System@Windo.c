/*
 * XREFs of ?DragInProgressLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@@@Z @ 0x180174C70
 * Callers:
 *     ?OnInput@DragNDropProcessorLegacy@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180175500 (-OnInput@DragNDropProcessorLegacy@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessor.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x1800295C8 (-IsVerboseEnabled@InputETW@@SA_N_K@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180029610 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333333333@Z @ 0x1801740B0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 */

char __fastcall InputETW::DragNDrop::DragInProgressLegacy(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v7; // r14
  int v8; // ebx
  int v10; // edi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // [rsp+78h] [rbp-21h] BYREF
  __int64 v17; // [rsp+80h] [rbp-19h] BYREF
  __int64 v18; // [rsp+88h] [rbp-11h] BYREF
  __int64 v19; // [rsp+90h] [rbp-9h] BYREF
  __int64 v20; // [rsp+98h] [rbp-1h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+Fh] BYREF
  __int64 v23; // [rsp+B0h] [rbp+17h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+1Fh] BYREF
  __int64 v25; // [rsp+C0h] [rbp+27h] BYREF
  int v26; // [rsp+F4h] [rbp+5Bh]
  int v27; // [rsp+104h] [rbp+6Bh]

  v27 = HIDWORD(a4);
  v26 = HIDWORD(a2);
  v7 = a1;
  v8 = a4;
  v10 = a2;
  LOBYTE(v11) = InputETW::IsVerboseEnabled(1LL);
  if ( (_BYTE)v11 )
  {
    v11 = wil::details::static_lazy<InputETW>::get(
            v12,
            _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    if ( *(_DWORD *)v11[1] > 5u )
    {
      LOBYTE(v11) = tlgKeywordOn(v11[1], 1LL);
      if ( (_BYTE)v11 )
      {
        v16 = a7;
        v17 = SHIDWORD(a6);
        v18 = (int)a6;
        v19 = a5;
        v20 = v27;
        v21 = v8;
        v23 = v26;
        v24 = v10;
        v22 = a3;
        v25 = v7;
        LOBYTE(v11) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                        v13,
                        byte_1801D12C6,
                        v13,
                        v14,
                        (__int64)&v25,
                        (__int64)&v24,
                        (__int64)&v23,
                        (__int64)&v22,
                        (__int64)&v21,
                        (__int64)&v20,
                        (__int64)&v19,
                        (__int64)&v18,
                        (__int64)&v17,
                        (__int64)&v16);
      }
    }
  }
  return (char)v11;
}
