/*
 * XREFs of ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x1800876B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x180012F40 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x18001963C (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?ReducedVisualEffects@@YA_NXZ @ 0x1800536A8 (-ReducedVisualEffects@@YA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStartExperienceManager::Hide(CStartExperienceManager *this, int a2)
{
  struct CSingleViewShellExperience *v4; // rdx
  int v5; // eax
  int v6; // ebx
  __int64 v8; // rdx
  bool v9; // [rsp+40h] [rbp-48h] BYREF
  __int16 v10; // [rsp+44h] [rbp-44h] BYREF
  struct tagRECT v11; // [rsp+48h] [rbp-40h] BYREF
  struct tagRECT v12; // [rsp+58h] [rbp-30h] BYREF
  _WORD v13[4]; // [rsp+68h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( a2 && !*((_BYTE *)this + 616) && !ReducedVisualEffects() )
  {
    CStartExperienceManager::GetMonitorInformation(
      (CStartExperienceManager *)((char *)this - 40),
      v4,
      &v12,
      (enum EDGEUI_TRAYSTUCKPLACE *)&v10,
      &v9,
      &v11,
      0LL);
    v13[2] = v10;
    v13[0] = 1;
    v13[1] = a2;
    v13[3] = 0;
    RtlPublishWnfStateData(WNF_SHEL_START_VISIBILITY_CHANGED, 0LL, v13, 8LL);
  }
  if ( a2 == 7 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 64) + 48LL))(*((_QWORD *)this + 64));
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x153,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    v6 = CSingleViewShellExperience::Hide(
           (__int64)this + 272,
           (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)1);
    if ( v6 >= 0 )
      return 0LL;
    v8 = 340LL;
    goto LABEL_13;
  }
  v6 = CSingleViewShellExperience::Hide(
         (__int64)this + 272,
         (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)1);
  if ( v6 < 0 )
  {
    v8 = 344LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  }
  return (unsigned int)v6;
}
