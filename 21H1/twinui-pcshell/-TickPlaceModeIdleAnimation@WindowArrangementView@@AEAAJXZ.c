/*
 * XREFs of ?TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ @ 0x1803EE014
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a08449ab0a2814bb2af7204eecc9930___::Run @ 0x1803ECE00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1a08449ab0a2814bb2af7204eecc9930___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_af32df4a401f889ca6e3593a0d1a6fcf___::Run @ 0x1803ECE30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_af32df4a401f889ca6e3593a0d1a6fcf___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180160CB0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCom_ea_180160CB0.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180161020 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonAp.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18036C7C0 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18036C844 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb_____lambda_d996df4ae651642ba189a9f5cbef4ddb__&_ @ 0x1803E9BD4 (Microsoft--WRL--Details--Make_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4.c)
 *     ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1803EAFD8 (-EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEB.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x1803EC1F0 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z @ 0x1803ECE58 (-SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z.c)
 *     ?GetPlaceModeGutterIndex@AppLayoutHelpers@@YAIPEAUIAppLayout@@@Z @ 0x18046184C (-GetPlaceModeGutterIndex@AppLayoutHelpers@@YAIPEAUIAppLayout@@@Z.c)
 */

__int64 __fastcall WindowArrangementView::TickPlaceModeIdleAnimation(WindowArrangementView *this)
{
  int v2; // eax
  int v3; // ecx
  bool v4; // cf
  __int64 v5; // rbx
  volatile int *v6; // rdx
  unsigned int v7; // r14d
  unsigned int PlaceModeGutterIndex; // eax
  int v9; // ecx
  IApplicationViewChangeListener *v10; // rbx
  int v11; // esi
  HRESULT v12; // eax
  void *v13; // rbx
  char v14; // al
  int v15; // ecx
  IApplicationViewChangeListener *v17; // [rsp+30h] [rbp-20h] BYREF
  WindowArrangementView *v18; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v21; // [rsp+90h] [rbp+40h] BYREF
  void *ppvOut; // [rsp+98h] [rbp+48h] BYREF
  WindowArrangementView *v23; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+58h] BYREF

  if ( *((_DWORD *)this + 74) && *((_DWORD *)this + 77) < 3u )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 80LL))(*((_QWORD *)this + 15), 1LL);
    v3 = *((_DWORD *)this + 74);
    if ( v3 == 1 )
    {
      v4 = *((_BYTE *)this + 313) != 0;
      *((_DWORD *)this + 74) = 2;
      *((_DWORD *)this + 75) = v4 ? v2 - 1 : 0;
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
    v24 = 0LL;
    v5 = *((_QWORD *)this + 15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v5 + 104LL))(
           v5,
           *((unsigned int *)this + 75),
           1LL,
           &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
           &v24) < 0 )
    {
      ++*((_DWORD *)this + 77);
      LOBYTE(v6) = 1;
      WindowArrangementView::SetPlaceModeIdleAnimationEnabled(this, v6);
    }
    else
    {
      v7 = 0;
      if ( *((_BYTE *)this + 304) )
      {
        PlaceModeGutterIndex = AppLayoutHelpers::GetPlaceModeGutterIndex(
                                 *((AppLayoutHelpers **)this + 15),
                                 (struct IAppLayout *)v6);
        v9 = *((_DWORD *)this + 75);
        if ( v9 == PlaceModeGutterIndex )
        {
          v7 = 1;
        }
        else if ( v9 == PlaceModeGutterIndex + 1 )
        {
          v7 = 2;
        }
      }
      v21 = 0LL;
      v18 = this;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::InternalAddRef(
        (__int64)this,
        v6);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      v23 = this;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::AddRef((__int64)this);
      v21 = 0LL;
      Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb_____lambda_d996df4ae651642ba189a9f5cbef4ddb____(
        &v17,
        (__int64 *)&v23);
      v10 = v17;
      if ( v17 )
      {
        v11 = (**(__int64 (__fastcall ***)(IApplicationViewChangeListener *, GUID *, __int64 *))v17)(
                v17,
                &GUID_53204493_9170_4f30_be0e_211392a4618e,
                &v21);
        (*(void (__fastcall **)(IApplicationViewChangeListener *))(*(_QWORD *)v10 + 16LL))(v10);
      }
      else
      {
        v11 = -2147024882;
      }
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v23);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2BB,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v11);
LABEL_23:
        Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v18);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
LABEL_31:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
        return (unsigned int)v11;
      }
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      v12 = IUnknown_QueryService(
              *((IUnknown **)this + 2),
              &stru_18051ACB0,
              &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41,
              &ppvOut);
      v11 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2BE,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
        goto LABEL_23;
      }
      v23 = (WindowArrangementView *)ppvOut;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v23);
      DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v19, (__int64 *)&v23, (__int64)&GUID_NULL, v21);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
      v13 = ppvOut;
      v17 = (IApplicationViewChangeListener *)ppvOut;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
      if ( v13 )
        (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v13 + 160LL))(v13, 1LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 10) + 168LL))(
        *((_QWORD *)this + 10),
        v7,
        1LL,
        v21);
      v14 = *((_BYTE *)this + 304);
      v15 = -(*((_DWORD *)this + 75) != 0);
      LODWORD(v23) = 3;
      HIDWORD(v23) = 2 - v15;
      WindowArrangementView::EnablePlaceModeDropFeedback(
        (__int64)this,
        0,
        (int *)((unsigned __int64)&v23 & -(__int64)(v14 != 0)),
        v21);
      if ( v13 )
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v13 + 160LL))(v13, 0LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v19);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v18);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    }
    v11 = 0;
    goto LABEL_31;
  }
  return 2147947423LL;
}
