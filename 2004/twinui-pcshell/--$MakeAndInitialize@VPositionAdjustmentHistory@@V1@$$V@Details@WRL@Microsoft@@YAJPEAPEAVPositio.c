/*
 * XREFs of ??$MakeAndInitialize@VPositionAdjustmentHistory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPositionAdjustmentHistory@@@Z @ 0x1804068C4
 * Callers:
 *     ?PositionAdjustmentHistory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180406D30 (-PositionAdjustmentHistory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180092F7C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITouchpadGesture@@U?$ChainInterfaces@UIVirtualDesktopGestureHandlerPrivate@@UIVirtualDesktopGestureHandler@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18015C6B0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITouchpadGesture@.c)
 *     ??0PositionAdjustmentHistory@@QEAA@XZ @ 0x180406A14 (--0PositionAdjustmentHistory@@QEAA@XZ.c)
 *     ??1?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@QEAA@XZ @ 0x180406A94 (--1-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PositionAdjustmentHistory,PositionAdjustmentHistory,>(
        PositionAdjustmentHistory **a1)
{
  unsigned int v1; // ebx
  void *v3; // rax
  PositionAdjustmentHistory *v4; // rax
  PositionAdjustmentHistory *v5; // rdi
  void *v7; // [rsp+30h] [rbp+8h] BYREF
  PositionAdjustmentHistory *v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  *a1 = 0LL;
  v3 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v3;
  if ( v3 )
  {
    v4 = PositionAdjustmentHistory::PositionAdjustmentHistory((PositionAdjustmentHistory *)v3);
    v8 = v4;
    v5 = v4;
    v7 = 0LL;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ITouchpadGesture,Microsoft::WRL::ChainInterfaces<IVirtualDesktopGestureHandlerPrivate,IVirtualDesktopGestureHandler,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::AddRef((__int64)v4);
    *a1 = v5;
    Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::~ComPtr<PositionAdjustmentHistory>(&v8);
  }
  else
  {
    v1 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v7);
  return v1;
}
