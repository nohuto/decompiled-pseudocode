/*
 * XREFs of ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x18028A6C4
 * Callers:
 *     ?_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z @ 0x18028A550 (-_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180014EB0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007F164 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$FindEx@VPendingDataFinderByViewInstanceId@ViewEventDispatcher@@@?$CTSimpleFixedArray@UPendingViewData@ViewEventDispatcher@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEBAJAEBVPendingDataFinderByViewInstanceId@ViewEventDispatcher@@AEBUPendingViewData@2@PEA_K_K@Z @ 0x18027C21C (--$FindEx@VPendingDataFinderByViewInstanceId@ViewEventDispatcher@@@-$CTSimpleFixedArray@UPending.c)
 *     ??$FindEx@VViewWrapperFinderByViewInstanceId@@@?$CTSimpleFixedArray@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVViewWrapperFinderByViewInstanceId@@AEBV?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18027C254 (--$FindEx@VViewWrapperFinderByViewInstanceId@@@-$CTSimpleFixedArray@V-$ComPtr@UIViewWrapperInter.c)
 *     ??$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@IAEAPEAUIUnknown@@PEBGAEAY0DF@$$CBGPEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@012@$$QEAIAEAPEAUIUnknown@@$$QEAPEBGAEAY0DF@$$CBG$$QEAPEAVViewEventDispatcher@@@Z @ 0x18027CA78 (--$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@IAEAPEAUIUnknown@@PEBGAEAY0DF@$$CBG.c)
 *     ?IsLegacyApp@@YAJPEBGPEA_N@Z @ 0x180282798 (-IsLegacyApp@@YAJPEBGPEA_N@Z.c)
 *     ?MsgStringGetData@@YAPEBGPEAUMsgString@@@Z @ 0x18028286C (-MsgStringGetData@@YAPEBGPEAUMsgString@@@Z.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x18028422C (-RemoveAt@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x18028913C (-_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@URecoveredWindowForViewWrapper@@@@V?$CSimpleArrayStandardCompareHelper@URecoveredWindowForViewWrapper@@@@V?$CSimpleArrayStandardMergeHelper@URecoveredWindowForViewWrapper@@@@@@QEAAJ_K0@Z @ 0x180289810 (-_EnsureCapacity@-$CTSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V-$CTPolicyCoTaskMem.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x180289E3C (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x18028B998 (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z @ 0x18029BFE0 (-GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z.c)
 *     ?NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18029DD80 (-NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180446578 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall ViewEventDispatcher::_HandleWindowCreatedForExistingView(
        ViewEventDispatcher *this,
        CallerIdentity *hWnd,
        unsigned int a3)
{
  unsigned int v3; // esi
  char v6; // r13
  __int64 v7; // rbx
  RTL_SRWLOCK *v8; // r12
  __int64 v9; // r8
  bool v10; // di
  __int64 v11; // r8
  int v12; // eax
  int valid; // edi
  struct IUnknown *v14; // rdx
  unsigned int v15; // edi
  _QWORD *v16; // rsi
  bool v17; // di
  int AppUserModelIdForView; // eax
  int v19; // eax
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  int MatchingViewEventRegistration; // eax
  unsigned __int16 **v23; // r8
  int v24; // eax
  void *v25; // r8
  unsigned __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v32; // [rsp+20h] [rbp-79h]
  unsigned __int64 v33; // [rsp+30h] [rbp-69h] BYREF
  __int64 v34; // [rsp+38h] [rbp-61h] BYREF
  struct MsgString *v35; // [rsp+40h] [rbp-59h] BYREF
  ViewEventDispatcher *v36; // [rsp+48h] [rbp-51h]
  unsigned __int64 *v37; // [rsp+50h] [rbp-49h] BYREF
  CallerIdentity *v38; // [rsp+58h] [rbp-41h]
  struct HWND__ v39[2]; // [rsp+60h] [rbp-39h] BYREF
  __int64 v40; // [rsp+68h] [rbp-31h]
  __int64 v41; // [rsp+70h] [rbp-29h]
  struct ViewEventDispatcher *v42; // [rsp+78h] [rbp-21h] BYREF
  const unsigned __int16 *Data; // [rsp+80h] [rbp-19h] BYREF
  struct IUnknown *v44; // [rsp+88h] [rbp-11h] BYREF
  __int128 v45; // [rsp+90h] [rbp-9h]
  __int128 v46; // [rsp+A0h] [rbp+7h]
  char v47; // [rsp+B0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  __int64 v49; // [rsp+100h] [rbp+67h] BYREF
  unsigned int v50; // [rsp+110h] [rbp+77h]
  struct IViewWrapperInternal *v51; // [rsp+118h] [rbp+7Fh] BYREF

  v50 = a3;
  v3 = a3;
  *(_QWORD *)&v45 = this;
  DWORD2(v45) = a3;
  v46 = v45;
  v6 = 1;
  v47 = 1;
  v51 = 0LL;
  v7 = 0LL;
  v34 = 0LL;
  v8 = (RTL_SRWLOCK *)((char *)this + 280);
  AcquireSRWLockExclusive((PSRWLOCK)this + 35);
  *(_QWORD *)&v45 = v8;
  v35 = 0LL;
  LODWORD(v49) = v3;
  v10 = (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IViewWrapperInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IViewWrapperInternal>>>::FindEx<ViewWrapperFinderByViewInstanceId>(
               (_QWORD *)this + 44,
               &v49,
               v9,
               &v33) >= 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
  if ( !v10 )
  {
    v38 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
    v16 = (_QWORD *)((char *)this + 416);
    LODWORD(v49) = v50;
    v17 = (int)CTSimpleFixedArray<ViewEventDispatcher::PendingViewData,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>>::FindEx<ViewEventDispatcher::PendingDataFinderByViewInstanceId>(
                 (__int64)this + 416,
                 (int *)&v49,
                 v11,
                 &v33) >= 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37);
    if ( v17 )
    {
      v14 = *(struct IUnknown **)(*v16 + 24 * v33 + 8);
      if ( v14 )
      {
        v36 = this;
        v37 = &v33;
        LOBYTE(v38) = 1;
        AppUserModelIdForView = ViewManagerBridge::GetAppUserModelIdForView(
                                  *((ViewManagerBridge **)this + 62),
                                  v14,
                                  &v35);
        valid = AppUserModelIdForView;
        if ( AppUserModelIdForView < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x80E,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)AppUserModelIdForView);
LABEL_16:
          CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
            (_QWORD *)this + 52,
            v33);
LABEL_32:
          v3 = v50;
LABEL_33:
          if ( v8 )
            ReleaseSRWLockExclusive(v8);
          goto LABEL_45;
        }
        *(_QWORD *)&v39[0].unused = &v35;
        LOBYTE(v40) = 1;
        v42 = this;
        Data = MsgStringGetData(v35);
        v44 = *(struct IUnknown **)(*v16 + 24 * v33 + 8);
        LODWORD(v49) = v50;
        v19 = Microsoft::WRL::Details::MakeAndInitialize<UAPViewWrapper,IViewWrapperInternal,unsigned int,IUnknown * &,unsigned short const *,unsigned short const (&)[53],ViewEventDispatcher *>(
                (__int64 *)&v51,
                (unsigned int *)&v49,
                &v44,
                &Data,
                v32,
                &v42);
        valid = v19;
        if ( v19 < 0 )
        {
          v20 = (unsigned int)v19;
          v21 = 2077LL;
LABEL_15:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v21,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)v20);
          MsgRelease(v35);
          goto LABEL_16;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
        MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(
                                          (__int64)this,
                                          (__int64)v51,
                                          &v34);
        valid = MatchingViewEventRegistration;
        if ( MatchingViewEventRegistration < 0 )
        {
          v20 = (unsigned int)MatchingViewEventRegistration;
          v21 = 2080LL;
          goto LABEL_15;
        }
        v7 = v34;
        (*(void (__fastcall **)(struct IViewWrapperInternal *, __int64, _QWORD))(*(_QWORD *)v51 + 704LL))(
          v51,
          (v34 + 8) & -(__int64)(v34 != 0),
          0LL);
        (*(void (__fastcall **)(struct IViewWrapperInternal *, CallerIdentity *, _QWORD))(*(_QWORD *)v51 + 792LL))(
          v51,
          hWnd,
          0LL);
        valid = ViewEventDispatcher::_AddValidView(this, v51);
        if ( valid < 0 )
        {
          v20 = (unsigned int)valid;
          v21 = 2085LL;
          goto LABEL_15;
        }
        v15 = 0;
        MsgRelease(v35);
        CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
          (_QWORD *)this + 52,
          v33);
      }
      else
      {
        v15 = 3;
      }
      v3 = v50;
      goto LABEL_38;
    }
    *(_QWORD *)&v39[0].unused = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v39);
    v40 = -1LL;
    v41 = -1LL;
    valid = CallerIdentity::GetImmersiveAppIdFromWindow(hWnd, v39, v23);
    if ( valid >= 0 )
    {
      v24 = IsLegacyApp(*(CallerIdentity **)&v39[0].unused, (bool *)&v49);
      valid = v24;
      if ( v24 < 0 )
      {
        v26 = (unsigned int)v24;
        v27 = 2106LL;
LABEL_30:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v27,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)v26);
        goto LABEL_31;
      }
      if ( !(_BYTE)v49 )
      {
        LODWORD(v36) = v50;
        v37 = 0LL;
        v38 = hWnd;
        valid = 0;
        v28 = *((_QWORD *)this + 53);
        if ( v28 == *((_QWORD *)this + 55)
          && (valid = CTSimpleArray<RecoveredWindowForViewWrapper,4294967294,CTPolicyCoTaskMem<RecoveredWindowForViewWrapper>,CSimpleArrayStandardCompareHelper<RecoveredWindowForViewWrapper>,CSimpleArrayStandardMergeHelper<RecoveredWindowForViewWrapper>>::_EnsureCapacity(
                        (__int64)this + 416,
                        v28 + 1,
                        v25),
              valid < 0) )
        {
          v3 = v50;
        }
        else
        {
          v29 = *((_QWORD *)this + 52) + 24 * (*((_QWORD *)this + 53))++;
          v3 = v50;
          if ( v29 )
          {
            *(_DWORD *)v29 = v50;
            *(_QWORD *)(v29 + 8) = 0LL;
            v37 = 0LL;
            *(_QWORD *)(v29 + 16) = hWnd;
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37);
        if ( valid >= 0 )
        {
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v39);
          v15 = 3;
          goto LABEL_38;
        }
        v26 = (unsigned int)valid;
        v27 = 2122LL;
        goto LABEL_30;
      }
      PostMessageW((HWND)hWnd, 0x10u, 0LL, 0LL);
      valid = -2147023728;
    }
LABEL_31:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v39);
    goto LABEL_32;
  }
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v51, (__int64 *)(*((_QWORD *)this + 44) + 8 * v33));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
  v12 = ViewEventDispatcher::_FindMatchingViewEventRegistration((__int64)this, (__int64)v51, &v34);
  valid = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7FA,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_33;
  }
  (*(void (__fastcall **)(struct IViewWrapperInternal *, CallerIdentity *, _QWORD))(*(_QWORD *)v51 + 792LL))(
    v51,
    hWnd,
    0LL);
  v15 = 6;
  v7 = v34;
LABEL_38:
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  if ( v7 )
  {
    v30 = *(_QWORD *)(v7 + 32);
    v49 = v30;
    if ( v30 )
      (*(void (__fastcall **)(__int64, struct IUnknown *, _QWORD))(*(_QWORD *)v30 + 8LL))(v30, v14, 0LL);
    ViewEventDispatcher::_RaiseViewEventWithPropertySet(this, v51, v15, 0LL, &v49);
  }
  v6 = 0;
  valid = 0;
LABEL_45:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v51);
  if ( v6 )
    ViewManagerBridge::NavigateView(*((_QWORD *)this + 62), v3, 0LL);
  return (unsigned int)valid;
}
