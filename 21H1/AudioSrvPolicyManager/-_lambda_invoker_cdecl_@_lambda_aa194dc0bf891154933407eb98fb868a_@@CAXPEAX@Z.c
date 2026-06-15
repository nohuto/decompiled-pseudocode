/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_aa194dc0bf891154933407eb98fb868a_@@CAXPEAX@Z @ 0x180009A80
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18000951C (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 */

void __fastcall _lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_(void *a1)
{
  if ( wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&SRWLock);
    wil::details::EnabledStateManager::RecordCachedUsageUnderLock((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
    byte_1800556F0 = 0;
    ReleaseSRWLockExclusive(&SRWLock);
  }
}
