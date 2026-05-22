/*
 * XREFs of ?Stop@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJPEB_W_N1@Z @ 0x1800D2838
 * Callers:
 *     _lambda_af5bdd6d6d6bf413afa9b6eaade37ea9_::operator() @ 0x1800CE634 (_lambda_af5bdd6d6d6bf413afa9b6eaade37ea9_--operator().c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800962E4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalStop@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180096AD0 (-zInternalStop@-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgRefle.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C6E84 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U4@U?$_tlgWrapperByVal@$00@@U5@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@454564564456AEBU?$_tlgWrapperByVal@$00@@74@Z @ 0x1800CD014 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1800CD014.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@_W@@U?$_tlgWrapperByVal@$00@@U4@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@_W@@AEBU?$_tlgWrapperByVal@$00@@64@Z @ 0x1800CD3B4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@_W@@U-$_tlgWrapperBy.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged::Stop(
        SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged *this,
        int a2,
        const wchar_t *a3,
        char a4,
        bool a5)
{
  int *v5; // rdi
  int v10; // eax
  int *v11; // rdi
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // r9
  _DWORD *v15; // rcx
  int v16; // eax
  __int64 v17; // r8
  _DWORD *v18; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v20; // r8
  int v21; // edx
  __int64 v22; // r9
  _BYTE v23[4]; // [rsp+E8h] [rbp-80h] BYREF
  int v24; // [rsp+ECh] [rbp-7Ch] BYREF
  DWORD v25; // [rsp+F0h] [rbp-78h] BYREF
  int v26; // [rsp+F4h] [rbp-74h] BYREF
  int v27; // [rsp+F8h] [rbp-70h] BYREF
  int v28; // [rsp+FCh] [rbp-6Ch] BYREF
  int v29; // [rsp+100h] [rbp-68h] BYREF
  int v30; // [rsp+104h] [rbp-64h] BYREF
  int v31; // [rsp+108h] [rbp-60h] BYREF
  int v32; // [rsp+10Ch] [rbp-5Ch] BYREF
  __int64 v33; // [rsp+110h] [rbp-58h] BYREF
  __int64 v34; // [rsp+118h] [rbp-50h] BYREF
  __int64 v35; // [rsp+120h] [rbp-48h] BYREF
  __int64 v36; // [rsp+128h] [rbp-40h] BYREF
  __int64 v37; // [rsp+130h] [rbp-38h] BYREF
  __int64 v38; // [rsp+138h] [rbp-30h] BYREF
  __int64 v39; // [rsp+140h] [rbp-28h] BYREF
  __int64 v40; // [rsp+148h] [rbp-20h] BYREF
  __int64 v41; // [rsp+150h] [rbp-18h] BYREF
  __int64 v42; // [rsp+158h] [rbp-10h] BYREF
  __int64 v43; // [rsp+160h] [rbp-8h] BYREF
  __int64 v44; // [rsp+168h] [rbp+0h] BYREF
  __int64 v45; // [rsp+198h] [rbp+30h] BYREF

  v5 = (int *)*((_QWORD *)this + 6);
  v10 = v5[19];
  if ( v10 < 0 && v10 == v5[21] )
    v11 = v5 + 20;
  else
    v11 = 0LL;
  wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v13 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
          v12,
          _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
  if ( v11 )
  {
    v15 = (_DWORD *)v13[1];
    if ( *v15 > 4u )
    {
      LOBYTE(v45) = a5;
      v36 = *((_QWORD *)v11 + 5);
      v28 = v11[15];
      v29 = v11[2];
      v37 = *((_QWORD *)v11 + 14);
      v38 = *((_QWORD *)v11 + 13);
      v16 = v11[24];
      v34 = 0LL;
      v17 = *((_QWORD *)this + 6);
      v30 = v16;
      v39 = *((_QWORD *)v11 + 11);
      v40 = *((_QWORD *)v11 + 10);
      v31 = v11[18];
      v41 = *((_QWORD *)v11 + 8);
      v32 = v11[6];
      v42 = *((_QWORD *)v11 + 2);
      v24 = *v11;
      v43 = *((_QWORD *)v11 + 15);
      v25 = v11[14];
      v44 = *((_QWORD *)v11 + 6);
      v26 = v11[1];
      v27 = a2;
      v23[0] = a4;
      v35 = (__int64)a3;
      v33 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        (__int64)v15,
        (unsigned __int8 *)dword_1801CB3C4,
        (const GUID *)(v17 + 8),
        v14,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v26,
        (const unsigned __int16 **)&v44,
        (__int64)&v25,
        (const unsigned __int16 **)&v43,
        (__int64)&v24,
        (const wchar_t **)&v42,
        (__int64)&v32,
        (const unsigned __int16 **)&v41,
        (__int64)&v31,
        (const unsigned __int16 **)&v40,
        (const wchar_t **)&v39,
        (__int64)&v30,
        (const unsigned __int16 **)&v38,
        (const wchar_t **)&v37,
        (__int64)&v29,
        (__int64)&v28,
        (const unsigned __int16 **)&v36,
        (const wchar_t **)&v35,
        (__int64)v23,
        (__int64)&v45,
        (__int64)&v27);
    }
  }
  else
  {
    v18 = (_DWORD *)v13[1];
    if ( *v18 > 4u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v20 = *((_QWORD *)this + 6);
      v34 = (__int64)a3;
      v21 = *(_DWORD *)(v20 + 76);
      v33 = 0LL;
      v25 = CurrentThreadId;
      LOBYTE(v45) = a5;
      v24 = v21;
      v26 = a2;
      v23[0] = a4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        (__int64)v18,
        (unsigned __int8 *)dword_1801CB769,
        (const GUID *)(v20 + 8),
        v22,
        (__int64)&v33,
        (__int64)&v24,
        (__int64)&v25,
        (const wchar_t **)&v34,
        (__int64)v23,
        (__int64)&v45,
        (__int64)&v26);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged *)((char *)this + 8));
}
