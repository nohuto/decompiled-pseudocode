/*
 * XREFs of RebalanceNode @ 0x18005D1F8
 * Callers:
 *     DeleteNodeFromTree @ 0x18005CDBC (DeleteNodeFromTree.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x18005CFC0 (RtlInsertElementGenericTableFullAvl.c)
 * Callees:
 *     PromoteNode @ 0x18005D2B4 (PromoteNode.c)
 */

__int64 __fastcall RebalanceNode(__int64 a1)
{
  int v1; // r9d
  __int64 v2; // r10
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 result; // rax
  int v6; // edi
  char v7; // r9
  __int64 v8; // r10
  __int64 v9; // rbx
  __int64 v10; // rcx
  char v11; // r9
  __int64 v12; // r10
  __int64 v13; // r11

  v1 = *(char *)(a1 + 24);
  if ( *(_BYTE *)(a1 + 24) == 1 )
    v2 = *(_QWORD *)(a1 + 16);
  else
    v2 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v2 + 24) == (_BYTE)v1 )
  {
    PromoteNode(v2);
    *(_BYTE *)(v3 + 24) = 0;
    *(_BYTE *)(v4 + 24) = 0;
    return 0LL;
  }
  v6 = -v1;
  if ( *(char *)(v2 + 24) == -v1 )
  {
    if ( (_BYTE)v1 == 1 )
      v9 = *(_QWORD *)(v2 + 8);
    else
      v9 = *(_QWORD *)(v2 + 16);
    PromoteNode(v9);
    PromoteNode(v10);
    *(_BYTE *)(v13 + 24) = 0;
    *(_BYTE *)(v12 + 24) = 0;
    if ( *(_BYTE *)(v9 + 24) == v11 )
    {
      *(_BYTE *)(v13 + 24) = -v11;
    }
    else if ( *(char *)(v9 + 24) == v6 )
    {
      *(_BYTE *)(v12 + 24) = v11;
    }
    *(_BYTE *)(v9 + 24) = 0;
    return 0LL;
  }
  PromoteNode(v2);
  result = 1LL;
  *(_BYTE *)(v8 + 24) = -v7;
  return result;
}
