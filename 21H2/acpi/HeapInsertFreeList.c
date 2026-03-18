/*
 * XREFs of HeapInsertFreeList @ 0x1C0017940
 * Callers:
 *     ParseCall @ 0x1C00123D0 (ParseCall.c)
 *     FindNSObj @ 0x1C00175E0 (FindNSObj.c)
 *     FreeObjData @ 0x1C0018AA0 (FreeObjData.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall HeapInsertFreeList(__int64 a1, unsigned int *a2)
{
  unsigned int *v2; // rax
  unsigned int *i; // r8
  __int64 **v5; // rcx
  __int64 *v6; // r9
  _QWORD *v7; // r10
  __int64 v8; // rcx
  unsigned int *v9; // rax
  unsigned int *v10; // r10
  __int64 v11; // rcx
  _QWORD *result; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 *v18; // rcx
  __int64 **v19; // rax

  v2 = *(unsigned int **)(a1 + 40);
  for ( i = (unsigned int *)(a1 + 40); v2 != i; v2 = *(unsigned int **)v2 )
  {
    if ( a2 + 4 < v2 )
      break;
  }
  v5 = (__int64 **)*((_QWORD *)v2 + 1);
  v6 = (__int64 *)(a2 + 4);
  if ( *v5 != (__int64 *)v2 )
    goto LABEL_19;
  *((_QWORD *)a2 + 3) = v5;
  *v6 = (__int64)v2;
  *v5 = v6;
  *((_QWORD *)v2 + 1) = v6;
  v7 = (_QWORD *)*v6;
  v8 = *v6 - 16;
  if ( (unsigned int *)*v6 != i )
  {
    v15 = a2[1];
    if ( (unsigned int *)v8 == (unsigned int *)((char *)a2 + v15) )
    {
      a2[1] = v15 + *(_DWORD *)(v8 + 4);
      v16 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 )
        goto LABEL_19;
      v17 = (_QWORD *)v7[1];
      if ( (_QWORD *)*v17 != v7 )
        goto LABEL_19;
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
    }
  }
  v9 = (unsigned int *)*((_QWORD *)a2 + 3);
  v10 = v9 - 4;
  if ( v9 != i )
  {
    v11 = v10[1];
    if ( a2 == (unsigned int *)((char *)v10 + v11) )
    {
      v10[1] = a2[1] + v11;
      v18 = (__int64 *)*v6;
      if ( *(__int64 **)(*v6 + 8) != v6 )
        goto LABEL_19;
      v19 = (__int64 **)*((_QWORD *)a2 + 3);
      if ( *v19 != v6 )
        goto LABEL_19;
      *v19 = v18;
      a2 = v10;
      v18[1] = (__int64)v19;
    }
  }
  result = (_QWORD *)((char *)a2 + a2[1]);
  if ( *(_QWORD *)(a1 + 32) > (unsigned __int64)result )
    return result;
  *(_QWORD *)(a1 + 32) = a2;
  v13 = a2 + 4;
  v14 = *v13;
  if ( *(_QWORD **)(*v13 + 8LL) != v13 || (result = (_QWORD *)v13[1], (_QWORD *)*result != v13) )
LABEL_19:
    __fastfail(3u);
  *result = v14;
  *(_QWORD *)(v14 + 8) = result;
  return result;
}
