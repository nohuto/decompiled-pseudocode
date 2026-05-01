/*
 * XREFs of wil::details::ScopeExitFn__lambda_2566d564f7e08d72757c00628b0e7f13___::_ScopeExitFn__lambda_2566d564f7e08d72757c00628b0e7f13___ @ 0x1800AEF4C
 * Callers:
 *     __lambda_e127833a80797c5d08a14d2b9986789f_::operator()_::_1_::dtor$2 @ 0x1800AFE39 (__lambda_e127833a80797c5d08a14d2b9986789f_--operator()_--_1_--dtor$2.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?ViewCreationTaskFailed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x180356BC4 (-ViewCreationTaskFailed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_2566d564f7e08d72757c00628b0e7f13___::_ScopeExitFn__lambda_2566d564f7e08d72757c00628b0e7f13___(
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
        (void *)0xB82,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v1);
    TouchKeyboardExperienceTelemetryLogger::ViewCreationTaskFailed();
  }
}
