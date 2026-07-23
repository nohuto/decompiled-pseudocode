/*
 * XREFs of _RtlRbInsertNodeEx@16 @ 0x4B2CEB50
 * Callers:
 *     _EtwNotificationRegister@20 @ 0x4B2C1950 (_EtwNotificationRegister@20.c)
 *     _LdrpInsertModuleToIndexLockHeld@8 @ 0x4B2CC82C (_LdrpInsertModuleToIndexLockHeld@8.c)
 *     _LdrpCheckForRetryLoading@8 @ 0x4B2DE632 (_LdrpCheckForRetryLoading@8.c)
 *     _EtwpInsertGuidEntry@4 @ 0x4B2F2551 (_EtwpInsertGuidEntry@4.c)
 *     _LdrpAddRedirectedFunction@12 @ 0x4B333F08 (_LdrpAddRedirectedFunction@12.c)
 *     _RtlpHpLargeAlloc@16 @ 0x4B379D22 (_RtlpHpLargeAlloc@16.c)
 *     _RtlpHpVaMgrFree@8 @ 0x4B37AE7C (_RtlpHpVaMgrFree@8.c)
 *     _RtlpHpSegFreeRangeInsert@12 @ 0x4B37B9EA (_RtlpHpSegFreeRangeInsert@12.c)
 *     _RtlpHpVsFreeChunkInsert@12 @ 0x4B37F97E (_RtlpHpVsFreeChunkInsert@12.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbInsertNodeEx(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Parent, BOOLEAN Right, PRTL_BALANCED_NODE Node)
{
  PRTL_RB_TREE v4; // edx
  PRTL_BALANCED_NODE v5; // ecx
  PRTL_BALANCED_NODE v6; // esi
  $7D93978C745EB1C2D28075BAF55422B4 v7; // bh
  char v8; // bl
  unsigned int v9; // edi
  bool v10; // zf
  _RTL_BALANCED_NODE *v11; // ebx
  unsigned int v12; // eax
  _RTL_BALANCED_NODE *Min; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  int v20; // edi
  int v21; // eax
  int v22; // eax
  int v23; // edi
  unsigned int v24; // eax
  int v25; // edi
  _RTL_BALANCED_NODE *Root; // edi
  unsigned int v27; // eax
  unsigned int v28; // eax
  int v29; // eax
  unsigned int v30; // esi
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // esi
  unsigned int v35; // eax
  int v36; // esi
  unsigned int v37; // esi
  unsigned int v38; // edi
  int v39; // edi
  unsigned int *v41; // [esp+Ch] [ebp-20h]
  $AC7CE8346DFD1DD015FAB28EDBCC61B1 *v42; // [esp+14h] [ebp-18h]
  BOOL v43; // [esp+18h] [ebp-14h]
  int v44; // [esp+18h] [ebp-14h]
  int v45; // [esp+18h] [ebp-14h]
  int v46; // [esp+1Ch] [ebp-10h]
  int v47; // [esp+20h] [ebp-Ch]
  int v48; // [esp+20h] [ebp-Ch]
  int v49; // [esp+24h] [ebp-8h]
  char v50; // [esp+2Ah] [ebp-2h]
  $7D93978C745EB1C2D28075BAF55422B4 v51; // [esp+2Bh] [ebp-1h]

  v4 = Tree;
  v5 = Parent;
  v6 = Node;
  Node->0 = 0LL;
  v7 = Tree->0;
  v8 = *(_BYTE *)&v7 & 1;
  if ( !Parent )
  {
    v12 = (unsigned int)Node ^ (unsigned int)Tree;
    if ( v8 )
    {
      Tree->Root = (_RTL_BALANCED_NODE *)v12;
      v7 = Tree->0;
    }
    else
    {
      Tree->Root = Node;
    }
    if ( (*(_BYTE *)&v7 & 1) != 0 )
    {
      Tree->Min = (_RTL_BALANCED_NODE *)v12;
      *(_BYTE *)&Tree->0 |= 1u;
    }
    else
    {
      Tree->Min = Node;
    }
    Node->ParentValue = 0;
    return v12;
  }
  v9 = (unsigned int)Parent ^ (unsigned int)Node;
  v10 = v8 == 0;
  v11 = (_RTL_BALANCED_NODE *)((unsigned int)Parent ^ (unsigned int)Node);
  if ( v10 )
    v11 = Node;
  LOBYTE(v12) = Right;
  Parent->Children[Right] = v11;
  if ( (*(_BYTE *)&Tree->0 & 1) == 0 )
    v9 = (unsigned int)Parent;
  Node->ParentValue = v9 | 1;
  if ( !Right )
  {
    Min = Tree->Min;
    if ( ((unsigned __int8)Min & 1) != 0 )
      v12 = Min == (_RTL_BALANCED_NODE *)1 ? 0 : (unsigned int)Min ^ ((unsigned int)Tree | 1);
    else
      v12 = (unsigned int)Tree->Min;
    if ( Parent == (PRTL_BALANCED_NODE)v12 )
    {
      if ( ((unsigned __int8)Min & 1) != 0 )
      {
        LOBYTE(v12) = (unsigned __int8)Node ^ (unsigned __int8)Tree;
        Tree->Min = (_RTL_BALANCED_NODE *)((unsigned int)Node ^ (unsigned int)Tree);
        *(_BYTE *)&Tree->0 |= 1u;
      }
      else
      {
        Tree->Min = Node;
      }
    }
  }
  if ( (*(_BYTE *)&Parent->0 & 1) != 0 )
  {
    LOBYTE(v12) = Tree->0;
    v51 = ($7D93978C745EB1C2D28075BAF55422B4)v12;
    while ( 1 )
    {
      v14 = v5->ParentValue & 0xFFFFFFFC;
      v50 = v12 & 1;
      if ( (v12 & 1) != 0 && v14 )
        v14 ^= (unsigned int)v5;
      v15 = *(_DWORD *)v14;
      if ( v50 && v15 )
        v15 ^= v14;
      v47 = v15 != (_DWORD)v5;
      v43 = v15 == (_DWORD)v5;
      v12 = *(_DWORD *)(v14 + 4 * v43);
      if ( v50 )
      {
        if ( !v12 )
          break;
        v12 ^= v14;
      }
      if ( !v12 || (*(_BYTE *)(v12 + 8) & 1) == 0 )
        break;
      *(_BYTE *)&v5->0 &= ~1u;
      v6 = (PRTL_BALANCED_NODE)v14;
      *(_BYTE *)(v12 + 8) &= ~1u;
      v5 = (PRTL_BALANCED_NODE)(*(_DWORD *)(v14 + 8) & 0xFFFFFFFC);
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
      {
        if ( !v5 )
          return v12;
        v5 = (PRTL_BALANCED_NODE)(v14 ^ (unsigned int)v5);
      }
      if ( v5 )
      {
        *(_BYTE *)(v14 + 8) |= 1u;
        v12 = (unsigned int)v5->Children[0];
        v51 = Tree->0;
        if ( (*(_BYTE *)&v51 & 1) != 0 && v12 )
          v12 ^= (unsigned int)v5;
        v10 = v14 == v12;
        LOBYTE(v12) = Tree->0;
        Right = !v10;
        if ( (*(_BYTE *)&v5->0 & 1) != 0 )
          continue;
      }
      return v12;
    }
    if ( Right == v47 )
    {
LABEL_42:
      Root = v4->Root;
      if ( (*(_BYTE *)&v4->0 & 1) != 0 )
      {
        if ( Root )
          Root = (_RTL_BALANCED_NODE *)((unsigned int)v4 ^ (unsigned int)Root);
        else
          Root = 0;
      }
      v48 = v47 ^ 1;
      v27 = v5->ParentValue & 0xFFFFFFFC;
      v49 = *(_BYTE *)&v4->0 & 1;
      if ( (*(_BYTE *)&v4->0 & 1) != 0 && v27 )
        v27 ^= (unsigned int)v5;
      if ( v27 != v14 )
        goto LABEL_100;
      v28 = *(_DWORD *)(v14 + 4 * (v48 ^ 1));
      if ( (*(_BYTE *)&v4->0 & 1) != 0 && v28 )
        v28 ^= v14;
      if ( (PRTL_BALANCED_NODE)v28 != v5 )
        goto LABEL_100;
      v29 = *(_BYTE *)&v4->0 & 1;
      v41 = (unsigned int *)(v14 + 8);
      v30 = *(_DWORD *)(v14 + 8) & 0xFFFFFFFC;
      if ( (*(_BYTE *)&v4->0 & 1) != 0 )
      {
        if ( !v30 )
          goto LABEL_93;
        v30 ^= v14;
      }
      if ( v30 )
      {
        if ( (*(_BYTE *)&v4->0 & 1) != 0 && *(_DWORD *)(v30 + 4) )
          v31 = v30 ^ *(_DWORD *)(v30 + 4);
        else
          v31 = *(_DWORD *)(v30 + 4);
        if ( v31 == v14 )
        {
          if ( (*(_BYTE *)&v4->0 & 1) != 0 )
            v45 = (unsigned int)v5 ^ v30;
          else
            v45 = (int)v5;
          *(_DWORD *)(v30 + 4) = v45;
        }
        else
        {
          if ( (*(_BYTE *)&v4->0 & 1) != 0 && *(_DWORD *)v30 )
            v32 = v30 ^ *(_DWORD *)v30;
          else
            v32 = *(_DWORD *)v30;
          if ( v32 != v14 )
            goto LABEL_100;
          if ( (*(_BYTE *)&v4->0 & 1) != 0 )
            v44 = (unsigned int)v5 ^ v30;
          else
            v44 = (int)v5;
          *(_DWORD *)v30 = v44;
        }
        v29 = v49;
        goto LABEL_59;
      }
LABEL_93:
      if ( Root != (_RTL_BALANCED_NODE *)v14 )
        goto LABEL_100;
      Root = v5;
LABEL_59:
      if ( v29 && v30 )
        v30 ^= (unsigned int)v5;
      v33 = v30 | v5->ParentValue & 3;
      v34 = v49;
      v5->ParentValue = v33;
      v35 = (unsigned int)v5->Children[v48];
      if ( v49 )
      {
        if ( !v35 )
        {
LABEL_62:
          if ( v34 && v35 )
            v35 ^= v14;
          *(_DWORD *)(v14 + 4 * (v48 ^ 1)) = v35;
          v36 = (unsigned int)v5 ^ v14;
          if ( v49 )
            v14 ^= (unsigned int)v5;
          v5->Children[v48] = (_RTL_BALANCED_NODE *)v14;
          if ( !v49 )
            v36 = (int)v5;
          v12 = v36 | *v41 & 3;
          *v41 = v12;
          if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
          {
            LOBYTE(v12) = (unsigned __int8)Root ^ (unsigned __int8)Tree;
            Root = Root != 0 ? (_RTL_BALANCED_NODE *)((unsigned int)Root ^ (unsigned int)Tree) : 0;
          }
          Tree->Root = Root;
          *(_BYTE *)v41 |= 1u;
          *(_BYTE *)&v5->0 &= ~1u;
          return v12;
        }
        v35 ^= (unsigned int)v5;
      }
      if ( !v35 )
        goto LABEL_62;
      v37 = *(_DWORD *)(v35 + 8) & 0xFFFFFFFC;
      if ( v49 && v37 )
        v37 ^= v35;
      if ( (PRTL_BALANCED_NODE)v37 == v5 )
      {
        if ( v49 )
          v46 = v14 ^ v35;
        else
          v46 = v14;
        *(_DWORD *)(v35 + 8) = v46 | *(_DWORD *)(v35 + 8) & 3;
        v34 = v49;
        goto LABEL_62;
      }
LABEL_100:
      __fastfail(0x1Du);
    }
    v16 = v6->ParentValue & 0xFFFFFFFC;
    if ( (*(_BYTE *)&v51 & 1) != 0 && v16 )
      v16 ^= (unsigned int)v6;
    if ( (PRTL_BALANCED_NODE)v16 != v5 )
      goto LABEL_100;
    v17 = (unsigned int)v5->Children[v43];
    if ( (*(_BYTE *)&v51 & 1) != 0 && v17 )
      v17 ^= (unsigned int)v5;
    if ( (PRTL_BALANCED_NODE)v17 != v6 )
      goto LABEL_100;
    v18 = *(_DWORD *)(v14 + 4 * v47);
    if ( (*(_BYTE *)&v51 & 1) != 0 && v18 )
      v18 ^= v14;
    if ( (PRTL_BALANCED_NODE)v18 != v5 )
      goto LABEL_100;
    v42 = &v5->8;
    v19 = v5->ParentValue & 0xFFFFFFFC;
    if ( (*(_BYTE *)&v51 & 1) != 0 && v19 )
      v19 ^= (unsigned int)v5;
    if ( v19 != v14 )
      goto LABEL_100;
    v20 = (unsigned int)v6 ^ v14;
    v21 = (unsigned int)v6 ^ v14;
    if ( (*(_BYTE *)&v51 & 1) == 0 )
      v21 = (int)v6;
    *(_DWORD *)(v14 + 4 * v47) = v21;
    if ( (*(_BYTE *)&v51 & 1) == 0 )
      v20 = v14;
    v22 = v20 | v6->ParentValue & 3;
    v23 = *(_BYTE *)&v51 & 1;
    v6->ParentValue = v22;
    v24 = (unsigned int)v6->Children[v47];
    if ( (*(_BYTE *)&v51 & 1) != 0 )
    {
      if ( !v24 )
      {
LABEL_36:
        if ( v23 && v24 )
          v24 ^= (unsigned int)v5;
        v5->Children[v43] = (_RTL_BALANCED_NODE *)v24;
        v25 = (unsigned int)v5 ^ (unsigned int)v6;
        if ( (*(_BYTE *)&v51 & 1) != 0 )
          v5 = (PRTL_BALANCED_NODE)((unsigned int)v5 ^ (unsigned int)v6);
        v6->Children[v47] = v5;
        if ( (*(_BYTE *)&v51 & 1) == 0 )
          v25 = (int)v6;
        v4 = Tree;
        v42->ParentValue = v25 | v42->ParentValue & 3;
        v5 = v6;
        goto LABEL_42;
      }
      v24 ^= (unsigned int)v6;
    }
    if ( v24 )
    {
      v38 = *(_DWORD *)(v24 + 8) & 0xFFFFFFFC;
      if ( (*(_BYTE *)&v51 & 1) != 0 && v38 )
        v38 ^= v24;
      if ( (PRTL_BALANCED_NODE)v38 != v6 )
        goto LABEL_100;
      if ( (*(_BYTE *)&v51 & 1) != 0 )
        v39 = (unsigned int)v5 ^ v24;
      else
        v39 = (int)v5;
      *(_DWORD *)(v24 + 8) = v39 | *(_DWORD *)(v24 + 8) & 3;
      v23 = *(_BYTE *)&v51 & 1;
    }
    goto LABEL_36;
  }
  return v12;
}
