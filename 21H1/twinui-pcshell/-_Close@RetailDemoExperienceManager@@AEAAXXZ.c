/*
 * XREFs of ?_Close@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801CAB80
 * Callers:
 *     ?Close@RetailDemoExperienceManager@@UEAAJXZ @ 0x1801C8F10 (-Close@RetailDemoExperienceManager@@UEAAJXZ.c)
 *     ?LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z @ 0x1801C9570 (-LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RetailDemoExperienceManager::_Close(RetailDemoExperienceManager *this)
{
  __int64 v1; // rcx
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 30);
  if ( !v1 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      222LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 392LL))(v1, 0LL);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      223LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
}
