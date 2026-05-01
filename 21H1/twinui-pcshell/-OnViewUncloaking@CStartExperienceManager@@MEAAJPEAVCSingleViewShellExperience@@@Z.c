/*
 * XREFs of ?OnViewUncloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180050EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x1800191CC (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x18005101C (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@_ea_18005101C.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 */

__int64 __fastcall CStartExperienceManager::OnViewUncloaking(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int MonitorInformation; // eax
  __int16 v5; // bx
  __int64 v6; // r8
  int v7; // eax
  bool v9; // [rsp+40h] [rbp-48h] BYREF
  int v10; // [rsp+44h] [rbp-44h] BYREF
  struct tagRECT v11; // [rsp+48h] [rbp-40h] BYREF
  _WORD v12[4]; // [rsp+58h] [rbp-30h] BYREF
  struct tagRECT v13; // [rsp+60h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  MonitorInformation = CStartExperienceManager::GetMonitorInformation(
                         (CStartExperienceManager *)((char *)this - 88),
                         a2,
                         &v13,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v10,
                         &v9,
                         &v11,
                         0LL);
  v5 = v10;
  if ( MonitorInformation >= 0 )
  {
    v6 = 81LL;
    if ( *((_BYTE *)a2 + 52) )
    {
      v6 = 82LL;
    }
    else if ( v10 )
    {
      switch ( v10 )
      {
        case 1:
          v6 = 80LL;
          break;
        case 2:
          v6 = 77LL;
          break;
        case 3:
          v6 = 79LL;
          break;
      }
    }
    else
    {
      v6 = 78LL;
    }
    LODWORD(v6) = v6 | 0x200000;
    v7 = CExperienceManagerAnimationHelper::Begin((char *)this + 472, *((_QWORD *)this + 31), v6, 0LL);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x292,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v7,
        0);
  }
  v12[1] = *((_WORD *)this + 268);
  v12[0] = 0;
  v12[2] = v5;
  v12[3] = 0;
  RtlPublishWnfStateData(WNF_SHEL_START_VISIBILITY_CHANGED, 0LL, v12, 8LL);
  return 0LL;
}
