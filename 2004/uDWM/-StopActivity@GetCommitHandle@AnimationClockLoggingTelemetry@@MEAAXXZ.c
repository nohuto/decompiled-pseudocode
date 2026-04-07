/*
 * XREFs of ?StopActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x1800BA480
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180005728 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?zInternalStop@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18002E48C (-zInternalStop@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x18002EFA4 (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002F058 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x18008DA14 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18008DA14.c)
 */

void __fastcall AnimationClockLoggingTelemetry::GetCommitHandle::StopActivity(
        AnimationClockLoggingTelemetry::GetCommitHandle *this)
{
  int *v1; // rdi
  int v3; // eax
  int *v4; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // r9
  _DWORD *v8; // rcx
  __int64 v9; // r8
  wchar_t *v10; // rax
  _DWORD *v11; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v13; // r8
  int v14; // edx
  __int64 v15; // r9
  int v16; // [rsp+C0h] [rbp-80h] BYREF
  int v17; // [rsp+C4h] [rbp-7Ch] BYREF
  int v18; // [rsp+C8h] [rbp-78h] BYREF
  int v19; // [rsp+CCh] [rbp-74h] BYREF
  const unsigned __int16 *v20; // [rsp+D0h] [rbp-70h] BYREF
  wchar_t *v21; // [rsp+D8h] [rbp-68h] BYREF
  const unsigned __int16 *v22; // [rsp+E0h] [rbp-60h] BYREF
  wchar_t *v23; // [rsp+E8h] [rbp-58h] BYREF
  const unsigned __int16 *v24; // [rsp+F0h] [rbp-50h] BYREF
  const unsigned __int16 *v25; // [rsp+F8h] [rbp-48h] BYREF
  wchar_t *v26; // [rsp+100h] [rbp-40h] BYREF
  const unsigned __int16 *v27; // [rsp+108h] [rbp-38h] BYREF
  const unsigned __int16 *v28; // [rsp+110h] [rbp-30h] BYREF
  __int64 v29; // [rsp+118h] [rbp-28h] BYREF
  _QWORD v30[4]; // [rsp+120h] [rbp-20h] BYREF
  DWORD v31; // [rsp+150h] [rbp+10h] BYREF
  int v32; // [rsp+158h] [rbp+18h] BYREF
  __int64 v33; // [rsp+160h] [rbp+20h] BYREF
  int v34; // [rsp+168h] [rbp+28h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v6 = wil::details::static_lazy<AnimationClockLogging>::get(
         v5,
         _lambda_9ef98c5d6b8c5c3c74462e1eb0f6f12e_::_lambda_invoker_cdecl_);
  if ( v4 )
  {
    v8 = (_DWORD *)v6[1];
    if ( *v8 > 4u )
    {
      v20 = (const unsigned __int16 *)*((_QWORD *)v4 + 5);
      v31 = v4[15];
      v32 = v4[2];
      v21 = (wchar_t *)*((_QWORD *)v4 + 14);
      v22 = (const unsigned __int16 *)*((_QWORD *)v4 + 13);
      v9 = *((_QWORD *)this + 6);
      LODWORD(v33) = v4[24];
      v10 = (wchar_t *)*((_QWORD *)v4 + 11);
      v30[0] = 0LL;
      v23 = v10;
      v24 = (const unsigned __int16 *)*((_QWORD *)v4 + 10);
      v34 = v4[18];
      v25 = (const unsigned __int16 *)*((_QWORD *)v4 + 8);
      v16 = v4[6];
      v26 = (wchar_t *)*((_QWORD *)v4 + 2);
      v17 = *v4;
      v27 = (const unsigned __int16 *)*((_QWORD *)v4 + 15);
      v18 = v4[14];
      v28 = (const unsigned __int16 *)*((_QWORD *)v4 + 6);
      v19 = v4[1];
      v29 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v8,
        byte_1800D157E,
        v9 + 8,
        v7,
        (__int64)v30,
        (__int64)&v29,
        (__int64)&v19,
        &v28,
        (__int64)&v18,
        &v27,
        (__int64)&v17,
        &v26,
        (__int64)&v16,
        &v25,
        (__int64)&v34,
        &v24,
        &v23,
        (__int64)&v33,
        &v22,
        &v21,
        (__int64)&v32,
        (__int64)&v31,
        &v20);
    }
  }
  else
  {
    v11 = (_DWORD *)v6[1];
    if ( *v11 > 4u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v13 = *((_QWORD *)this + 6);
      v14 = *(_DWORD *)(v13 + 76);
      v33 = 0LL;
      v31 = CurrentThreadId;
      v32 = v14;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)v11,
        (int)&unk_1800D16C8,
        v13 + 8,
        v15,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v31);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((AnimationClockLoggingTelemetry::GetCommitHandle *)((char *)this + 8));
}
