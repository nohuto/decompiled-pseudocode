/*
 * XREFs of ?PropertyCache_SetValue_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1PEBX_K@Z @ 0x1801624DC
 * Callers:
 *     ?LogValueChanged@PropertyCache@Holographic@Internal@Windows@@MEAAXAEBU_GUID@@AEBV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x180160250 (-LogValueChanged@PropertyCache@Holographic@Internal@Windows@@MEAAXAEBU_GUID@@AEBV-$vector@EV-$al.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByRef@$0BA@@@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByRef@$0BA@@@4AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18014FDD8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByRef@$0BA@@@U2@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTem.c)
 *     ?TraceDriverTypeToString@@YAPEBDW4TraceDriverType@@@Z @ 0x180166228 (-TraceDriverTypeToString@@YAPEBDW4TraceDriverType@@@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180167B74 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

char __fastcall HolographicDriverClientTrace::PropertyCache_SetValue_(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v14; // [rsp+40h] [rbp-18h] BYREF
  __int64 v15; // [rsp+48h] [rbp-10h] BYREF
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = a1;
  v9 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
         a1,
         _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v9 + 8) > 4u )
  {
    LOBYTE(v9) = tlgKeywordOn(*(_QWORD *)(v9 + 8), 2LL);
    if ( (_BYTE)v9 )
    {
      v16 = a6;
      a5 = a4;
      v14 = a3;
      v15 = TraceDriverTypeToString(a2);
      LOBYTE(v9) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>>(
                     v12,
                     byte_1801CECDB,
                     v10,
                     v11,
                     (const unsigned __int16 **)&v15,
                     &v14,
                     &a5,
                     (__int64)&v16);
    }
  }
  return v9;
}
