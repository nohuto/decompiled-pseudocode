/*
 * XREFs of ?TabletModeViewManagerProxy_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180383FA4
 * Callers:
 *     ?_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x18037E3B4 (-_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPersist@@UIOleWindow@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1803825DC (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPersist@@UIOleWindow@.c)
 *     ??1?$MakeAllocator@VCAppTransitionTargetManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180383B14 (--1-$MakeAllocator@VCAppTransitionTargetManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall TabletModeViewManagerProxy_CreateInstance(const struct _GUID *a1, void **a2)
{
  _DWORD *v3; // rax
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
  v3 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v3;
  v4 = v3;
  if ( !v3 )
  {
    Microsoft::WRL::Details::MakeAllocator<CAppTransitionTargetManager>::~MakeAllocator<CAppTransitionTargetManager>(&v12);
    v5 = -2147024882;
    v6 = 108LL;
    v7 = 2147942414LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\tabletmodeviewmanagerproxy.cpp",
      (const char *)v7);
    goto LABEL_8;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPersist,IOleWindow>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPersist,IOleWindow>(v3);
  *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITabletModeViewManagerProxy,ITabletModeViewManager>::`vftable'{for `ITabletModeViewManagerProxy'};
  v4[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITabletModeViewManagerProxy,ITabletModeViewManager>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModeViewManager>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  v12 = v4;
  *v4 = &TabletModeViewManagerProxy::`vftable'{for `ITabletModeViewManagerProxy'};
  v4[3] = 0LL;
  v4[1] = &TabletModeViewManagerProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModeViewManager>'};
  (*(void (__fastcall **)(_QWORD *))(*v4 + 8LL))(v4);
  v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, void **))v4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  v8 = (**v11)(v11, &GUID_369d4b62_03d7_4a19_aa1b_7f542f36e74b, a2);
  v5 = v8;
  if ( v8 < 0 )
  {
    v7 = (unsigned int)v8;
    v6 = 109LL;
    goto LABEL_7;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return v5;
}
