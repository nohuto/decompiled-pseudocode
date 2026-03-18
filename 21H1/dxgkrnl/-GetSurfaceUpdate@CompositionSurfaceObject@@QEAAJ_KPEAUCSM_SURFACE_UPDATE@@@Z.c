/*
 * XREFs of ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0062220
 * Callers:
 *     ?ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEA_NPEAIPEAPEAVCToken@@@Z @ 0x1C0062290 (-ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEA_NPEAIPEAPEAVC.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0004618 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0004704 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0004798 (-GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 */

__int64 __fastcall CompositionSurfaceObject::GetSurfaceUpdate(
        CompositionSurfaceObject *this,
        __int64 a2,
        struct CSM_SURFACE_UPDATE *a3)
{
  int SurfaceUpdate; // ebx

  SurfaceUpdate = CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 48));
  if ( SurfaceUpdate >= 0 )
  {
    SurfaceUpdate = CCompositionSurface::GetSurfaceUpdate((CompositionSurfaceObject *)((char *)this + 40), a2, a3);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 48));
  }
  return (unsigned int)SurfaceUpdate;
}
