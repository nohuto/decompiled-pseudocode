/*
 * XREFs of ?OnApplicationActivatedForLaunch@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J@Z @ 0x1801D3950
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x18008561C (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 *     ??$InfraFailure@AEA_NAEAJ@StartMenuExperienceTelemetry@@SAXAEA_NAEAJ@Z @ 0x1801D1E08 (--$InfraFailure@AEA_NAEAJ@StartMenuExperienceTelemetry@@SAXAEA_NAEAJ@Z.c)
 */

__int64 __fastcall CStartExperienceManager::OnApplicationActivatedForLaunch(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        int a3)
{
  __int64 v3; // rdi
  _BYTE *v5; // rbx
  HWND ShellWindow; // rax
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = a3;
  v3 = a3;
  if ( a3 == -2144927148 || a3 == -2147009295 )
  {
    v5 = (char *)this + 569;
    StartMenuExperienceTelemetry::InfraFailure<bool &,long &>((unsigned __int8 *)this + 569, &v11);
    if ( *v5 )
    {
      ShellWindow = GetShellWindow();
      PostMessageW(ShellWindow, 0x533u, 1uLL, 0LL);
    }
  }
  v7 = ExperienceManagerUtils::PostToUIThread(0LL, (struct IUnknown *)this - 11, (void *)0x401, v3);
  v8 = v7;
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
  return v8;
}
