/*
 * XREFs of wil::details::ScopeExitFn__lambda_5878c92ed5c4f628460fe9a6d3ea6c38___::_ScopeExitFn__lambda_5878c92ed5c4f628460fe9a6d3ea6c38___ @ 0x1800A0E78
 * Callers:
 *     __lambda_77ff76289f7bbfebb9a2250fa767bd8c_::operator()_::_1_::dtor$2 @ 0x1800A1BBD (__lambda_77ff76289f7bbfebb9a2250fa767bd8c_--operator()_--_1_--dtor$2.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?ViewCreationTaskFailed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x18033552C (-ViewCreationTaskFailed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_5878c92ed5c4f628460fe9a6d3ea6c38___::_ScopeExitFn__lambda_5878c92ed5c4f628460fe9a6d3ea6c38___(
        _BYTE *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[8] )
  {
    a1[8] = 0;
    v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(***(_QWORD ***)a1 + 392LL))(**(_QWORD **)a1, 0LL);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xBBE,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v1);
    TouchKeyboardExperienceTelemetryLogger::ViewCreationTaskFailed();
  }
}
