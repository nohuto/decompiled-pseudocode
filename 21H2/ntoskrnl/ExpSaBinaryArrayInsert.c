/*
 * XREFs of ExpSaBinaryArrayInsert @ 0x1403A6628
 * Callers:
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403A61E8 (ExpSaPageGroupDescriptorAllocate.c)
 * Callees:
 *     ExpAllocatePoolWithTagFromNode @ 0x140349710 (ExpAllocatePoolWithTagFromNode.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall ExpSaBinaryArrayInsert(_QWORD **a1, __int64 a2, unsigned __int16 a3)
{
  int v3; // r12d
  unsigned int v6; // esi
  _QWORD *v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 i; // rdx
  unsigned int v11; // ebx
  _QWORD *PoolWithTagFromNode; // rax

  v3 = a3;
  v6 = 0;
  while ( 1 )
  {
    v7 = *a1;
    v8 = 1 << (v6 + 2);
    if ( !*a1 )
    {
      PoolWithTagFromNode = (_QWORD *)ExpAllocatePoolWithTagFromNode(
                                        NonPagedPoolNx,
                                        8 * v8 + 8,
                                        1632860229LL,
                                        v3 | 0x80000000,
                                        0);
      v7 = PoolWithTagFromNode;
      if ( !PoolWithTagFromNode )
        return (unsigned int)-1;
      memset(PoolWithTagFromNode, 0, 8 * v8 + 8);
      *a1 = v7;
    }
    v9 = *v7;
    if ( *v7 < (unsigned __int64)v8 )
      break;
    ++v6;
    ++a1;
    if ( v6 >= 0x10 )
      return (unsigned int)-1;
  }
  for ( i = (unsigned int)v9; v7[i + 1]; i = (v8 - 1) & ((_DWORD)i + 1) )
    ;
  v11 = i | v8;
  *v7 = v9 + 1;
  v7[i + 1] = a2;
  return v11;
}
