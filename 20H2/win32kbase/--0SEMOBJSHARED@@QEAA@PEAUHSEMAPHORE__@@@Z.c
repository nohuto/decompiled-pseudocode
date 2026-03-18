/*
 * XREFs of ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C000D23C
 * Callers:
 *     EngUpdateDeviceSurface @ 0x1C000AD60 (EngUpdateDeviceSurface.c)
 *     GreIsDisconnectDeviceAttached @ 0x1C000D18C (GreIsDisconnectDeviceAttached.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C008B010 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

SEMOBJSHARED *__fastcall SEMOBJSHARED::SEMOBJSHARED(SEMOBJSHARED *this, HSEMAPHORE a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    ExEnterPriorityRegionAndAcquireResourceShared(a2);
    a2 = *(HSEMAPHORE *)this;
  }
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", a2);
  return this;
}
