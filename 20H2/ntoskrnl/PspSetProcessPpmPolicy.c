/*
 * XREFs of PspSetProcessPpmPolicy @ 0x1406D4950
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExpUpdateTimerResolution @ 0x14033BE38 (ExpUpdateTimerResolution.c)
 *     KeGetProcessQosFromPolicy @ 0x1405126E8 (KeGetProcessQosFromPolicy.c)
 *     ExAcquireTimeRefreshLock @ 0x1406F5A38 (ExAcquireTimeRefreshLock.c)
 */

void __fastcall PspSetProcessPpmPolicy(__int64 a1, int a2)
{
  int v2; // edx
  signed __int32 v3; // ett
  int v5; // edx
  __int64 v6; // rcx
  unsigned int v7; // r8d
  __int64 v8; // r9

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
      _InterlockedOr((volatile signed __int32 *)(v8 + 2172), v7);
    }
    else
    {
      if ( !v5 )
        return;
      _InterlockedAnd((volatile signed __int32 *)(v8 + 2172), 0xFBFFFFFF);
    }
    if ( (*(_DWORD *)(v8 + 1124) & 0x1000) != 0 )
    {
      LOBYTE(v6) = 1;
      ExAcquireTimeRefreshLock(v6);
      ExpUpdateTimerResolution(0, 0, 0LL);
      ExReleaseResourceLite(&ExpTimeRefreshLock);
      KeLeaveCriticalRegion();
    }
  }
}
