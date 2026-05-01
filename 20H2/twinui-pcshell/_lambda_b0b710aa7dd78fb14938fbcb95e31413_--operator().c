/*
 * XREFs of _lambda_b0b710aa7dd78fb14938fbcb95e31413_::operator() @ 0x1803BD0AC
 * Callers:
 *     ElementDragData::HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x1803BC95C (ElementDragData--HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___.c)
 *     ?FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z @ 0x1803BD588 (-FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_0688f707641f84dad399f01864cccda0___lambda_b0b710aa7dd78fb14938fbcb95e31413___::OnStoryboardStatusChanged @ 0x1803BDB20 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_0688f707641f84dad399f01864_ea_1803BDB20.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180022028 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18007C198 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18009509C (-ContinueOnCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_Tl.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18038D410 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18038D494 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?Stop@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXI@Z @ 0x1803BE688 (-Stop@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_b0b710aa7dd78fb14938fbcb95e31413_::operator()(unsigned int *a1)
{
  __int64 v2[3]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v3[32]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v4[24]; // [rsp+60h] [rbp-38h] BYREF
  int v5; // [rsp+78h] [rbp-20h]
  __int64 v6; // [rsp+A0h] [rbp+8h] BYREF

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(*(_QWORD *)a1 + 184LL),
    (wil::ActivityThreadWatcher *)v3);
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v6);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v2, &v6, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 40LL) + 448LL))(
    *(_QWORD *)(*(_QWORD *)a1 + 40LL),
    *(_QWORD *)(*(_QWORD *)a1 + 24LL),
    a1[2]);
  MultitaskingViewTelemetry::DragSwitchItem::Stop(
    (MultitaskingViewTelemetry::DragSwitchItem *)(*(_QWORD *)a1 + 184LL),
    a1[2]);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v2);
  if ( v5 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v4);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v3);
}
