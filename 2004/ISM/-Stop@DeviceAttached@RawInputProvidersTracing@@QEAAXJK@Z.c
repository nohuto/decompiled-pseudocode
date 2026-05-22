/*
 * XREFs of ?Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z @ 0x180095E40
 * Callers:
 *     wil::details::lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___::_lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___ @ 0x1800923DC (wil--details--lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___--_lambda_call__lambda_aa67.c)
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x180092DF8 (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x18008FF00 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645644@Z @ 0x180091290 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180091290.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x180091608 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800962E4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalStop@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180096AD0 (-zInternalStop@-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgRefle.c)
 */

void __fastcall RawInputProvidersTracing::DeviceAttached::Stop(
        RawInputProvidersTracing::DeviceAttached *this,
        int a2,
        int a3)
{
  int *v3; // rdi
  int v7; // eax
  int *v8; // rdi
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // r9
  __int64 v12; // r8
  int v13; // eax
  _DWORD *v14; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // r9
  int v19; // [rsp+B0h] [rbp-80h] BYREF
  DWORD v20; // [rsp+B4h] [rbp-7Ch] BYREF
  int v21; // [rsp+B8h] [rbp-78h] BYREF
  int v22; // [rsp+BCh] [rbp-74h] BYREF
  int v23; // [rsp+C0h] [rbp-70h] BYREF
  int v24; // [rsp+C4h] [rbp-6Ch] BYREF
  __int64 v25; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v26; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v28; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v29; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v30; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v31; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v32; // [rsp+100h] [rbp-30h] BYREF
  __int64 v33; // [rsp+108h] [rbp-28h] BYREF
  __int64 v34; // [rsp+110h] [rbp-20h] BYREF
  __int64 v35; // [rsp+140h] [rbp+10h] BYREF
  __int64 v36; // [rsp+158h] [rbp+28h] BYREF

  v3 = (int *)*((_QWORD *)this + 6);
  v7 = v3[19];
  if ( v7 < 0 && v7 == v3[21] )
    v8 = v3 + 20;
  else
    v8 = 0LL;
  wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
  v10 = wil::details::static_lazy<RawInputProvidersTracing>::get(
          v9,
          _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
  if ( v8 )
  {
    if ( *(_DWORD *)v10[1] > 4u && tlgKeywordOn(v10[1], 0x400000000000LL) )
    {
      v26 = *((_QWORD *)v8 + 14);
      v12 = *((_QWORD *)this + 6);
      v27 = *((_QWORD *)v8 + 13);
      v13 = v8[24];
      v25 = 0LL;
      v21 = v13;
      v28 = *((_QWORD *)v8 + 11);
      v29 = *((_QWORD *)v8 + 10);
      v22 = v8[18];
      v30 = *((_QWORD *)v8 + 8);
      v23 = v8[6];
      v31 = *((_QWORD *)v8 + 2);
      v24 = *v8;
      v32 = *((_QWORD *)v8 + 15);
      v19 = v8[14];
      v33 = *((_QWORD *)v8 + 6);
      v20 = v8[1];
      LODWORD(v35) = a3;
      LODWORD(v36) = a2;
      v34 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        (unsigned __int8 *)dword_1801C9781,
        (const GUID *)(v12 + 8),
        v11,
        (__int64)&v25,
        (__int64)&v34,
        (__int64)&v20,
        (const unsigned __int16 **)&v33,
        (__int64)&v19,
        (const unsigned __int16 **)&v32,
        (__int64)&v24,
        (const wchar_t **)&v31,
        (__int64)&v23,
        (const unsigned __int16 **)&v30,
        (__int64)&v22,
        (const unsigned __int16 **)&v29,
        (const wchar_t **)&v28,
        (__int64)&v21,
        (const unsigned __int16 **)&v27,
        (const wchar_t **)&v26,
        (__int64)&v36,
        (__int64)&v35);
    }
  }
  else
  {
    v14 = (_DWORD *)v10[1];
    if ( *v14 > 4u && tlgKeywordOn(v10[1], 0x400000000000LL) )
    {
      LODWORD(v35) = a3;
      LODWORD(v36) = a2;
      CurrentThreadId = GetCurrentThreadId();
      v16 = *((_QWORD *)this + 6);
      v20 = CurrentThreadId;
      v17 = *(_DWORD *)(v16 + 76);
      v25 = 0LL;
      v19 = v17;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v14,
        byte_1801C990A,
        (const GUID *)(v16 + 8),
        v18,
        (__int64)&v25,
        (__int64)&v19,
        (__int64)&v20,
        (__int64)&v36,
        (__int64)&v35);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((RawInputProvidersTracing::DeviceAttached *)((char *)this + 8));
}
