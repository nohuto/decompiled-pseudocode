/*
 * XREFs of wil::details::lambda_call__lambda_26875bdff8e2dab617cf4a027fbf0895___::_lambda_call__lambda_26875bdff8e2dab617cf4a027fbf0895___ @ 0x18018D730
 * Callers:
 *     _CApplicationViewManager::SwitchTo_::_1_::dtor$0 @ 0x1801901A8 (_CApplicationViewManager--SwitchTo_--_1_--dtor$0.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::lambda_call__lambda_26875bdff8e2dab617cf4a027fbf0895___::_lambda_call__lambda_26875bdff8e2dab617cf4a027fbf0895___(
        _BYTE *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[8] )
  {
    a1[8] = 0;
    v1 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)a1 + 56LL))(**(_QWORD **)a1);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2C7,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v1);
  }
}
