/*
 * XREFs of ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1802AC87C
 * Callers:
 *     ?_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z @ 0x1802AC190 (-_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007C9C8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B538 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$FindEx@VPendingDataFinderByViewInstanceId@ViewEventDispatcher@@@?$CTSimpleFixedArray@UPendingViewData@ViewEventDispatcher@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEBAJAEBVPendingDataFinderByViewInstanceId@ViewEventDispatcher@@AEBUPendingViewData@2@PEA_K_K@Z @ 0x18029DEAC (--$FindEx@VPendingDataFinderByViewInstanceId@ViewEventDispatcher@@@-$CTSimpleFixedArray@UPending.c)
 *     ??$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@I$$TPEBGAEAY0DF@$$CBGW4ViewLifetimePolicy@1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@$$QEAI$$QEA$$T$$QEAPEBGAEAY0DF@$$CBG$$QEAW4ViewLifetimePolicy@LegacyViewWrapper@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x18029E318 (--$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@I$$TPEBGAEAY0DF@$$CBGW4ViewLifet.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x1802A5E8C (-RemoveAt@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x1802AAD9C (-_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1802ABA7C (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1802AD5D8 (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?CreateNewViewForWindow@ViewManagerBridge@@UEAAJPEAUHWND__@@PEBGPEAI@Z @ 0x1802BD750 (-CreateNewViewForWindow@ViewManagerBridge@@UEAAJPEAUHWND__@@PEBGPEAI@Z.c)
 *     ?NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802BF920 (-NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18046A3E8 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewEventDispatcher::_HandleWindowCreatedWithNoView(ViewEventDispatcher *this, HWND a2)
{
  unsigned __int16 **v3; // r8
  int ImmersiveAppIdFromWindow; // edi
  __int64 v5; // rbx
  int NewViewForWindow; // eax
  char v7; // r15
  const char *v8; // r9
  int v9; // eax
  int MatchingViewEventRegistration; // eax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // r8
  bool v14; // di
  unsigned __int64 v15; // rdi
  __int64 v16; // rcx
  struct IViewWrapperInternal *v18; // [rsp+40h] [rbp-59h] BYREF
  __int64 v19; // [rsp+48h] [rbp-51h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-49h] BYREF
  __int64 v21; // [rsp+58h] [rbp-41h] BYREF
  struct HWND__ v22[2]; // [rsp+60h] [rbp-39h] BYREF
  __int64 v23; // [rsp+68h] [rbp-31h]
  __int64 v24; // [rsp+70h] [rbp-29h]
  _QWORD v25[2]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v26[5]; // [rsp+88h] [rbp-11h] BYREF
  char v27; // [rsp+B0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  HWND hWnd; // [rsp+108h] [rbp+6Fh] BYREF
  HANDLE hData; // [rsp+110h] [rbp+77h] BYREF
  __int64 v31; // [rsp+118h] [rbp+7Fh] BYREF

  hWnd = a2;
  *(_QWORD *)&v22[0].unused = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v22);
  v23 = -1LL;
  v24 = -1LL;
  ImmersiveAppIdFromWindow = CallerIdentity::GetImmersiveAppIdFromWindow((CallerIdentity *)hWnd, v22, v3);
  if ( ImmersiveAppIdFromWindow < 0 )
    goto LABEL_25;
  v5 = *(_QWORD *)&v22[0].unused;
  NewViewForWindow = ViewManagerBridge::CreateNewViewForWindow(
                       *((ViewManagerBridge **)this + 62),
                       hWnd,
                       *(const unsigned __int16 **)&v22[0].unused,
                       (unsigned int *)&hData);
  ImmersiveAppIdFromWindow = NewViewForWindow;
  if ( NewViewForWindow < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A0,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)NewViewForWindow);
    goto LABEL_25;
  }
  v26[2] = (__int64)this;
  v26[3] = (__int64)&hData;
  v26[4] = (__int64)&hWnd;
  v7 = 1;
  v27 = 1;
  if ( !SetPropW(hWnd, L"Microsoft.Windows.WindowFactory.ViewId", (HANDLE)(unsigned int)hData) )
  {
    ImmersiveAppIdFromWindow = wil::details::in1diag3::Return_GetLastError(
                                 retaddr,
                                 (void *)0x7AF,
                                 (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                                 v8);
    goto LABEL_23;
  }
  v18 = 0LL;
  v25[0] = this;
  LODWORD(v31) = 1;
  v21 = v5;
  v20 = 0LL;
  LODWORD(v19) = (_DWORD)hData;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  v9 = Microsoft::WRL::Details::MakeAndInitialize<LegacyViewWrapper,IViewWrapperInternal,unsigned int,std::nullptr_t,unsigned short const *,unsigned short const (&)[53],enum LegacyViewWrapper::ViewLifetimePolicy,ViewEventDispatcher *>(
         &v18,
         (unsigned int *)&v19,
         &v20,
         &v21,
         (__int64)L"Windows.Internal.ShellExperience.TopLevelApplication",
         &v31,
         v25);
  ImmersiveAppIdFromWindow = v9;
  if ( v9 >= 0 )
  {
    v19 = 0LL;
    AcquireSRWLockExclusive((PSRWLOCK)this + 35);
    v21 = (__int64)this + 280;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(
                                      (__int64)this,
                                      (__int64)v18,
                                      &v19);
    ImmersiveAppIdFromWindow = MatchingViewEventRegistration;
    if ( MatchingViewEventRegistration >= 0 )
    {
      v12 = v19;
      (*(void (__fastcall **)(struct IViewWrapperInternal *, __int64, _QWORD))(*(_QWORD *)v18 + 704LL))(
        v18,
        (v19 + 8) & -(__int64)(v19 != 0),
        0LL);
      (*(void (__fastcall **)(struct IViewWrapperInternal *, HWND, _QWORD))(*(_QWORD *)v18 + 792LL))(v18, hWnd, 0LL);
      v26[1] = 0LL;
      v25[1] = 0LL;
      v26[0] = 0LL;
      LODWORD(v31) = (_DWORD)hData;
      v14 = (int)CTSimpleFixedArray<ViewEventDispatcher::PendingViewData,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>>::FindEx<ViewEventDispatcher::PendingDataFinderByViewInstanceId>(
                   (__int64)this + 416,
                   (int *)&v31,
                   v13,
                   &v20) >= 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v26);
      if ( v14 )
      {
        v15 = v20;
        (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD))(*(_QWORD *)v18 + 824LL))(
          v18,
          *(_QWORD *)(*((_QWORD *)this + 52) + 24 * v20 + 8));
        CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
          (_QWORD *)this + 52,
          v15);
      }
      MatchingViewEventRegistration = ViewEventDispatcher::_AddValidView(this, v18);
      ImmersiveAppIdFromWindow = MatchingViewEventRegistration;
      if ( MatchingViewEventRegistration >= 0 )
      {
        if ( this != (ViewEventDispatcher *)-280LL )
          ReleaseSRWLockExclusive((PSRWLOCK)this + 35);
        v16 = *(_QWORD *)(v12 + 32);
        v31 = v16;
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
        ViewEventDispatcher::_RaiseViewEventWithPropertySet(this, v18, 0LL, 0LL, &v31);
        v7 = 0;
        ImmersiveAppIdFromWindow = 0;
        goto LABEL_21;
      }
      v11 = 2003LL;
    }
    else
    {
      v11 = 1984LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)MatchingViewEventRegistration);
    if ( this != (ViewEventDispatcher *)-280LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 35);
LABEL_21:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7BB,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)(unsigned int)v9);
LABEL_22:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
LABEL_23:
  if ( v7 )
  {
    ViewManagerBridge::NavigateView(*((_QWORD *)this + 62), (unsigned int)hData, 0LL);
    SetPropW(hWnd, L"Microsoft.Windows.WindowFactory.ViewId", 0LL);
  }
LABEL_25:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v22);
  return (unsigned int)ImmersiveAppIdFromWindow;
}
