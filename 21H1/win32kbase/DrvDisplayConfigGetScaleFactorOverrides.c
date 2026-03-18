/*
 * XREFs of DrvDisplayConfigGetScaleFactorOverrides @ 0x1C01507C0
 * Callers:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00CFBB0 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000F390 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 */

__int64 __fastcall DrvDisplayConfigGetScaleFactorOverrides(__int64 a1, int a2)
{
  int v4; // r8d
  struct PDEV *i; // rbx
  _DWORD *v6; // rcx
  int v7; // eax
  __int64 v8; // rcx

  EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
  for ( i = gppdevList; i; i = *(struct PDEV **)i )
  {
    if ( (*((_DWORD *)i + 10) & 0x401) == 1 )
    {
      v6 = (_DWORD *)*((_QWORD *)i + 322);
      if ( ((unsigned __int64)(v6 + 1) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
      {
        v7 = v6[40];
        if ( (v7 & 0x800000) != 0 )
        {
          if ( a2 )
          {
            if ( (v7 & 4) != 0 )
              goto LABEL_7;
          }
          else if ( *(_DWORD *)(a1 + 8) == v6[62] && *(_DWORD *)(a1 + 12) == v6[63] && *(_DWORD *)(a1 + 16) == v6[64] )
          {
LABEL_7:
            *(_QWORD *)(a1 + 20) = *((_QWORD *)i + 317);
            *(_DWORD *)(a1 + 28) = *((_DWORD *)i + 636);
            break;
          }
        }
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v4);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
    PsLeavePriorityRegion(v8);
  }
  return i == 0LL ? 0xC000000D : 0;
}
