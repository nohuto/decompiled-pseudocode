/*
 * XREFs of _SearchAppExperienceManager::Show_::_1_::catch$10 @ 0x180104D3F
 * Callers:
 *     <none>
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180095444 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18019F460 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall SearchAppExperienceManager::Show_::_1_::catch_10(__int64 a1, __int64 a2)
{
  const char *v3; // rax

  v3 = (const char *)std::wstring::c_str((_QWORD *)(a2 + 96));
  wil::details::in1diag3::Return_HrMsg(
    *(wil::details::in1diag3 **)(a2 + 536),
    (void *)0x1EC,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
    (const char *)0x80070057LL,
    (int)"Invalid Args: %ws",
    v3);
  return 0LL;
}
