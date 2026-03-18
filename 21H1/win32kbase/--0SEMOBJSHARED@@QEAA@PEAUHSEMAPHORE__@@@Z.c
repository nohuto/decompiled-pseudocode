/*
 * XREFs of ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0095D6C
 * Callers:
 *     EngUpdateDeviceSurface @ 0x1C004A300 (EngUpdateDeviceSurface.c)
 *     GreIsDisconnectDeviceAttached @ 0x1C0095CBC (GreIsDisconnectDeviceAttached.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0016870 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

SEMOBJSHARED *__fastcall SEMOBJSHARED::SEMOBJSHARED(SEMOBJSHARED *this, HSEMAPHORE a2, int a3)
{
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    ExEnterPriorityRegionAndAcquireResourceShared(a2);
    a2 = *(HSEMAPHORE *)this;
  }
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"hsem", (int)a2, a3);
  return this;
}
