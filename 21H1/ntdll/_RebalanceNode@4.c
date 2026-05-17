/*
 * XREFs of _RebalanceNode@4 @ 0x4B2A70E5
 * Callers:
 *     _DeleteNodeFromTree@8 @ 0x4B2A6E48 (_DeleteNodeFromTree@8.c)
 *     _RtlInsertElementGenericTableFullAvl@24 @ 0x4B2A6F20 (_RtlInsertElementGenericTableFullAvl@24.c)
 * Callees:
 *     _PromoteNode@4 @ 0x4B2A7176 (_PromoteNode@4.c)
 */

int __thiscall RebalanceNode(int this)
{
  char v2; // bl
  int v3; // esi
  char v4; // al
  int v6; // ecx
  int v7; // ecx
  char v8; // al
  int v9; // [esp+Ch] [ebp-8h]
  int v10; // [esp+10h] [ebp-4h]

  v2 = *(_BYTE *)(this + 12);
  if ( v2 == 1 )
    v3 = *(_DWORD *)(this + 8);
  else
    v3 = *(_DWORD *)(this + 4);
  v4 = *(_BYTE *)(v3 + 12);
  if ( v4 == v2 )
  {
    PromoteNode(v3);
    *(_BYTE *)(v3 + 12) = 0;
    *(_BYTE *)(this + 12) = 0;
    return 0;
  }
  v9 = -v2;
  if ( v4 == v9 )
  {
    if ( v2 == 1 )
      v6 = *(_DWORD *)(v3 + 4);
    else
      v6 = *(_DWORD *)(v3 + 8);
    v10 = v6;
    PromoteNode(v6);
    PromoteNode(v7);
    *(_BYTE *)(this + 12) = 0;
    *(_BYTE *)(v3 + 12) = 0;
    v8 = *(_BYTE *)(v10 + 12);
    if ( v8 == v2 )
    {
      *(_BYTE *)(this + 12) = -v2;
    }
    else if ( v8 == v9 )
    {
      *(_BYTE *)(v3 + 12) = v2;
    }
    *(_BYTE *)(v10 + 12) = 0;
    return 0;
  }
  PromoteNode(v3);
  *(_BYTE *)(v3 + 12) = -v2;
  return 1;
}
