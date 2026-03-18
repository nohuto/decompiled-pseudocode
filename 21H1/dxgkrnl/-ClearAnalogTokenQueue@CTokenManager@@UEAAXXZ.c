/*
 * XREFs of ?ClearAnalogTokenQueue@CTokenManager@@UEAAXXZ @ 0x1C0061AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C00070A0 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?DeleteAllTokens@CTokenQueue@@AEAAXXZ @ 0x1C0007640 (-DeleteAllTokens@CTokenQueue@@AEAAXXZ.c)
 */

void __fastcall CTokenManager::ClearAnalogTokenQueue(CTokenManager *this)
{
  CTokenManager::AcquireTokenManagerLock(this);
  CTokenQueue::DeleteAllTokens((CTokenManager *)((char *)this + 320));
  *((_QWORD *)this + 12) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 88, 0LL);
}
