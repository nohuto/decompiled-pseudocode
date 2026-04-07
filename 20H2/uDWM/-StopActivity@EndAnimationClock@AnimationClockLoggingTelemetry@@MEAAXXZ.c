/*
 * XREFs of ?StopActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x180041E90
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180005664 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?zInternalStop@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18002CC8C (-zInternalStop@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x18002D6F4 (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D7A8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x18008D334 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18008D334.c)
 */

void __fastcall AnimationClockLoggingTelemetry::EndAnimationClock::StopActivity(
        AnimationClockLoggingTelemetry::EndAnimationClock *this)
{
  int *v1; // rdi
  int v3; // eax
  int *v4; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  int v7; // r9d
  _DWORD *v8; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v10; // r8
  int v11; // edx
  __int64 v12; // r9
  _DWORD *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  int v16; // [rsp+C0h] [rbp-80h] BYREF
  int v17; // [rsp+C4h] [rbp-7Ch] BYREF
  int v18; // [rsp+C8h] [rbp-78h] BYREF
  int v19; // [rsp+CCh] [rbp-74h] BYREF
  __int64 v20; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v21; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v22; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v23; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v24; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v25; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v26; // [rsp+100h] [rbp-40h] BYREF
  __int64 v27; // [rsp+108h] [rbp-38h] BYREF
  __int64 v28; // [rsp+110h] [rbp-30h] BYREF
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
    v13 = (_DWORD *)v6[1];
    if ( *v13 > 4u )
    {
      v20 = *((_QWORD *)v4 + 5);
      v31 = v4[15];
      v32 = v4[2];
      v21 = *((_QWORD *)v4 + 14);
      v22 = *((_QWORD *)v4 + 13);
      v14 = *((_QWORD *)this + 6);
      LODWORD(v33) = v4[24];
      v15 = *((_QWORD *)v4 + 11);
      v30[0] = 0LL;
      v23 = v15;
      v24 = *((_QWORD *)v4 + 10);
      v34 = v4[18];
      v25 = *((_QWORD *)v4 + 8);
      v16 = v4[6];
      v26 = *((_QWORD *)v4 + 2);
      v17 = *v4;
      v27 = *((_QWORD *)v4 + 15);
      v18 = v4[14];
      v28 = *((_QWORD *)v4 + 6);
      v19 = v4[1];
      v29 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (_DWORD)v13,
        (unsigned int)&unk_1800D0718,
        v14 + 8,
        v7,
        (__int64)v30,
        (__int64)&v29,
        (__int64)&v19,
        (__int64)&v28,
        (__int64)&v18,
        (__int64)&v27,
        (__int64)&v17,
        (__int64)&v26,
        (__int64)&v16,
        (__int64)&v25,
        (__int64)&v34,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v33,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v20);
    }
  }
  else
  {
    v8 = (_DWORD *)v6[1];
    if ( *v8 > 4u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v10 = *((_QWORD *)this + 6);
      v11 = *(_DWORD *)(v10 + 76);
      v33 = 0LL;
      v31 = CurrentThreadId;
      v32 = v11;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)v8,
        (int)&unk_1800D0864,
        v10 + 8,
        v12,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v31);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((AnimationClockLoggingTelemetry::EndAnimationClock *)((char *)this + 8));
}
