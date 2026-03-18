/*
 * XREFs of KiInitializeCacheErrataSupport @ 0x140A8FF7C
 * Callers:
 *     KiInitMachineDependent @ 0x1403ABC1C (KiInitMachineDependent.c)
 * Callees:
 *     KeStartProfile @ 0x1405160CC (KeStartProfile.c)
 *     KiDisableCacheErrataSource @ 0x14051C714 (KiDisableCacheErrataSource.c)
 *     KeSetIntervalProfile @ 0x140720424 (KeSetIntervalProfile.c)
 *     KeInitializeProfileCallback @ 0x1408B791C (KeInitializeProfileCallback.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

char __fastcall KiInitializeCacheErrataSupport(char a1)
{
  unsigned int v3; // ebx
  int *PoolWithTag; // rax
  int *v5; // rdi
  unsigned int v6; // r9d
  int *i; // r8

  if ( KiTLBCOverride )
  {
    KiDisableCacheErrataSource();
    if ( !a1 )
      return 1;
LABEL_3:
    KiCacheErrataMonitor = 0LL;
    return 1;
  }
  if ( !a1 )
    return 1;
  v3 = KeNumberProcessors_0;
  if ( (_DWORD)KeNumberProcessors_0 == 1 )
  {
    KiTLBCOverride = 1;
    KiDisableCacheErrataSource();
    goto LABEL_3;
  }
  PoolWithTag = (int *)ExAllocatePoolWithTag(
                         NonPagedPoolNx,
                         16 * ((unsigned int)KeNumberProcessors_0 + 16LL),
                         0x2020654Bu);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0x393870 / v3;
    KeInitializeProfileCallback(PoolWithTag + 2, (__int64)KiMonitorCacheErrata, 0LL, 0);
    v6 = 0;
    for ( i = v5 + 64; v6 < v3; *(i - 1) = v6 % v3 )
    {
      *(_QWORD *)i = -1LL;
      i[2] = 0;
      i += 4;
      ++v6;
    }
    _InterlockedExchange64(&KiCacheErrataMonitor, (__int64)v5);
    KeSetIntervalProfile(*v5, 0);
    if ( KeStartProfile((ULONG_PTR)(v5 + 2)) )
      return 1;
  }
  return 0;
}
