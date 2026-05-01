/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bb12221cab58c029e8bb5bdcb2677923___::Run @ 0x180370CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x180049AA0 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bb12221cab58c029e8bb5bdcb2677923___::Run()
{
  int v0; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v0 = ActivateApplicationForExperienceWithPropertySet(
         (const unsigned __int16 *)qword_1805CF3F8,
         &szAgent,
         (__int64)L"AccessibilityExperienceId",
         0LL,
         1u,
         0LL);
  if ( v0 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A8,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v0);
}
