/*
 * XREFs of KiTpBuildExcludedKernelTracepointRangeList @ 0x1408BF1D4
 * Callers:
 *     KiTpIsExcludedKernelTracepointLocation @ 0x1408BF2BC (KiTpIsExcludedKernelTracepointLocation.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x1402E61C0 (RtlLookupFunctionEntry.c)
 *     RtlFreeRangeList @ 0x14075CF00 (RtlFreeRangeList.c)
 *     RtlAddRange @ 0x14075FFF0 (RtlAddRange.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

_QWORD *KiTpBuildExcludedKernelTracepointRangeList()
{
  _QWORD *PoolWithTag; // rax
  __int64 v1; // r9
  _QWORD *v2; // rbx
  __int64 (__fastcall *v3)(); // rdi
  __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  unsigned int *v6; // rax
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x70727446u);
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 4) = 0;
    *((_DWORD *)PoolWithTag + 5) = 0;
    *((_DWORD *)PoolWithTag + 6) = 0;
    v3 = KiTpExcludedRoutines[0];
    LODWORD(v4) = 0;
    PoolWithTag[1] = PoolWithTag;
    *PoolWithTag = PoolWithTag;
    while ( 1 )
    {
      v8 = 0LL;
      v5 = (unsigned __int64)v3;
      v6 = RtlLookupFunctionEntry((unsigned __int64)v3, &v8, 0LL, v1);
      if ( v6 )
        v5 = v8 + v6[1];
      if ( (int)RtlAddRange((__int64)v2, (unsigned __int64)v3, v5, 0, 1, 0LL, 0LL) < 0 )
        break;
      v4 = (unsigned int)(v4 + 1);
      v3 = KiTpExcludedRoutines[v4];
      if ( !v3 )
        return v2;
    }
    RtlFreeRangeList(v2);
    ExFreePoolWithTag(v2, 0x70727446u);
  }
  return 0LL;
}
