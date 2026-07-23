/*
 * XREFs of ArbAddOrdering @ 0x1407A2C54
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x1407A2778 (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ArbAddOrdering(unsigned __int16 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // rax
  PVOID PoolWithTag; // rax
  PVOID v9; // rbp
  const void *v10; // rdx

  if ( a3 < a2 )
    return 3221225485LL;
  v6 = *a1;
  if ( (_WORD)v6 != a1[1] )
  {
LABEL_3:
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL * (unsigned __int16)v6) = a2;
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL * (*a1)++ + 8) = a3;
    return 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16 * (v6 + 8), 0x4C627241u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    v10 = (const void *)*((_QWORD *)a1 + 1);
    if ( v10 )
    {
      memmove(PoolWithTag, v10, 16LL * *a1);
      ExFreePoolWithTag(*((PVOID *)a1 + 1), 0);
    }
    a1[1] += 8;
    LOWORD(v6) = *a1;
    *((_QWORD *)a1 + 1) = v9;
    goto LABEL_3;
  }
  return 3221225626LL;
}
