/*
 * XREFs of _lambda_3bbf153ae8ca8cd098f14c7e321b666e_::operator() @ 0x1801E25C4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3bbf153ae8ca8cd098f14c7e321b666e__&_::Run @ 0x1801E4A20 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3bbf153ae8ca8cd098f14c7e321b666e__-_--Run.c)
 * Callees:
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x18005D578 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?ReducedVisualEffects@@YA_NXZ @ 0x18005F1FC (-ReducedVisualEffects@@YA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x180473DC0 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_3bbf153ae8ca8cd098f14c7e321b666e_::operator()(__int64 *a1)
{
  __int64 v2; // rbx
  char v3; // si
  int v4; // eax
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *a1;
  v3 = 1;
  if ( !ReducedVisualEffects() )
  {
    v4 = CExperienceManagerAnimationHelper::End((CExperienceManagerAnimationHelper *)(*a1 + 720));
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x275,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
  }
  v5 = CSingleViewShellExperience::DestroyView((CSingleViewShellExperience *)(*a1 + 64));
  v6 = v5;
  if ( v5 >= 0 )
  {
    v6 = 0;
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x277,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  }
  if ( v3 )
    *(_DWORD *)(v2 + 752) = 0;
  return v6;
}
