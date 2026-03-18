/*
 * XREFs of ?Unlock@CTokenManager@@UEAAXXZ @ 0x1C0017390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTokenManager::Unlock(CTokenManager *this)
{
  *((_QWORD *)this + 12) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 88, 0LL);
}
