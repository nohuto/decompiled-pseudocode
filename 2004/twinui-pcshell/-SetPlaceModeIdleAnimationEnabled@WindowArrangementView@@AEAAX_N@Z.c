/*
 * XREFs of ?SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z @ 0x18040FCD8
 * Callers:
 *     ?MovePlacement@WindowArrangementView@@UEAAXW4PlaceModeKey@@@Z @ 0x18040F040 (-MovePlacement@WindowArrangementView@@UEAAXW4PlaceModeKey@@@Z.c)
 *     ?ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z @ 0x180410110 (-ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z.c)
 *     ?TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ @ 0x180410F10 (-TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180184DA0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCom_ea_180184DA0.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180185110 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonAp.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_4852e8c5575c21ffaf507ee455e63cdf___ @ 0x18040C8C8 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_4852e8c5575c21ffaf507ee455e63cdf___.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x18040F010 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall WindowArrangementView::SetPlaceModeIdleAnimationEnabled(WindowArrangementView *this, volatile int *a2)
{
  int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v6; // eax
  char v7; // bl
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WindowArrangementView *v9; // [rsp+40h] [rbp+18h] BYREF
  WindowArrangementView *v10; // [rsp+48h] [rbp+20h] BYREF

  if ( (_BYTE)a2 )
  {
    v10 = this;
    if ( this )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::InternalAddRef(
        (__int64)this,
        a2);
    v3 = *((_DWORD *)this + 77);
    v9 = this;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::AddRef((__int64)this);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
    v5 = 3000LL;
    if ( !v3 )
      v5 = 1500LL;
    v6 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_4852e8c5575c21ffaf507ee455e63cdf___(
           v4,
           v5,
           (__int64)this + 136,
           &v9);
    if ( v6 >= 0 )
    {
      v7 = 1;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x265,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v6);
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v9);
    if ( v7 )
      *((_DWORD *)this + 74) = 1;
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v10);
  }
  else
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
    *((_DWORD *)this + 74) = 0;
  }
}
