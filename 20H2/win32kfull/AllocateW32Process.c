/*
 * XREFs of AllocateW32Process @ 0x1C008D110
 * Callers:
 *     W32pProcessCallout @ 0x1C008CD20 (W32pProcessCallout.c)
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall AllocateW32Process(__int64 a1)
{
  int v2; // edi
  volatile signed __int32 *v4; // rax
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rdx

  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpW32FastMutex);
  if ( PsGetProcessWin32Process(a1) )
  {
    v2 = 1073741851;
  }
  else
  {
    v4 = (volatile signed __int32 *)Win32AllocPoolWithQuota(W32ProcessSize, 1768977237LL);
    v5 = v4;
    if ( v4 )
    {
      memset((void *)v4, 0, W32ProcessSize);
      LOBYTE(v6) = 1;
      GdiPreUserProcessCallout(v5, v6);
      *(_QWORD *)v5 = a1;
      v2 = PsSetProcessWin32Process(a1, v5, 0LL);
      if ( v2 < 0 )
      {
        UserSetLastError(5LL);
        Win32FreePool(v5);
      }
      else
      {
        ObfReferenceObject(*(PVOID *)v5);
        _InterlockedIncrement(v5 + 2);
      }
    }
    else
    {
      UserSetLastError(8LL);
      v2 = -1073741801;
    }
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpW32FastMutex);
  return (unsigned int)v2;
}
