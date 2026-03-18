/*
 * XREFs of ?Pair@CompositionSurfaceObject@@QEAAJPEAUIPairedSurfaceObject@@@Z @ 0x1C004C980
 * Callers:
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C02B7C20 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EE2C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0010C34 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z @ 0x1C0065428 (-Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z.c)
 */

__int64 __fastcall CompositionSurfaceObject::Pair(CompositionSurfaceObject *this, struct IPairedSurfaceObject *a2)
{
  int v4; // ebx

  v4 = CPushLock::AcquireLockExclusive((CompositionSurfaceObject *)((char *)this + 48));
  if ( v4 >= 0 )
  {
    v4 = CCompositionSurface::Pair((CompositionSurfaceObject *)((char *)this + 40), a2);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 48));
  }
  return (unsigned int)v4;
}
