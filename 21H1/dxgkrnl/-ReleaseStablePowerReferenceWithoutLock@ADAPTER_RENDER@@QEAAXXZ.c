/*
 * XREFs of ?ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0036EE8
 * Callers:
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z @ 0x1C011684C (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z.c)
 *     ?DisableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C02085DC (-DisableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02127D4 (-ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::ReleaseStablePowerReferenceWithoutLock(ADAPTER_RENDER *this)
{
  char *v2; // rdi

  v2 = (char *)this + 1608;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  ADAPTER_RENDER::ReleaseStablePowerReference(this);
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
