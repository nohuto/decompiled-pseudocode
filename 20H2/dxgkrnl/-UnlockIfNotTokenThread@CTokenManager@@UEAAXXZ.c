/*
 * XREFs of ?UnlockIfNotTokenThread@CTokenManager@@UEAAXXZ @ 0x1C00630B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTokenManager::UnlockIfNotTokenThread(CTokenManager *this)
{
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)this + 3) )
  {
    *((_QWORD *)this + 12) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 88, 0LL);
  }
}
