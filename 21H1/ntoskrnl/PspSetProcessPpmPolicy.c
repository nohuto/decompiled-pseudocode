/*
 * XREFs of PspSetProcessPpmPolicy @ 0x1406DE590
 * Callers:
 *     <none>
 * Callees:
 *     ExpUpdateTimerResolution @ 0x140202A40 (ExpUpdateTimerResolution.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     KeGetProcessQosFromPolicy @ 0x14050E768 (KeGetProcessQosFromPolicy.c)
 *     ExAcquireTimeRefreshLock @ 0x1405D0D58 (ExAcquireTimeRefreshLock.c)
 */

void __fastcall PspSetProcessPpmPolicy(__int64 a1, int a2)
{
  int v2; // edx
  signed __int32 v3; // ett
  int v5; // edx
  unsigned int v6; // r8d
  __int64 v7; // r9

  v2 = a2 << 7;
  _m_prefetchw((const void *)(a1 + 632));
  do
    v3 = *(_DWORD *)(a1 + 632);
  while ( v3 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 632), v2 | v3 & 0xFFFFFC7F, v3) );
  if ( KeNumberProcessorsGroup0[2] )
  {
    if ( (unsigned int)KeGetProcessQosFromPolicy((*(_DWORD *)(a1 + 632) >> 7) & 7) == 2 )
    {
      if ( v5 )
        return;
      _InterlockedOr((volatile signed __int32 *)(v7 + 2172), v6);
    }
    else
    {
      if ( !v5 )
        return;
      _InterlockedAnd((volatile signed __int32 *)(v7 + 2172), 0xFBFFFFFF);
    }
    if ( (*(_DWORD *)(v7 + 1124) & 0x1000) != 0 )
    {
      ExAcquireTimeRefreshLock(1u);
      ExpUpdateTimerResolution(0, 0, 0LL);
      ExReleaseResourceLite(&ExpTimeRefreshLock);
      KeLeaveCriticalRegion();
    }
  }
}
