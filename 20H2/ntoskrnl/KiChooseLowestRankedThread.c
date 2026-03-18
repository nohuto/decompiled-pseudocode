/*
 * XREFs of KiChooseLowestRankedThread @ 0x14035E8B4
 * Callers:
 *     KiSelectReadyThreadEx @ 0x1402BA4B0 (KiSelectReadyThreadEx.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402DB840 (KiGroupSchedulingQuantumEnd.c)
 *     KiRemoveBoostThread @ 0x1402DDFD0 (KiRemoveBoostThread.c)
 * Callees:
 *     KiSelectReadyThread @ 0x14021D6F0 (KiSelectReadyThread.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402DF230 (KiGetThreadEffectiveRankNonZero.c)
 *     KiSelectThreadFromSchedulingGroup @ 0x14035EB30 (KiSelectThreadFromSchedulingGroup.c)
 *     KiSelectThreadFromScbQueue @ 0x140521E1C (KiSelectThreadFromScbQueue.c)
 */

__int64 __fastcall KiChooseLowestRankedThread(struct _KPRCB *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned int v4; // r12d
  __int64 result; // rax
  __int64 v8; // r14
  char v9; // r9
  unsigned int v10; // r15d
  _RTL_BALANCED_NODE *Min; // rax
  _QWORD *Children; // rbx
  _QWORD *v13; // rdi
  char v14; // cl
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  unsigned __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdi
  char v22; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 104);
  v4 = a3;
  if ( !v3 )
    return 0LL;
  v8 = a1->ScbOffset + v3;
  if ( !v8 )
    return 0LL;
  if ( a1 == KeGetCurrentPrcb() || (v9 = 0, (_KTHREAD *)a2 != a1->CurrentThread) )
    v9 = 1;
  if ( !(unsigned int)KiGetThreadEffectiveRankNonZero(a2, v8, a3, v9, 0LL) )
    return 0LL;
  result = KiSelectReadyThread(1, (__int64)a1);
  if ( result )
    return result;
  v10 = *(_DWORD *)(*(_QWORD *)(v8 + 416) + 116LL);
  Min = a1->ScbQueue.Min;
  if ( ((unsigned __int8)Min & 1) != 0 )
  {
    if ( Min == (_RTL_BALANCED_NODE *)1 )
      return 0LL;
    Children = (_QWORD *)((unsigned __int64)Min ^ ((unsigned __int64)&a1->ScbQueue | 1));
  }
  else
  {
    Children = a1->ScbQueue.Min->Children;
  }
  if ( !Children )
    return 0LL;
  v13 = Children - 11;
  if ( *((_DWORD *)Children + 7) >= v10 )
  {
    if ( *((_DWORD *)Children + 7) == v10 )
    {
      if ( (int)v4 < *(char *)(a2 + 195) )
        v4 = *(char *)(a2 + 195);
      while ( 1 )
      {
        result = KiSelectThreadFromSchedulingGroup(a1, v13, v4);
        if ( v13 == (_QWORD *)v8 )
          break;
        v22 = 0;
        if ( result )
          return result;
        v15 = (unsigned __int64)(v13 + 49);
        v16 = v13[49];
        if ( (v13[50] & 1) != 0 )
        {
          if ( !v16 )
            goto LABEL_26;
          v16 ^= v15;
        }
        if ( v16 )
        {
          result = KiSelectThreadFromScbQueue(v15, (_DWORD)a1, v4, v8, (__int64)&v22);
          v14 = v22;
LABEL_18:
          if ( result )
            return result;
          if ( v14 )
            return 0LL;
        }
LABEL_26:
        v17 = (_QWORD *)Children[1];
        v18 = Children;
        if ( v17 )
        {
          do
          {
            Children = v17;
            v17 = (_QWORD *)*v17;
          }
          while ( v17 );
        }
        else
        {
          while ( 1 )
          {
            Children = (_QWORD *)(Children[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !Children || (_QWORD *)*Children == v18 )
              break;
            v18 = Children;
          }
        }
        if ( Children )
        {
          v13 = Children - 11;
          if ( *((_DWORD *)Children + 7) == v10 )
            continue;
        }
        return 0LL;
      }
      v14 = 1;
      goto LABEL_18;
    }
    return 0LL;
  }
  while ( !*((_WORD *)v13 + 57) )
  {
    v19 = (unsigned __int64)(v13 + 49);
    v20 = *(_QWORD *)(v19 + 8);
    if ( (v20 & 1) != 0 )
    {
      if ( v20 == 1 )
        v21 = 0LL;
      else
        v21 = v20 ^ (v19 | 1);
    }
    else
    {
      v21 = *(_QWORD *)(v19 + 8);
    }
    v13 = (_QWORD *)(v21 - 88);
  }
  return KiSelectThreadFromSchedulingGroup(a1, v13, 0LL);
}
