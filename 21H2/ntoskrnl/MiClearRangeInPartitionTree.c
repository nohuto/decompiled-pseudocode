/*
 * XREFs of MiClearRangeInPartitionTree @ 0x1405619B0
 * Callers:
 *     MiAddMdlToPartitionTree @ 0x1405612C0 (MiAddMdlToPartitionTree.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     RtlClearBitsEx @ 0x140309050 (RtlClearBitsEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiClearRangeInPartitionTree(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r15
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 result; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 *v12; // r14
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rcx
  __int64 *v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rdx
  bool v18; // zf
  bool i; // zf

  v3 = a3;
  v4 = a2 & 0x7FFFFFFFFFFC0000LL;
  v5 = a2;
  result = a2 - (a2 & 0x7FFFFFFFFFFC0000LL);
  v8 = (result + a3 + 0x3FFFF) >> 18;
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = *a1;
      if ( *a1 )
      {
        v10 = v4 & 0x7FFFFFFFFFFFFFFFLL;
        do
        {
          v11 = *(_QWORD *)(v9 + 24) & 0x7FFFFFFFFFFFFFFFLL;
          if ( v10 < v11 )
          {
            v9 = *(_QWORD *)v9;
          }
          else
          {
            if ( v10 <= v11 )
              break;
            v9 = *(_QWORD *)(v9 + 8);
          }
        }
        while ( v9 );
      }
      v12 = (unsigned __int64 *)(v9 + 32);
      v13 = v3;
      if ( (*(_QWORD *)(v9 + 24) & 0x7FFFFFFFFFFFFFFFuLL) - v5 + 0x40000 <= v3 )
        v13 = (*(_QWORD *)(v9 + 24) & 0x7FFFFFFFFFFFFFFFLL) - v5 + 0x40000;
      RtlClearBitsEx(v9 + 32, v5 - (*(_QWORD *)(v9 + 24) & 0x7FFFFFFFFFFFFFFFLL), v13);
      v14 = *v12;
      if ( !*v12 )
        goto LABEL_24;
      if ( v14 <= 1 )
        break;
      v15 = *(__int64 **)(v9 + 40);
      v16 = *v15;
      v17 = &v15[(v14 - 1) >> 6];
      if ( v15 != v17 )
      {
        for ( i = v16 == 0; i; i = *v15 == 0 )
        {
          if ( ++v15 == v17 )
          {
            v18 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v14 - 1)) & *v15) == 0;
            goto LABEL_22;
          }
        }
        goto LABEL_24;
      }
      v18 = (v16 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v14))) == 0;
LABEL_22:
      if ( v18 )
        goto LABEL_23;
LABEL_24:
      v5 += v13;
      result = (v4 ^ (v4 + 0x40000)) & 0x7FFFFFFFFFFFFFFFLL;
      v3 -= v13;
      v4 ^= result;
      if ( !--v8 )
        return result;
    }
    if ( _bittest64(*(const signed __int64 **)(v9 + 40), 0) )
      goto LABEL_24;
LABEL_23:
    RtlAvlRemoveNode(a1, (unsigned __int64 *)v9);
    ExFreePoolWithTag(*(PVOID *)(v9 + 40), 0);
    ExFreePoolWithTag((PVOID)v9, 0);
    goto LABEL_24;
  }
  return result;
}
