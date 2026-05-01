/*
 * XREFs of wil::details::ScopeExitFn__lambda_460e253c6c1f3c57d8caa0fdc4baf534___::_ScopeExitFn__lambda_460e253c6c1f3c57d8caa0fdc4baf534___ @ 0x18034DF04
 * Callers:
 *     _AccessibilityExperienceManager::_OnViewCreated_::_1_::dtor$2 @ 0x180350F7E (_AccessibilityExperienceManager--_OnViewCreated_--_1_--dtor$2.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_460e253c6c1f3c57d8caa0fdc4baf534___::_ScopeExitFn__lambda_460e253c6c1f3c57d8caa0fdc4baf534___(
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
        (void *)0x2FC,
        (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
        (const char *)(unsigned int)v1);
  }
}
