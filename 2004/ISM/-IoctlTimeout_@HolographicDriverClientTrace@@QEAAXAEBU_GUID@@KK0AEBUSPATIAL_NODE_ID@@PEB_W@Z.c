/*
 * XREFs of ?IoctlTimeout_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@KK0AEBUSPATIAL_NODE_ID@@PEB_W@Z @ 0x180160098
 * Callers:
 *     ?HandleIoctlTimeout@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAKPEAU_OVERLAPPED@@KKPEBXKPEAK@Z @ 0x18015F3FC (-HandleIoctlTimeout@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAKPEAU_OVERL.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U1@U1@U?$_tlgWrapSz@_W@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@433AEBU?$_tlgWrapSz@_W@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801504DC (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@U1@U1@U-$_tlgWrapSz@_W@@U-$_tlgW.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180167B74 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

void __fastcall HolographicDriverClientTrace::IoctlTimeout_(
        HolographicDriverClientTrace *this,
        const struct _GUID *a2,
        int a3,
        int a4,
        const struct _GUID *a5,
        const struct SPATIAL_NODE_ID *a6,
        const wchar_t *a7)
{
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v15; // [rsp+70h] [rbp+17h] BYREF
  __int64 v16; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v17; // [rsp+80h] [rbp+27h] BYREF
  __int64 v18; // [rsp+88h] [rbp+2Fh] BYREF
  __int64 v19; // [rsp+90h] [rbp+37h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+4Fh] BYREF

  v20 = (__int64)this;
  v10 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
          this,
          _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v10 + 8) > 3u && tlgKeywordOn(*(_QWORD *)(v10 + 8), 0x200000000000LL) )
  {
    v16 = (__int64)a7;
    v17 = (__int64)a6;
    v18 = (__int64)a5;
    v15 = 0x1000000LL;
    LODWORD(v20) = a4;
    LODWORD(v14) = a3;
    v19 = (__int64)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<8>>(
      v13,
      (unsigned __int8 *)dword_1801CF9BD,
      v11,
      v12,
      &v19,
      (__int64)&v14,
      (__int64)&v20,
      &v18,
      &v17,
      (const wchar_t **)&v16,
      (__int64)&v15);
  }
}
