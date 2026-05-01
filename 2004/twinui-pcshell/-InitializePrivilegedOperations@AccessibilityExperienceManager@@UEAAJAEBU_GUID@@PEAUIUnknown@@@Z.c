/*
 * XREFs of ?InitializePrivilegedOperations@AccessibilityExperienceManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180370480
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedForegroundOperations@@@WRL@Microsoft@@$$V@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@WRL@Microsoft@@@Z @ 0x180143CF0 (--$InitializePrivilegedOperationsHelper@V-$ComPtr@UIPrivilegedForegroundOperations@@@WRL@Microso.c)
 */

__int64 __fastcall AccessibilityExperienceManager::InitializePrivilegedOperations(
        AccessibilityExperienceManager *this,
        struct _GUID *a2,
        struct IUnknown *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = InitializePrivilegedOperationsHelper<Microsoft::WRL::ComPtr<IPrivilegedForegroundOperations>,>(
         a2,
         a3,
         (__int64 *)this + 7);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E0,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
