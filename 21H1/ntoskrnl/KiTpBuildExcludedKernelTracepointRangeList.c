/*
 * XREFs of KiTpBuildExcludedKernelTracepointRangeList @ 0x1408B8154
 * Callers:
 *     KiTpIsExcludedKernelTracepointLocation @ 0x1408B823C (KiTpIsExcludedKernelTracepointLocation.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x14032E660 (RtlLookupFunctionEntry.c)
 *     RtlFreeRangeList @ 0x140749F00 (RtlFreeRangeList.c)
 *     RtlAddRange @ 0x14074CD80 (RtlAddRange.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

_QWORD *KiTpBuildExcludedKernelTracepointRangeList()
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v1; // rbx
  DWORD64 v2; // rdi
  __int64 v3; // rbp
  unsigned __int64 v4; // rsi
  PRUNTIME_FUNCTION v5; // rax
  unsigned __int64 ImageBase; // [rsp+50h] [rbp+8h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x70727446u);
  v1 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 4) = 0;
    *((_DWORD *)PoolWithTag + 5) = 0;
    *((_DWORD *)PoolWithTag + 6) = 0;
    v2 = KiTpExcludedRoutines;
    LODWORD(v3) = 0;
    PoolWithTag[1] = PoolWithTag;
    *PoolWithTag = PoolWithTag;
    while ( 1 )
    {
      ImageBase = 0LL;
      v4 = v2;
      v5 = RtlLookupFunctionEntry(v2, &ImageBase, 0LL);
      if ( v5 )
        v4 = ImageBase + v5->EndAddress;
      if ( (int)RtlAddRange((__int64)v1, v2, v4, 0, 1, 0LL, 0LL) < 0 )
        break;
      v3 = (unsigned int)(v3 + 1);
      v2 = *(&KiTpExcludedRoutines + v3);
      if ( !v2 )
        return v1;
    }
    RtlFreeRangeList(v1);
    ExFreePoolWithTag(v1, 0x70727446u);
  }
  return 0LL;
}
