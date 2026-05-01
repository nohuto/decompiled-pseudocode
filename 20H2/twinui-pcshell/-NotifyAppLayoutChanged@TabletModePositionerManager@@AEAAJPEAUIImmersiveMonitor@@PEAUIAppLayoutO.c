/*
 * XREFs of ?NotifyAppLayoutChanged@TabletModePositionerManager@@AEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z @ 0x1803F1D9C
 * Callers:
 *     ?PerMonitorPositionerLayoutChanged@TabletModePositionerManager@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z @ 0x1803F21A0 (-PerMonitorPositionerLayoutChanged@TabletModePositionerManager@@UEAAJPEAUIImmersiveMonitor@@PEAU.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002FF10 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x1804770C8 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabletModePositionerManager::NotifyAppLayoutChanged(
        TabletModePositionerManager *this,
        struct IImmersiveMonitor *a2,
        struct IAppLayoutOperation *a3)
{
  int CallbackArray; // eax
  int v7; // ebx
  struct IObjectArray *v8; // r14
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rdi
  DWORD CurrentThreadId; // eax
  struct IObjectArray *v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IObjectArray *v17; // [rsp+80h] [rbp+30h] BYREF
  struct IAppLayoutOperation *v18; // [rsp+98h] [rbp+48h] BYREF

  v17 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  CallbackArray = CGITRegistrationList::GetCallbackArray((TabletModePositionerManager *)((char *)this + 112), &v17);
  v7 = CallbackArray;
  if ( CallbackArray >= 0 )
  {
    v18 = a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
    v8 = v17;
    v14 = v17;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
    v15[0] = (__int64)a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v15);
    v15[1] = (__int64)a2;
    v9 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    v11 = 0LL;
    if ( v9 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v9);
      v10[2] = 0LL;
      if ( v10 + 2 != &v14 )
      {
        v10[2] = v8;
        v14 = 0LL;
      }
      v10[3] = 0LL;
      if ( v10 + 3 != v15 )
      {
        v10[3] = a3;
        v15[0] = 0LL;
      }
      v10[4] = a2;
      *v10 = off_1804C7700;
      v11 = v10;
    }
    CurrentThreadId = GetCurrentThreadId();
    v7 = SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId);
    if ( v11 )
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    if ( v7 >= 0 )
      v7 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC3,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositionermanager.cpp",
        (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB9,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositionermanager.cpp",
      (const char *)(unsigned int)CallbackArray);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  return (unsigned int)v7;
}
