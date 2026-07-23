/*
 * XREFs of RtlpHpLfhContextAllocate @ 0x1800075AC
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x1800076C4 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpLfhBucketUpdateStats @ 0x180007294 (RtlpHpLfhBucketUpdateStats.c)
 *     RtlpHpLfhBucketAllocate @ 0x180087FF0 (RtlpHpLfhBucketAllocate.c)
 *     memset @ 0x1800A4740 (memset.c)
 */

__int64 __fastcall RtlpHpLfhContextAllocate(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  size_t v4; // rdi
  bool v5; // zf
  int v6; // edx
  __int64 v9; // rbp
  void *v10; // rbx
  void *v12; // rax

  v4 = a2;
  v5 = a2 == a3;
  v6 = a3 + 2;
  if ( v5 )
    v6 = a3;
  v9 = RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v6 + 15) >> 4];
  if ( (*(_QWORD *)(a1 + 8 * v9 + 128) & 1) != 0 && !RtlpHpLfhBucketUpdateStats(a1, v6, 1) )
    return -1LL;
  v12 = (void *)RtlpHpLfhBucketAllocate(a1, *(_QWORD *)(a1 + 8 * v9 + 128), (unsigned int)v4, a4);
  v10 = v12;
  if ( v12 && (a4 & 2) != 0 )
    memset(v12, 0, v4);
  return (__int64)v10;
}
