/*
 * XREFs of MmLockRegistryRecoverySections @ 0x140582708
 * Callers:
 *     CmInitSystem2 @ 0x140B2359C (CmInitSystem2.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     MiLockCode @ 0x140312BB0 (MiLockCode.c)
 *     MmReleaseLoadLock @ 0x1406F5AF0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406F5B50 (MmAcquireLoadLock.c)
 *     MiSnapDriverRange @ 0x140760B20 (MiSnapDriverRange.c)
 */

__int64 MmLockRegistryRecoverySections()
{
  __int64 Lock; // rdi
  PVOID *i; // rbx
  int v2; // esi
  unsigned __int64 v4; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v5; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  Lock = MmAcquireLoadLock();
  --*(_WORD *)(Lock + 484);
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)i[6]) != 1 )
    {
      v2 = 0;
      do
      {
        v2 = MiSnapDriverRange((_DWORD)i, v2, 128, 0, (__int64)&v4, (__int64)&v5);
        if ( v4 )
          MiLockCode((__int64)i, v4, v5, 2);
      }
      while ( v2 );
    }
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread(Lock);
  return MmReleaseLoadLock(Lock);
}
