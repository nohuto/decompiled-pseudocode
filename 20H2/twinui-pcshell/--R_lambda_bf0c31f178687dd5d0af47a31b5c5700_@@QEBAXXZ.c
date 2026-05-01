/*
 * XREFs of ??R_lambda_bf0c31f178687dd5d0af47a31b5c5700_@@QEBAXXZ @ 0x180461F58
 * Callers:
 *     ??1?$ScopeExitFn@V_lambda_bf0c31f178687dd5d0af47a31b5c5700_@@@details@wil@@QEAA@XZ @ 0x180461C18 (--1-$ScopeExitFn@V_lambda_bf0c31f178687dd5d0af47a31b5c5700_@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ?swap@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@QEAAXAEAV12@@Z @ 0x180466B48 (-swap@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Uservice_descr.c)
 */

void __fastcall _lambda_bf0c31f178687dd5d0af47a31b5c5700_::operator()(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rdi

  v2 = *a1 + 10;
  AcquireSRWLockExclusive(v2);
  std::vector<winrt::immersive_shell_component::service_description>::swap(&(*a1)[6], a1[1]);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
