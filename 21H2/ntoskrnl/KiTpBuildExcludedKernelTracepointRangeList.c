/*
 * XREFs of KiTpBuildExcludedKernelTracepointRangeList @ 0x140962930
 * Callers:
 *     KiTpIsExcludedKernelTracepointLocation @ 0x140962A18 (KiTpIsExcludedKernelTracepointLocation.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x140298010 (RtlLookupFunctionEntry.c)
 *     RtlFreeRangeList @ 0x1408397E0 (RtlFreeRangeList.c)
 *     RtlAddRange @ 0x14083A010 (RtlAddRange.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void *KiTpBuildExcludedKernelTracepointRangeList()
{
  _QWORD *PoolWithTag; // rax
  void *v1; // rbx
  __int64 (__fastcall *v2)(); // rdi
  __int64 v3; // rbp
  unsigned __int64 v4; // rsi
  unsigned int *v5; // rax
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x70727446u);
  v1 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 4) = 0;
    *((_DWORD *)PoolWithTag + 5) = 0;
    *((_DWORD *)PoolWithTag + 6) = 0;
    v2 = KiTpExcludedRoutines[0];
    LODWORD(v3) = 0;
    PoolWithTag[1] = PoolWithTag;
    *PoolWithTag = PoolWithTag;
    while ( 1 )
    {
      v7 = 0LL;
      v4 = (unsigned __int64)v2;
      v5 = RtlLookupFunctionEntry((unsigned __int64)v2, &v7, 0LL);
      if ( v5 )
        v4 = v7 + v5[1];
      if ( (int)RtlAddRange((__int64)v1, (unsigned __int64)v2, v4, 0, 1u, 0LL, 0LL) < 0 )
        break;
      v3 = (unsigned int)(v3 + 1);
      v2 = KiTpExcludedRoutines[v3];
      if ( !v2 )
        return v1;
    }
    RtlFreeRangeList((__int64)v1);
    ExFreePoolWithTag(v1, 0x70727446u);
  }
  return 0LL;
}
