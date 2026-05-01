/*
 * XREFs of ?Initialize@VirtualDesktopGestureContext@@QEAAJXZ @ 0x1804203E4
 * Callers:
 *     ?StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x180421530 (-StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006AC60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180130CE4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180142E30 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$com_ptr_t@UIApplicationView@@Uerr_returncode_p.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1802C73F8 (--0Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Micr.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1802C87D0 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMon.c)
 *     ??$Make@VVirtualDesktopGestureWindow@@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@AEAUCRect@Geometry@@AEAPEAUHMONITOR__@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VVirtualDesktopGestureWindow@@@12@$$QEAPEAUIVirtualDesktopManagerInternal@@$$QEAPEAUISwitchThumbnailDeviceManager@@$$QEAPEAUIApplicationViewCollection@@$$QEAPEAUIImmersiveSettingsCache@@AEAUCRect@Geometry@@AEAPEAUHMONITOR__@@@Z @ 0x18041E574 (--$Make@VVirtualDesktopGestureWindow@@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDe.c)
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJXZ @ 0x180420838 (-Initialize@VirtualDesktopGestureWindow@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=22
__int64 __fastcall VirtualDesktopGestureContext::Initialize(VirtualDesktopGestureContext *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // edi
  char v6; // r15
  __int64 v7; // rbx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  void *v11; // r8
  const char *v12; // r9
  volatile int *v13; // rdx
  int v14; // eax
  VirtualDesktopGestureWindow **v15; // r8
  VirtualDesktopGestureWindow *v16; // rcx
  volatile int *v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rdx
  VirtualDesktopGestureWindow *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rsi
  VirtualDesktopGestureWindow *v25; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+68h] [rbp-A0h] BYREF
  int v30; // [rsp+70h] [rbp-98h]
  __int64 v31; // [rsp+78h] [rbp-90h] BYREF
  __int64 v32[2]; // [rsp+80h] [rbp-88h] BYREF
  HMONITOR v33; // [rsp+90h] [rbp-78h] BYREF
  int v34[2]; // [rsp+98h] [rbp-70h] BYREF
  struct IApplicationViewCollection *v35; // [rsp+A0h] [rbp-68h] BYREF
  struct ISwitchThumbnailDeviceManager *v36; // [rsp+A8h] [rbp-60h] BYREF
  struct IVirtualDesktopManagerInternal *v37[2]; // [rsp+B0h] [rbp-58h] BYREF
  char v38; // [rsp+C0h] [rbp-48h]
  int v39; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v40[2]; // [rsp+D0h] [rbp-38h] BYREF
  struct tagRECT v41; // [rsp+E0h] [rbp-28h] BYREF
  __int128 pvParam; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v43; // [rsp+100h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+28h]

  v26 = 0LL;
  v2 = *((_QWORD *)this + 4);
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 112LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  v4 = v3(v2, &v26);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DA,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_39;
  }
  v37[1] = this;
  v6 = 1;
  v38 = 1;
  pvParam = 0LL;
  v43 = 0LL;
  if ( SystemParametersInfoW(0xAEu, 0x18u, &pvParam, 0) )
    *((_BYTE *)this + 66) = (unsigned __int8)(BYTE12(pvParam) & 8) >> 3;
  details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>(
    (__int64)&v29,
    v26);
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::Iterator(
    (__int64)&v31,
    (__int64)&v29,
    0);
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::Iterator(
    (__int64)&v39,
    (__int64)&v29,
    v30);
  while ( 1 )
  {
    if ( (_DWORD)v31 == v39 && v32[1] == v40[1] )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v40);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v32);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
      v6 = 0;
      v38 = 0;
      v5 = 0;
      goto LABEL_35;
    }
    v7 = v32[0];
    v28 = v32[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v28);
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 48LL))(v7, &v27);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1EE,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_23;
    }
    if ( (_DWORD)v27 )
      break;
LABEL_23:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    LODWORD(v31) = v31 + 1;
    details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::GetCurrentObject((unsigned int *)&v31);
  }
  v41 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v7 + 72LL))(v7, &v41);
  v5 = v9;
  if ( v9 < 0 )
  {
    v21 = 497LL;
    goto LABEL_33;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, HMONITOR *))(*(_QWORD *)v7 + 40LL))(v7, &v33);
  v5 = v9;
  if ( v9 < 0 )
  {
    v21 = 500LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_34;
  }
  *(_QWORD *)v34 = *((_QWORD *)this + 5);
  v35 = (struct IApplicationViewCollection *)*((_QWORD *)this + 2);
  v36 = (struct ISwitchThumbnailDeviceManager *)*((_QWORD *)this + 1);
  v37[0] = *(struct IVirtualDesktopManagerInternal **)this;
  Microsoft::WRL::Details::Make<VirtualDesktopGestureWindow,IVirtualDesktopManagerInternal *,ISwitchThumbnailDeviceManager *,IApplicationViewCollection *,IImmersiveSettingsCache *,Geometry::CRect &,HMONITOR__ * &>(
    &v25,
    v37,
    &v36,
    &v35,
    (struct IImmersiveSettingsCache **)v34,
    &v41,
    &v33);
  if ( !v25 )
  {
    v5 = -2147024882;
    v18 = 2147942414LL;
    v19 = 503LL;
    goto LABEL_28;
  }
  v10 = VirtualDesktopGestureWindow::Initialize(v25);
  v5 = v10;
  if ( v10 >= 0 )
  {
    v12 = 0LL;
    v13 = (volatile int *)*((_QWORD *)this + 10);
    if ( v13 != *((volatile int **)this + 12)
      || (v14 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  (__int64)this + 72,
                  (unsigned __int64)v13 + 1,
                  v11),
          v12 = (const char *)(unsigned int)v14,
          v14 >= 0) )
    {
      v15 = (VirtualDesktopGestureWindow **)(*((_QWORD *)this + 9) + 8 * (*((_QWORD *)this + 10))++);
      if ( v15 )
      {
        *v15 = 0LL;
        if ( v15 != &v25 )
        {
          *v15 = v25;
          v25 = 0LL;
        }
      }
    }
    if ( (int)v12 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1F9,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        v12);
      DestroyWindow(*((HWND *)v25 + 1));
      v5 = -2147024882;
      goto LABEL_29;
    }
    v16 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        (__int64)v16 + 16,
        v13);
    }
    goto LABEL_23;
  }
  v18 = (unsigned int)v10;
  v19 = 504LL;
LABEL_28:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)v18);
LABEL_29:
  v20 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
      (__int64)v20 + 16,
      v17);
  }
LABEL_34:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v40);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v32);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
LABEL_35:
  if ( v6 )
  {
    v38 = 0;
    v22 = *((_QWORD *)this + 9);
    v23 = v22 + 8LL * *((_QWORD *)this + 10);
    while ( v22 != v23 )
    {
      DestroyWindow(*(HWND *)(*(_QWORD *)v22 + 8LL));
      v22 += 8LL;
    }
  }
LABEL_39:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  return v5;
}
