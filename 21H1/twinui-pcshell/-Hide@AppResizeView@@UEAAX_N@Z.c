/*
 * XREFs of ?Hide@AppResizeView@@UEAAX_N@Z @ 0x1803EF890
 * Callers:
 *     ?CancelResize@AppResizeView@@AEAAXXZ @ 0x1803EF648 (-CancelResize@AppResizeView@@AEAAXXZ.c)
 *     ?CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x1803EF6E4 (-CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?Hide@AppResizeView@@UEAAX_N@Z @ 0x1803EF890 (-Hide@AppResizeView@@UEAAX_N@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_efd0a2201cba9b434f5cd15cf706417f___::Run @ 0x1803F0340 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_efd0a2201cba9b434f5cd15cf706417f___--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIIndividualExperienceManagerFactory@@UICompositeExperienceManagerFactory@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180094F90 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIIndividualExperi.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIAppResizeView@@UITabletModeInputCallback@@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180138C90 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRL_ea_180138C90.c)
 *     ?InternalRelease@?$ComPtr@VCAllUpViewService@@@WRL@Microsoft@@IEAAKXZ @ 0x180360388 (-InternalRelease@-$ComPtr@VCAllUpViewService@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UITabletModeViewManager@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UITabletModeViewManager@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803E9B90 (--$As@UITabletModeViewManager@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_efd0a2201cba9b434f5cd15cf706417f___ @ 0x1803EF250 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_efd0a2201cba9b434f5cd15cf706417f___.c)
 *     ?Hide@AppResizeView@@UEAAX_N@Z @ 0x1803EF890 (-Hide@AppResizeView@@UEAAX_N@Z.c)
 */

void __fastcall AppResizeView::Hide(AppResizeView *this, volatile int *a2)
{
  __int64 *v2; // rdi
  volatile int *v4; // r10
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  char v8; // di
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile int *v11; // [rsp+40h] [rbp+18h] BYREF
  volatile int *v12; // [rsp+48h] [rbp+20h] BYREF

  v2 = (__int64 *)((char *)this + 64);
  if ( (_BYTE)a2 )
  {
    if ( !*v2 )
    {
      v4 = (volatile int *)((char *)this - 24);
      v12 = (volatile int *)((char *)this - 24);
      if ( this != (AppResizeView *)24 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IIndividualExperienceManagerFactory,ICompositeExperienceManagerFactory,Microsoft::WRL::FtmBase>::AddRef(
          (__int64)this - 24,
          a2);
      v11 = v4;
      if ( v4 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,IAppResizeView,ITabletModeInputCallback,IApplicationViewChangeListener>::AddRef(
          (__int64)v4,
          a2);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
      v7 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_efd0a2201cba9b434f5cd15cf706417f___(
             v6,
             v5,
             (__int64)v2,
             &v11);
      if ( v7 >= 0 )
      {
        v8 = 0;
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB9,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
          (const char *)(unsigned int)v7);
        v8 = 1;
      }
      Microsoft::WRL::ComPtr<CAllUpViewService>::InternalRelease(&v11);
      if ( v8 )
        AppResizeView::Hide(this, 0);
      Microsoft::WRL::ComPtr<CAllUpViewService>::InternalRelease(&v12);
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 8);
    v11 = 0LL;
    v9 = Microsoft::WRL::ComPtr<IUnknown>::As<ITabletModeViewManager>((_QWORD *)this - 1, (__int64 *)&v11);
    if ( v9 >= 0 )
      (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v11 + 80LL))(v11);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC5,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
        (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  }
}
