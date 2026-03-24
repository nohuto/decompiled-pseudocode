/*
 * XREFs of MiSessionUnloadAllImages @ 0x1407785DC
 * Callers:
 *     MiDereferenceSessionFinal @ 0x140778320 (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiSessionLookupImage @ 0x1402CF668 (MiSessionLookupImage.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     MmReleaseLoadLock @ 0x1406D1110 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406D1170 (MmAcquireLoadLock.c)
 *     MmUnloadSystemImage @ 0x140772150 (MmUnloadSystemImage.c)
 */

_QWORD *MiSessionUnloadAllImages()
{
  struct _KTHREAD *Lock; // rax
  PVOID *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rdx
  struct _KTHREAD *v4; // rax
  unsigned __int64 v5; // rsi

  Lock = MmAcquireLoadLock();
  v1 = (PVOID *)PsLoadedModuleList;
  v2 = (__int64)Lock;
  while ( v1 != &PsLoadedModuleList )
  {
    v5 = (unsigned __int64)v1[6];
    if ( (unsigned int)MiGetSystemRegionType(v5) == 1 && MiSessionLookupImage(v5) )
    {
      MmReleaseLoadLock(v2);
      MmUnloadSystemImage((__int64)v1, v3);
      v4 = MmAcquireLoadLock();
      v1 = (PVOID *)PsLoadedModuleList;
      v2 = (__int64)v4;
    }
    else
    {
      v1 = (PVOID *)*v1;
    }
  }
  return MmReleaseLoadLock(v2);
}
