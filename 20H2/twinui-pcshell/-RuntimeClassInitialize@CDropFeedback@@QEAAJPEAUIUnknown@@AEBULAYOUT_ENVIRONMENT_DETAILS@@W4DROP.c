/*
 * XREFs of ?RuntimeClassInitialize@CDropFeedback@@QEAAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_INIT_FLAGS@@@Z @ 0x180422BD8
 * Callers:
 *     ??$MakeAndInitialize@VCDropFeedback@@V1@AEAPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@AEAW4DROP_FEEDBACK_INIT_FLAGS@@@Details@WRL@Microsoft@@YAJPEAPEAVCDropFeedback@@AEAPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@AEAW4DROP_FEEDBACK_INIT_FLAGS@@@Z @ 0x180421E60 (--$MakeAndInitialize@VCDropFeedback@@V1@AEAPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@AEAW4DR.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B3E8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbnail@@AEBUtagRECT@@PEBUtagSIZE@@PEAPEAU3@@Z @ 0x1803AA14C (-CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDC.c)
 *     ?CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1804212C4 (-CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_RegisterWindowClass@CDropFeedback@@AEAAXXZ @ 0x180423A30 (-_RegisterWindowClass@CDropFeedback@@AEAAXXZ.c)
 *     ?_SetThreadPriority@CDropFeedback@@AEAAX_N@Z @ 0x180423ACC (-_SetThreadPriority@CDropFeedback@@AEAAX_N@Z.c)
 */

