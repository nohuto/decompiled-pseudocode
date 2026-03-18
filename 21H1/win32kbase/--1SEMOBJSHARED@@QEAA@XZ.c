/*
 * XREFs of ??1SEMOBJSHARED@@QEAA@XZ @ 0x1C0095D24
 * Callers:
 *     EngUpdateDeviceSurface @ 0x1C004A300 (EngUpdateDeviceSurface.c)
 *     GreIsDisconnectDeviceAttached @ 0x1C0095CBC (GreIsDisconnectDeviceAttached.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall SEMOBJSHARED::~SEMOBJSHARED(PERESOURCE *this, __int64 a2, int a3)
{
  __int64 v4; // rcx

  EtwTraceGreLockReleaseSemaphore((__int64)L"hsem", (int)*this, a3);
  if ( *this )
  {
    ExReleaseResourceAndLeaveCriticalRegion(*this);
    PsLeavePriorityRegion(v4);
  }
}
