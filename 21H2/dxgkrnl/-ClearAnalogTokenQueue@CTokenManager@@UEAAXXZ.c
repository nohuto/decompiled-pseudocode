/*
 * XREFs of ?ClearAnalogTokenQueue@CTokenManager@@UEAAXXZ @ 0x1C0075C10
 * Callers:
 *     <none>
 * Callees:
 *     ?DeleteAllTokens@CTokenQueue@@AEAAXXZ @ 0x1C000290C (-DeleteAllTokens@CTokenQueue@@AEAAXXZ.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C0008920 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 */

void __fastcall CTokenManager::ClearAnalogTokenQueue(CTokenManager *this)
{
  CTokenManager::AcquireTokenManagerLock(this);
  CTokenQueue::DeleteAllTokens((CTokenManager *)((char *)this + 344));
  *((_QWORD *)this + 13) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
}
