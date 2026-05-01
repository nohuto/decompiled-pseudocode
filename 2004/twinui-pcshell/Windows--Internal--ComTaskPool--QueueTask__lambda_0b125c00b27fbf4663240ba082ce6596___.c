/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_0b125c00b27fbf4663240ba082ce6596___ @ 0x180025CE0
 * Callers:
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x1800284A0 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 * Callees:
 *     ??0?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x180010648 (--0-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x180025CA4 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180029718 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_0b125c00b27fbf4663240ba082ce6596___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rdi
  _DWORD *v8; // rbx
  int v9; // eax
  __int64 v10; // rax
  _DWORD *v11; // rcx
  bool v12; // zf
  unsigned int v13; // ebx

  v6 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  v8 = v6;
  if ( v6 )
  {
    v6[3] = 1;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_QWORD *)v8 + 2) = 0LL;
    if ( v8 + 4 != (_DWORD *)a4 )
    {
      *((_QWORD *)v8 + 2) = *(_QWORD *)a4;
      *(_QWORD *)a4 = 0LL;
    }
    *((_QWORD *)v8 + 3) = *(_QWORD *)(a4 + 8);
    v8[8] = *(_DWORD *)(a4 + 16);
    *((_BYTE *)v8 + 36) = *(_BYTE *)(a4 + 20);
    *((_BYTE *)v8 + 37) = *(_BYTE *)(a4 + 21);
    *((_QWORD *)v8 + 5) = *(_QWORD *)(a4 + 24);
    v9 = *(_DWORD *)(a4 + 64);
    *((_QWORD *)v8 + 6) = &wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
    wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
      (wil::details::ThreadFailureCallbackHolder *)(v8 + 14),
      (struct wil::details::IFailureCallback *)(v8 + 12),
      0LL,
      v9 != 0);
    wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)(v8 + 26),
      a4 + 88);
    *((_QWORD *)v8 + 44) = *(_QWORD *)(a4 + 336);
    *(_QWORD *)(a4 + 336) = 0LL;
    v10 = *((_QWORD *)v8 + 44);
    v11 = (_DWORD *)(v10 + 8);
    if ( !v10 )
      v11 = v8 + 26;
    *((_QWORD *)v8 + 12) = v11;
    *((_QWORD *)v8 + 11) = v11 + 10;
    v12 = *(_DWORD *)(a4 + 64) == 0;
    *(_QWORD *)(a4 + 80) = a4 + 88;
    if ( !v12 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a4 + 40));
    v7 = v8;
    *((_QWORD *)v8 + 6) = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
    *(_QWORD *)v8 = off_18048B288;
  }
  v13 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 16LL))(v7);
  return v13;
}
