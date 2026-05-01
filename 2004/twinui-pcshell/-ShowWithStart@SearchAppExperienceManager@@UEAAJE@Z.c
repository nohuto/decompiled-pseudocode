/*
 * XREFs of ?ShowWithStart@SearchAppExperienceManager@@UEAAJE@Z @ 0x180088E40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SearchAppExperienceManager::ShowWithStart(SearchAppExperienceManager *this, char a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 53) + 72LL))(
         *((_QWORD *)this + 53),
         *((_QWORD *)this + 64),
         1LL);
  if ( v5 < 0 )
  {
    v7 = 435LL;
  }
  else
  {
    LOBYTE(v4) = a2;
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 54) + 88LL))(*((_QWORD *)this + 54), v4);
    if ( v5 >= 0 )
      return 0LL;
    v7 = 436LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
