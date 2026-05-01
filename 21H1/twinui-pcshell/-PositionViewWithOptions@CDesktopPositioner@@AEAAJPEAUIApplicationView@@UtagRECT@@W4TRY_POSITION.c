/*
 * XREFs of ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIApplicationViewOperation@@W4PositionScenario@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x1803CBF78
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x180048020 (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 *     ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x1803CC4B4 (-PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W_ea_1803CC4B4.c)
 *     ?PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1803CC5A0 (-PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z.c)
 * Callees:
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18002FF74 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAU3@@Z @ 0x1803CEB38 (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x1803CEFDC (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CDesktopPositioner::PositionViewWithOptions(
        __int64 a1,
        struct IApplicationView *a2,
        unsigned int *a3,
        int a4,
        __int64 *a5,
        unsigned int a6,
        __int64 a7)
{
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(struct IApplicationView *, __int64 *); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 (__fastcall *v13)(struct IApplicationView *, GUID *, __int64 *); // rbx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r9
  char v17; // r12
  CDesktopPositioner *v18; // rcx
  int FullPositionSnapshot; // eax
  __int64 v20; // rdx
  int (__fastcall *v21)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 v22; // rbx
  __int64 (__fastcall *v23)(__int64, struct IOcclusionBasedApplicationViewPosition **); // rdi
  int v24; // eax
  __int64 v25; // rdx
  int (__fastcall *v26)(__int64 *, struct IApplicationViewTitlebarConfiguration **); // rbx
  CDesktopPositioner *v27; // rcx
  int fixed; // eax
  __int64 v29; // rdx
  int v30; // ebx
  unsigned int v31; // r11d
  int v32; // r9d
  int v33; // edx
  int v34; // edi
  int v35; // ecx
  int v36; // r8d
  char v37; // al
  unsigned int v38; // edx
  int v39; // r8d
  unsigned int v40; // r9d
  int v41; // r10d
  unsigned int v42; // r8d
  __int64 v43; // rax
  __int64 v45; // [rsp+40h] [rbp-89h] BYREF
  struct IApplicationViewTitlebarConfiguration *v46; // [rsp+48h] [rbp-81h] BYREF
  unsigned int v47; // [rsp+50h] [rbp-79h] BYREF
  int v48; // [rsp+54h] [rbp-75h]
  __int64 v49; // [rsp+58h] [rbp-71h] BYREF
  __int64 v50; // [rsp+60h] [rbp-69h] BYREF
  int v51; // [rsp+68h] [rbp-61h] BYREF
  RECT v52; // [rsp+70h] [rbp-59h] BYREF
  struct IOcclusionBasedApplicationViewPosition *v53[2]; // [rsp+80h] [rbp-49h] BYREF
  RECT rc1; // [rsp+90h] [rbp-39h] BYREF
  __int128 v55; // [rsp+A0h] [rbp-29h] BYREF
  RECT rc2; // [rsp+B0h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+3Fh]

  v48 = a4;
  v9 = a1;
  *(_QWORD *)&v52.left = a1;
  v45 = a7;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v45);
  if ( v45
    || (v10 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 80LL),
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v45),
        v11 = v10(a2, &v45),
        v12 = v11,
        v11 >= 0) )
  {
    v49 = 0LL;
    v13 = *(__int64 (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v49);
    v14 = v13(a2, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, &v49);
    v12 = v14;
    if ( v14 < 0 )
    {
      v15 = 2711LL;
LABEL_13:
      v16 = (unsigned int)v14;
      goto LABEL_14;
    }
    v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v49 + 32LL))(v49, &v51);
    v12 = v14;
    if ( v14 < 0 )
    {
      v15 = 2714LL;
      goto LABEL_13;
    }
    if ( (unsigned int)(v51 - 2) > 1 )
    {
      v12 = -2147019873;
      v16 = 2147947423LL;
      v15 = 2717LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)v16);
LABEL_57:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v49);
      goto LABEL_58;
    }
    v17 = 0;
    if ( v51 == 2 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)v49 + 24LL))(v49, &rc1);
      v12 = v14;
      if ( v14 < 0 )
      {
        v15 = 2723LL;
        goto LABEL_13;
      }
LABEL_22:
      v47 = 0;
      v50 = 0LL;
      v21 = **(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v50);
      if ( v21(a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v50) >= 0 )
      {
        v53[0] = 0LL;
        v22 = v50;
        v23 = *(__int64 (__fastcall **)(__int64, struct IOcclusionBasedApplicationViewPosition **))(*(_QWORD *)v50 + 24LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v53);
        v24 = v23(v22, v53);
        v12 = v24;
        if ( v24 < 0 )
        {
          v25 = 2741LL;
LABEL_27:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v25,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v24);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v53);
LABEL_56:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v50);
          goto LABEL_57;
        }
        v24 = (*(__int64 (__fastcall **)(struct IOcclusionBasedApplicationViewPosition *, unsigned int *))(*(_QWORD *)v53[0] + 368LL))(
                v53[0],
                &v47);
        v12 = v24;
        if ( v24 < 0 )
        {
          v25 = 2742LL;
          goto LABEL_27;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v53);
        v9 = *(_QWORD *)&v52.left;
      }
      v46 = 0LL;
      if ( a5
        && (v26 = *(int (__fastcall **)(__int64 *, struct IApplicationViewTitlebarConfiguration **))(*a5 + 184),
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v46),
            v26(a5, &v46) < 0)
        && (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v46),
            fixed = CDesktopPositioner::_CreateTitlebarConfiguration(v27, a2, &v46),
            v12 = fixed,
            fixed < 0) )
      {
        v29 = 2748LL;
      }
      else
      {
        v55 = 0LL;
        fixed = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, int, struct IApplicationViewTitlebarConfiguration *, __int128 *))(**(_QWORD **)(v9 + 264) + 72LL))(
                  *(_QWORD *)(v9 + 264),
                  v45,
                  v47,
                  1LL,
                  1,
                  v46,
                  &v55);
        v12 = fixed;
        if ( fixed >= 0 )
        {
          v30 = v55;
          v31 = *a3 - v55;
          *a3 = v31;
          v32 = DWORD2(v55);
          v33 = DWORD2(v55) + a3[2];
          a3[2] = v33;
          v34 = DWORD1(v55);
          v35 = a3[1] - DWORD1(v55);
          a3[1] = v35;
          v36 = HIDWORD(v55) + a3[3];
          *(RECT *)v53 = rc1;
          v37 = v48;
          if ( (v48 & 4) != 0 )
          {
            v38 = v33 - v31;
            v39 = v36 - v35;
            if ( (v48 & 8) != 0 )
            {
              v38 -= v32 + v30;
              v39 -= HIDWORD(v55) + v34;
            }
            v40 = v38 + rc1.left;
            LODWORD(v53[1]) = v38 + rc1.left;
            v41 = v39 + rc1.top;
            HIDWORD(v53[1]) = v39 + rc1.top;
            v37 = v48;
          }
          else
          {
            v41 = HIDWORD(v53[1]);
            v40 = (unsigned int)v53[1];
          }
          if ( (v37 & 1) != 0 )
          {
            if ( (v37 & 2) != 0 )
            {
              v42 = v30 + v31;
              v35 += v34;
            }
            else
            {
              v42 = v31;
            }
            v53[0] = (struct IOcclusionBasedApplicationViewPosition *)__PAIR64__(v35, v42);
            LODWORD(v53[1]) = v42 - rc1.left + v40;
            HIDWORD(v53[1]) = v35 - rc1.top + v41;
          }
          fixed = CDesktopPositioner::_FixRectForWorkArea(*(_QWORD *)&v52.left, a6, v53, v45);
          v12 = fixed;
          if ( fixed >= 0 )
          {
            if ( v17 || !EqualRect(&rc1, &rc2) )
            {
              v43 = *a5;
              v52 = rc2;
              fixed = (*(__int64 (__fastcall **)(__int64 *, RECT *))(v43 + 56))(a5, &v52);
              v12 = fixed;
              if ( fixed < 0 )
              {
                v29 = 2822LL;
                goto LABEL_53;
              }
              fixed = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 320LL))(a2, a5);
              v12 = fixed;
              if ( fixed < 0 )
              {
                v29 = 2825LL;
                goto LABEL_53;
              }
            }
            v12 = 0;
            goto LABEL_55;
          }
          v29 = 2804LL;
        }
        else
        {
          v29 = 2758LL;
        }
      }
LABEL_53:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v29,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)fixed);
LABEL_55:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v46);
      goto LABEL_56;
    }
    if ( v51 != 3 )
      goto LABEL_22;
    v17 = 1;
    v53[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v53);
    FullPositionSnapshot = CDesktopPositioner::_GetFullPositionSnapshot(v18, a2, v53);
    v12 = FullPositionSnapshot;
    if ( FullPositionSnapshot >= 0 )
    {
      FullPositionSnapshot = (*(__int64 (__fastcall **)(struct IOcclusionBasedApplicationViewPosition *, RECT *))(*(_QWORD *)v53[0] + 56LL))(
                               v53[0],
                               &rc1);
      v12 = FullPositionSnapshot;
      if ( FullPositionSnapshot >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v53);
        goto LABEL_22;
      }
      v20 = 2733LL;
    }
    else
    {
      v20 = 2732LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)FullPositionSnapshot);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v53);
    goto LABEL_57;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA91,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v11);
LABEL_58:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v45);
  return v12;
}
