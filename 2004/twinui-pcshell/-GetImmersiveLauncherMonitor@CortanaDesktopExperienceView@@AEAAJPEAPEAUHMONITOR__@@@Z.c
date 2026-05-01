/*
 * XREFs of ?GetImmersiveLauncherMonitor@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z @ 0x18020C5EC
 * Callers:
 *     ?GetImmersiveLauncherMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x18020C740 (-GetImmersiveLauncherMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@PE.c)
 *     ?PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18020FBA0 (-PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007B66C (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18020B91C (-EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaDesktopExperienceView::GetImmersiveLauncherMonitor(
        CortanaDesktopExperienceView *this,
        HMONITOR *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, SID *, GUID *, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64 *); // rdi
  int v11; // eax
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF
  __int64 v16; // [rsp+58h] [rbp+20h] BYREF

  v4 = CortanaDesktopExperienceView::EnsureImmersiveShell(this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v16 = 0LL;
    v6 = *((_QWORD *)this + 15);
    v7 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v16);
    v8 = v7(v6, &SID_ImmersiveLauncher, &GUID_d8d60399_a0f1_f987_5551_321fd1b49864, &v16);
    v5 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7D6,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v8);
LABEL_12:
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v16);
      return v5;
    }
    v15 = 0LL;
    v9 = v16;
    v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 88LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    v11 = v10(v9, &v15);
    v5 = v11;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, HMONITOR *))(*(_QWORD *)v15 + 40LL))(v15, a2);
      v5 = v11;
      if ( v11 >= 0 )
      {
        v5 = 0;
        goto LABEL_11;
      }
      v12 = 2009LL;
    }
    else
    {
      v12 = 2008LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v11);
LABEL_11:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7D4,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
