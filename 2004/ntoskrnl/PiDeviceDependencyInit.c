/*
 * XREFs of PiDeviceDependencyInit @ 0x140A51E54
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140213470 (ExInitializeResourceLite.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406A5DF4 (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x14072C44C (PnpReleaseDependencyRelationsLock.c)
 */

__int64 PiDeviceDependencyInit()
{
  ExInitializeResourceLite(&PiDependencyRelationsLock);
  PiDependencyEdgeWriteLock = 0LL;
  PnpAcquireDependencyRelationsLock(1);
  qword_140C45558 = (__int64)&PiDependencyNodeListHead;
  PiDependencyNodeListHead = (__int64)&PiDependencyNodeListHead;
  qword_140C454C8 = (__int64)&PiDependencyNodeEmptyList;
  PiDependencyNodeEmptyList = (__int64)&PiDependencyNodeEmptyList;
  qword_140C45568 = (__int64)&PiRebuildPowerRelationsQueue;
  PiRebuildPowerRelationsQueue = (__int64)&PiRebuildPowerRelationsQueue;
  PnpReleaseDependencyRelationsLock();
  return 0LL;
}
