/*
 * XREFs of ?RuntimeClassInitialize@GhostDivider@@QEAAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@W4GhostDividerPlacement@@@Z @ 0x18042002C
 * Callers:
 *     ??$MakeAndInitialize@VGhostDivider@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@AEAW4GhostDividerPlacement@@@Details@WRL@Microsoft@@YAJPEAPEAVGhostDivider@@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@AEAW4GhostDividerPlacement@@@Z @ 0x18041F778 (--$MakeAndInitialize@VGhostDivider@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@A.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x18001DB14 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B3E8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollection@@@Z @ 0x18017A148 (--4-$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollectio.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1803A0860 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?GetPreviousWindow@GhostDivider@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18041FAC8 (-GetPreviousWindow@GhostDivider@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?RegisterWindowClass@GhostDivider@@AEAAXXZ @ 0x18041FFAC (-RegisterWindowClass@GhostDivider@@AEAAXXZ.c)
 */

__int64 __fastcall GhostDivider::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(ApplicationViewHelpers *, GUID *, __int64 *),
        int a4)
{
  int ScaleFactorForMonitor; // eax
  unsigned int LastError; // edi
  __int64 v10; // rdx
  __int64 (__fastcall **v11)(ApplicationViewHelpers *, GUID *, __int64 *); // rax
  int v12; // edx
  unsigned int Color; // eax
  GhostDivider *v14; // rcx
  HWND PreviousWindow; // rdi
  GhostDivider *v16; // rcx
  HWND Window; // rax
  const char *v18; // r9
  HWND v19; // rbx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  int v23; // r8d
  int v24; // eax
  HRESULT v25; // eax
  __int64 v26; // rdx
  void *v27; // rdi
  __int64 v28; // rdi
  _QWORD *v29; // r15
  __int64 v30; // rdx
  __int64 v31; // rcx
  int Y; // [rsp+28h] [rbp-61h]
  IUnknown *punk; // [rsp+60h] [rbp-29h] BYREF
  void *ppvOut; // [rsp+68h] [rbp-21h] BYREF
  __int64 v36; // [rsp+70h] [rbp-19h] BYREF
  __int64 v37; // [rsp+78h] [rbp-11h] BYREF
  int v38; // [rsp+80h] [rbp-9h]
  int v39; // [rsp+84h] [rbp-5h]
  int v40[4]; // [rsp+88h] [rbp-1h] BYREF
  __int128 v41; // [rsp+98h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  punk = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  ScaleFactorForMonitor = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), IUnknown **))(*a3)[10])(
                            a3,
                            &punk);
  LastError = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v10 = 56LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
      (const char *)(unsigned int)ScaleFactorForMonitor);
    goto LABEL_29;
  }
  *(_OWORD *)v40 = 0LL;
  ScaleFactorForMonitor = ((__int64 (__fastcall *)(IUnknown *, int *))punk->lpVtbl[3].Release)(punk, v40);
  LastError = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v10 = 59LL;
    goto LABEL_11;
  }
  v11 = *a3;
  v41 = 0LL;
  ScaleFactorForMonitor = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), __int128 *))v11[16])(
                            a3,
                            &v41);
  LastError = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v10 = 62LL;
    goto LABEL_11;
  }
  ScaleFactorForMonitor = ((__int64 (__fastcall *)(IUnknown *, __int64 *))punk->lpVtbl[1].Release)(punk, &v36);
  LastError = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v10 = 65LL;
    goto LABEL_11;
  }
  ScaleFactorForMonitor = GetScaleFactorForMonitor(v36, a1 + 64);
  LastError = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v10 = 66LL;
    goto LABEL_11;
  }
  v12 = 16 * *(_DWORD *)(a1 + 64) / 100;
  *(_DWORD *)(a1 + 80) = v40[3] - v40[1];
  *(_DWORD *)(a1 + 76) = v12;
  Color = CImmersiveColor::GetColor(0x498u);
  *(_DWORD *)(a1 + 88) = Color;
  *(_BYTE *)(a1 + 91) = 0;
  *(double *)(a1 + 96) = (float)((float)HIBYTE(Color) / 255.0);
  PreviousWindow = GhostDivider::GetPreviousWindow(v14, a3);
  GhostDivider::RegisterWindowClass(v16);
  Window = CreateWindowExW(
             0x82800A0u,
             L"GhostDivider",
             &szAgent,
             0x80000000,
             0,
             0,
             0,
             0,
             0LL,
             0LL,
             &_ImageBase,
             (LPVOID)a1);
  v19 = Window;
  if ( !Window )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x5B,
                  (__int64)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
                  v18);
    goto LABEL_27;
  }
  SetLayeredWindowAttributes(Window, 0, 0xFFu, 2u);
  v20 = *(_DWORD *)(a1 + 76);
  v21 = v41;
  if ( a4 )
    v21 = DWORD2(v41);
  v22 = v40[1];
  v23 = v21 - *(_DWORD *)(a1 + 76) / 2;
  Y = *(_DWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 68) = v23;
  *(_DWORD *)(a1 + 72) = v22;
  SetWindowPos(v19, 0LL, v23, v22, v20, Y, 0x54u);
  v24 = (*(__int64 (__fastcall **)(__int64, HWND, HWND))(*(_QWORD *)a2 + 40LL))(a2, v19, PreviousWindow);
  LastError = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
      (const char *)(unsigned int)v24);
    goto LABEL_27;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v25 = IUnknown_QueryService(punk, &stru_180542F48, &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41, &ppvOut);
  LastError = v25;
  if ( v25 >= 0 )
  {
    v27 = ppvOut;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 48));
    v25 = (*(__int64 (__fastcall **)(void *, HWND, __int64, __int64))(*(_QWORD *)v27 + 56LL))(v27, v19, 1LL, a1 + 48);
    LastError = v25;
    if ( v25 >= 0 )
    {
      v28 = *(_QWORD *)(a1 + 48);
      v29 = (_QWORD *)(a1 + 56);
      v37 = 0x100000001LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 56));
      v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64))(*(_QWORD *)v28 + 104LL))(
              v28,
              0LL,
              *(unsigned int *)(a1 + 88),
              v37,
              &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
              a1 + 56);
      LastError = v25;
      if ( v25 >= 0 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)*v29 + 32LL))(*v29, v30, 0LL, 0LL);
        v31 = *v29;
        v38 = *(_DWORD *)(a1 + 76);
        v39 = *(_DWORD *)(a1 + 80);
        v37 = 0LL;
        (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v31 + 24LL))(v31, &v37, 0LL, 0LL);
        v19 = 0LL;
        Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)(a1 + 32), a2);
        Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 + 40), (__int64)a3);
        LastError = 0;
        goto LABEL_26;
      }
      v26 = 106LL;
    }
    else
    {
      v26 = 104LL;
    }
  }
  else
  {
    v26 = 103LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v26,
    (__int64)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
    (const char *)(unsigned int)v25);
LABEL_26:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
LABEL_27:
  if ( v19 )
    DestroyWindow(v19);
LABEL_29:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  return LastError;
}
