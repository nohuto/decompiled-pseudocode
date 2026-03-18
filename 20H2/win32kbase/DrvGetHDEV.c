/*
 * XREFs of DrvGetHDEV @ 0x1C005E220
 * Callers:
 *     hdcOpenDCW @ 0x1C005DDD0 (hdcOpenDCW.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0047384 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     DrvGetDeviceFromName @ 0x1C005EB10 (DrvGetDeviceFromName.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087050 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

struct PDEV *__fastcall DrvGetHDEV(const UNICODE_STRING *a1)
{
  struct PDEV *v1; // rsi
  __int64 DeviceFromName; // rbp
  struct PDEV *v3; // rdi
  struct PDEV *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx

  v1 = 0LL;
  if ( a1 )
  {
    DeviceFromName = DrvGetDeviceFromName(a1);
    if ( DeviceFromName )
    {
      v3 = 0LL;
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
      v4 = gppdevList;
      if ( gppdevList )
      {
        do
        {
          v5 = *((_QWORD *)v4 + 322);
          if ( v5 && v5 == DeviceFromName )
          {
            if ( (*((_DWORD *)v4 + 10) & 0x400) == 0 )
            {
              ++*((_DWORD *)v4 + 2);
              TrackObjectReferenceIncrement(
                1u,
                *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)v4 + 443));
              v1 = v4;
              goto LABEL_8;
            }
            if ( !v3 )
              v3 = v4;
          }
          v4 = *(struct PDEV **)v4;
        }
        while ( v4 );
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
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
        PsLeavePriorityRegion(v6);
      }
    }
  }
  return v1;
}
