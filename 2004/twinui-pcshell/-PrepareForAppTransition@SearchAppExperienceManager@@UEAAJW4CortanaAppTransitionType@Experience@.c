/*
 * XREFs of ?PrepareForAppTransition@SearchAppExperienceManager@@UEAAJW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1801F6A70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SearchAppExperienceManager::PrepareForAppTransition(__int64 a1, unsigned int a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 424) + 72LL))(
         *(_QWORD *)(a1 + 424),
         *(_QWORD *)(a1 + 512),
         1LL);
  if ( v4 < 0 )
  {
    v5 = 473LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 432) + 72LL))(*(_QWORD *)(a1 + 432), a2);
  if ( v4 < 0 )
  {
    v5 = 474LL;
    goto LABEL_3;
  }
  return 0LL;
}
