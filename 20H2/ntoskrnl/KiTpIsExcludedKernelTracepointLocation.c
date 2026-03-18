/*
 * XREFs of KiTpIsExcludedKernelTracepointLocation @ 0x1408BF2BC
 * Callers:
 *     KiTpIsSupportedKernelTracepointLocation @ 0x1408BF36C (KiTpIsSupportedKernelTracepointLocation.c)
 * Callees:
 *     RtlFindRange @ 0x14075BCD0 (RtlFindRange.c)
 *     RtlFreeRangeList @ 0x14075CF00 (RtlFreeRangeList.c)
 *     KiTpBuildExcludedKernelTracepointRangeList @ 0x1408BF1D4 (KiTpBuildExcludedKernelTracepointRangeList.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
