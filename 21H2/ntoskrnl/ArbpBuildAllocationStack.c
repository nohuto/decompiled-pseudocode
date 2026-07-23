/*
 * XREFs of ArbpBuildAllocationStack @ 0x140761244
 * Callers:
 *     ArbTestAllocation @ 0x1407610E0 (ArbTestAllocation.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ArbpBuildAlternative @ 0x1407B41A0 (ArbpBuildAlternative.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ArbpBuildAllocationStack(__int64 a1, __int64 *a2, int a3)
{
  int v3; // edi
  __int64 v4; // r15
  int v5; // ebx
  __int64 *v6; // r14
  int v8; // r8d
  int v9; // ecx
  unsigned int v10; // edi
  PVOID PoolWithTag; // rsi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 *i; // rbx
  unsigned __int64 v15; // rbp
  unsigned __int64 j; // rax
  __int64 result; // rax

  v3 = 0;
  v4 = (unsigned int)(a3 + 1);
  v5 = 0;
  v6 = a2;
  while ( 1 )
  {
    a2 = (__int64 *)*a2;
    if ( v6 == a2 )
      break;
    v8 = *((_DWORD *)a2 + 4);
    v9 = v5;
    if ( v8 )
      v3 += v8 << 6;
    else
      v4 = (unsigned int)(v4 - 1);
    ++v5;
    if ( !v8 )
      v5 = v9;
  }
  v10 = 80 * v4 + v3;
  if ( *(_DWORD *)(a1 + 104) < v10 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x41627241u);
    if ( !PoolWithTag )
      return 3221225626LL;
    ExFreePoolWithTag(*(PVOID *)(a1 + 112), 0x41627241u);
    *(_QWORD *)(a1 + 112) = PoolWithTag;
    *(_DWORD *)(a1 + 104) = v10;
  }
  else
  {
    PoolWithTag = *(PVOID *)(a1 + 112);
  }
  memset(PoolWithTag, 0, v10);
  v12 = *(_QWORD *)(a1 + 112);
  if ( v5 )
    v13 = v12 + 80 * v4;
  else
    v13 = 0LL;
  for ( i = (__int64 *)*v6; v6 != i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) )
    {
      *(_QWORD *)(v12 + 32) = i;
      *(_DWORD *)(v12 + 48) = *((_DWORD *)i + 4);
      *(_QWORD *)(v12 + 56) = v13;
      *(_QWORD *)v12 = 1LL;
      v15 = i[3];
      for ( j = v15 + 32LL * *((unsigned int *)i + 4); v15 < j; j = i[3] + 32LL * *((unsigned int *)i + 4) )
      {
        result = ArbpBuildAlternative(a1, v15, v13);
        if ( (int)result < 0 )
          return result;
        *(_DWORD *)(v13 + 32) = 0;
        v15 += 32LL;
        v13 += 64LL;
      }
      v12 += 80LL;
    }
  }
  *(_QWORD *)(v12 + 32) = 0LL;
  return 0LL;
}
