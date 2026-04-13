/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_aa194dc0bf891154933407eb98fb868a_@@CAXPEAX@Z @ 0x18000CAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18000C55C (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 */

void __fastcall _lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_(void *a1)
{
  if ( wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&stru_1801982D8);
    wil::details::EnabledStateManager::RecordCachedUsageUnderLock((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
    byte_1801982E8 = 0;
    ReleaseSRWLockExclusive(&stru_1801982D8);
  }
}
