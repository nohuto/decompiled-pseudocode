/*
 * XREFs of ?AddPositionAdjustment@PositionAdjustmentHistory@@UEAA?AW4PositionAdjustmentAction@@PEAUIApplicationView@@@Z @ 0x1803E49E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1801377E8 (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITouchpadGesture@@U?$ChainInterfaces@UIVirtualDesktopGestureHandlerPrivate@@UIVirtualDesktopGestureHandler@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180138100 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITouchpadGesture@.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITouchpadGesture@@U?$ChainInterfaces@UIVirtualDesktopGestureHandlerPrivate@@UIVirtualDesktopGestureHandler@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180138414 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITouchpad.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x180365D2C (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_a506e902e7170e918a173785fdf388b8___ @ 0x1803E4874 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_a506e902e7170e918a173785fdf388b8___.c)
 *     ?GetEntryCountForView@PositionAdjustmentHistory@@AEAAIPEAUIApplicationView@@@Z @ 0x1803E4B10 (-GetEntryCountForView@PositionAdjustmentHistory@@AEAAIPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall PositionAdjustmentHistory::AddPositionAdjustment(__int64 a1, struct IApplicationView *a2)
{
  ULONGLONG TickCount64; // rax
  void *v5; // r8
  volatile int *v6; // rdx
  unsigned int v7; // edi
  ULONGLONG v8; // r14
  int v9; // eax
  __int64 v10; // rcx
  __int64 *v11; // rsi
  unsigned int EntryCountForView; // eax
  __int64 v14[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  volatile int *v16; // [rsp+50h] [rbp+8h] BYREF
  volatile int *v17; // [rsp+58h] [rbp+10h] BYREF

  v14[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v14);
  TickCount64 = GetTickCount64();
  v6 = *(volatile int **)(a1 + 32);
  v7 = 0;
  v8 = TickCount64;
  v14[1] = TickCount64;
  if ( v6 == *(volatile int **)(a1 + 48)
    && (v9 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
               a1 + 24,
               (unsigned __int64)v6 + 1,
               v5),
        v9 < 0) )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2B,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\positionadjustmenthistory.cpp",
      (const char *)(unsigned int)v9);
  }
  else
  {
    ++*(_QWORD *)(a1 + 32);
    v10 = 16LL * *(_QWORD *)(a1 + 32);
    v11 = (__int64 *)(v10 + *(_QWORD *)(a1 + 24) - 16LL);
    if ( v11 )
    {
      *v11 = (__int64)a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v11);
      v11[1] = v8;
    }
  }
  v17 = (volatile int *)a1;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ITouchpadGesture,Microsoft::WRL::ChainInterfaces<IVirtualDesktopGestureHandlerPrivate,IVirtualDesktopGestureHandler,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::InternalAddRef(
      a1,
      v6);
  v16 = (volatile int *)a1;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ITouchpadGesture,Microsoft::WRL::ChainInterfaces<IVirtualDesktopGestureHandlerPrivate,IVirtualDesktopGestureHandler,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::AddRef(a1);
  Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_a506e902e7170e918a173785fdf388b8___(
    v10,
    *(unsigned int *)(a1 + 56),
    (__int64)v5,
    &v16);
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v16);
  EntryCountForView = PositionAdjustmentHistory::GetEntryCountForView((PositionAdjustmentHistory *)a1, a2);
  if ( EntryCountForView >= 3 )
    v7 = 2 - (EntryCountForView < 4);
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
  return v7;
}
