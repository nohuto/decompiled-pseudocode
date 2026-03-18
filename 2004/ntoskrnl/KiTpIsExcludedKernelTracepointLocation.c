/*
 * XREFs of KiTpIsExcludedKernelTracepointLocation @ 0x1408B955C
 * Callers:
 *     KiTpIsSupportedKernelTracepointLocation @ 0x1408B960C (KiTpIsSupportedKernelTracepointLocation.c)
 * Callees:
 *     RtlFindRange @ 0x14074D0F0 (RtlFindRange.c)
 *     RtlFreeRangeList @ 0x14074E320 (RtlFreeRangeList.c)
 *     KiTpBuildExcludedKernelTracepointRangeList @ 0x1408B9474 (KiTpBuildExcludedKernelTracepointRangeList.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KiTpIsExcludedKernelTracepointLocation(unsigned __int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  _QWORD *v4; // rdi
  unsigned __int64 v6; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  v3 = KiTpExcludedRangeList;
  if ( !KiTpExcludedRangeList )
  {
    v4 = KiTpBuildExcludedKernelTracepointRangeList();
    if ( _InterlockedCompareExchange64(&KiTpExcludedRangeList, (signed __int64)v4, 0LL) )
    {
      if ( v4 )
      {
        RtlFreeRangeList(v4);
        ExFreePoolWithTag(v4, 0x70727446u);
      }
    }
    v3 = KiTpExcludedRangeList;
    if ( !KiTpExcludedRangeList )
      return 1LL;
  }
  LOBYTE(v2) = (int)RtlFindRange(v3, a1, a1, 1LL, 1uLL, 0, 0, 0LL, 0LL, &v6) < 0;
  return v2;
}
