/*
 * XREFs of MmReserveViewInSystemCache @ 0x14084D698
 * Callers:
 *     CcInitializePartitionVacbs @ 0x1403D1490 (CcInitializePartitionVacbs.c)
 *     CcBuildUpHighPriorityMappings @ 0x14053AF8C (CcBuildUpHighPriorityMappings.c)
 * Callees:
 *     MiObtainSystemCacheView @ 0x140286210 (MiObtainSystemCacheView.c)
 */

__int64 __fastcall MmReserveViewInSystemCache(__int64 *a1)
{
  __int64 result; // rax

  result = MiObtainSystemCacheView(*a1);
  if ( !result )
    ++dword_140C53DA0;
  return result;
}
