/*
 * XREFs of ?LockIfNotTokenThread@CTokenManager@@UEAAXXZ @ 0x1C001F720
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C0008920 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 */

void __fastcall CTokenManager::LockIfNotTokenThread(CTokenManager *this)
{
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)this + 4) )
    CTokenManager::AcquireTokenManagerLock(this);
}
