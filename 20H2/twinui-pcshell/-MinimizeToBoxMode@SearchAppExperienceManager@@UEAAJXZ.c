/*
 * XREFs of ?MinimizeToBoxMode@SearchAppExperienceManager@@UEAAJXZ @ 0x1801F5DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SearchAppExperienceManager::MinimizeToBoxMode(SearchAppExperienceManager *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 53) + 72LL))(
         *((_QWORD *)this + 53),
         *((_QWORD *)this + 64),
         1LL);
  if ( v2 < 0 )
  {
    v3 = 545LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 54) + 80LL))(*((_QWORD *)this + 54));
  if ( v2 < 0 )
  {
    v3 = 546LL;
    goto LABEL_3;
  }
  return 0LL;
}
