/*
 * XREFs of _DrvReleaseHDEV@4 @ 0x1D1591
 * Callers:
 *     _xxxRemoteConsoleShadowStop@0 @ 0x1882F1 (_xxxRemoteConsoleShadowStop@0.c)
 * Callees:
 *     <none>
 */

int DrvReleaseHDEV()
{
  int v0; // esi
  int v1; // eax
  int result; // eax
  struct PDEV *i; // ecx

  v0 = gConsoleShadowhDev;
  v1 = WdLogNewEntry5_WdTrace();
  *(_DWORD *)(v1 + 12) = v0;
  result = WdLogEvent5_WdTrace(v1);
  if ( v0 )
  {
    GreAcquireSemaphore(_ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(&stru_100BA6, _ghsemDriverMgmt, 13);
    for ( i = gppdevList; i; i = *(struct PDEV **)i )
    {
      if ( i == (struct PDEV *)v0 )
      {
        PDEV::DecrementClientReferenceCount(i);
        break;
      }
    }
    EtwTraceGreLockReleaseSemaphore(&stru_100BA6, _ghsemDriverMgmt);
    return GreReleaseSemaphoreInternal(_ghsemDriverMgmt);
  }
  return result;
}
