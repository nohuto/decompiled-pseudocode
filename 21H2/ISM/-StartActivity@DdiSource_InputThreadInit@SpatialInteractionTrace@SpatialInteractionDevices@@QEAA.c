/*
 * XREFs of ?StartActivity@DdiSource_InputThreadInit@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@@Z @ 0x1800D923C
 * Callers:
 *     _lambda_73536ef6a7ee89bb5b58de675fe62586_::operator() @ 0x1800D66E4 (_lambda_73536ef6a7ee89bb5b58de675fe62586_--operator().c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350B8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180041E08 (-zInternalRelatedId@-$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04$0A@U_TlgReflectorT.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180096188 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7254 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?zInternalStart@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800D47CC (-zInternalStart@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadInit::StartActivity(
        SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadInit *this,
        const struct _GUID *a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rdi
  const GUID *v6; // rax
  __int64 v7; // r8
  DWORD CurrentThreadId; // [rsp+38h] [rbp-19h] BYREF
  __int64 v9; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+48h] [rbp-9h] BYREF
  __int64 *v11; // [rsp+68h] [rbp+17h]
  int v12; // [rsp+70h] [rbp+1Fh]
  int v13; // [rsp+74h] [rbp+23h]
  DWORD *p_CurrentThreadId; // [rsp+78h] [rbp+27h]
  int v15; // [rsp+80h] [rbp+2Fh]
  int v16; // [rsp+84h] [rbp+33h]
  const struct _GUID *v17; // [rsp+88h] [rbp+37h]
  int v18; // [rsp+90h] [rbp+3Fh]
  int v19; // [rsp+94h] [rbp+43h]

  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v5 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
                               v4,
                               _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_)
                 + 1);
  if ( *v5 > 4u )
  {
    v9 = 0LL;
    CurrentThreadId = GetCurrentThreadId();
    v6 = (const GUID *)wil::ActivityBase<HolographicDriverClientTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    v7 = *((_QWORD *)this + 6);
    v19 = 0;
    v16 = 0;
    v13 = 0;
    p_CurrentThreadId = &CurrentThreadId;
    v11 = &v9;
    v17 = a2;
    v18 = 16;
    v15 = 4;
    v12 = 8;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)v5,
      (unsigned __int8 *)dword_1801CD780,
      (const GUID *)(v7 + 8),
      v6,
      5u,
      &v10);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadInit *)((char *)this + 8));
}
