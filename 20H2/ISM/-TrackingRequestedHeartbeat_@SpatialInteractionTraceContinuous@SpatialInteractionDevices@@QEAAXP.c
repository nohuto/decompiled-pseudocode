/*
 * XREFs of ?TrackingRequestedHeartbeat_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXPEB_WKKI_N10AEBU_GUID@@IAEAY02$$CBMAEAY03$$CBM34@Z @ 0x1800D3108
 * Callers:
 *     ??$TrackingRequestedHeartbeat@PEB_WAEAKKI_NAEA_NPEB_WAEAU_GUID@@AEAW4SPATIAL_TRACKING_CAPABILITY_FLAGS@@AEAY02MAEAY03MAEAY02MAEAY03M@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SAX$$QEAPEB_WAEAK$$QEAK$$QEAI$$QEA_NAEA_N0AEAU_GUID@@AEAW4SPATIAL_TRACKING_CAPABILITY_FLAGS@@AEAY02MAEAY03M89@Z @ 0x1800CC8D0 (--$TrackingRequestedHeartbeat@PEB_WAEAKKI_NAEA_NPEB_WAEAU_GUID@@AEAW4SPATIAL_TRACKING_CAPABILITY.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@_W@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByVal@$00@@U3@U1@U?$_tlgWrapperByRef@$0BA@@@U2@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@_W@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByVal@$00@@53AEBU?$_tlgWrapperByRef@$0BA@@@433@Z @ 0x1800CC9B8 (--$Write@U-$_tlgWrapSz@_W@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapperByVal@$00@@U3@U1@U-$_tlg.c)
 *     ??$swprintf_s@$0IA@@@YAHAEAY0IA@_WPEB_WZZ @ 0x1800CDB7C (--$swprintf_s@$0IA@@@YAHAEAY0IA@_WPEB_WZZ.c)
 *     ?get@?$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTraceContinuous@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D415C (-get@-$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@Q.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTraceContinuous::TrackingRequestedHeartbeat_(
        SpatialInteractionDevices::SpatialInteractionTraceContinuous *this,
        const wchar_t *a2,
        int a3,
        int a4,
        unsigned int a5,
        bool a6,
        bool a7,
        const wchar_t *a8,
        const struct _GUID *a9,
        unsigned int a10,
        const float (*a11)[3],
        const float (*a12)[4],
        const float (*a13)[3],
        const float (*a14)[4])
{
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  bool v20; // [rsp+88h] [rbp-80h] BYREF
  bool v21; // [rsp+89h] [rbp-7Fh] BYREF
  unsigned int v22; // [rsp+8Ch] [rbp-7Ch] BYREF
  unsigned int v23; // [rsp+90h] [rbp-78h] BYREF
  int v24; // [rsp+94h] [rbp-74h] BYREF
  int v25; // [rsp+98h] [rbp-70h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v27; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v29; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v30; // [rsp+C0h] [rbp-48h] BYREF
  wchar_t v31[128]; // [rsp+C8h] [rbp-40h] BYREF
  wchar_t v32[128]; // [rsp+1C8h] [rbp+C0h] BYREF

  v26 = (__int64)a2;
  memset_0(v32, 0, sizeof(v32));
  memset_0(v31, 0, sizeof(v31));
  _o_setlocale(4LL);
  _o_setlocale(4LL);
  swprintf_s<128>(
    v32,
    L"(%.3e;%.3e;%.3e) (%.3e;%.3e;%.3e;%.3e)",
    (*a11)[0],
    (*a11)[1],
    (*a11)[2],
    (*a12)[0],
    (*a12)[1],
    (*a12)[2],
    (*a12)[3]);
  swprintf_s<128>(
    v31,
    L"(%.3e;%.3e;%.3e) (%.3e;%.3e;%.3e;%.3e)",
    (*a13)[0],
    (*a13)[1],
    (*a13)[2],
    (*a14)[0],
    (*a14)[1],
    (*a14)[2],
    (*a14)[3]);
  v17 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTraceContinuous>::get(
          v16,
          _lambda_0bcba54505780f78856f588866e18ac8_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v17 + 8) > 5u && tlgKeywordOn(*(_QWORD *)(v17 + 8), 2LL) )
  {
    v24 = a4;
    v27 = (__int64)v31;
    v25 = a3;
    v28 = (__int64)v32;
    v22 = a10;
    v29 = (__int64)a9;
    v30 = (__int64)a8;
    v20 = a7;
    v21 = a6;
    v23 = a5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapSz<wchar_t>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>>(
      v18,
      (unsigned __int8 *)dword_1801CB825,
      v18,
      v19,
      (const wchar_t **)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v21,
      (__int64)&v20,
      (const wchar_t **)&v30,
      &v29,
      (__int64)&v22,
      (const wchar_t **)&v28,
      (const wchar_t **)&v27);
  }
  _o_setlocale(4LL);
}
