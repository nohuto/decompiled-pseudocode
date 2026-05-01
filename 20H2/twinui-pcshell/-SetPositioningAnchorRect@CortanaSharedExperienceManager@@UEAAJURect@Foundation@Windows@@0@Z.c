/*
 * XREFs of ?SetPositioningAnchorRect@CortanaSharedExperienceManager@@UEAAJURect@Foundation@Windows@@0@Z @ 0x1801BADE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::SetPositioningAnchorRect(__int64 a1, __int128 *a2, _OWORD *a3)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  int v8[4]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *(__int64 **)(a1 + 488);
  v4 = *v3;
  *(_OWORD *)v8 = *a3;
  v9 = *a2;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, int *))(v4 + 40))(v3, &v9, v8);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x163,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  return v6;
}
