/*
 * XREFs of MiFreePartitionTree @ 0x14055CE9C
 * Callers:
 *     MiClearPartitionPageBitMap @ 0x14055BFB4 (MiClearPartitionPageBitMap.c)
 *     MiInsertPartitionPages @ 0x14055D0A0 (MiInsertPartitionPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408D7378 (MiAllocatePartitionPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x1408D7C7C (MiHotAddPartitionMemory.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14023DC90 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x140249BF0 (RtlAvlInsertNodeEx.c)
 *     MiFreePartitionNodePages @ 0x14055CE44 (MiFreePartitionNodePages.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreePartitionTree(unsigned __int64 a1, unsigned __int64 *a2, char a3, int a4)
{
  __int64 v4; // rdi
  bool v5; // bl
  int v6; // ebp
  _QWORD *v11; // rdx
  _QWORD *v12; // rax

  v4 = *a2;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    if ( !v4 )
      return (unsigned int)v6;
    RtlAvlRemoveNode(a2, (unsigned __int64 *)v4);
    if ( a4 == 1 )
    {
      v6 = MiFreePartitionNodePages(a1, v4, a3);
      if ( v6 < 0 )
        break;
    }
    ExFreePoolWithTag(*(PVOID *)(v4 + 40), 0);
    ExFreePoolWithTag((PVOID)v4, 0);
    v4 = *a2;
  }
  v11 = (_QWORD *)*a2;
  if ( !*a2 )
    goto LABEL_11;
  while ( (*(_QWORD *)(v4 + 24) & 0x7FFFFFFFFFFFFFFFuLL) < (v11[3] & 0x7FFFFFFFFFFFFFFFuLL) )
  {
    v12 = (_QWORD *)*v11;
    if ( !*v11 )
      goto LABEL_11;
LABEL_14:
    v11 = v12;
  }
  v12 = (_QWORD *)v11[1];
  if ( v12 )
    goto LABEL_14;
  v5 = 1;
LABEL_11:
  RtlAvlInsertNodeEx(a2, (unsigned __int64)v11, v5, (_QWORD *)v4);
  return (unsigned int)v6;
}
