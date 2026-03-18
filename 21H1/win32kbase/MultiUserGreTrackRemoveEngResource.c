/*
 * XREFs of MultiUserGreTrackRemoveEngResource @ 0x1C0073640
 * Callers:
 *     GreDeleteSemaphore @ 0x1C00735F0 (GreDeleteSemaphore.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 */

__int64 __fastcall MultiUserGreTrackRemoveEngResource(__int64 *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 *v5; // rcx
  __int64 v6; // rcx

  if ( MultiUserEngAllocListLock )
    EngAcquireSemaphore((HSEMAPHORE)MultiUserEngAllocListLock);
  result = *a1;
  if ( *(__int64 **)(*a1 + 8) != a1 || (v5 = (__int64 *)a1[1], (__int64 *)*v5 != a1) )
    __fastfail(3u);
  *v5 = result;
  *(_QWORD *)(result + 8) = v5;
  if ( MultiUserEngAllocListLock )
  {
    result = EtwTraceGreLockReleaseSemaphore((__int64)L"MultiUserEngAllocListLock", (int)MultiUserEngAllocListLock, a3);
    if ( MultiUserEngAllocListLock )
    {
      ExReleaseResourceAndLeaveCriticalRegion(MultiUserEngAllocListLock);
      return PsLeavePriorityRegion(v6);
    }
  }
  return result;
}
