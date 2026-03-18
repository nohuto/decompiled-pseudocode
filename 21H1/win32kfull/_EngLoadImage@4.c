/*
 * XREFs of _EngLoadImage@4 @ 0x1D186C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HANDLE __stdcall EngLoadImage(LPWSTR pwszDriver)
{
  void *v1; // esi
  _DWORD v3[3]; // [esp+8h] [ebp-10h] BYREF
  int v4; // [esp+14h] [ebp-4h] BYREF

  v4 = 0;
  GreAcquireSemaphore(_ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(&stru_100BA6, _ghsemDriverMgmt, 13);
  v3[0] = pwszDriver;
  v3[1] = 5;
  v3[2] = 1;
  v1 = (void *)ldevLoadImage(pwszDriver, 1, &v4, 1, 0, v3);
  EtwTraceGreLockReleaseSemaphore(&stru_100BA6, _ghsemDriverMgmt);
  GreReleaseSemaphoreInternal(_ghsemDriverMgmt);
  return v1;
}
