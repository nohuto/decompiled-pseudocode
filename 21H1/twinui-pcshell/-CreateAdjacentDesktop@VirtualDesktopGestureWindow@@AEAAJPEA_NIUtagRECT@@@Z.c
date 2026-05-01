/*
 * XREFs of ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z @ 0x18041FAF0
 * Callers:
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureContext@@AEAAJPEA_NIH@Z @ 0x18041FA14 (-CreateAdjacentDesktop@VirtualDesktopGestureContext@@AEAAJPEA_NIH@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180014EB0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006AC60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RemoveAll@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAXXZ @ 0x180086CF4 (-RemoveAll@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CSimpleA.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18011590C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116F18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180130CE4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInternal@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@2@Z @ 0x18036A0E0 (-GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerIn.c)
 *     ??$As@UIVirtualDesktopThumbnail@@@?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopThumbnail@@@WRL@Microsoft@@@Details@12@@Z @ 0x18038E218 (--$As@UIVirtualDesktopThumbnail@@@-$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V.c)
 *     ??_GGetTrayBitmapCallbackData@VirtualDesktopGestureWindow@@QEAAPEAXI@Z @ 0x18041F2A8 (--_GGetTrayBitmapCallbackData@VirtualDesktopGestureWindow@@QEAAPEAXI@Z.c)
 *     ?MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@PEAPEAUIDCompThumbnail@@@Z @ 0x180421084 (-MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UIDCom.c)
 */

// Hidden C++ exception states: #wind=24
__int64 __fastcall VirtualDesktopGestureWindow::CreateAdjacentDesktop(
        VirtualDesktopGestureWindow *this,
        bool *a2,
        unsigned int a3,
        struct tagRECT *a4)
{
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  int v10; // eax
  int LastError; // edi
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, __int64, _QWORD, __int64 *); // rbx
  int v14; // eax
  __int64 v15; // r14
  _QWORD *v16; // r14
  int BackgroundThumbnail; // eax
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 (__fastcall *v21)(__int64, _QWORD, _QWORD, _OWORD *, GUID *, __int64 *); // rdi
  int v22; // eax
  __int64 v23; // rdx
  int FilterForDesktop; // eax
  int v25; // eax
  unsigned __int64 v26; // r9
  __int64 v27; // rdx
  int v28; // eax
  void *v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 *v35; // rcx
  HWND WindowW; // rdi
  _QWORD *v37; // rax
  volatile int *v38; // rdx
  WPARAM dwData; // rbx
  VirtualDesktopGestureWindow *v40; // rcx
  volatile int *v41; // rdx
  const char *v42; // r9
  __int64 v44; // [rsp+40h] [rbp-69h] BYREF
  __int64 v45; // [rsp+48h] [rbp-61h] BYREF
  __int64 v46; // [rsp+50h] [rbp-59h] BYREF
  __int64 v47; // [rsp+58h] [rbp-51h] BYREF
  __int64 v48; // [rsp+60h] [rbp-49h] BYREF
  __int64 v49; // [rsp+68h] [rbp-41h] BYREF
  int v50[2]; // [rsp+70h] [rbp-39h]
  __int64 v51; // [rsp+78h] [rbp-31h]
  __int64 v52; // [rsp+80h] [rbp-29h]
  __int64 v53; // [rsp+88h] [rbp-21h] BYREF
  __int64 v54; // [rsp+90h] [rbp-19h]
  __int64 v55; // [rsp+98h] [rbp-11h]
  __int64 v56; // [rsp+A0h] [rbp-9h]
  _OWORD v57[5]; // [rsp+B0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  *a2 = 0;
  v48 = 0LL;
  v8 = *((_QWORD *)this + 4);
  v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 48LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v48);
  v10 = v9(v8, &v48);
  LastError = v10;
  if ( v10 >= 0 )
  {
    v46 = 0LL;
    v12 = *((_QWORD *)this + 4);
    v13 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 64LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
    v14 = v13(v12, v48, a3, &v46);
    LastError = v14;
    if ( v14 >= 0 )
    {
      v15 = 64LL;
      if ( a3 != 3 )
        v15 = 96LL;
      v16 = (_QWORD *)((char *)this + v15);
      v45 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v45);
      BackgroundThumbnail = VirtualDesktopGestureWindow::MakeBackgroundThumbnail(this, v16, &v45);
      LastError = BackgroundThumbnail;
      if ( BackgroundThumbnail < 0 )
      {
        v18 = 317LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)BackgroundThumbnail);
