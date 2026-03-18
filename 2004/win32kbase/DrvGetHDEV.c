/*
 * XREFs of DrvGetHDEV @ 0x1C00A5420
 * Callers:
 *     hdcOpenDCW @ 0x1C0079530 (hdcOpenDCW.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0023BA0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0086C54 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     DrvGetDeviceFromName @ 0x1C00A5CD0 (DrvGetDeviceFromName.c)
 */

struct PDEV *__fastcall DrvGetHDEV(const UNICODE_STRING *a1)
{
  struct PDEV *v1; // rsi
  __int64 DeviceFromName; // rbp
  struct PDEV *v3; // rdi
  int v4; // r8d
  struct PDEV *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx

  v1 = 0LL;
  if ( a1 )
  {
    DeviceFromName = DrvGetDeviceFromName(a1);
    if ( DeviceFromName )
    {
      v3 = 0LL;
      EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
      v5 = gppdevList;
      if ( gppdevList )
      {
        do
        {
          v6 = *((_QWORD *)v5 + 322);
          if ( v6 && v6 == DeviceFromName )
          {
            if ( (*((_DWORD *)v5 + 10) & 0x400) == 0 )
            {
              ++*((_DWORD *)v5 + 2);
              TrackObjectReferenceIncrement(
                1u,
                *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)v5 + 443));
              v1 = v5;
              goto LABEL_8;
            }
            if ( !v3 )
              v3 = v5;
          }
          v5 = *(struct PDEV **)v5;
        }
        while ( v5 );
        if ( v3 )
        {
          *((_QWORD *)v3 + 4) = 0LL;
          ++*((_DWORD *)v3 + 2);
          TrackObjectReferenceIncrement(
            1u,
            *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)v3 + 443));
          v1 = v3;
        }
      }
LABEL_8:
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v4);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
        PsLeavePriorityRegion(v7);
      }
    }
  }
  return v1;
}
