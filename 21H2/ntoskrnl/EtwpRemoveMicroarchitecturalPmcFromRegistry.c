/*
 * XREFs of EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x14093B010
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140938730 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     EtwpFindMatchingPmcRegistryGroup @ 0x14093A320 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x14093AD78 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     KiGetCpuVendor @ 0x14099CF68 (KiGetCpuVendor.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpRemoveMicroarchitecturalPmcFromRegistry(wchar_t *Str1, size_t MaxCount, __int64 a3)
{
  unsigned int v4; // esi
  int CpuVendor; // eax
  __int64 v7; // r9
  int v8; // r15d
  unsigned int v9; // edi
  wchar_t *PoolWithTag; // rax
  __int64 v11; // rcx
  WCHAR *v12; // rbx
  int MatchingPmcRegistryGroup; // edi

  v4 = MaxCount;
  CpuVendor = KiGetCpuVendor(Str1, MaxCount);
  v7 = -1LL;
  v8 = CpuVendor;
  do
    ++v7;
  while ( aRegistryMachin_24[v7] );
  v9 = 2 * v7 + 514;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9, 0x50777445u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  MatchingPmcRegistryGroup = EtwpFindMatchingPmcRegistryGroup(v11, v8, a3, v9, PoolWithTag);
  if ( MatchingPmcRegistryGroup >= 0 )
    MatchingPmcRegistryGroup = EtwpRemoveMicroarchitecturalPmcFromPmcGroup(v12, Str1, v4);
  ExFreePoolWithTag(v12, 0x50777445u);
  return (unsigned int)MatchingPmcRegistryGroup;
}
