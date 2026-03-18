/*
 * XREFs of ?ReleasePowerTransitionLockShared@ADAPTER_RENDER@@QEAAXXZ @ 0x1C00245C0
 * Callers:
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x1C0024800 (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::ReleasePowerTransitionLockShared(ADAPTER_RENDER *this)
{
  ExReleasePushLockSharedEx(*((_QWORD *)this + 2) + 104LL, 0LL);
  KeLeaveCriticalRegion();
}