__int64 __fastcall CDropFeedback::RuntimeClassInitialize(__int64 a1, IUnknown *a2, __int64 a3, int a4)
{
  void **v4; // rbx
  const struct _GUID *v7; // rcx
  int Instance; // ebx
  __int64 v9; // rdx
  const struct _GUID *v10; // rcx
  CDropFeedback *v11; // rcx
  int v12; // r15d
  HWND WindowInBand; // rax
  const char *v14; // r9
  HWND v15; // rdi
  LONG_PTR WindowLongPtrW; // rax
  int v18; // r9d
  int cy; // r13d
  int v20; // r12d
  int v21; // r8d
  int DesktopBackgroundThumbnail; // eax
  __int64 v23; // rdx
  void *v24; // rbx
  __int64 v25; // r9
  DCompThumbnailHelpers **v26; // r12
  __int64 v27; // rbx
  __int64 v28; // r13
  _QWORD *v29; // rdi
  __int64 v30; // r8
  DCompThumbnailHelpers *v31; // rdi
  _QWORD *v32; // r14
  __int64 v33; // rbx
  DWORD SysColor; // eax
  __int64 v35; // rdx
  __int64 v36; // r8
  unsigned __int64 v37; // [rsp+70h] [rbp-9h]
  void *ppvOut; // [rsp+78h] [rbp-1h] BYREF
  IUnknown *punk; // [rsp+80h] [rbp+7h]
  _DWORD v40[4]; // [rsp+88h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v4 = (void **)(a1 + 128);
  *(_DWORD *)(a1 + 120) = a4;
  punk = a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 128));
  Instance = CDropFeedbackList_CreateInstance(v7, v4);
  if ( Instance >= 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 136));
    Instance = CDropFeedbackList_CreateInstance(v10, (void **)(a1 + 136));
    if ( Instance < 0 )
    {
      v9 = 108LL;
      goto LABEL_3;
    }
    CDropFeedback::_RegisterWindowClass(v11);
    v12 = *(_DWORD *)(a1 + 120) & 8;
    WindowInBand = (HWND)CreateWindowInBand(
                           136315008LL,
                           L"ImmersiveDropFeedback",
                           &szAgent,
                           0x80000000LL,
                           0,
                           0,
                           0,
                           0,
                           0LL,
                           0LL,
                           &_ImageBase,
                           a1,
                           v12 != 0 ? 1 : 5);
    v15 = WindowInBand;
    if ( !WindowInBand )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x7D,
               (__int64)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dropfeedback.cpp",
               v14);
    WindowLongPtrW = GetWindowLongPtrW(WindowInBand, -20);
    if ( (WindowLongPtrW & 0x400000) != 0 )
      SetWindowLongPtrW(v15, -20, WindowLongPtrW & 0xFFFFFFFFFFBFFFFFuLL);
    *(_OWORD *)(a1 + 72) = *(_OWORD *)a3;
    *(_OWORD *)(a1 + 88) = *(_OWORD *)(a3 + 16);
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(a3 + 32);
    v18 = *(_DWORD *)(a1 + 76);
    cy = *(_DWORD *)(a1 + 84) - v18;
    v20 = *(_DWORD *)(a1 + 80) - *(_DWORD *)(a1 + 72);
    v21 = *(_DWORD *)(a1 + 72);
    if ( v12 )
      SetWindowPos(v15, 0LL, v21, v18, v20, cy, 0x14u);
    else
      SetWindowPos(v15, (HWND)1, v21, v18, v20, cy, 0x10u);
    CDropFeedback::_SetThreadPriority((CDropFeedback *)a1, 1);
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    DesktopBackgroundThumbnail = IUnknown_QueryService(
                                   punk,
                                   &stru_180543038,
                                   &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41,
                                   &ppvOut);
    Instance = DesktopBackgroundThumbnail;
    if ( DesktopBackgroundThumbnail >= 0 )
    {
      v24 = ppvOut;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 144));
      DesktopBackgroundThumbnail = (*(__int64 (__fastcall **)(void *, HWND, __int64, __int64))(*(_QWORD *)v24 + 56LL))(
                                     v24,
                                     v15,
                                     1LL,
                                     a1 + 144);
      Instance = DesktopBackgroundThumbnail;
      if ( DesktopBackgroundThumbnail >= 0 )
      {
        LOBYTE(v25) = -1;
        (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 144) + 128LL))(
          *(_QWORD *)(a1 + 144),
          4LL,
          0xFFFFFFLL,
          v25);
        v40[0] = 0;
        v40[1] = 0;
        v40[2] = v20;
        v37 = __PAIR64__(cy, v20);
        v26 = (DCompThumbnailHelpers **)(a1 + 144);
        v27 = *(_QWORD *)(a1 + 144);
        v40[3] = cy;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 160));
        DesktopBackgroundThumbnail = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, GUID *, __int64))(*(_QWORD *)v27 + 112LL))(
                                       v27,
                                       0LL,
                                       v37,
                                       &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                                       a1 + 160);
        Instance = DesktopBackgroundThumbnail;
        if ( DesktopBackgroundThumbnail >= 0 )
        {
          (*(void (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD))(**(_QWORD **)(a1 + 160) + 24LL))(
            *(_QWORD *)(a1 + 160),
            v40,
            0LL,
            0LL);
          v28 = 0LL;
          if ( !v12 )
          {
            v29 = (_QWORD *)(a1 + 168);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 168));
            DesktopBackgroundThumbnail = DCompThumbnailHelpers::CreateDesktopBackgroundThumbnail(
                                           *v26,
                                           0LL,
                                           (struct IDCompThumbnail *)(a1 + 72),
                                           0LL,
                                           (const struct tagSIZE *)(a1 + 168));
            Instance = DesktopBackgroundThumbnail;
            if ( DesktopBackgroundThumbnail < 0 )
            {
              v23 = 171LL;
              goto LABEL_25;
            }
            (*(void (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD))(*(_QWORD *)*v29 + 24LL))(*v29, v40, 0LL, 0LL);
            LOBYTE(v30) = 1;
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v29 + 152LL))(*v29, 0LL, v30);
            v28 = *v29;
          }
          v31 = *v26;
          v32 = (_QWORD *)(a1 + 176);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 176));
          v33 = *(_QWORD *)v31;
          SysColor = GetSysColor(8);
          DesktopBackgroundThumbnail = (*(__int64 (__fastcall **)(DCompThumbnailHelpers *, _QWORD, _QWORD, __int64, GUID *, __int64))(v33 + 104))(
                                         v31,
                                         0LL,
                                         SysColor,
                                         0x100000001LL,
                                         &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                                         a1 + 176);
          Instance = DesktopBackgroundThumbnail;
          if ( DesktopBackgroundThumbnail >= 0 )
          {
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)*v32 + 32LL))(*v32, v35, 0LL, 0LL);
            (*(void (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD))(*(_QWORD *)*v32 + 24LL))(*v32, v40, 0LL, 0LL);
            LOBYTE(v36) = 1;
            (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v32 + 152LL))(*v32, v28, v36);
            Instance = (*(__int64 (__fastcall **)(__int64, IUnknown *))(*(_QWORD *)a1 + 24LL))(a1, punk);
            goto LABEL_27;
          }
          v23 = 179LL;
        }
        else
        {
          v23 = 162LL;
        }
      }
      else
      {
        v23 = 156LL;
      }
    }
    else
    {
      v23 = 155LL;
    }
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dropfeedback.cpp",
      (const char *)(unsigned int)DesktopBackgroundThumbnail);
LABEL_27:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    return (unsigned int)Instance;
  }
  v9 = 107LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dropfeedback.cpp",
    (const char *)(unsigned int)Instance);
  return (unsigned int)Instance;
}
