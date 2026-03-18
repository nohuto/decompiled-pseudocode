/*
 * XREFs of ?DeleteAllTokens@CTokenManager@@UEAAXXZ @ 0x1C0012440
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C0012170 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x1C00122E0 (-DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllFlipManagerTokens@CTokenManager@@IEAAXXZ @ 0x1C00124B8 (-DeleteAllFlipManagerTokens@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ @ 0x1C00124FC (-DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllTokens@CTokenQueue@@AEAAXXZ @ 0x1C0012540 (-DeleteAllTokens@CTokenQueue@@AEAAXXZ.c)
 *     ?DeleteAllTokenQueues@CTokenManager@@IEAAXXZ @ 0x1C0012588 (-DeleteAllTokenQueues@CTokenManager@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenManager::DeleteAllTokens(CTokenManager *this)
{
  CTokenManager::AcquireTokenManagerLock(this);
  CTokenManager::DeleteAllLegacyTokenBuffers(this);
  CTokenManager::DeleteAllTokenQueues(this);
  CTokenQueue::DeleteAllTokens((CTokenManager *)((char *)this + 320));
  (*(void (__fastcall **)(CTokenManager *))(*(_QWORD *)this + 136LL))(this);
  CTokenManager::DeleteAllCompositionTokens(this);
  CTokenManager::DeleteAllFlipManagerTokens(this);
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 88, 0LL);
}
