/*
 * XREFs of ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x18001963C
 * Callers:
 *     ?OnViewCloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800517C0 (-OnViewCloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800518D0 (-OnViewUncloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x18007EF34 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 *     ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x1800876B0 (-Hide@CStartExperienceManager@@UEAAJI@Z.c)
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x1801D4990 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 *     ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x1801D53CC (-SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18001BD54 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007B66C (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CStartExperienceManager::GetMonitorInformation(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        struct tagRECT *a3,
        enum EDGEUI_TRAYSTUCKPLACE *a4,
        bool *a5,
        struct tagRECT *a6,
        HMONITOR *a7)
{
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, SID *, GUID *, __int64 *); // rbx
  int v11; // eax
  HRESULT v12; // ebx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, IUnknown **); // rdi
  int v15; // eax
  HWND WindowW; // rax
  LANGID ThreadUILanguage; // ax
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-60h]
  void *ppvOut; // [rsp+30h] [rbp-50h] BYREF
  IUnknown *punk; // [rsp+38h] [rbp-48h] BYREF
  __int64 v23; // [rsp+40h] [rbp-40h] BYREF
  int v24; // [rsp+48h] [rbp-38h] BYREF
  HMONITOR v25; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v26; // [rsp+58h] [rbp-28h] BYREF
  struct tagRECT v27; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  *a3 = 0LL;
  *(_DWORD *)a4 = 3;
  *a5 = 0;
  if ( a6 )
    *a6 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  v23 = 0LL;
  v9 = *((_QWORD *)this + 65);
  v10 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v9 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v23);
  v11 = v10(v9, &SID_ImmersiveLauncher, &GUID_d8d60399_a0f1_f987_5551_321fd1b49864, &v23);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31A,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v11,
      v20);
    goto LABEL_21;
  }
  punk = 0LL;
  v13 = v23;
  v14 = *(__int64 (__fastcall **)(__int64, IUnknown **))(*(_QWORD *)v23 + 88LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&punk);
  v12 = v14(v13, &punk);
  if ( v12 >= 0 )
  {
    v25 = 0LL;
    if ( !a7 || (v12 = ((__int64 (__fastcall *)(IUnknown *, HMONITOR *))punk->lpVtbl[1].Release)(punk, &v25), v12 >= 0) )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
      v12 = IUnknown_QueryService(
              punk,
              (const GUID *const)&SID_EdgeUi,
              &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
              &ppvOut);
      if ( v12 >= 0 )
      {
        v15 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 80LL))(ppvOut, &v24);
        v12 = v15;
        if ( v15 < 0 )
        {
          v19 = 811LL;
        }
        else
        {
          v15 = (*(__int64 (__fastcall **)(void *, struct tagRECT *))(*(_QWORD *)ppvOut + 112LL))(ppvOut, &v27);
          v12 = v15;
          if ( v15 < 0 )
          {
            v19 = 813LL;
          }
          else
          {
            WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
            if ( WindowW && GetPropW(WindowW, L"IsAutoHideEnabled") )
            {
              v15 = (*(__int64 (__fastcall **)(void *, struct tagRECT *))(*(_QWORD *)ppvOut + 152LL))(ppvOut, &v26);
              v12 = v15;
              if ( v15 >= 0 )
                goto LABEL_14;
              v19 = 820LL;
            }
            else
            {
              v15 = ((__int64 (__fastcall *)(IUnknown *, struct tagRECT *))punk->lpVtbl[3].Release)(punk, &v26);
              v12 = v15;
              if ( v15 >= 0 )
              {
LABEL_14:
                *a3 = v26;
                *(_DWORD *)a4 = v24;
                ThreadUILanguage = GetThreadUILanguage();
                *a5 = (unsigned int)IsBiDiLocale(ThreadUILanguage) != 0;
                if ( a6 )
                  *a6 = v27;
                if ( a7 )
                  *a7 = v25;
                v12 = 0;
                goto LABEL_19;
              }
              v19 = 824LL;
            }
          }
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
          (const char *)(unsigned int)v15,
          v20);
      }
LABEL_19:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&punk);
LABEL_21:
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v23);
  return (unsigned int)v12;
}
