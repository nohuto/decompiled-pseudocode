/*
 * XREFs of MiSessionUnloadAllImages @ 0x14077879C
 * Callers:
 *     MiDereferenceSessionFinal @ 0x1407784E0 (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14024D9E8 (MiSessionLookupImage.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     MmReleaseLoadLock @ 0x1406A83F0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A8450 (MmAcquireLoadLock.c)
 *     MmUnloadSystemImage @ 0x140772310 (MmUnloadSystemImage.c)
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
