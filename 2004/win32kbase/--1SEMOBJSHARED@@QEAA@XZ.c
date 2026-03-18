/*
 * XREFs of ??1SEMOBJSHARED@@QEAA@XZ @ 0x1C00B5A68
 * Callers:
 *     EngUpdateDeviceSurface @ 0x1C0058010 (EngUpdateDeviceSurface.c)
 *     GreIsDisconnectDeviceAttached @ 0x1C00B5A00 (GreIsDisconnectDeviceAttached.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
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
