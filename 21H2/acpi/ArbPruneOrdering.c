/*
 * XREFs of ArbPruneOrdering @ 0x1C00B7EBC
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x1C009FF94 (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     memmove @ 0x1C00321C0 (memmove.c)
 */

__int64 __fastcall ArbPruneOrdering(unsigned __int16 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned int v6; // ebx
  char *PoolWithTag; // rsi
  __int64 v8; // rax
  char *v9; // rbx
  unsigned __int64 *v10; // rcx
  unsigned __int64 i; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  __int64 v15; // rbx
  PVOID v16; // r14
  __int64 result; // rax
  void *v18; // rcx

  if ( a3 < a2 )
    return (unsigned int)-1073741811;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 32LL * *a1 + 16, 0x4C627241u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  v8 = *a1;
  v9 = PoolWithTag;
  if ( (_WORD)v8 )
  {
    v10 = (unsigned __int64 *)*((_QWORD *)a1 + 1);
    for ( i = (unsigned __int64)&v10[2 * v8]; (unsigned __int64)v10 < i; i = *((_QWORD *)a1 + 1) + 16LL * *a1 )
    {
      v12 = *v10;
      if ( a3 < *v10 || (v13 = v10[1], a2 > v13) )
      {
        *(_OWORD *)v9 = *(_OWORD *)v10;
      }
      else if ( a2 <= v12 )
      {
        if ( a3 >= v13 )
          goto LABEL_17;
        *(_QWORD *)v9 = a3 + 1;
        *((_QWORD *)v9 + 1) = v10[1];
      }
      else
      {
        v14 = a2 - 1;
        if ( a3 < v13 )
        {
          *(_QWORD *)v9 = a3 + 1;
          *((_QWORD *)v9 + 1) = v10[1];
          *((_QWORD *)v9 + 2) = *v10;
          *((_QWORD *)v9 + 3) = v14;
          v9 += 32;
          goto LABEL_17;
        }
        *(_QWORD *)v9 = v12;
        *((_QWORD *)v9 + 1) = v14;
      }
      v9 += 16;
LABEL_17:
      v10 += 2;
    }
  }
  v15 = (v9 - PoolWithTag) >> 4;
  if ( (_WORD)v15 )
  {
    if ( (unsigned __int16)v15 <= a1[1] )
    {
      v16 = (PVOID)*((_QWORD *)a1 + 1);
    }
    else
    {
      v16 = ExAllocatePoolWithTag(PagedPool, 16LL * (unsigned __int16)v15, 0x4C627241u);
      if ( !v16 )
      {
        v6 = -1073741670;
        ExFreePoolWithTag(PoolWithTag, 0);
        return v6;
      }
      v18 = (void *)*((_QWORD *)a1 + 1);
      if ( v18 )
        ExFreePoolWithTag(v18, 0);
      *((_QWORD *)a1 + 1) = v16;
      a1[1] = v15;
    }
    memmove(v16, PoolWithTag, 16LL * (unsigned __int16)v15);
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  result = 0LL;
  *a1 = v15;
  return result;
}
