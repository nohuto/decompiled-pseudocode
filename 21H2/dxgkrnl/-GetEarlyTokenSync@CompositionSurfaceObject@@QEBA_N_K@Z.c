/*
 * XREFs of ?GetEarlyTokenSync@CompositionSurfaceObject@@QEBA_N_K@Z @ 0x1C0005E60
 * Callers:
 *     ?GetEarlyTokenSync@CFlipToken@@UEBA_NXZ @ 0x1C0005E40 (-GetEarlyTokenSync@CFlipToken@@UEBA_NXZ.c)
 * Callees:
 *     ?GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C0005F00 (-GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00069FC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

bool __fastcall CompositionSurfaceObject::GetEarlyTokenSync(CompositionSurfaceObject *this, unsigned __int64 a2)
{
  bool v4; // si
  _DWORD v6[36]; // [rsp+20h] [rbp-98h] BYREF

  v4 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 48, 0LL);
  memset(v6, 0, sizeof(v6));
  if ( (int)CCompositionSurface::GetBufferAttributes(
              (CompositionSurfaceObject *)((char *)this + 40),
              a2,
              (struct CSM_BUFFER_ATTRIBUTES *)v6) >= 0 )
    v4 = (v6[34] & 0x200) != 0;
  CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 48));
  return v4;
}
