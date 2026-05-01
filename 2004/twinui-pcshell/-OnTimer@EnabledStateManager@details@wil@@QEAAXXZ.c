/*
 * XREFs of ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x1800567A8
 * Callers:
 *     _lambda_0374aa0a5d1201b2358c6bce99369c58_::_lambda_invoker_cdecl_ @ 0x180089D90 (_lambda_0374aa0a5d1201b2358c6bce99369c58_--_lambda_invoker_cdecl_.c)
 *     ?_lambda_invoker_cdecl_@_lambda_aa194dc0bf891154933407eb98fb868a_@@CAXPEAX@Z @ 0x1801374A0 (-_lambda_invoker_cdecl_@_lambda_aa194dc0bf891154933407eb98fb868a_@@CAXPEAX@Z.c)
 * Callees:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180056360 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 */

void __fastcall wil::details::EnabledStateManager::OnTimer(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned int v5; // r9d

  if ( LOBYTE(this->Ptr) )
  {
    v2 = this + 1;
    AcquireSRWLockExclusive(this + 1);
    wil::details::EnabledStateManager::RecordCachedUsageUnderLock((wil::details::EnabledStateManager *)this, v3, v4, v5);
    LOBYTE(this[3].Ptr) = 0;
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
}
