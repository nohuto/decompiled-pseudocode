/*
 * XREFs of ?_QueryInsertAppToLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@W4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1800B9C3C
 * Callers:
 *     ?InsertApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x1800B8190 (-InsertApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 *     ?SwapVTCPanel@PPIWin32VtcLayoutOperation@@UEAAJXZ @ 0x1800B8A30 (-SwapVTCPanel@PPIWin32VtcLayoutOperation@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FindAppOnLayoutByActivationTime@PPIWin32VtcLayoutOperation@@AEAAJW4ActivationTime@1@PEAPEAUIApplicationView@@W4LayoutType@1@@Z @ 0x1800B91A0 (-_FindAppOnLayoutByActivationTime@PPIWin32VtcLayoutOperation@@AEAAJW4ActivationTime@1@PEAPEAUIAp.c)
 *     ?_IsViewMeetingWindow@PPIWin32VtcLayoutOperation@@AEAA_NPEAUIApplicationView@@@Z @ 0x1800B96A0 (-_IsViewMeetingWindow@PPIWin32VtcLayoutOperation@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PPIWin32VtcLayoutOperation::_QueryInsertAppToLayout(
        PPIWin32VtcLayoutOperation *a1,
        __int64 a2,
        int a3)
{
  unsigned int v5; // r12d
  char v6; // r14
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v10; // rax
  unsigned int v11; // edi
  __int64 v12; // rdx
  int AppOnLayoutByActivationTime; // eax
  __int64 v14; // rdx
  struct IApplicationView *v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18[2]; // [rsp+30h] [rbp-29h] BYREF
  HWND hWnd[2]; // [rsp+40h] [rbp-19h] BYREF
  __int64 (__fastcall **v20)(); // [rsp+50h] [rbp-9h] BYREF
  __int128 v21; // [rsp+58h] [rbp-1h]
  __int64 (__fastcall ***v22)(); // [rsp+88h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  struct IApplicationView *v24; // [rsp+C0h] [rbp+67h] BYREF
  int v25; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v26; // [rsp+D8h] [rbp+7Fh] BYREF

  v25 = a3;
  v5 = PPIWin32VtcLayoutOperation::_sideBarLocation;
  if ( (*(unsigned int (__fastcall **)(PPIWin32VtcLayoutOperation *))(*(_QWORD *)a1 + 56LL))(a1) )
    return 0LL;
  v6 = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, __int64))(*(_QWORD *)a1 + 168LL))(a1, a2);
  if ( !v6
    && (*(int (__fastcall **)(PPIWin32VtcLayoutOperation *, _QWORD, int *))(*(_QWORD *)a1 + 64LL))(a1, 0LL, &v25) >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, _QWORD, __int64, __int64))(*(_QWORD *)a1 + 72LL))(
           a1,
           0LL,
           a2,
           1LL);
    if ( v7 < 0 )
    {
      v8 = 471LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
        (const char *)(unsigned int)v7);
      return (unsigned int)v7;
    }
    return 0LL;
  }
  if ( (*(unsigned int (__fastcall **)(PPIWin32VtcLayoutOperation *))(*(_QWORD *)a1 + 80LL))(a1) > 1 )
  {
    v24 = 0LL;
    v18[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
    if ( (*(int (__fastcall **)(PPIWin32VtcLayoutOperation *, __int64 *, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, v18, 0LL) < 0 )
    {
      if ( (*(unsigned int (__fastcall **)(PPIWin32VtcLayoutOperation *, __int64))(*(_QWORD *)a1 + 88LL))(a1, 4LL) == 1 )
      {
        (*(void (__fastcall **)(PPIWin32VtcLayoutOperation *, __int64))(*(_QWORD *)a1 + 120LL))(a1, 4LL);
      }
      else
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
        AppOnLayoutByActivationTime = PPIWin32VtcLayoutOperation::_FindAppOnLayoutByActivationTime(
                                        a1,
                                        1,
                                        (__int64 *)&v24,
                                        0);
        v11 = AppOnLayoutByActivationTime;
        if ( AppOnLayoutByActivationTime < 0 )
        {
          v14 = 532LL;
          goto LABEL_30;
        }
        AppOnLayoutByActivationTime = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, struct IApplicationView *))(*(_QWORD *)a1 + 104LL))(
                                        a1,
                                        v24);
        v11 = AppOnLayoutByActivationTime;
        if ( AppOnLayoutByActivationTime < 0 )
        {
          v14 = 533LL;
          goto LABEL_30;
        }
      }
      AppOnLayoutByActivationTime = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 96LL))(
                                      a1,
                                      a2,
                                      v5,
                                      v6 != 0 ? 4 : 1);
      v11 = AppOnLayoutByActivationTime;
      if ( AppOnLayoutByActivationTime < 0 )
      {
        v14 = 536LL;
        goto LABEL_30;
      }
      if ( v6 )
        (*(void (__fastcall **)(PPIWin32VtcLayoutOperation *))(*(_QWORD *)a1 + 208LL))(a1);
    }
    else
    {
      if ( v6 )
      {
        v11 = -2147418113;
LABEL_45:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
        return v11;
      }
      hWnd[0] = (HWND)v18;
      hWnd[1] = (HWND)&v24;
      v20 = off_180496F50;
      v21 = *(_OWORD *)hWnd;
      v22 = &v20;
      AppOnLayoutByActivationTime = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, _QWORD, __int64 (__fastcall ***)()))(*(_QWORD *)a1 + 176LL))(
                                      a1,
                                      *((_QWORD *)a1 + 8),
                                      &v20);
      v11 = AppOnLayoutByActivationTime;
      if ( AppOnLayoutByActivationTime < 0 )
      {
        v14 = 518LL;
LABEL_30:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
          (const char *)(unsigned int)AppOnLayoutByActivationTime);
        goto LABEL_45;
      }
      AppOnLayoutByActivationTime = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, struct IApplicationView *, __int64, __int64))(*(_QWORD *)a1 + 72LL))(
                                      a1,
                                      v24,
                                      a2,
                                      1LL);
      v11 = AppOnLayoutByActivationTime;
      if ( AppOnLayoutByActivationTime < 0 )
      {
        v14 = 520LL;
        goto LABEL_30;
      }
    }
    if ( PPIWin32VtcLayoutOperation::_IsViewMeetingWindow(a1, v24) )
    {
      v26 = 0LL;
      v15 = v24;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      v16 = (**(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v15)(
              v15,
              &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
              &v26);
      v11 = v16;
      if ( v16 < 0 )
      {
        v17 = 550LL;
LABEL_42:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
          (const char *)(unsigned int)v16);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
        goto LABEL_45;
      }
      hWnd[0] = 0LL;
      v16 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v26 + 24LL))(v26, hWnd);
      v11 = v16;
      if ( v16 < 0 )
      {
        v17 = 553LL;
        goto LABEL_42;
      }
      PostMessageW(hWnd[0], 0x112u, 0xF020uLL, 0LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    }
    v11 = 0;
    goto LABEL_45;
  }
  v10 = *(_QWORD *)a1;
  if ( !v6 )
  {
    (*(void (__fastcall **)(PPIWin32VtcLayoutOperation *, __int64))(v10 + 120))(a1, 2LL);
    v7 = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, __int64, bool, __int64))(*(_QWORD *)a1 + 96LL))(
           a1,
           a2,
           v5 != 1,
           1LL);
    if ( v7 < 0 )
    {
      v8 = 489LL;
      goto LABEL_6;
    }
    return 0LL;
  }
  if ( (*(int (__fastcall **)(PPIWin32VtcLayoutOperation *, _QWORD, _QWORD))(v10 + 160))(a1, 0LL, 0LL) >= 0 )
  {
    v11 = -2147418113;
    v12 = 481LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)v11);
    return v11;
  }
  v11 = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, __int64, _QWORD, __int64))(*(_QWORD *)a1 + 96LL))(
          a1,
          a2,
          v5,
          4LL);
  if ( (v11 & 0x80000000) != 0 )
  {
    v12 = 482LL;
    goto LABEL_11;
  }
  (*(void (__fastcall **)(PPIWin32VtcLayoutOperation *))(*(_QWORD *)a1 + 208LL))(a1);
  return 0LL;
}
