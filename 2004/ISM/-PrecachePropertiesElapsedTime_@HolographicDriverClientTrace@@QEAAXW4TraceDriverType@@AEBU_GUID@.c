/*
 * XREFs of ?PrecachePropertiesElapsedTime_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@_K@Z @ 0x180161AB4
 * Callers:
 *     _lambda_2b98ef75b445f08568c37aeca5d9510e_::operator() @ 0x1801581E0 (_lambda_2b98ef75b445f08568c37aeca5d9510e_--operator().c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18014FE9C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTempla.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@55@Z @ 0x18014FF60 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@U3@U3@@-$_tlgWrite.c)
 *     ?TraceDriverTypeToString@@YAPEBDW4TraceDriverType@@@Z @ 0x180166228 (-TraceDriverTypeToString@@YAPEBDW4TraceDriverType@@@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180167B74 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

char __fastcall HolographicDriverClientTrace::PrecachePropertiesElapsedTime_(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // [rsp+50h] [rbp-20h] BYREF
  __int64 v15; // [rsp+58h] [rbp-18h] BYREF
  __int64 v16[2]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v17; // [rsp+90h] [rbp+20h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+38h] BYREF

  v17 = a1;
  if ( a4 < 0xBB8 )
  {
    v7 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
           a1,
           _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    if ( **(_DWORD **)(v7 + 8) > 4u )
    {
      LOBYTE(v7) = tlgKeywordOn(*(_QWORD *)(v7 + 8), 2LL);
      if ( (_BYTE)v7 )
      {
        v17 = a4;
        v18 = a3;
        v16[0] = TraceDriverTypeToString(a2);
        LOBYTE(v7) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>>(
                       v11,
                       byte_1801D086C,
                       v11,
                       v12,
                       (const unsigned __int16 **)v16,
                       &v18,
                       (__int64)&v17);
      }
    }
  }
  else
  {
    v7 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
           a1,
           _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    if ( **(_DWORD **)(v7 + 8) > 4u )
    {
      LOBYTE(v7) = tlgKeywordOn(*(_QWORD *)(v7 + 8), 0x200000000000LL);
      if ( (_BYTE)v7 )
      {
        v17 = 0x1000000LL;
        v18 = 3000LL;
        v14 = a4;
        v15 = a3;
        v16[0] = TraceDriverTypeToString(a2);
        LOBYTE(v7) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                       v10,
                       byte_1801CEF74,
                       v8,
                       v9,
                       (const unsigned __int16 **)v16,
                       &v15,
                       (__int64)&v14,
                       (__int64)&v18,
                       (__int64)&v17);
      }
    }
  }
  return v7;
}
