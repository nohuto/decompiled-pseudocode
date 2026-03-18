/*
 * XREFs of ?ResetAdapterCollection@CTokenManager@@MEAAXXZ @ 0x1C0012B10
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CPushLockCriticalSection@@QEAAXXZ @ 0x1C0012030 (-Release@CPushLockCriticalSection@@QEAAXXZ.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C00121D0 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?InternalDiscard@CAdapterCollection@@AEAAXXZ @ 0x1C00126D0 (-InternalDiscard@CAdapterCollection@@AEAAXXZ.c)
 */

void __fastcall CTokenManager::ResetAdapterCollection(CTokenManager *this)
{
  CTokenManager::AcquireTokenManagerLock(this);
  ExAcquirePushLockExclusiveEx((char *)this + 144, 0LL);
  *((_BYTE *)this + 152) = 1;
  CAdapterCollection::InternalDiscard((CTokenManager *)((char *)this + 104));
  CPushLockCriticalSection::Release((CTokenManager *)((char *)this + 144));
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 12) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 88, 0LL);
}
