/*
 * XREFs of ?PositionAdjustmentHistory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803E4BA0
 * Callers:
 *     ?Initialize@TabletModePositioner@@AEAAJXZ @ 0x1803D7B74 (-Initialize@TabletModePositioner@@AEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITouchpadGesture@@U?$ChainInterfaces@UIVirtualDesktopGestureHandlerPrivate@@UIVirtualDesktopGestureHandler@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180138414 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITouchpad.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPositionAdjustmentHistory@@UIPositionAdjustmentHistoryTestHook@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18036196C (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPositionAdjustmentHis.c)
 *     ??1?$MakeAllocator@VCAppTransitionTargetManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180362EA4 (--1-$MakeAllocator@VCAppTransitionTargetManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x180365D2C (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall PositionAdjustmentHistory_CreateInstance(const struct _GUID *a1, void **a2)
{
  _DWORD *v3; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  int v6; // ebx
  volatile int *v7; // rdx
  _DWORD *v8; // rcx
  _DWORD *v9; // rcx
  volatile int *v10; // rcx
  volatile int *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  volatile int *v14; // [rsp+30h] [rbp+10h] BYREF
  void *v15; // [rsp+38h] [rbp+18h] BYREF

  *a2 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v14);
  v14 = 0LL;
  v3 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v3;
  v4 = v3;
  if ( !v3 )
  {
    Microsoft::WRL::Details::MakeAllocator<CAppTransitionTargetManager>::~MakeAllocator<CAppTransitionTargetManager>(&v15);
    v5 = 115LL;
    v6 = -2147024882;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\positionadjustmenthistory.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_17;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPositionAdjustmentHistory,IPositionAdjustmentHistoryTestHook>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPositionAdjustmentHistory,IPositionAdjustmentHistoryTestHook>(v3);
  *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IPositionAdjustmentHistory,IPositionAdjustmentHistoryTestHook>::`vftable'{for `IPositionAdjustmentHistory'};
  v4[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IPositionAdjustmentHistory,IPositionAdjustmentHistoryTestHook>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPositionAdjustmentHistoryTestHook>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_DWORD *)v4 + 14) = 1000;
  *v4 = &PositionAdjustmentHistory::`vftable'{for `IPositionAdjustmentHistory'};
  v4[3] = 0LL;
  v4[4] = 0LL;
  v4[5] = 0LL;
  v4[6] = 0LL;
  v4[1] = &PositionAdjustmentHistory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPositionAdjustmentHistoryTestHook>'};
  v15 = v4;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ITouchpadGesture,Microsoft::WRL::ChainInterfaces<IVirtualDesktopGestureHandlerPrivate,IVirtualDesktopGestureHandler,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::InternalAddRef(
    (__int64)v4,
    v7);
  v14 = (volatile int *)v4;
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease((volatile int **)&v15);
  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_7ae7ff38_b4c2_4847_a3b7_4657c8b5bc82, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v11 = v14;
    *a2 = (void *)v14;
    (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v11 + 8LL))(v11);
    v6 = 0;
    goto LABEL_17;
  }
  if ( InlineIsEqualGUID(v8, v8) )
  {
    v10 = v14;
    v6 = 0;
    *a2 = (void *)v14;
  }
  else
  {
    if ( InlineIsEqualGUID(v9, &GUID_fd10ce77_803f_4316_961f_cc6c4ac32fca) )
    {
      v10 = v14 + 2;
      *a2 = (void *)(v14 + 2);
      v6 = 0;
    }
    else
    {
      v6 = -2147467262;
      v10 = 0LL;
    }
    if ( v6 < 0 )
    {
      v5 = 116LL;
      goto LABEL_16;
    }
  }
  (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v10 + 8LL))(v10);
LABEL_17:
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v14);
  return (unsigned int)v6;
}
