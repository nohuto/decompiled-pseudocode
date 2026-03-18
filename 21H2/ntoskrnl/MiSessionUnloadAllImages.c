/*
 * XREFs of MiSessionUnloadAllImages @ 0x140761DF8
 * Callers:
 *     MiDereferenceSessionFinal @ 0x140693A28 (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiSessionLookupImage @ 0x1402DBF3C (MiSessionLookupImage.c)
 *     MmReleaseLoadLock @ 0x1406F5AF0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406F5B50 (MmAcquireLoadLock.c)
 *     MmUnloadSystemImage @ 0x140762490 (MmUnloadSystemImage.c)
 */

_QWORD *MiSessionUnloadAllImages()
{
  struct _KTHREAD *Lock; // rax
  PVOID *v1; // rbx
  __int64 v2; // rdi
  struct _KTHREAD *v3; // rax
  unsigned __int64 v4; // rsi

  Lock = MmAcquireLoadLock();
  v1 = (PVOID *)PsLoadedModuleList;
  v2 = (__int64)Lock;
  while ( v1 != &PsLoadedModuleList )
  {
    v4 = (unsigned __int64)v1[6];
    if ( (unsigned int)MiGetSystemRegionType(v4) == 1 && MiSessionLookupImage(v4) )
    {
      MmReleaseLoadLock(v2);
      MmUnloadSystemImage((ULONG_PTR)v1);
      v3 = MmAcquireLoadLock();
      v1 = (PVOID *)PsLoadedModuleList;
      v2 = (__int64)v3;
    }
    else
    {
      v1 = (PVOID *)*v1;
    }
  }
  return MmReleaseLoadLock(v2);
}
