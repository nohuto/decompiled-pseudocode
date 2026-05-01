/*
 * XREFs of wil::details::lambda_call__lambda_97daa7c0904f79a95fa5b775c71a695e___::_lambda_call__lambda_97daa7c0904f79a95fa5b775c71a695e___ @ 0x180269C10
 * Callers:
 *     _TabViewManager::OnSelectTabRequested_::_1_::dtor$1 @ 0x180273031 (_TabViewManager--OnSelectTabRequested_--_1_--dtor$1.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::lambda_call__lambda_97daa7c0904f79a95fa5b775c71a695e___::_lambda_call__lambda_97daa7c0904f79a95fa5b775c71a695e___(
        _BYTE *a1,
        __int64 a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[8] )
  {
    a1[8] = 0;
    LOBYTE(a2) = 1;
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(***(_QWORD ***)a1 + 64LL))(**(_QWORD **)a1, a2);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x952,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v2);
  }
}
