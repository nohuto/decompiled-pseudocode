/*
 * XREFs of ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x18002E1D0
 * Callers:
 *     ??$?0$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18002E11C (--$-0$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800057B8 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002E3D8 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002EDF8 (-LockExclusive@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002F0AC (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18005592C (-zInternalRelatedId@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Para.c)
 */

void __fastcall WindowFrameLoggingTelemetry::CloneWindow::StartActivity(WindowFrameLoggingTelemetry::CloneWindow *this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  RTL_SRWLOCK *v4; // rcx
  _DWORD *v5; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v7; // rax
  __int64 v8; // r8
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-9h] BYREF
  __int64 v10; // [rsp+38h] [rbp-1h] BYREF
  _BYTE v11[32]; // [rsp+40h] [rbp+7h] BYREF
  __int64 *v12; // [rsp+60h] [rbp+27h]
  int v13; // [rsp+68h] [rbp+2Fh]
  int v14; // [rsp+6Ch] [rbp+33h]
  PSRWLOCK *p_SRWLock; // [rsp+70h] [rbp+37h]
  int v16; // [rsp+78h] [rbp+3Fh]
  int v17; // [rsp+7Ch] [rbp+43h]

  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(this, &SRWLock);
  v2 = *((_QWORD *)this + 6);
  if ( **(_DWORD **)(wil::details::static_lazy<WindowFrameLogging>::get(
                       v3,
                       _lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)
                   + 8) > 5u )
    EtwEventActivityIdControl(3LL, v2 + 8);
  else
    *(_OWORD *)(v2 + 8) = 0LL;
  v4 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  v5 = *(_DWORD **)(wil::details::static_lazy<WindowFrameLogging>::get(
                      v4,
                      _lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v5 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v10 = 0LL;
    LODWORD(SRWLock) = CurrentThreadId;
    v7 = wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    v8 = *((_QWORD *)this + 6);
    v17 = 0;
    v14 = 0;
    p_SRWLock = &SRWLock;
    v16 = 4;
    v12 = &v10;
    v13 = 8;
    tlgWriteTransfer_EtwEventWriteTransfer((__int64)v5, byte_1800D0CC0, v8 + 8, v7, 4, (__int64)v11);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((WindowFrameLoggingTelemetry::CloneWindow *)((char *)this + 8));
}
