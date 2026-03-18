/*
 * XREFs of ?InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C0007F94
 * Callers:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C000AA60 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C0008030 (-UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C0008920 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C001BFAC (-PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 */

__int64 __fastcall CTokenManager::InitAdapterCollection(
        CTokenManager *this,
        struct CSM_TOKEN_ADAPTER_INFO *a2,
        void **a3,
        unsigned int a4)
{
  int v8; // edi

  v8 = 0;
  CTokenManager::AcquireTokenManagerLock(this);
  if ( !CAdapterCollection::UpdateCollection((CTokenManager *)((char *)this + 112), a2, a3, a4) )
  {
    *((_DWORD *)this + 22) = 0;
    v8 = CAdapterCollection::PopulateFromInfo((CTokenManager *)((char *)this + 112), a2, a3, a4);
    if ( v8 >= 0 )
      *((_DWORD *)this + 22) = a4;
  }
  *((_QWORD *)this + 13) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
  return (unsigned int)v8;
}
