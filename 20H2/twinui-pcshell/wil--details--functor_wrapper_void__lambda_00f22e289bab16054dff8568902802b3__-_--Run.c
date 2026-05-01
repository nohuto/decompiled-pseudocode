/*
 * XREFs of wil::details::functor_wrapper_void__lambda_00f22e289bab16054dff8568902802b3__&_::Run @ 0x18003E5C0
 * Callers:
 *     <none>
 * Callees:
 *     IsPeoplePane @ 0x18003EDB0 (IsPeoplePane.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1803EF778 (-_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicat.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_00f22e289bab16054dff8568902802b3____::Run(__int64 a1)
{
  struct IApplicationView ***v1; // rbx
  int LaunchPositionForPeoplePane; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(struct IApplicationView ****)(a1 + 8);
  if ( (unsigned __int8)IsPeoplePane(**v1) )
  {
    LaunchPositionForPeoplePane = CDesktopPositioner::_GetLaunchPositionForPeoplePane(
                                    (CDesktopPositioner *)v1[1],
                                    **v1,
                                    (struct IApplicationViewPosition **)*v1[2]);
    if ( LaunchPositionForPeoplePane < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6C4,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)LaunchPositionForPeoplePane,
        v4);
  }
  return 0LL;
}
