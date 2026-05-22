/*
 * XREFs of ?ParsingInitialized_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKPEB_WGG_N1GGG1EIKAEBUPoseData@2@2@Z @ 0x18016E218
 * Callers:
 *     ??$ParsingInitialized@AEAJAEAKAEAKAEAPEB_WAEAGAEAGAEA_NAEA_NAEAGAEAGAEAG_NAEAEAEAIAEAKAEAUPoseData@SpatialInteractionDevices@@AEAU12@@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEAJAEAK1AEAPEB_WAEAG3AEA_N4333$$QEA_NAEAEAEAI1AEAUPoseData@1@8@Z @ 0x1801689F0 (--$ParsingInitialized@AEAJAEAKAEAKAEAPEB_WAEAGAEAGAEA_NAEA_NAEAGAEAGAEAG_NAEAEAEAIAEAKAEAUPoseDa.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ??$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ @ 0x1800C56D8 (--$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7344 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@_W@@U?$_tlgWrapperByVal@$01@@U3@U3@U3@U3@U?$_tlgWrapperByVal@$00@@U4@U4@U1@U4@U1@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@_W@@AEBU?$_tlgWrapperByVal@$01@@5555AEBU?$_tlgWrapperByVal@$00@@663634444@Z @ 0x180168EC0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapSz@_W@@U-$_tlgWrapperByVal@$01@@U3@U3@U3@U3@U.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::ParsingInitialized_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        int a2,
        int a3,
        int a4,
        const wchar_t *a5,
        unsigned __int16 a6,
        unsigned __int16 a7,
        bool a8,
        bool a9,
        unsigned __int16 a10,
        unsigned __int16 a11,
        unsigned __int16 a12,
        bool a13,
        char a14,
        unsigned int a15,
        unsigned int a16,
        const struct SpatialInteractionDevices::PoseData *a17,
        const struct SpatialInteractionDevices::PoseData *a18)
{
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  char v25; // [rsp+C8h] [rbp-80h] BYREF
  bool v26; // [rsp+C9h] [rbp-7Fh] BYREF
  bool v27; // [rsp+CAh] [rbp-7Eh] BYREF
  bool v28; // [rsp+CBh] [rbp-7Dh] BYREF
  unsigned __int16 v29; // [rsp+CCh] [rbp-7Ch] BYREF
  unsigned __int16 v30; // [rsp+CEh] [rbp-7Ah] BYREF
  unsigned __int16 v31; // [rsp+D0h] [rbp-78h] BYREF
  unsigned __int16 v32; // [rsp+D2h] [rbp-76h] BYREF
  unsigned __int16 v33; // [rsp+D4h] [rbp-74h] BYREF
  unsigned int v34; // [rsp+D8h] [rbp-70h] BYREF
  unsigned int v35; // [rsp+DCh] [rbp-6Ch] BYREF
  int v36; // [rsp+E0h] [rbp-68h] BYREF
  int v37; // [rsp+E4h] [rbp-64h] BYREF
  int v38; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v39; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v40; // [rsp+F8h] [rbp-50h] BYREF
  __int64 v41; // [rsp+100h] [rbp-48h] BYREF
  __int64 v42; // [rsp+108h] [rbp-40h] BYREF
  __int64 v43; // [rsp+110h] [rbp-38h] BYREF
  wchar_t v44[64]; // [rsp+118h] [rbp-30h] BYREF
  wchar_t v45[64]; // [rsp+198h] [rbp+50h] BYREF
  wchar_t v46[64]; // [rsp+218h] [rbp+D0h] BYREF
  wchar_t v47[64]; // [rsp+298h] [rbp+150h] BYREF

  memset_0(v47, 0, sizeof(v47));
  memset_0(v46, 0, sizeof(v46));
  memset_0(v45, 0, sizeof(v45));
  memset_0(v44, 0, sizeof(v44));
  if ( *((_BYTE *)a17 + 28) )
    swprintf_s<64>(v47, L"%.3f %.3f %.3f", *(float *)a17, *((float *)a17 + 1), *((float *)a17 + 2));
  else
    _o_wcscpy_s(v47, 64LL, L"No HoldingPose.Position");
  if ( *((_BYTE *)a17 + 29) )
    swprintf_s<64>(
      v46,
      L"%.3f %.3f %.3f %.3f",
      *((float *)a17 + 3),
      *((float *)a17 + 4),
      *((float *)a17 + 5),
      *((float *)a17 + 6));
  else
    _o_wcscpy_s(v46, 64LL, L"No HoldingPose.Orientation");
  if ( *((_BYTE *)a18 + 28) )
    swprintf_s<64>(v45, L"%.3f %.3f %.3f", *(float *)a18, *((float *)a18 + 1), *((float *)a18 + 2));
  else
    _o_wcscpy_s(v45, 64LL, L"No pointerPose.Position");
  if ( *((_BYTE *)a18 + 29) )
    swprintf_s<64>(
      v44,
      L"%.3f %.3f %.3f %.3f",
      *((float *)a18 + 3),
      *((float *)a18 + 4),
      *((float *)a18 + 5),
      *((float *)a18 + 6));
  else
    _o_wcscpy_s(v44, 64LL, L"No pointerPose.Orientation");
  v22 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
          v21,
          _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v22[1] > 4u && tlgKeywordOn(v22[1], 0x400000000000LL) )
  {
    v36 = a4;
    v39 = (__int64)v44;
    v37 = a3;
    v40 = (__int64)v45;
    v38 = a2;
    v41 = (__int64)v46;
    v42 = (__int64)v47;
    v34 = a16;
    v25 = a14;
    v35 = a15;
    v26 = a9;
    v27 = a8;
    v28 = a13;
    v29 = a7;
    v30 = a6;
    v31 = a12;
    v32 = a11;
    v33 = a10;
    v43 = (__int64)a5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>>(
      v23,
      (unsigned __int8 *)dword_1801D1A88,
      v23,
      v24,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36,
      (const wchar_t **)&v43,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v35,
      (__int64)&v25,
      (__int64)&v34,
      (const wchar_t **)&v42,
      (const wchar_t **)&v41,
      (const wchar_t **)&v40,
      (const wchar_t **)&v39);
  }
}
