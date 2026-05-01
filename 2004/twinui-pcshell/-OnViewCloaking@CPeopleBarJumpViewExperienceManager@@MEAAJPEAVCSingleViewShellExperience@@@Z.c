/*
 * XREFs of ?OnViewCloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801CED40
 * Callers:
 *     <none>
 * Callees:
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x180051A4C (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@_ea_180051A4C.c)
 *     ?ReducedVisualEffects@@YA_NXZ @ 0x1800536A8 (-ReducedVisualEffects@@YA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?GetMonitorWorkArea@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x1801CEB08 (-GetMonitorWorkArea@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CPeopleBarJumpViewExperienceManager::OnViewCloaking(
        CPeopleBarJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v2; // edx
  int v4; // ebx
  int v5; // edx
  int v6; // edx
  int MonitorWorkArea; // eax
  __int64 v8; // rdx
  struct tagRECT v10; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = *((_DWORD *)this + 65);
  v4 = 92;
  if ( v2 )
  {
    v5 = v2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 == 1 )
          v4 = 91;
      }
      else
      {
        v4 = 89;
      }
    }
    else
    {
      v4 = 90;
    }
  }
  else
  {
    v4 = 88;
  }
  if ( !ReducedVisualEffects() )
  {
    MonitorWorkArea = CPeopleBarJumpViewExperienceManager::GetMonitorWorkArea((const RECT *)this - 3, &v10);
    if ( MonitorWorkArea < 0 )
    {
      v8 = 247LL;
LABEL_14:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)MonitorWorkArea);
      return 0LL;
    }
    MonitorWorkArea = CExperienceManagerAnimationHelper::Begin(
                        (__int64)this + 352,
                        *((ExperienceManagerUtils **)this + 4),
                        v4 | 0x200000u,
                        0LL,
                        0);
    if ( MonitorWorkArea < 0 )
    {
      v8 = 250LL;
      goto LABEL_14;
    }
  }
  return 0LL;
}
