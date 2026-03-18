/*
 * XREFs of ?ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C001AFC0
 * Callers:
 *     ?AddDisableScanoutToken@CTokenManager@@UEAAJAEAPEAVCDisableScanoutToken@@@Z @ 0x1C0075B10 (-AddDisableScanoutToken@CTokenManager@@UEAAJAEAPEAVCDisableScanoutToken@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTokenManager::ReleaseTokenManagerLock(CTokenManager *this)
{
  *((_QWORD *)this + 13) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
}
