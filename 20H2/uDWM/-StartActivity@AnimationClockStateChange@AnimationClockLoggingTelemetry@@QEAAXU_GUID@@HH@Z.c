/*
 * XREFs of ?StartActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@HH@Z @ 0x18002D350
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18002D08C (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800056F4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?zInternalStart@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18002D5C4 (-zInternalStart@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x18002D6F4 (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D7FC (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180055E70 (-zInternalRelatedId@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Para.c)
 */

void __fastcall AnimationClockLoggingTelemetry::AnimationClockStateChange::StartActivity(
        AnimationClockLoggingTelemetry::AnimationClockStateChange *this,
        struct _GUID *a2,
        int a3,
        int a4)
{
  __int64 v8; // rcx
  _DWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // [rsp+38h] [rbp-59h] BYREF
  int v13; // [rsp+3Ch] [rbp-55h] BYREF
  DWORD CurrentThreadId; // [rsp+40h] [rbp-51h] BYREF
  __int64 v15; // [rsp+48h] [rbp-49h] BYREF
  _BYTE v16[32]; // [rsp+58h] [rbp-39h] BYREF
  __int64 *v17; // [rsp+78h] [rbp-19h]
  int v18; // [rsp+80h] [rbp-11h]
  int v19; // [rsp+84h] [rbp-Dh]
  DWORD *p_CurrentThreadId; // [rsp+88h] [rbp-9h]
  int v21; // [rsp+90h] [rbp-1h]
  int v22; // [rsp+94h] [rbp+3h]
  struct _GUID *v23; // [rsp+98h] [rbp+7h]
  int v24; // [rsp+A0h] [rbp+Fh]
  int v25; // [rsp+A4h] [rbp+13h]
  int *v26; // [rsp+A8h] [rbp+17h]
  int v27; // [rsp+B0h] [rbp+1Fh]
  int v28; // [rsp+B4h] [rbp+23h]
  int *v29; // [rsp+B8h] [rbp+27h]
  int v30; // [rsp+C0h] [rbp+2Fh]
  int v31; // [rsp+C4h] [rbp+33h]

  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v9 = *(_DWORD **)(wil::details::static_lazy<AnimationClockLogging>::get(
                      v8,
                      _lambda_9ef98c5d6b8c5c3c74462e1eb0f6f12e_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v9 > 4u )
  {
    v15 = 0LL;
    CurrentThreadId = GetCurrentThreadId();
    v12 = a4;
    v13 = a3;
    v10 = wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    v11 = *((_QWORD *)this + 6);
    v31 = 0;
    v28 = 0;
    v25 = 0;
    v22 = 0;
    v19 = 0;
    v29 = &v12;
    v26 = &v13;
    p_CurrentThreadId = &CurrentThreadId;
    v17 = &v15;
    v30 = 4;
    v27 = 4;
    v23 = a2;
    v24 = 16;
    v21 = 4;
    v18 = 8;
    tlgWriteTransfer_EtwEventWriteTransfer((__int64)v9, byte_1800D0329, v11 + 8, v10, 7, (__int64)v16);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((AnimationClockLoggingTelemetry::AnimationClockStateChange *)((char *)this + 8));
}
