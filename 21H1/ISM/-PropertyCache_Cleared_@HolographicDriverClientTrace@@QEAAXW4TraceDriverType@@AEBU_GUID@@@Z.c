/*
 * XREFs of ?PropertyCache_Cleared_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@@Z @ 0x180162878
 * Callers:
 *     ?LogCleared@PropertyCache@Holographic@Internal@Windows@@MEAAXXZ @ 0x1801606D0 (-LogCleared@PropertyCache@Holographic@Internal@Windows@@MEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x180150060 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByRef@$0BA@@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider.c)
 *     ?TraceDriverTypeToString@@YAPEBDW4TraceDriverType@@@Z @ 0x1801666E8 (-TraceDriverTypeToString@@YAPEBDW4TraceDriverType@@@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180168034 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

char __fastcall HolographicDriverClientTrace::PropertyCache_Cleared_(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = a1;
  v5 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
         a1,
         _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v5 + 8) > 4u )
  {
    LOBYTE(v5) = tlgKeywordOn(*(_QWORD *)(v5 + 8), 2LL);
    if ( (_BYTE)v5 )
    {
      v9 = a3;
      v10 = TraceDriverTypeToString(a2);
      LOBYTE(v5) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByRef<16>>(
                     v7,
                     byte_1801D0369,
                     v6,
                     v7,
                     (const unsigned __int16 **)&v10,
                     &v9);
    }
  }
  return v5;
}
