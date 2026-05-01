/*
 * XREFs of ?AppLayoutCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803E21F0
 * Callers:
 *     ?RuntimeClassInitialize@TabletModePositioner@@QEAAJXZ @ 0x1803D9D10 (-RuntimeClassInitialize@TabletModePositioner@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VCAppTransitionTargetManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180362EA4 (--1-$MakeAllocator@VCAppTransitionTargetManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIAppLayoutCacheInternal@@UIAppLayoutCache@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1803E2070 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponent_ea_1803E2070.c)
 */

__int64 __fastcall AppLayoutCache_CreateInstance(const struct _GUID *a1, void **a2)
{
  void *v3; // rax
  _QWORD *v4; // rbx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r9
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v11)(_QWORD, GUID *, void **); // [rsp+30h] [rbp+8h] BYREF
  void *v12; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  v11 = 0LL;
  v3 = operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v3;
  v4 = v3;
  if ( !v3 )
  {
    Microsoft::WRL::Details::MakeAllocator<CAppTransitionTargetManager>::~MakeAllocator<CAppTransitionTargetManager>(&v12);
    v5 = -2147024882;
    v6 = 67LL;
    v7 = 2147942414LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\applayoutcache.cpp",
      (const char *)v7);
    goto LABEL_6;
  }
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,IAppLayoutCacheInternal,IAppLayoutCache,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,IAppLayoutCacheInternal,IAppLayoutCache,Microsoft::WRL::FtmBase>((__int64)v3);
  v12 = v4;
  *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,IAppLayoutCacheInternal,IAppLayoutCache,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::Selector<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IAppLayoutCacheInternal,IAppLayoutCache,Microsoft::WRL::FtmBase>>'};
  v4[5] = &AppLayoutCache::`vftable'{for `IImmersiveShellComponent'};
  v4[6] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,IAppLayoutCacheInternal,IAppLayoutCache,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  v4[13] = &AppLayoutCache::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAppLayoutCacheInternal,IAppLayoutCache,Microsoft::WRL::FtmBase>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IAppLayoutCacheInternal,IAppLayoutCache,Microsoft::WRL::FtmBase>>'};
  v4[14] = &AppLayoutCache::`vftable'{for `IAppLayoutCache'};
  v4[15] = &AppLayoutCache::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v4[20] = 0LL;
  v4[21] = 0LL;
  (*(void (__fastcall **)(_QWORD *))(*v4 + 8LL))(v4);
  v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, void **))v4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  v8 = (**v11)(v11, &GUID_35f2929a_cf19_47c0_9235_6ba0c9a32e25, a2);
  v5 = v8;
  if ( v8 < 0 )
  {
    v7 = (unsigned int)v8;
    v6 = 68LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return v5;
}