LABEL_54:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v45);
LABEL_59:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
        goto LABEL_60;
      }
      v19 = v45;
      BackgroundThumbnail = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v45 + 24LL))(
                              v45,
                              a4,
                              0LL,
                              0LL);
      LastError = BackgroundThumbnail;
      if ( BackgroundThumbnail < 0 )
      {
        v18 = 318LL;
        goto LABEL_10;
      }
      v44 = 0LL;
      v20 = *((_QWORD *)this + 7);
      v21 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _OWORD *, GUID *, __int64 *))(*(_QWORD *)v20 + 96LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
      v57[0] = *(_OWORD *)((char *)this + 168);
      v22 = v21(v20, *((_QWORD *)this + 20), 0LL, v57, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v44);
      LastError = v22;
      if ( v22 < 0 )
      {
        v23 = 321LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v22);
LABEL_53:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
        goto LABEL_54;
      }
      v22 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v44 + 24LL))(
              v44,
              a4,
              0LL,
              0LL);
      LastError = v22;
      if ( v22 < 0 )
      {
        v23 = 322LL;
        goto LABEL_15;
      }
      v53 = 0LL;
      v54 = 0LL;
      v55 = 0LL;
      v56 = 0LL;
      v49 = 0LL;
      *(_QWORD *)v50 = 0LL;
      v51 = 0LL;
      v52 = 0LL;
      FilterForDesktop = VirtualDesktopHelpers::GetFilterForDesktop(v46, *((_QWORD *)this + 4), &v53, &v49);
      LastError = FilterForDesktop;
      if ( FilterForDesktop < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x128,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)FilterForDesktop);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x146,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)LastError);
LABEL_52:
        CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll((__int64)&v49);
        CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll((__int64)&v53);
        goto LABEL_53;
      }
      v47 = 0LL;
      v25 = Microsoft::WRL::ComPtr<IDCompThumbnail>::As<IVirtualDesktopThumbnail>(&v44, &v47);
      LastError = v25;
      if ( v25 < 0 )
      {
        v26 = (unsigned int)v25;
        v27 = 329LL;
LABEL_43:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v27,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)v26);
LABEL_51:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
        goto LABEL_52;
      }
      v28 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int))(*(_QWORD *)v47 + 24LL))(
              v47,
              v53,
              (unsigned int)v54,
              v49,
              v50[0]);
      LastError = v28;
      if ( v28 < 0 )
      {
        v26 = (unsigned int)v28;
        v27 = 334LL;
        goto LABEL_43;
      }
      v30 = v16[1];
      if ( v30 == v16[3]
        && (LastError = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                          (__int64)v16,
                          v30 + 1,
                          v29),
            LastError < 0) )
      {
        v27 = 336LL;
      }
      else
      {
        v31 = v16[1] + 1LL;
        v16[1] = v31;
        v32 = (__int64 *)(*v16 - 8LL + 8 * v31);
        if ( v32 )
        {
          *v32 = v19;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v32);
        }
        v33 = v16[1];
        if ( v33 != v16[3]
          || (LastError = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                            (__int64)v16,
                            v33 + 1,
                            v29),
              LastError >= 0) )
        {
          v34 = v16[1] + 1LL;
          v16[1] = v34;
          v35 = (__int64 *)(*v16 - 8LL + 8 * v34);
          if ( v35 )
          {
            *v35 = v44;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v35);
          }
          if ( !*((_BYTE *)this + 206) )
          {
            WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
            if ( !WindowW )
            {
              LastError = -2147467259;
              v27 = 342LL;
              goto LABEL_42;
            }
            v37 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
            dwData = (WPARAM)v37;
            *(_QWORD *)&v57[0] = v37;
            if ( v37 )
            {
              v37[1] = 0LL;
              v37[2] = 0LL;
              v37[5] = 0LL;
              *((_DWORD *)v37 + 12) = 0;
              v37[7] = v16;
            }
            else
            {
              dwData = 0LL;
            }
            if ( !dwData )
            {
              LastError = -2147024882;
              v27 = 345LL;
              goto LABEL_42;
            }
            v40 = *(VirtualDesktopGestureWindow **)(dwData + 40);
            if ( v40 != this )
            {
              if ( this )
              {
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(
                  (__int64)this + 16,
                  v38);
                v40 = *(VirtualDesktopGestureWindow **)(dwData + 40);
              }
              *(_QWORD *)(dwData + 40) = this;
              if ( v40 )
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
                  (__int64)v40 + 16,
                  v38);
            }
            *(_DWORD *)(dwData + 48) = a4->left;
            Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(dwData + 8), &v46);
            *(_QWORD *)dwData = *((_QWORD *)this + 23);
            if ( !SendMessageCallbackW(
                    WindowW,
                    0x5C1u,
                    dwData,
                    0LL,
                    VirtualDesktopGestureWindow::s_GetTrayBitmapResult,
                    dwData) )
            {
              VirtualDesktopGestureWindow::GetTrayBitmapCallbackData::`scalar deleting destructor'(
                (VirtualDesktopGestureWindow::GetTrayBitmapCallbackData *)dwData,
                v41);
              LastError = wil::details::in1diag3::Return_GetLastError(
                            retaddr,
                            (void *)0x161,
                            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
                            v42);
              goto LABEL_51;
            }
          }
          *a2 = 1;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
          CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll((__int64)&v49);
          CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll((__int64)&v53);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v45);
LABEL_58:
          LastError = 0;
          goto LABEL_59;
        }
        v27 = 337LL;
      }
LABEL_42:
      v26 = (unsigned int)LastError;
      goto LABEL_43;
    }
    if ( v14 != -2147316575 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16A,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v14);
      goto LABEL_59;
    }
    goto LABEL_58;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x135,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)v10);
LABEL_60:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v48);
  return (unsigned int)LastError;
}
