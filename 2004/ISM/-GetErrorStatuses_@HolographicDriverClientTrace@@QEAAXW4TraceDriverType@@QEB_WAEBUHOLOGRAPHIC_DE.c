/*
 * XREFs of ?GetErrorStatuses_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@QEB_WAEBUHOLOGRAPHIC_DEVICE_ERROR_STATUSES@@@Z @ 0x18015C9D8
 * Callers:
 *     ?GetErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAU?$VariableSizeStructWrapper@UHOLOGRAPHIC_DEVICE_ERROR_STATUSES@@@234@@Z @ 0x18015C8F0 (-GetErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAU-$VariableSize.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@_W@@U_tlgWrapperPtrSize@@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@_W@@AEBU_tlgWrapperPtrSize@@5AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18014FA94 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@_W@@U_tlgWrapperPtrSize@@U3@U-$_tlgWrapperByVal@$07@@@-$.c)
 *     ?TraceDriverTypeToString@@YAPEBDW4TraceDriverType@@@Z @ 0x180166228 (-TraceDriverTypeToString@@YAPEBDW4TraceDriverType@@@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180167B74 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

void __fastcall HolographicDriverClientTrace::GetErrorStatuses_(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // [rsp+50h] [rbp-30h] BYREF
  __int64 v13; // [rsp+58h] [rbp-28h] BYREF
  int v14; // [rsp+60h] [rbp-20h]
  __int64 v15; // [rsp+68h] [rbp-18h] BYREF
  int v16; // [rsp+70h] [rbp-10h]
  __int64 v17; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v18; // [rsp+B8h] [rbp+38h] BYREF

  v17 = a1;
  if ( *a4 < 0xFFFFu )
  {
    v7 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
           a1,
           _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    if ( **(_DWORD **)(v7 + 8) > 4u && tlgKeywordOn(*(_QWORD *)(v7 + 8), 0x400000000000LL) )
    {
      v17 = 0x1000000LL;
      v13 = (__int64)(a4 + 1);
      v8 = 16 * *a4 + 4;
      v15 = (__int64)a4;
      v14 = v8;
      v16 = 2;
      v18 = a3;
      v12 = TraceDriverTypeToString(a2);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperByVal<8>>(
        v11,
        (unsigned __int8 *)dword_1801CE85D,
        v9,
        v10,
        (const unsigned __int16 **)&v12,
        (const wchar_t **)&v18,
        &v15,
        &v13,
        (__int64)&v17);
    }
  }
}
