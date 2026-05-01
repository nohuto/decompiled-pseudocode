/*
 * XREFs of ?QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x180407BEC
 * Callers:
 *     ?QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01PEAW4FinalizeLayoutFlags@@@Z @ 0x1804076D8 (-QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREF.c)
 *     ?ReverseAppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4REVERSE_APP_SWITCH_FLAGS@@@Z @ 0x180408240 (-ReverseAppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4REVERSE_APP_SWITCH_FLAGS.c)
 *     ?SwitchToApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x180408370 (-SwitchToApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18001BD54 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x18039C6B8 (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1804719E0 (-ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1804804DC (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180480B00 (-_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall AppSwitchOperation::QuerySwitchToApp(__int64 a1, struct IApplicationView *a2, char a3)
{
  LANGID ThreadUILanguage; // ax
  bool v7; // r15
  int ViewLayoutBehaviorFlags; // ebx
  __int64 v9; // rdx
  int v11; // eax
  const struct LAYOUT_ENVIRONMENT_DETAILS *v12; // rdx
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 *v18; // rcx
  __int64 *v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  bool v22; // zf
  __int64 (__fastcall *v23)(__int64, __int64); // rax
  int v24; // eax
  __int64 *v25; // rcx
  __int64 v26; // r10
  __int64 v27; // rbx
  int v28; // eax
  __int64 v29; // rbx
  int v30; // eax
  __int64 v31; // rdx
  int v32; // eax
  __int64 *v33; // rcx
  __int64 v34; // r10
  __int64 v35; // rbx
  int v36; // eax
  __int64 v37; // rdx
  int v38[2]; // [rsp+30h] [rbp-50h] BYREF
  int v39[4]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v40[40]; // [rsp+48h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  ThreadUILanguage = GetThreadUILanguage();
  v7 = (unsigned int)IsBiDiLocale(ThreadUILanguage) != 0;
  ViewLayoutBehaviorFlags = GetViewLayoutBehaviorFlags(a2, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)v39);
  if ( ViewLayoutBehaviorFlags < 0 )
  {
    v9 = 230LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
      (const char *)(unsigned int)ViewLayoutBehaviorFlags);
    return (unsigned int)ViewLayoutBehaviorFlags;
  }
  (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 64) + 24LL))(*(_QWORD *)(a1 + 64), v40);
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 88LL))(*(_QWORD *)(a1 + 64), 2LL);
  if ( (v39[0] & 2) != 0 )
  {
    if ( v11 )
    {
      *(_QWORD *)v38 = 0LL;
      v13 = *(_QWORD *)(a1 + 64);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v38);
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v13 + 112LL))(
              v13,
              0LL,
              2LL,
              &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
              v38);
      ViewLayoutBehaviorFlags = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF3,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
          (const char *)(unsigned int)v14);
LABEL_14:
        v18 = (__int64 *)v38;
LABEL_15:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
        return (unsigned int)ViewLayoutBehaviorFlags;
      }
      *(_QWORD *)v39 = 0LL;
      v15 = *(_QWORD *)v38;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v39);
      v16 = (*(__int64 (__fastcall **)(__int64, GUID *, int *))(*(_QWORD *)v15 + 48LL))(
              v15,
              &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
              v39);
      ViewLayoutBehaviorFlags = v16;
      if ( v16 < 0 )
      {
        v17 = 246LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
          (const char *)(unsigned int)v16);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v39);
        goto LABEL_14;
      }
      v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IApplicationView *, __int64))(**(_QWORD **)(a1 + 64)
                                                                                          + 248LL))(
              *(_QWORD *)(a1 + 64),
              *(_QWORD *)v39,
              a2,
              2LL);
      ViewLayoutBehaviorFlags = v16;
      if ( v16 < 0 )
      {
        v17 = 248LL;
        goto LABEL_13;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v39);
      v19 = (__int64 *)v38;
      goto LABEL_17;
    }
    if ( ImmersiveApplicationLayout::ComputeLayoutEnvMaxApps((ImmersiveApplicationLayout *)v40, v12) == 1 )
    {
      ViewLayoutBehaviorFlags = CAppLayoutOperation::_MakeViewFullScreen(a1 + 24, a2, 5LL);
      if ( ViewLayoutBehaviorFlags < 0 )
      {
        v9 = 253LL;
        goto LABEL_3;
      }
    }
    else if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 80LL))(
                *(_QWORD *)(a1 + 64),
                1LL) != 2 )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 80LL))(*(_QWORD *)(a1 + 64), 1LL);
      v21 = *(_QWORD *)(a1 + 64);
      v22 = v20 == 1;
      v23 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 80LL);
      if ( v22 )
      {
        v24 = v23(v21, 4LL);
        v25 = *(__int64 **)(a1 + 64);
        v26 = *v25;
        if ( v24 == 1 )
        {
          ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(__int64 *, _QWORD, struct IApplicationView *, __int64))(v26 + 248))(
                                      v25,
                                      0LL,
                                      a2,
                                      2LL);
          if ( ViewLayoutBehaviorFlags < 0 )
          {
            v9 = 267LL;
            goto LABEL_3;
          }
        }
        else
        {
          ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(__int64 *, struct IApplicationView *, bool, __int64, _QWORD))(v26 + 232))(
                                      v25,
                                      a2,
                                      !v7,
                                      2LL,
                                      0LL);
          if ( ViewLayoutBehaviorFlags < 0 )
          {
            v9 = 271LL;
            goto LABEL_3;
          }
        }
      }
      else
      {
        if ( !(unsigned int)v23(v21, 4LL) )
        {
          ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 64)
                                                                                              + 240LL))(
                                      *(_QWORD *)(a1 + 64),
                                      0LL,
                                      0LL,
                                      0LL);
          if ( ViewLayoutBehaviorFlags < 0 )
          {
            v9 = 281LL;
            goto LABEL_3;
          }
        }
        ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, bool, __int64, _QWORD))(**(_QWORD **)(a1 + 64) + 232LL))(
                                    *(_QWORD *)(a1 + 64),
                                    a2,
                                    !v7,
                                    2LL,
                                    0LL);
        if ( ViewLayoutBehaviorFlags < 0 )
        {
          v9 = 283LL;
          goto LABEL_3;
        }
      }
      ViewLayoutBehaviorFlags = CAppLayoutOperation::_FinalizeLayout(a1 + 24);
      if ( ViewLayoutBehaviorFlags < 0 )
      {
        v9 = 290LL;
        goto LABEL_3;
      }
    }
  }
  else if ( v11 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 80LL))(*(_QWORD *)(a1 + 64), 1LL) == 2 )
    {
      *(_QWORD *)v39 = 0LL;
      v27 = *(_QWORD *)(a1 + 64);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v39);
      v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v27 + 112LL))(
              v27,
              0LL,
              1LL,
              &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
              v39);
      ViewLayoutBehaviorFlags = v28;
      if ( v28 >= 0 )
      {
        *(_QWORD *)v38 = 0LL;
        v29 = *(_QWORD *)v39;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v38);
        v30 = (*(__int64 (__fastcall **)(__int64, GUID *, int *))(*(_QWORD *)v29 + 48LL))(
                v29,
                &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
                v38);
        ViewLayoutBehaviorFlags = v30;
        if ( v30 >= 0 )
        {
          v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IApplicationView *, __int64))(**(_QWORD **)(a1 + 64)
                                                                                              + 248LL))(
                  *(_QWORD *)(a1 + 64),
                  *(_QWORD *)v38,
                  a2,
                  1LL);
          ViewLayoutBehaviorFlags = v30;
          if ( v30 >= 0 )
          {
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v38);
            v19 = (__int64 *)v39;
LABEL_17:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
            return 0LL;
          }
          v31 = 305LL;
        }
        else
        {
          v31 = 304LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v31,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
          (const char *)(unsigned int)v30);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v38);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x12D,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
          (const char *)(unsigned int)v28);
      }
      v18 = (__int64 *)v39;
      goto LABEL_15;
    }
    v32 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 80LL))(*(_QWORD *)(a1 + 64), 4LL);
    v33 = *(__int64 **)(a1 + 64);
    v34 = *v33;
    if ( v32 != 1 )
    {
      ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(__int64 *, struct IApplicationView *, bool, __int64, _QWORD))(v34 + 232))(
                                  v33,
                                  a2,
                                  v7,
                                  1LL,
                                  0LL);
      if ( ViewLayoutBehaviorFlags < 0 )
      {
        v9 = 315LL;
        goto LABEL_3;
      }
      *(_QWORD *)v38 = 0LL;
      v35 = *(_QWORD *)(a1 + 64);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v38);
      v36 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v35 + 112LL))(
              v35,
              0LL,
              2LL,
              &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
              v38);
      ViewLayoutBehaviorFlags = v36;
      if ( v36 >= 0 )
      {
        *(_OWORD *)v39 = 0LL;
        (*(void (__fastcall **)(_QWORD, _QWORD, int *))(**(_QWORD **)v38 + 104LL))(*(_QWORD *)v38, 0LL, v39);
        v36 = CAppLayoutOperation::_FinalizeLayout(a1 + 24);
        ViewLayoutBehaviorFlags = v36;
        if ( v36 >= 0 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v38);
          return 0LL;
        }
        v37 = 325LL;
      }
      else
      {
        v37 = 319LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v37,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
        (const char *)(unsigned int)v36);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v38);
      return (unsigned int)ViewLayoutBehaviorFlags;
    }
    ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(__int64 *, _QWORD, struct IApplicationView *, __int64))(v34 + 248))(
                                v33,
                                0LL,
                                a2,
                                1LL);
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v9 = 310LL;
      goto LABEL_3;
    }
  }
  else if ( (a3 & 4) != 0
         || (*(int (__fastcall **)(_QWORD, _QWORD, int *))(**(_QWORD **)(a1 + 64) + 168LL))(
              *(_QWORD *)(a1 + 64),
              0LL,
              v39) < 0 )
  {
    ViewLayoutBehaviorFlags = CAppLayoutOperation::_MakeViewFullScreen(a1 + 24, a2, 5LL);
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v9 = 335LL;
      goto LABEL_3;
    }
  }
  else
  {
    ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IApplicationView *, __int64))(**(_QWORD **)(a1 + 64) + 248LL))(
                                *(_QWORD *)(a1 + 64),
                                0LL,
                                a2,
                                1LL);
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v9 = 341LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
