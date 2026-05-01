/*
 * XREFs of ?OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1800855A4
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180010988 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     ?SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z @ 0x180060570 (-SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1804506B4 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?EnableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x1804507F4 (-EnableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@View.c)
 *     ?ResetViews@CSingleViewShellExperience@@AEAAXXZ @ 0x180451510 (-ResetViews@CSingleViewShellExperience@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::OnViewCreatedBase(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  char v5; // si
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v10; // esi
  int v11; // ebp
  int v12; // eax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  __int64 v17; // r8
  int v18; // eax
  int v19; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 24) )
  {
    v10 = *(_DWORD *)(a1 + 64);
    v11 = *(_DWORD *)(a1 + 68);
    *(_DWORD *)(a1 + 64) = 0;
    *(_DWORD *)(a1 + 68) = 0;
    v12 = CSingleViewShellExperience::DestroyView((CSingleViewShellExperience *)a1);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1AC,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v12);
    *(_DWORD *)(a1 + 64) = v10;
    *(_DWORD *)(a1 + 68) = v11;
  }
  v4 = 0LL;
  if ( &v21 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
  }
  v21 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  v5 = 1;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 32LL))(*(_QWORD *)(a1 + 80));
  v7 = v6;
  if ( v6 < 0 )
  {
    v13 = (unsigned int)v6;
    v14 = 439LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)v13);
    goto LABEL_12;
  }
  v5 = 0;
  if ( *(_DWORD *)(a1 + 64) == 2 )
  {
    v7 = -2147023673;
    goto LABEL_19;
  }
  if ( *(_DWORD *)(a1 + 60) )
  {
    v16 = CSingleViewShellExperience::SetWindowBand(a1);
    v7 = v16;
    if ( v16 < 0 )
    {
      v13 = (unsigned int)v16;
      v14 = 454LL;
      goto LABEL_28;
    }
  }
  if ( *(_BYTE *)(a1 + 53) )
  {
    ShellExperienceHelpers::NavigationLevelOverrideHelper::EnableOverride(a1 + 72, *(_QWORD *)(a1 + 24));
    LOBYTE(v17) = *(_BYTE *)(a1 + 53);
    v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 88) + 96LL))(
            *(_QWORD *)(a1 + 88),
            a1,
            v17);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1D1,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v18);
  }
  if ( !*(_QWORD *)(a1 + 24) )
  {
    v7 = -2147023673;
    v14 = 476LL;
LABEL_27:
    v13 = (unsigned int)v7;
    goto LABEL_28;
  }
  v8 = (***(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 88))(*(_QWORD *)(a1 + 88), a1);
  v7 = v8;
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1D8,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v8);
  if ( v7 < 0 )
  {
LABEL_19:
    v15 = CSingleViewShellExperience::DestroyView((CSingleViewShellExperience *)a1);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1E2,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v15);
    *(_DWORD *)(a1 + 64) = 0;
    *(_DWORD *)(a1 + 68) = 0;
    CSingleViewShellExperience::ResetViews((CSingleViewShellExperience *)a1);
    v14 = 487LL;
    goto LABEL_27;
  }
LABEL_12:
  if ( v5 )
  {
    v19 = CSingleViewShellExperience::DestroyView((CSingleViewShellExperience *)a1);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1B6,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v19);
  }
  return (unsigned int)v7;
}
