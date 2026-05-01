/*
 * XREFs of _lambda_8f853f3308fdbebd25aa75747bd09082_::_lambda_8f853f3308fdbebd25aa75747bd09082_ @ 0x180025B70
 * Callers:
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x1800284A0 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 * Callees:
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180025AE4 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180029718 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002AEA0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 *     ??$create@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAA_N$$QEAV?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@2@@Z @ 0x1801890A8 (--$create@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy_ea_1801890A8.c)
 *     ??4?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x180189374 (--4-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsP_ea_180189374.c)
 */

__int64 __fastcall lambda_8f853f3308fdbebd25aa75747bd09082_::_lambda_8f853f3308fdbebd25aa75747bd09082_(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rdi
  wil::details::ThreadFailureCallbackHolder *v5; // r14
  volatile signed __int32 **v6; // rbx
  volatile signed __int32 **v7; // r14
  volatile signed __int32 **v8; // rcx
  volatile signed __int32 *v9; // rax

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_BYTE *)(a1 + 4) = *(_BYTE *)(a2 + 4);
  *(_BYTE *)(a1 + 5) = *(_BYTE *)(a2 + 5);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  v4 = a1 + 16;
  *(_QWORD *)(a1 + 16) = &wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v5 = (wil::details::ThreadFailureCallbackHolder *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = a1 + 16;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 24));
  *(_QWORD *)(v4 + 48) = v4 + 56;
  *(_DWORD *)(v4 + 56) = 0;
  *(_BYTE *)(v4 + 60) = 0;
  *(_BYTE *)(v4 + 120) = 0;
  *(_DWORD *)(v4 + 96) = 0;
  *(_QWORD *)(v4 + 104) = 0LL;
  *(_QWORD *)(v4 + 112) = 0LL;
  *(_QWORD *)(v4 + 128) = 1LL;
  *(_QWORD *)(v4 + 280) = 0LL;
  *(_QWORD *)(v4 + 288) = 0LL;
  memset_0((void *)(v4 + 136), 0, 0x90uLL);
  *(_QWORD *)(v4 + 296) = 0LL;
  v6 = (volatile signed __int32 **)(v4 + 304);
  *(_QWORD *)(v4 + 304) = 0LL;
  if ( *(_DWORD *)(v4 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching(v5);
  v7 = (volatile signed __int32 **)(a2 + 320);
  v8 = (volatile signed __int32 **)(v4 + 304);
  if ( *(_QWORD *)(a2 + 320) )
  {
    *(_QWORD *)(v4 + 48) = *(_QWORD *)(a2 + 64);
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v8);
    v9 = *v7;
    *v6 = *v7;
    if ( v9 )
      _InterlockedIncrement(v9);
  }
  else if ( (unsigned __int8)wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::create<wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>(
                               v8,
                               a2 + 72) )
  {
    *(_QWORD *)(v4 + 48) = (unsigned __int64)(*v6 + 2) & -(__int64)(*v6 != 0LL);
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::operator=(
      a2 + 320,
      v4 + 304);
    *(_QWORD *)(a2 + 64) = *(_QWORD *)(v4 + 48);
    *(_QWORD *)(a2 + 56) = *(_QWORD *)(v4 + 48) + 40LL;
  }
  *(_QWORD *)(v4 + 40) = *(_QWORD *)(v4 + 48) + 40LL;
  *(_QWORD *)v4 = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  return a1;
}
