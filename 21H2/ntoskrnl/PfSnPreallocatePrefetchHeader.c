/*
 * XREFs of PfSnPreallocatePrefetchHeader @ 0x140674A5C
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x140674BE0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfSnPreallocatePrefetchHeader(__int64 *a1)
{
  SIZE_T v2; // rdi
  char *PoolWithTag; // rax
  __int64 v4; // r8
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rcx
  char *v8; // rdx
  int v9; // edi
  PVOID v10; // rax
  PVOID v11; // rax
  PVOID v12; // rax

  v2 = (unsigned int)(68 * *(_DWORD *)(*a1 + 88));
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v2, 0x68506343u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v4 = *a1;
  v5 = 0;
  a1[7] = (__int64)PoolWithTag;
  if ( *(_DWORD *)(v4 + 88) )
  {
    do
    {
      v6 = 56LL * v5++;
      v7 = a1[7] + v6;
      *(_OWORD *)v7 = 0LL;
      *(_OWORD *)(v7 + 16) = 0LL;
      *(_QWORD *)(v7 + 24) |= 0x200000000uLL;
      v4 = *a1;
    }
    while ( v5 < *(_DWORD *)(*a1 + 88) );
  }
  v8 = &PoolWithTag[56 * *(unsigned int *)(v4 + 88)];
  a1[8] = (__int64)v8;
  a1[9] = (__int64)&v8[8 * *(unsigned int *)(v4 + 88)];
  memset(PoolWithTag, 0, v2);
  v9 = *(_DWORD *)(*a1 + 88) + *(_DWORD *)(*a1 + 120);
  v10 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(24 * v9), 0x68506343u);
  a1[14] = (__int64)v10;
  if ( !v10 )
    return 3221225626LL;
  memset(v10, 0, (unsigned int)(24 * v9));
  *((_DWORD *)a1 + 31) = v9;
  v11 = ExAllocatePoolWithTag(PagedPool, 0x1810uLL, 0x4D506343u);
  a1[10] = (__int64)v11;
  if ( !v11 )
    return 3221225626LL;
  v12 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x600uLL, 0x57506343u);
  a1[11] = (__int64)v12;
  return v12 != 0LL ? 0 : 0xC000009A;
}
