/*
 * XREFs of ?AcquirePowerTransitionLockShared@ADAPTER_RENDER@@QEAAXXZ @ 0x1C00245A0
 * Callers:
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x1C0024800 (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::AcquirePowerTransitionLockShared(ADAPTER_RENDER *this)
{
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*((_QWORD *)this + 2) + 104LL));
}
