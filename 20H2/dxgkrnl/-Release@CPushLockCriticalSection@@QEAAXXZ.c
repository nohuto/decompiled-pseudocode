/*
 * XREFs of ?Release@CPushLockCriticalSection@@QEAAXXZ @ 0x1C0012030
 * Callers:
 *     ?DiscardAllCompositionFrames@CCompositionFrameCollection@@UEAAXXZ @ 0x1C000E480 (-DiscardAllCompositionFrames@CCompositionFrameCollection@@UEAAXXZ.c)
 *     ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C0011CD0 (-UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C0012848 (-PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?ResetAdapterCollection@CTokenManager@@MEAAXXZ @ 0x1C0012B10 (-ResetAdapterCollection@CTokenManager@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPushLockCriticalSection::Release(CPushLockCriticalSection *this)
{
  if ( *((_BYTE *)this + 8) )
    ExReleasePushLockExclusiveEx(this, 0LL);
  else
    ExReleasePushLockSharedEx(this, 0LL);
}
