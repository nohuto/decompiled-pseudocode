/*
 * XREFs of ?OnPriorityUnboostRequested@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180098E60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnPriorityUnboostRequested(
        CBaseTrayFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x19C,
        (__int64)"internal\\shell\\private\\inc\\BaseTrayFlyoutExperience.cpp",
        (const char *)(unsigned int)v5);
  }
  v6 = *((_QWORD *)this + 42);
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, struct CSingleViewShellExperience *))(*(_QWORD *)v6 + 128LL))(v6, a2);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1A1,
        (__int64)"internal\\shell\\private\\inc\\BaseTrayFlyoutExperience.cpp",
        (const char *)(unsigned int)v7);
  }
  return 0LL;
}
