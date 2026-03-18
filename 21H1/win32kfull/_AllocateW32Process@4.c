/*
 * XREFs of _AllocateW32Process@4 @ 0x465CC
 * Callers:
 *     _W32pProcessCallout@4 @ 0x46322 (_W32pProcessCallout@4.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall AllocateW32Process(volatile signed __int32 a1)
{
  int v1; // edi
  volatile signed __int32 *v3; // eax
  volatile signed __int32 *v4; // esi

  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(_gpW32FastMutex);
  if ( PsGetProcessWin32Process(a1) )
  {
    v1 = 1073741851;
  }
  else
  {
    v3 = (volatile signed __int32 *)Win32AllocPoolWithQuota(_W32ProcessSize, 1768977237);
    v4 = v3;
    if ( v3 )
    {
      memset((void *)v3, 0, _W32ProcessSize);
      GdiPreUserProcessCallout(v4, 1);
      *v4 = a1;
      v1 = PsSetProcessWin32Process(a1, v4, 0);
      if ( v1 < 0 )
      {
        UserSetLastError(5);
        Win32FreePool(v4);
      }
      else
      {
        ObfReferenceObject(*(PVOID *)v4);
        _InterlockedIncrement(v4 + 1);
      }
    }
    else
    {
      UserSetLastError(8);
      v1 = -1073741801;
    }
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(_gpW32FastMutex);
  return v1;
}
