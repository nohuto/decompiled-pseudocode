/*
 * XREFs of wil::details::lambda_call__lambda_ed71e2c3ec55cfdf965ec57c1c6cb3a6___::_lambda_call__lambda_ed71e2c3ec55cfdf965ec57c1c6cb3a6___ @ 0x1803C9578
 * Callers:
 *     _CDesktopPositioner::EnsureViewIsInViewGroupForTabGroup_::_1_::dtor$3 @ 0x1803CB1E1 (_CDesktopPositioner--EnsureViewIsInViewGroupForTabGroup_--_1_--dtor$3.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::lambda_call__lambda_ed71e2c3ec55cfdf965ec57c1c6cb3a6___::_lambda_call__lambda_ed71e2c3ec55cfdf965ec57c1c6cb3a6___(
        _BYTE *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[16] )
  {
    a1[16] = 0;
    v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 328LL) + 32LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 328LL),
           **((_QWORD **)a1 + 1));
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB85,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v1);
  }
}
