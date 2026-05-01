/*
 * XREFs of ?TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ @ 0x180410F10
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a08449ab0a2814bb2af7204eecc9930___::Run @ 0x18040FC80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1a08449ab0a2814bb2af7204eecc9930___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_af32df4a401f889ca6e3593a0d1a6fcf___::Run @ 0x18040FCB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_af32df4a401f889ca6e3593a0d1a6fcf___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180184DA0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCom_ea_180184DA0.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180185110 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonAp.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18038DCD0 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18038DD54 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb_____lambda_d996df4ae651642ba189a9f5cbef4ddb__&_ @ 0x18040C4F0 (Microsoft--WRL--Details--Make_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4.c)
 *     ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18040DB68 (-EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEB.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x18040F010 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z @ 0x18040FCD8 (-SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z.c)
 *     ?GetPlaceModeGutterIndex@AppLayoutHelpers@@YAIPEAUIAppLayout@@@Z @ 0x1804858CC (-GetPlaceModeGutterIndex@AppLayoutHelpers@@YAIPEAUIAppLayout@@@Z.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall WindowArrangementView::TickPlaceModeIdleAnimation(WindowArrangementView *this)
{
  int v2; // eax
  int v3; // ecx
  __int64 v4; // rbx
  volatile int *v5; // rdx
  unsigned int v6; // r14d
  unsigned int PlaceModeGutterIndex; // eax
  int v8; // ecx
  IApplicationViewChangeListener *v9; // rbx
  int v10; // esi
  HRESULT v11; // eax
  void *v12; // rbx
  WindowArrangementView **v14; // [rsp+30h] [rbp-20h] BYREF
  WindowArrangementView *v15; // [rsp+38h] [rbp-18h] BYREF
  __int64 v16[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v18; // [rsp+90h] [rbp+40h] BYREF
  void *ppvOut; // [rsp+98h] [rbp+48h] BYREF
  WindowArrangementView *v20; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+58h] BYREF

  if ( *((_DWORD *)this + 74) && *((_DWORD *)this + 77) < 3u )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 80LL))(*((_QWORD *)this + 15), 1LL);
    v3 = *((_DWORD *)this + 74);
    if ( v3 == 1 )
    {
      *((_DWORD *)this + 75) = *((_BYTE *)this + 313) != 0 ? v2 - 1 : 0;
      *((_DWORD *)this + 74) = 2;
    }
    else
    {
      if ( v3 != 2 )
        goto LABEL_10;
      if ( *((_BYTE *)this + 304) )
      {
        *((_BYTE *)this + 304) = 0;
        goto LABEL_10;
      }
      *((_DWORD *)this + 75) += *((_BYTE *)this + 313) != 0 ? -1 : 1;
    }
    *((_BYTE *)this + 304) = 1;
LABEL_10:
    v21 = 0LL;
    v4 = *((_QWORD *)this + 15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v4 + 104LL))(
           v4,
           *((unsigned int *)this + 75),
           1LL,
           &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
           &v21) < 0 )
    {
      ++*((_DWORD *)this + 77);
      LOBYTE(v5) = 1;
      WindowArrangementView::SetPlaceModeIdleAnimationEnabled(this, v5);
    }
    else
    {
      v6 = 0;
      if ( *((_BYTE *)this + 304) )
      {
        PlaceModeGutterIndex = AppLayoutHelpers::GetPlaceModeGutterIndex(
                                 *((AppLayoutHelpers **)this + 15),
                                 (struct IAppLayout *)v5);
        v8 = *((_DWORD *)this + 75);
        if ( v8 == PlaceModeGutterIndex )
        {
          v6 = 1;
        }
        else if ( v8 == PlaceModeGutterIndex + 1 )
        {
          v6 = 2;
        }
      }
      v18 = 0LL;
      v15 = this;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::InternalAddRef(
        (__int64)this,
        v5);
      v14 = &v20;
      v20 = this;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::AddRef((__int64)this);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      v18 = 0LL;
      Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb_____lambda_d996df4ae651642ba189a9f5cbef4ddb____(
        (IApplicationViewChangeListener **)&v14,
        &v20);
      v9 = (IApplicationViewChangeListener *)v14;
      if ( v14 )
      {
        v10 = (*(__int64 (__fastcall **)(WindowArrangementView **, GUID *, __int64 *))*v14)(
                v14,
                &GUID_53204493_9170_4f30_be0e_211392a4618e,
                &v18);
        (*(void (__fastcall **)(IApplicationViewChangeListener *))(*(_QWORD *)v9 + 16LL))(v9);
      }
      else
      {
        v10 = -2147024882;
      }
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v20);
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2BB,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v10);
LABEL_23:
        Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v15);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
LABEL_31:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
        return (unsigned int)v10;
      }
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      v11 = IUnknown_QueryService(
              *((IUnknown **)this + 2),
              &stru_180543390,
              &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41,
              &ppvOut);
      v10 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2BE,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v11);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
        goto LABEL_23;
      }
      v20 = (WindowArrangementView *)ppvOut;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
      DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v16, (__int64 *)&v20, (__int64)&GUID_NULL, v18);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
      v12 = ppvOut;
      v14 = (WindowArrangementView **)ppvOut;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
      if ( v12 )
        (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v12 + 160LL))(v12, 1LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 10) + 168LL))(
        *((_QWORD *)this + 10),
        v6,
        1LL,
        v18);
      LODWORD(v20) = 3;
      HIDWORD(v20) = (*((_DWORD *)this + 75) != 0) + 2;
      WindowArrangementView::EnablePlaceModeDropFeedback(
        (__int64)this,
        0,
        (int *)((unsigned __int64)&v20 & -(__int64)(*((_BYTE *)this + 304) != 0)),
        v18);
      if ( v12 )
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v12 + 160LL))(v12, 0LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
      DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v15);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    }
    v10 = 0;
    goto LABEL_31;
  }
  return 2147947423LL;
}
