/*
 * XREFs of EmpEvaluateTargetRule @ 0x140373A28
 * Callers:
 *     EmpEvaluateUpdateRuleEvalState @ 0x1403C5724 (EmpEvaluateUpdateRuleEvalState.c)
 *     EmClientRuleEvaluate @ 0x140991340 (EmClientRuleEvaluate.c)
 * Callees:
 *     EmpEvaluateNodeLink @ 0x140373C6C (EmpEvaluateNodeLink.c)
 *     EmpFreePool @ 0x140374068 (EmpFreePool.c)
 *     EmpAllocatePool @ 0x14037409C (EmpAllocatePool.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EmpEvaluateTargetRule(__int64 a1, __int64 a2, int a3)
{
  __int64 Pool; // rbp
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // r15
  unsigned int v8; // r13d
  unsigned int v9; // r12d
  void *v10; // rdi
  unsigned int v11; // r12d
  unsigned int v12; // esi
  unsigned int v13; // r8d
  _QWORD *v14; // r9
  __int64 v15; // rax
  unsigned int i; // r8d
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v20; // [rsp+60h] [rbp-78h]
  __int64 v21; // [rsp+70h] [rbp-68h]
  __int64 v22; // [rsp+78h] [rbp-60h]
  PVOID PoolWithTag; // [rsp+80h] [rbp-58h]
  int v24; // [rsp+E0h] [rbp+8h]
  unsigned int v27; // [rsp+F8h] [rbp+20h]

  Pool = 0LL;
  v22 = *(_QWORD *)(a1 + 8);
  v5 = 0LL;
  v6 = *(unsigned int *)(v22 + 40);
  v7 = *(unsigned int *)(v22 + 44);
  v8 = 1;
  v21 = *(_QWORD *)(a1 + 16);
  v9 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x76654D45u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
    v9 = 4096;
  v20 = v9;
  v24 = v9;
  if ( !(_DWORD)v6 && !(_DWORD)v7 )
  {
    v27 = 1;
    goto LABEL_9;
  }
  v27 = *(_DWORD *)(a1 + 24) / (unsigned int)(v7 + v6);
  if ( (_DWORD)v6 )
  {
    Pool = EmpAllocatePool(8 * v6);
    if ( !Pool )
      goto LABEL_22;
  }
  if ( !(_DWORD)v7 || (v5 = EmpAllocatePool(4 * v7)) != 0 )
  {
    if ( !v27 )
    {
LABEL_18:
      if ( v5 )
        EmpFreePool(v5, v10, v9);
      goto LABEL_20;
    }
LABEL_9:
    v11 = v7 + v6;
    v12 = 0;
    do
    {
      v13 = 0;
      if ( (_DWORD)v6 )
      {
        v14 = (_QWORD *)Pool;
        do
        {
          v15 = v12 * v11 + v13++;
          *v14++ = *((_QWORD *)EmpStringTable + *(unsigned int *)(v21 + 4 * v15));
        }
        while ( v13 < (unsigned int)v6 );
      }
      for ( i = v6; i < v11; *(_DWORD *)(v5 + 4 * v18) = v17 )
      {
        v17 = *(_DWORD *)(v21 + 4LL * (v12 * v11 + i));
        v18 = i - (unsigned int)v6;
        ++i;
      }
      v8 = EmpEvaluateNodeLink(*(_QWORD *)(v22 + 96), Pool, v6, v5, v7, a2, a3, 0LL, 0, (ULONGLONG)PoolWithTag, v24);
      if ( v8 - 1 <= 1 )
        break;
      ++v12;
    }
    while ( v12 < v27 );
    v10 = PoolWithTag;
    v9 = v20;
    goto LABEL_18;
  }
LABEL_20:
  if ( Pool )
    EmpFreePool(Pool, v10, v9);
LABEL_22:
  if ( v10 )
    ExFreePoolWithTag(v10, 0x76654D45u);
  return v8;
}
