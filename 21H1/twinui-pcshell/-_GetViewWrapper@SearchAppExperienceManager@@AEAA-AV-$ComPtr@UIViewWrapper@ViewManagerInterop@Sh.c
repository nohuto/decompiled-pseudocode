/*
 * XREFs of ?_GetViewWrapper@SearchAppExperienceManager@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x18005183C
 * Callers:
 *     ?_ApplyPriorityBoostIfNeeded@SearchAppExperienceManager@@AEAAJXZ @ 0x180051418 (-_ApplyPriorityBoostIfNeeded@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_ApplyPriorityUnboostIfNeeded@SearchAppExperienceManager@@AEAAJXZ @ 0x1800514C8 (-_ApplyPriorityUnboostIfNeeded@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_ResetActivationTimeoutPolicy@SearchAppExperienceManager@@AEAAJXZ @ 0x180051748 (-_ResetActivationTimeoutPolicy@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?GetWindowHandle@SearchAppExperienceManager@@UEAAJPEA_K@Z @ 0x1800517E0 (-GetWindowHandle@SearchAppExperienceManager@@UEAAJPEA_K@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall SearchAppExperienceManager::_GetViewWrapper(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, _QWORD *); // rbx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 512);
  v4 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v3 + 56LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  v5 = v4(v3, a2);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x361,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v5,
      1);
  return a2;
}
