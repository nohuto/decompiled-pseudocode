/*
 * XREFs of ?GetEarlyTokenSync@CFlipToken@@UEBA_NXZ @ 0x1C000EDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EE2C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C000EE80 (-GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0010CB0 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     memset @ 0x1C0027400 (memset.c)
 */

bool __fastcall CFlipToken::GetEarlyTokenSync(CFlipToken *this)
{
  __int64 v1; // rsi
  bool v2; // bl
  unsigned __int64 v3; // rbp
  _DWORD v5[32]; // [rsp+20h] [rbp-88h] BYREF

  v1 = *((_QWORD *)this + 4);
  v2 = 0;
  v3 = *((_QWORD *)this + 5);
  if ( (int)CPushLock::AcquireLockShared((CPushLock *)(v1 + 48)) >= 0 )
  {
    memset(v5, 0, 0x78uLL);
    if ( (int)CCompositionSurface::GetBufferAttributes(
                (CCompositionSurface *)(v1 + 40),
                v3,
                (struct CSM_BUFFER_ATTRIBUTES *)v5) >= 0 )
      v2 = (v5[29] & 0x200) != 0;
    CPushLock::ReleaseLock((CPushLock *)(v1 + 48));
  }
  return v2;
}
