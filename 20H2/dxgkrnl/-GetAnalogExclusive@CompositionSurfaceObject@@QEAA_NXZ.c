/*
 * XREFs of ?GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ @ 0x1C001C2E8
 * Callers:
 *     ?SignalFlipImmediate@CFlipToken@@UEAAXXZ @ 0x1C001C1F0 (-SignalFlipImmediate@CFlipToken@@UEAAXXZ.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EE2C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0010CB0 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

char __fastcall CompositionSurfaceObject::GetAnalogExclusive(CompositionSurfaceObject *this)
{
  CPushLock *v1; // rsi
  char v3; // di
  char v4; // bl

  v1 = (CompositionSurfaceObject *)((char *)this + 48);
  v3 = 0;
  if ( (int)CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 48)) >= 0 )
  {
    v4 = *((_BYTE *)this + 128);
    CPushLock::ReleaseLock(v1);
    return v4 != 0;
  }
  return v3;
}
