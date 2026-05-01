/*
 * XREFs of ?StartDrag@ElementDragData@@UEAAJW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18039DA50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180185604 (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18036C7C0 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18036C844 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??$As@UIMultitaskingViewDragSource@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewDragSource@@@WRL@Microsoft@@@Details@12@@Z @ 0x18039BFEC (--$As@UIMultitaskingViewDragSource@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18039C468 (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflector_ea_18039C468.c)
 *     ??1DragSwitchItem@MultitaskingViewTelemetry@@QEAA@XZ @ 0x18039C774 (--1DragSwitchItem@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ??4DragSwitchItem@MultitaskingViewTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18039C884 (--4DragSwitchItem@MultitaskingViewTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18039CBA8 (-DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x18039CFC4 (-GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z.c)
 *     ?StartActivity@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXXZ @ 0x18039D7F4 (-StartActivity@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?MultitaskingViewDragVisual_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1AEBUCSize@Geometry@@NAEBU_GUID@@PEAPEAX@Z @ 0x1803A23E0 (-MultitaskingViewDragVisual_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingVie.c)
 */

__int64 __fastcall ElementDragData::StartDrag(__int64 a1, int a2, __int64 *a3)
{
  int DragSourceLocation; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  int Instance; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  const struct _GUID *v13; // [rsp+28h] [rbp-D8h]
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
  __m128i v16; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v17[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v18[40]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v19[40]; // [rsp+1B0h] [rbp+B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+338h] [rbp+238h]

  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v18,
    (__int64)"DragSwitchItem");
  v18[0] = &MultitaskingViewTelemetry::DragSwitchItem::`vftable';
  MultitaskingViewTelemetry::DragSwitchItem::StartActivity((MultitaskingViewTelemetry::DragSwitchItem *)v18);
  v14 = *(_QWORD *)(a1 + 16);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v17, &v14, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  *(_DWORD *)(a1 + 88) = a2;
  *(_OWORD *)(a1 + 92) = *(_OWORD *)a3;
  *(_DWORD *)(a1 + 108) = *((_DWORD *)a3 + 4);
  v16 = 0LL;
  DragSourceLocation = ElementDragData::GetDragSourceLocation((ElementDragData *)a1, &v16);
  v7 = DragSourceLocation;
  if ( DragSourceLocation >= 0 )
  {
    v8 = *a3;
    v15 = 0LL;
    *(_QWORD *)(a1 + 64) = v8;
    LODWORD(v14) = v8 - v16.m128i_i32[0];
    HIDWORD(v14) = *(_DWORD *)(a1 + 68) - v16.m128i_i32[1];
    *(_QWORD *)(a1 + 56) = v14;
    Instance = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IMultitaskingViewDragSource>(
                 (_QWORD *)(a1 + 32),
                 &v15);
    v7 = Instance;
    if ( Instance >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 48));
      Instance = MultitaskingViewDragVisual_CreateInstance(
                   *(struct ISwitchThumbnailFactory **)(a1 + 16),
                   *(struct IMultitaskingViewElement **)(a1 + 40),
                   *(struct IMultitaskingViewElement **)(a1 + 32),
                   (const struct Geometry::CSize *)(a1 + 56),
                   *(double *)(a1 + 120),
                   v13,
                   (void **)(a1 + 48));
      v7 = Instance;
      if ( Instance >= 0 )
      {
        v11 = *(_QWORD *)(a1 + 48);
        v14 = *(_QWORD *)(a1 + 92);
        (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v11 + 24LL))(v11, &v14, 0LL, 0LL);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 216LL))(*(_QWORD *)(a1 + 40));
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 232LL))(*(_QWORD *)(a1 + 40));
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 432LL))(
          *(_QWORD *)(a1 + 40),
          *(_QWORD *)(a1 + 24));
        ElementDragData::DragOver((ElementDragData *)a1, (const struct MultitaskingViewPointerInputArgs *)a3);
        wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
          (struct wil::details::IFailureCallback *)v19,
          (__int64)v18,
          0);
        v19[0] = &MultitaskingViewTelemetry::DragSwitchItem::`vftable';
        MultitaskingViewTelemetry::DragSwitchItem::operator=(a1 + 184, (__int64)v19);
        MultitaskingViewTelemetry::DragSwitchItem::~DragSwitchItem((MultitaskingViewTelemetry::DragSwitchItem *)v19);
        v7 = 0;
        *(_DWORD *)(a1 + 496) = 1;
        goto LABEL_9;
      }
      v10 = 113LL;
    }
    else
    {
      v10 = 106LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragdata.cpp",
      (const char *)(unsigned int)Instance);
LABEL_9:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5E,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragdata.cpp",
    (const char *)(unsigned int)DragSourceLocation);
LABEL_10:
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v17);
  MultitaskingViewTelemetry::DragSwitchItem::~DragSwitchItem((MultitaskingViewTelemetry::DragSwitchItem *)v18);
  return v7;
}
