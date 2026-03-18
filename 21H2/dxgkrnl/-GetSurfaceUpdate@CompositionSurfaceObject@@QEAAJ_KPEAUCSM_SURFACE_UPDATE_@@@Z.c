/*
 * XREFs of ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE_@@@Z @ 0x1C007624C
 * Callers:
 *     ?ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE_@@IPEA_NPEAIPEAPEAVCToken@@@Z @ 0x1C00762BC (-ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE_@@IPEA_NPEAIPEAPEAV.c)
 * Callees:
 *     ?GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE_@@@Z @ 0x1C00062B0 (-GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE_@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00069FC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0006A48 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

__int64 __fastcall CompositionSurfaceObject::GetSurfaceUpdate(
        CompositionSurfaceObject *this,
        __int64 a2,
        struct CSM_SURFACE_UPDATE_ *a3)
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
