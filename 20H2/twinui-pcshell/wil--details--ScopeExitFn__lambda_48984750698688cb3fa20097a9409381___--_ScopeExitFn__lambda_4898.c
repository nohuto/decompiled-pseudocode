/*
 * XREFs of wil::details::ScopeExitFn__lambda_48984750698688cb3fa20097a9409381___::_ScopeExitFn__lambda_48984750698688cb3fa20097a9409381___ @ 0x1800B0BFC
 * Callers:
 *     __lambda_20dc82c86a731ffb3a6f837c10819f42_::operator()_::_1_::dtor$2 @ 0x1800B1195 (__lambda_20dc82c86a731ffb3a6f837c10819f42_--operator()_--_1_--dtor$2.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?ViewCreationTaskFailed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1803560B4 (-ViewCreationTaskFailed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_48984750698688cb3fa20097a9409381___::_ScopeExitFn__lambda_48984750698688cb3fa20097a9409381___(
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
        (void *)0xB6A,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v1);
    TouchKeyboardExperienceTelemetryLogger::ViewCreationTaskFailed();
  }
}
