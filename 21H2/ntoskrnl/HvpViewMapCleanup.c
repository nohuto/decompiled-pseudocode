/*
 * XREFs of HvpViewMapCleanup @ 0x140614D78
 * Callers:
 *     HvHiveCleanup @ 0x140721004 (HvHiveCleanup.c)
 * Callees:
 *     CmSiCloseSection @ 0x140246A18 (CmSiCloseSection.c)
 *     HvpViewMapDeleteViewTreeNode @ 0x140619644 (HvpViewMapDeleteViewTreeNode.c)
 */

char __fastcall HvpViewMapCleanup(__int64 a1)
{
  __int64 v1; // rbx
  bool v3; // zf
  unsigned __int64 v4; // rcx
  char result; // al
  int v6; // esi
  _QWORD *v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi

  v1 = a1 + 40;
  v3 = (*(_BYTE *)(a1 + 48) & 1) == 0;
  v4 = *(_QWORD *)(a1 + 40);
  if ( !v3 && v4 )
    v4 ^= v1;
  result = *(_BYTE *)(v1 + 8);
  v6 = result & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v4 )
        {
          v7 = (_QWORD *)v4;
          if ( v6 )
            v4 ^= *(_QWORD *)v4;
          else
            v4 = *(_QWORD *)v4;
          *v7 = 0LL;
        }
        v8 = *(_QWORD *)(v4 + 8);
        if ( !v8 )
          break;
        v9 = v4;
        if ( v6 )
          v4 ^= v8;
        else
          v4 = *(_QWORD *)(v4 + 8);
        *(_QWORD *)(v9 + 8) = 0LL;
      }
      v10 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v6 && v10 )
        v10 ^= v4;
      HvpViewMapDeleteViewTreeNode((PPRIVILEGE_SET)v4);
      if ( !v10 )
        break;
      v4 = v10;
    }
    result = *(_BYTE *)(v1 + 8);
  }
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  if ( (result & 1) != 0 )
    *(_BYTE *)(v1 + 8) = 1;
  if ( *(_QWORD *)a1 )
    return CmSiCloseSection(*(void **)a1);
  return result;
}
