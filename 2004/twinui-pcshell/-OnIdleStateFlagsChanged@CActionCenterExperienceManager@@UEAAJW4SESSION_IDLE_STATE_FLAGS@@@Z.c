/*
 * XREFs of ?OnIdleStateFlagsChanged@CActionCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x1801B04D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x180012F40 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?SetZBand@CActionCenterExperienceManager@@AEAAJXZ @ 0x180060EAC (-SetZBand@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnIdleStateFlagsChanged(__int64 a1, char a2)
{
  int v2; // edx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2 & 2;
  if ( (v2 != 0) != *(_BYTE *)(a1 + 396) )
  {
    *(_BYTE *)(a1 + 396) = v2 != 0;
    if ( v2 )
    {
      v9 = 0;
      v4 = *(_QWORD *)(a1 + 424);
      if ( !v4 )
        goto LABEL_14;
      v5 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v4 + 32LL))(v4, 5LL, &v9);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x197,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v5);
      if ( v9 )
      {
        CActionCenterExperienceManager::SetZBand((CActionCenterExperienceManager *)(a1 - 56));
      }
      else
      {
LABEL_14:
        if ( *(_DWORD *)(a1 + 104) == 2 )
        {
          v6 = CSingleViewShellExperience::Hide(a1 + 64, 0LL);
          if ( v6 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x1A0,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
              (const char *)(unsigned int)v6);
        }
      }
    }
  }
  return 0LL;
}
