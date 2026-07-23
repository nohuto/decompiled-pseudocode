/*
 * XREFs of RtlRbRemoveNode @ 0x18002A0A0
 * Callers:
 *     RtlpHpLargeFree @ 0x180003280 (RtlpHpLargeFree.c)
 *     RtlpHpVaMgrAlloc @ 0x180005BCC (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRangeCoalesce @ 0x180005EE8 (RtlpHpVaMgrRangeCoalesce.c)
 *     RtlpHpSegFreeRangeRemove @ 0x180006DB8 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x1800281F0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpVsContextFree @ 0x180028500 (RtlpHpVsContextFree.c)
 *     RtlpHpVsChunkSplit @ 0x180029280 (RtlpHpVsChunkSplit.c)
 *     RtlpHpSegAlloc @ 0x180029B70 (RtlpHpSegAlloc.c)
 *     EtwpRemoveRegistrationFromTable @ 0x180050528 (EtwpRemoveRegistrationFromTable.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180050C48 (EtwpDereferenceUmGuidEntry.c)
 *     RtlpHpVsFreeChunkRemove @ 0x180064F58 (RtlpHpVsFreeChunkRemove.c)
 *     LdrpUnloadNode @ 0x18006A4F8 (LdrpUnloadNode.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbRemoveNode(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Node)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r10
  _RTL_BALANCED_NODE *v6; // rbp
  char v7; // r11
  unsigned __int64 v8; // rax
  _RTL_BALANCED_NODE *v9; // rdi
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _RTL_BALANCED_NODE *v13; // rax
  _BOOL8 v14; // rsi
  _RTL_BALANCED_NODE *v15; // rcx
  char v16; // al
  unsigned __int64 v17; // r8
  char v18; // r8
  _RTL_BALANCED_NODE *v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  _RTL_BALANCED_NODE *v22; // rax
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rax
  char v25; // r11
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  char v29; // r8
  unsigned __int64 v30; // r8
  char v31; // cl
  unsigned __int64 v32; // r9
  char v33; // cl
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rcx
  char v38; // r9
  unsigned __int64 v39; // r11
  __int64 v40; // rax
  unsigned __int64 *v41; // r11
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rax
  $7D93978C745EB1C2D28075BAF55422B4 v45; // cl
  _RTL_BALANCED_NODE *v46; // r15
  __int64 v47; // r10
  unsigned __int64 v48; // rax
  _RTL_BALANCED_NODE *v49; // rdx
  $FBE9DFC73C710CED4CE990514FEA3AEC *v50; // r8
  _RTL_BALANCED_NODE *v51; // r8
  char v52; // cl
  _RTL_BALANCED_NODE *v53; // r8
  $424C8BBEF8F6C852886B4C6E806B5DB0 v54; // al
  char v55; // cl
  unsigned __int64 v56; // rcx
  $7D93978C745EB1C2D28075BAF55422B4 v57; // cl
  _RTL_BALANCED_NODE *Min; // r9
  unsigned __int64 Root; // rax
  _RTL_BALANCED_NODE *v60; // rax
  _RTL_BALANCED_NODE *v61; // r9
  $FBE9DFC73C710CED4CE990514FEA3AEC *v62; // r11
  unsigned __int64 v63; // r15
  unsigned __int64 v64; // rax
  int v65; // r9d
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // r8
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // r8
  _RTL_BALANCED_NODE **v71; // rsi
  _RTL_BALANCED_NODE *v72; // r8
  __int64 v73; // rcx
  unsigned __int64 v74; // rax
  int v75; // r9d
  __int64 v76; // r11
  _RTL_BALANCED_NODE **v77; // r15
  _RTL_BALANCED_NODE *v78; // rax
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // rax
  _RTL_BALANCED_NODE *v81; // rax
  unsigned __int64 v82; // rcx
  _RTL_BALANCED_NODE **v83; // r14
  _RTL_BALANCED_NODE *v84; // r11
  _RTL_BALANCED_NODE *v85; // rax
  bool v86; // zf
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // r13
  unsigned __int64 v90; // rcx
  int v91; // r14d
  unsigned __int64 v92; // r11
  unsigned __int64 v93; // rax
  unsigned __int64 v94; // rax
  _RTL_BALANCED_NODE **v95; // r11
  unsigned __int64 v96; // r9
  _RTL_BALANCED_NODE *v97; // rax
  _RTL_BALANCED_NODE *v98; // rcx
  unsigned __int64 v99; // rax
  unsigned __int64 v100; // rax
  unsigned __int64 v101; // r14
  unsigned __int64 v102; // rax
  unsigned __int64 v103; // rcx
  unsigned __int64 ParentValue; // r12
  unsigned __int64 v105; // rax
  unsigned __int64 v106; // rcx
  unsigned __int64 v107; // rax
  unsigned __int64 v108; // rax
  unsigned __int64 v109; // r12
  unsigned __int64 v110; // rax
  unsigned __int64 v111; // rcx
  unsigned __int64 v112; // rcx
  bool v113; // zf

  v3 = (unsigned __int64)Node->Children[0];
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v3 )
    v3 ^= (unsigned __int64)Node;
  v4 = (unsigned __int64)Node->Children[1];
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v4 )
    v4 ^= (unsigned __int64)Node;
  v5 = v4;
  if ( v3 )
    v5 = v3;
  v6 = 0LL;
  v7 = *(_BYTE *)&Tree->0 & 1;
  v8 = 0LL;
  if ( v3 )
    v8 = v4;
  if ( v8 )
  {
    v21 = *(_QWORD *)v4;
    v10 = v4;
    v9 = (_RTL_BALANCED_NODE *)v4;
    LODWORD(v14) = 1;
    if ( *(_QWORD *)v4 )
    {
      LODWORD(v14) = 0;
      do
      {
        v9 = (_RTL_BALANCED_NODE *)v10;
        if ( v7 && v21 )
          v10 ^= v21;
        else
          v10 = v21;
        v21 = *(_QWORD *)v10;
      }
      while ( *(_QWORD *)v10 );
    }
    if ( v7 && v3 )
      v22 = (_RTL_BALANCED_NODE *)(v3 ^ v10);
    else
      v22 = (_RTL_BALANCED_NODE *)v3;
    *(_QWORD *)v10 = v22;
    v23 = *(_QWORD *)(v3 + 16);
    v24 = v23 & 0xFFFFFFFFFFFFFFFCuLL;
    v25 = *(_BYTE *)&Tree->0 & 1;
    if ( v25 && v24 )
      v24 ^= v3;
    if ( (PRTL_BALANCED_NODE)v24 != Node )
      goto LABEL_200;
    v26 = v10;
    if ( v25 )
      v26 = v3 ^ v10;
    *(_QWORD *)(v3 + 16) = v26 | v23 & 3;
    v27 = *(_QWORD *)(v4 + 16);
    v28 = v27 & 0xFFFFFFFFFFFFFFFCuLL;
    v29 = *(_BYTE *)&Tree->0 & 1;
    if ( v29 && v28 )
      v28 ^= v4;
    if ( (PRTL_BALANCED_NODE)v28 != Node )
      goto LABEL_200;
    if ( v29 )
      v30 = v4 ^ v10;
    else
      v30 = v10;
    *(_QWORD *)(v4 + 16) = v30 | v27 & 3;
    v5 = *(_QWORD *)(v10 + 8);
    v31 = *(_BYTE *)&Tree->0 & 1;
    if ( v31 && v5 )
      v5 ^= v10;
    v17 = *(_QWORD *)(v10 + 16);
    if ( v31 )
      v4 ^= v10;
    *(_QWORD *)(v10 + 8) = v4;
    v32 = v17 & 0xFFFFFFFFFFFFFFFCuLL;
    v33 = *(_BYTE *)&Tree->0 & 1;
    if ( v33 && v32 )
      v34 = v10 ^ v32;
    else
      v34 = v17 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (_RTL_BALANCED_NODE *)v34 == v9 )
      goto LABEL_48;
    if ( v33 )
    {
      if ( !v32 )
        goto LABEL_218;
      v32 ^= v10;
    }
    if ( v32 )
      goto LABEL_200;
LABEL_218:
    if ( (_RTL_BALANCED_NODE *)v10 != v9 )
      goto LABEL_200;
LABEL_48:
    v35 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v33 )
    {
      if ( v35 )
        v35 ^= (unsigned __int64)Node;
      if ( v35 )
        v35 ^= v10;
    }
    v36 = v35 | v17 & 3;
    *(_QWORD *)(v10 + 16) = v36;
    *(_BYTE *)(v10 + 16) = v36 ^ (*(_BYTE *)&Node->0 ^ v36) & 1;
    v37 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v37 )
    {
      v38 = *(_BYTE *)&Tree->0 & 1;
      if ( v38 )
        v37 ^= (unsigned __int64)Node;
      v39 = *(_QWORD *)(v37 + 8);
      if ( v38 && v39 )
        v39 ^= v37;
      v40 = 0LL;
      if ( (PRTL_BALANCED_NODE)v39 == Node )
        v40 = 8LL;
      v41 = (unsigned __int64 *)(v40 + v37);
      v42 = *(_QWORD *)(v40 + v37);
      if ( v38 && v42 )
        v42 ^= v37;
      if ( (PRTL_BALANCED_NODE)v42 != Node )
        goto LABEL_200;
      v43 = v10 ^ v37;
      v44 = v10;
      if ( v38 )
        v44 = v43;
      *v41 = v44;
    }
    else
    {
      Min = Tree->Min;
      Root = (unsigned __int64)Tree->Root;
      if ( ((unsigned __int8)Min & 1) != 0 )
      {
        if ( Root )
          Root ^= (unsigned __int64)Tree;
        else
          Root = 0LL;
      }
      if ( (PRTL_BALANCED_NODE)Root != Node )
        goto LABEL_200;
      v60 = (_RTL_BALANCED_NODE *)v10;
      if ( ((unsigned __int8)Min & 1) != 0 )
        v60 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ v10);
      Tree->Root = v60;
    }
    goto LABEL_22;
  }
  v9 = (_RTL_BALANCED_NODE *)(Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
  if ( v7 && v9 )
    v9 = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)v9);
  v10 = (unsigned __int64)Node;
  if ( !v9 )
  {
    if ( v5 )
      *(_QWORD *)(v5 + 16) = 0LL;
    v20 = (unsigned __int64)Tree->Min;
    v56 = (unsigned __int64)Tree->Root;
    if ( (v20 & 1) != 0 )
    {
      if ( v56 )
        v56 ^= (unsigned __int64)Tree;
      else
        v56 = 0LL;
    }
    if ( (PRTL_BALANCED_NODE)v56 != Node )
      goto LABEL_200;
    if ( (v20 & 1) != 0 )
    {
      v112 = 0LL;
      LOBYTE(v20) = (unsigned __int8)Tree ^ v5;
      if ( v5 )
        v112 = (unsigned __int64)Tree ^ v5;
      Tree->Min = (_RTL_BALANCED_NODE *)v112;
      v57 = ($7D93978C745EB1C2D28075BAF55422B4)(v112 | 1);
      Tree->0 = v57;
    }
    else
    {
      Tree->Min = (_RTL_BALANCED_NODE *)v5;
      v57 = ($7D93978C745EB1C2D28075BAF55422B4)v5;
    }
    if ( (*(_BYTE *)&v57 & 1) != 0 )
    {
      v20 = (unsigned __int64)Tree ^ v5;
      v113 = v5 == 0;
      goto LABEL_329;
    }
    v6 = (_RTL_BALANCED_NODE *)v5;
LABEL_80:
    Tree->Root = v6;
    return v20;
  }
  v11 = (unsigned __int64)v9->Children[1];
  if ( v7 && v11 )
    v11 ^= (unsigned __int64)v9;
  if ( (PRTL_BALANCED_NODE)v11 == Node )
  {
    LODWORD(v14) = 1;
  }
  else
  {
    v12 = (unsigned __int64)v9->Children[0];
    if ( v7 && v12 )
      v12 ^= (unsigned __int64)v9;
    if ( (PRTL_BALANCED_NODE)v12 != Node )
      goto LABEL_200;
    v13 = Tree->Min;
    LODWORD(v14) = 0;
    if ( ((unsigned __int8)v13 & 1) != 0 )
    {
      if ( v13 == (_RTL_BALANCED_NODE *)1 )
        v15 = 0LL;
      else
        v15 = (_RTL_BALANCED_NODE *)((unsigned __int64)v13 ^ ((unsigned __int64)Tree | 1));
    }
    else
    {
      v15 = Tree->Min;
    }
    if ( v15 == Node )
    {
      v16 = (unsigned __int8)v13 & 1;
      if ( v5 )
      {
        if ( v16 )
        {
          Tree->Min = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ v5);
          Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)((unsigned __int8)Tree ^ v5 | 1);
        }
        else
        {
          Tree->Min = (_RTL_BALANCED_NODE *)v5;
        }
      }
      else if ( v16 )
      {
        Tree->Min = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ (unsigned __int64)v9);
        Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)((unsigned __int8)Tree ^ (unsigned __int8)v9 | 1);
      }
      else
      {
        Tree->Min = v9;
      }
    }
  }
  LOBYTE(v17) = Node->0;
LABEL_22:
  v18 = v17 & 1;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v5 )
    v19 = (_RTL_BALANCED_NODE *)(v5 ^ (unsigned __int64)v9);
  else
    v19 = (_RTL_BALANCED_NODE *)v5;
  LOBYTE(v20) = v14;
  v9->Children[v14] = v19;
  if ( !v5 )
  {
    if ( v18 )
      return v20;
    v45 = Tree->0;
    while ( 1 )
    {
      v46 = v9;
      v47 = !v14;
      v48 = (unsigned __int64)v9->Children[v47];
      if ( (*(_BYTE *)&v45 & 1) != 0 && v48 )
        v49 = (_RTL_BALANCED_NODE *)((unsigned __int64)v9 ^ v48);
      else
        v49 = v9->Children[v47];
      v50 = &v49->16;
      if ( (*(_BYTE *)&v49->0 & 1) == 0 )
        goto LABEL_64;
      v89 = (unsigned __int64)Tree->Root;
      if ( ((__int64)Tree->Min & 1) != 0 )
      {
        if ( v89 )
          v89 ^= (unsigned __int64)Tree;
        else
          v89 = 0LL;
      }
      v90 = v50->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      v91 = (__int64)Tree->Min & 1;
      if ( ((__int64)Tree->Min & 1) != 0 && v90 )
        v90 ^= (unsigned __int64)v49;
      if ( (_RTL_BALANCED_NODE *)v90 != v9 )
        goto LABEL_200;
      if ( ((__int64)Tree->Min & 1) != 0 && v48 )
        v48 ^= (unsigned __int64)v9;
      if ( (_RTL_BALANCED_NODE *)v48 != v49 )
        goto LABEL_200;
      v92 = v9->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( ((__int64)Tree->Min & 1) != 0 )
      {
        if ( !v92 )
        {
LABEL_193:
          if ( (_RTL_BALANCED_NODE *)v89 != v9 )
            goto LABEL_200;
          v89 = (unsigned __int64)v49;
          goto LABEL_159;
        }
        v92 ^= (unsigned __int64)v9;
      }
      if ( !v92 )
        goto LABEL_193;
      v93 = *(_QWORD *)(v92 + 8);
      if ( ((__int64)Tree->Min & 1) != 0 && v93 )
        v93 ^= v92;
      if ( (_RTL_BALANCED_NODE *)v93 == v9 )
      {
        v94 = (unsigned __int64)v49;
        if ( ((__int64)Tree->Min & 1) != 0 )
          v94 = (unsigned __int64)v49 ^ v92;
        *(_QWORD *)(v92 + 8) = v94;
      }
      else
      {
        v107 = *(_QWORD *)v92;
        if ( ((__int64)Tree->Min & 1) != 0 && v107 )
          v107 ^= v92;
        if ( (_RTL_BALANCED_NODE *)v107 != v9 )
          goto LABEL_200;
        v108 = (unsigned __int64)v49;
        if ( ((__int64)Tree->Min & 1) != 0 )
          v108 = (unsigned __int64)v49 ^ v92;
        *(_QWORD *)v92 = v108;
      }
LABEL_159:
      if ( v91 && v92 )
        v92 ^= (unsigned __int64)v49;
      v50->ParentValue &= 3uLL;
      v50->ParentValue |= v92;
      v95 = &v49->Children[v14];
      v96 = (unsigned __int64)*v95;
      if ( !v91 )
        goto LABEL_161;
      if ( v96 )
      {
        v96 ^= (unsigned __int64)v49;
LABEL_161:
        if ( v96 )
        {
          v109 = *(_QWORD *)(v96 + 16);
          v110 = v109 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v91 && v110 )
            v110 ^= v96;
          if ( (_RTL_BALANCED_NODE *)v110 != v49 )
            goto LABEL_200;
          v111 = (unsigned __int64)v9;
          if ( v91 )
            v111 = (unsigned __int64)v9 ^ v96;
          *(_QWORD *)(v96 + 16) = v111 | v109 & 3;
        }
      }
      if ( v91 && v96 )
        v96 ^= (unsigned __int64)v9;
      v9->Children[v47] = (_RTL_BALANCED_NODE *)v96;
      v97 = v9;
      if ( v91 )
      {
        v97 = (_RTL_BALANCED_NODE *)((unsigned __int64)v9 ^ (unsigned __int64)v49);
        v49 = (_RTL_BALANCED_NODE *)((unsigned __int64)v9 ^ (unsigned __int64)v49);
      }
      *v95 = v97;
      v9->ParentValue &= 3uLL;
      v9->ParentValue |= (unsigned __int64)v49;
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
      {
        v98 = 0LL;
        if ( v89 )
          v98 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ v89);
      }
      else
      {
        v98 = (_RTL_BALANCED_NODE *)v89;
      }
      Tree->Root = v98;
      *(_BYTE *)&v50->0 &= ~1u;
      *(_BYTE *)&v9->0 |= 1u;
      v45 = Tree->0;
      v49 = v9->Children[v47];
      if ( (*(_BYTE *)&v45 & 1) != 0 && v49 )
        v49 = (_RTL_BALANCED_NODE *)((unsigned __int64)v9 ^ (unsigned __int64)v49);
LABEL_64:
      v51 = v49->Children[0];
      v52 = *(_BYTE *)&v45 & 1;
      if ( v49->Children[0] )
      {
        if ( v52 )
          v51 = (_RTL_BALANCED_NODE *)((unsigned __int64)v49 ^ (unsigned __int64)v51);
        if ( (*(_BYTE *)&v51->0 & 1) != 0 )
          goto LABEL_94;
      }
      v53 = v49->Children[1];
      if ( v53 )
      {
        if ( v52 )
          v53 = (_RTL_BALANCED_NODE *)((unsigned __int64)v49 ^ (unsigned __int64)v53);
        if ( (*(_BYTE *)&v53->0 & 1) != 0 )
        {
LABEL_94:
          v61 = v49->Children[v47];
          if ( v52 )
          {
            if ( v61 )
            {
              v61 = (_RTL_BALANCED_NODE *)((unsigned __int64)v49 ^ (unsigned __int64)v61);
              goto LABEL_95;
            }
          }
          else
          {
LABEL_95:
            if ( v61 && (*(_BYTE *)&v61->0 & 1) != 0 )
              goto LABEL_97;
          }
          v72 = v49->Children[v14];
          if ( v52 && v72 )
            v72 = (_RTL_BALANCED_NODE *)((unsigned __int64)v49 ^ (unsigned __int64)v72);
          *(_BYTE *)&v72->0 &= ~1u;
          v73 = (unsigned int)v14 ^ 1;
          v74 = v72->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
          v75 = *(_BYTE *)&Tree->0 & 1;
          if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v74 )
            v74 ^= (unsigned __int64)v72;
          if ( (_RTL_BALANCED_NODE *)v74 != v49 )
            goto LABEL_200;
          v76 = (unsigned int)v73;
          v77 = &v49->Children[v14];
          v78 = *v77;
          if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v78 )
            v78 = (_RTL_BALANCED_NODE *)((unsigned __int64)v49 ^ (unsigned __int64)v78);
          if ( v78 != v72 )
            goto LABEL_200;
          v79 = (unsigned __int64)v9->Children[v73];
          if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v79 )
            v79 ^= (unsigned __int64)v9;
          if ( (_RTL_BALANCED_NODE *)v79 != v49 )
            goto LABEL_200;
          v80 = v49->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v80 )
            v80 ^= (unsigned __int64)v49;
          if ( (_RTL_BALANCED_NODE *)v80 != v9 )
            goto LABEL_200;
          v81 = v72;
          v82 = (unsigned __int64)v72 ^ (unsigned __int64)v9;
          if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
            v81 = (_RTL_BALANCED_NODE *)((unsigned __int64)v72 ^ (unsigned __int64)v9);
          v9->Children[v76] = v81;
          if ( !v75 || !v9 )
            v82 = (unsigned __int64)v9;
          v72->ParentValue &= 3uLL;
          v83 = &v72->Children[v76];
          v72->ParentValue |= v82;
          v84 = *v83;
          if ( !v75 )
          {
LABEL_135:
            if ( !v84 )
              goto LABEL_136;
            ParentValue = v84->ParentValue;
            v105 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v75 && v105 )
              v105 ^= (unsigned __int64)v84;
            if ( (_RTL_BALANCED_NODE *)v105 == v72 )
            {
              v106 = (unsigned __int64)v49;
              if ( v75 )
                v106 = (unsigned __int64)v49 ^ (unsigned __int64)v84;
              v84->ParentValue = v106 | ParentValue & 3;
              goto LABEL_136;
            }
            goto LABEL_200;
          }
          if ( v84 )
          {
            v84 = (_RTL_BALANCED_NODE *)((unsigned __int64)v72 ^ (unsigned __int64)v84);
            goto LABEL_135;
          }
LABEL_136:
          if ( v75 && v84 )
            v84 = (_RTL_BALANCED_NODE *)((unsigned __int64)v49 ^ (unsigned __int64)v84);
          *v77 = v84;
          v85 = v49;
          v86 = v75 == 0;
          v61 = v49;
          if ( !v86 )
            v85 = (_RTL_BALANCED_NODE *)((unsigned __int64)v72 ^ (unsigned __int64)v49);
          *v83 = v85;
          v87 = (unsigned __int64)v72;
          if ( !v86 )
            v87 = (unsigned __int64)v72 ^ (unsigned __int64)v49;
          v49->ParentValue &= 3uLL;
          v49->ParentValue |= v87;
          v49 = v72;
LABEL_97:
          v62 = &v9->16;
          *(_BYTE *)&v49->0 ^= (*(_BYTE *)&v9->0 ^ *(_BYTE *)&v49->0) & 1;
          *(_BYTE *)&v9->0 &= ~1u;
          *(_BYTE *)&v61->0 &= ~1u;
          v63 = (unsigned __int64)Tree->Root;
          if ( ((__int64)Tree->Min & 1) != 0 )
          {
            if ( v63 )
              v63 ^= (unsigned __int64)Tree;
            else
              v63 = 0LL;
          }
          v64 = v49->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
          v65 = (__int64)Tree->Min & 1;
          if ( ((__int64)Tree->Min & 1) != 0 && v64 )
            v64 ^= (unsigned __int64)v49;
          if ( (_RTL_BALANCED_NODE *)v64 != v9 )
            goto LABEL_200;
          v66 = (unsigned __int64)v9->Children[v47];
          if ( ((__int64)Tree->Min & 1) != 0 && v66 )
            v66 ^= (unsigned __int64)v9;
          if ( (_RTL_BALANCED_NODE *)v66 != v49 )
LABEL_200:
            __fastfail(0x1Du);
          v67 = v62->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
          if ( ((__int64)Tree->Min & 1) != 0 )
          {
            if ( v67 )
            {
              v67 ^= (unsigned __int64)v9;
              goto LABEL_103;
            }
          }
          else
          {
LABEL_103:
            if ( v67 )
            {
              v68 = *(_QWORD *)(v67 + 8);
              if ( ((__int64)Tree->Min & 1) != 0 && v68 )
                v68 ^= v67;
              if ( (_RTL_BALANCED_NODE *)v68 == v9 )
              {
                v69 = (unsigned __int64)v49;
                if ( ((__int64)Tree->Min & 1) != 0 )
                  v69 = (unsigned __int64)v49 ^ v67;
                *(_QWORD *)(v67 + 8) = v69;
              }
              else
              {
                v99 = *(_QWORD *)v67;
                if ( ((__int64)Tree->Min & 1) != 0 && v99 )
                  v99 ^= v67;
                if ( (_RTL_BALANCED_NODE *)v99 != v9 )
                  goto LABEL_200;
                v100 = (unsigned __int64)v49;
                if ( ((__int64)Tree->Min & 1) != 0 )
                  v100 = (unsigned __int64)v49 ^ v67;
                *(_QWORD *)v67 = v100;
              }
LABEL_109:
              if ( v65 && v67 )
                v67 ^= (unsigned __int64)v49;
              v49->ParentValue &= 3uLL;
              v49->ParentValue |= v67;
              v70 = (unsigned __int64)v49->Children[v14];
              v71 = &v49->Children[v14];
              if ( v65 )
              {
                if ( v70 )
                {
                  v70 ^= (unsigned __int64)v49;
                  goto LABEL_111;
                }
              }
              else
              {
LABEL_111:
                if ( v70 )
                {
                  v101 = *(_QWORD *)(v70 + 16);
                  v102 = v101 & 0xFFFFFFFFFFFFFFFCuLL;
                  if ( v65 && v102 )
                    v102 ^= v70;
                  if ( (_RTL_BALANCED_NODE *)v102 != v49 )
                    goto LABEL_200;
                  v103 = (unsigned __int64)v9;
                  if ( v65 )
                    v103 = (unsigned __int64)v9 ^ v70;
                  *(_QWORD *)(v70 + 16) = v103 | v101 & 3;
                }
              }
              if ( v65 && v70 )
                v70 ^= (unsigned __int64)v9;
              v9->Children[v47] = (_RTL_BALANCED_NODE *)v70;
              v20 = (unsigned __int64)v9 ^ (unsigned __int64)v49;
              if ( v65 )
              {
                v9 = (_RTL_BALANCED_NODE *)((unsigned __int64)v9 ^ (unsigned __int64)v49);
                v49 = (_RTL_BALANCED_NODE *)v20;
              }
              *v71 = v9;
              v62->ParentValue &= 3uLL;
              v62->ParentValue |= (unsigned __int64)v49;
              if ( (*(_BYTE *)&Tree->0 & 1) == 0 )
              {
                Tree->Root = (_RTL_BALANCED_NODE *)v63;
                return v20;
              }
              v20 = (unsigned __int64)Tree ^ v63;
              v113 = v63 == 0;
LABEL_329:
              if ( !v113 )
                v6 = (_RTL_BALANCED_NODE *)v20;
              goto LABEL_80;
            }
          }
          if ( (_RTL_BALANCED_NODE *)v63 != v9 )
            goto LABEL_200;
          v63 = (unsigned __int64)v49;
          goto LABEL_109;
        }
      }
      v54 = v9->0;
      if ( (*(_BYTE *)&v54 & 1) != 0 )
      {
        LOBYTE(v20) = *(_BYTE *)&v54 & 0xFE;
        v9->0 = ($424C8BBEF8F6C852886B4C6E806B5DB0)v20;
        *(_BYTE *)&v49->0 |= 1u;
        return v20;
      }
      *(_BYTE *)&v49->0 |= 1u;
      v45 = Tree->0;
      v20 = v9->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (*(_BYTE *)&v45 & 1) != 0 && v20 )
        v9 = (_RTL_BALANCED_NODE *)(v20 ^ (unsigned __int64)v9);
      else
        v9 = (_RTL_BALANCED_NODE *)(v9->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
      if ( !v9 )
        return v20;
      v88 = (unsigned __int64)v9->Children[1];
      if ( (*(_BYTE *)&v45 & 1) != 0 && v88 )
        v88 ^= (unsigned __int64)v9;
      v14 = v88 == (_QWORD)v46;
    }
  }
  v20 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v55 = *(_BYTE *)&Tree->0 & 1;
  if ( v55 && v20 )
    v20 ^= v5;
  if ( v20 != v10 )
    goto LABEL_200;
  if ( v55 && v9 )
    v9 = (_RTL_BALANCED_NODE *)(v5 ^ (unsigned __int64)v9);
  *(_QWORD *)(v5 + 16) = v9;
  return v20;
}
