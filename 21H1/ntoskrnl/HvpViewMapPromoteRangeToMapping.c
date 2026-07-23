/*
 * XREFs of HvpViewMapPromoteRangeToMapping @ 0x140685294
 * Callers:
 *     HvpAddBin @ 0x140685BBC (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x140698568 (HvpRemapAndEnlistHiveBins.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024EAD0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14024F7F0 (RtlRbInsertNodeEx.c)
 *     CmSiGetMemoryAllocationGranularity @ 0x1402E0B04 (CmSiGetMemoryAllocationGranularity.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     CmSiUnmapViewOfSection @ 0x14031C6A8 (CmSiUnmapViewOfSection.c)
 *     HvpViewMapMakeViewRangeValid @ 0x140686998 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapCreateView @ 0x140686B6C (HvpViewMapCreateView.c)
 *     HvpViewMapMigrateCOWData @ 0x14071EA4C (HvpViewMapMigrateCOWData.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x14071FD30 (HvpViewMapMakeViewRangeInvalid.c)
 */

__int64 __fastcall HvpViewMapPromoteRangeToMapping(__int64 a1, int a2, unsigned int a3, __int64 *a4)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rdi
  __int64 v6; // r12
  _RTL_BALANCED_NODE *v7; // r13
  bool v8; // zf
  __int64 v9; // rbx
  int v10; // ecx
  unsigned __int64 v11; // rax
  int ViewRangeValid; // esi
  __int64 MemoryAllocationGranularity; // rax
  int v15; // eax
  __int64 v16; // rcx
  PRTL_BALANCED_NODE v17; // r15
  __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rax
  _RTL_BALANCED_NODE *i; // rcx
  unsigned __int64 v25; // rdx
  _RTL_BALANCED_NODE *v26; // r9
  __int64 v27; // rdi
  PPRIVILEGE_SET *v28; // rax
  unsigned __int64 v29; // rdx
  BOOLEAN v30; // r8
  unsigned __int64 v31; // rax
  PPRIVILEGE_SET v32; // rbx
  __int64 v33; // rax
  void *v34; // r8
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // rax
  PPRIVILEGE_SET *v37; // rax
  PPRIVILEGE_SET *v38; // rax
  _RTL_BALANCED_NODE *v39; // r8
  PRTL_BALANCED_NODE Node; // [rsp+30h] [rbp-20h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+38h] [rbp-18h] BYREF
  PPRIVILEGE_SET *p_Privileges; // [rsp+40h] [rbp-10h]

  Node = 0LL;
  v4 = a1 + 40;
  v5 = *(_QWORD *)(a1 + 40);
  v6 = (unsigned int)(a2 + 4096);
  v7 = (_RTL_BALANCED_NODE *)(v6 + a3);
  p_Privileges = &Privileges;
  v8 = (*(_BYTE *)(a1 + 48) & 1) == 0;
  Privileges = (PPRIVILEGE_SET)&Privileges;
  v9 = a1;
  if ( !v8 && v5 )
    v5 ^= v4;
  v10 = *(_BYTE *)(a1 + 48) & 1;
  while ( v5 )
  {
    if ( v6 >= *(_QWORD *)(v5 + 40) )
    {
      if ( v6 < *(_QWORD *)(v5 + 48) )
        break;
      v11 = *(_QWORD *)(v5 + 8);
    }
    else
    {
      v11 = *(_QWORD *)v5;
    }
    if ( v10 && v11 )
      v5 ^= v11;
    else
      v5 = v11;
  }
  if ( *(_QWORD *)(v5 + 48) >= (__int64)v7 )
  {
    *a4 = v6 + *(_QWORD *)(v5 + 56) - *(_QWORD *)(v5 + 24);
    return 0;
  }
  MemoryAllocationGranularity = CmSiGetMemoryAllocationGranularity();
  v15 = HvpViewMapCreateView(v9, v6 & -MemoryAllocationGranularity, v7, &Node);
  v17 = Node;
  ViewRangeValid = v15;
  if ( v15 >= 0 )
  {
    ViewRangeValid = HvpViewMapMakeViewRangeValid(v9, (_DWORD)Node, v6, (_DWORD)v7, 0);
    if ( ViewRangeValid >= 0 )
    {
      v18 = v6;
      if ( v6 < (unsigned __int64)v7 )
      {
        do
        {
          v19 = *(_QWORD *)v4;
          if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v19 )
            v19 ^= v4;
          while ( v19 )
          {
            if ( v18 >= *(_QWORD *)(v19 + 40) )
            {
              if ( v18 < *(_QWORD *)(v19 + 48) )
                break;
              v20 = *(_QWORD *)(v19 + 8);
            }
            else
            {
              v20 = *(_QWORD *)v19;
            }
            if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v20 )
              v19 ^= v20;
            else
              v19 = v20;
          }
          ViewRangeValid = HvpViewMapMigrateCOWData(a1, v17, v19);
          if ( ViewRangeValid < 0 )
            goto LABEL_75;
          v18 = *(_QWORD *)(v19 + 48);
        }
        while ( v18 < (__int64)v7 );
      }
      v21 = (__int64)&v7[-1].ParentValue + 7;
      v22 = *(_QWORD *)v4;
      if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v22 )
        v22 ^= v4;
      while ( v22 )
      {
        if ( v21 >= *(_QWORD *)(v22 + 40) )
        {
          if ( v21 < *(_QWORD *)(v22 + 48) )
            break;
          v23 = *(_QWORD *)(v22 + 8);
        }
        else
        {
          v23 = *(_QWORD *)v22;
        }
        if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v23 )
          v22 ^= v23;
        else
          v22 = v23;
      }
      for ( i = *(_RTL_BALANCED_NODE **)(v5 + 48);
            (__int64)i < *(_QWORD *)(v22 + 40);
            i = *(_RTL_BALANCED_NODE **)(v35 + 48) )
      {
        v35 = *(_QWORD *)v4;
        if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v35 )
          v35 ^= v4;
        while ( v35 )
        {
          if ( (__int64)i < *(_QWORD *)(v35 + 40) )
          {
            v36 = *(_QWORD *)v35;
          }
          else
          {
            if ( (__int64)i < *(_QWORD *)(v35 + 48) )
              break;
            v36 = *(_QWORD *)(v35 + 8);
          }
          if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v36 )
            v35 ^= v36;
          else
            v35 = v36;
        }
        RtlRbRemoveNode((PRTL_RB_TREE)v4, (PRTL_BALANCED_NODE)v35);
        v37 = p_Privileges;
        if ( *p_Privileges != (PPRIVILEGE_SET)&Privileges )
          goto LABEL_104;
        *(_QWORD *)(v35 + 8) = p_Privileges;
        *(_QWORD *)v35 = &Privileges;
        *v37 = (PPRIVILEGE_SET)v35;
        p_Privileges = (PPRIVILEGE_SET *)v35;
      }
      v25 = v5;
      if ( *(_QWORD *)(v5 + 40) == v6 )
      {
        RtlRbRemoveNode((PRTL_RB_TREE)v4, (PRTL_BALANCED_NODE)v5);
        v38 = p_Privileges;
        if ( *p_Privileges != (PPRIVILEGE_SET)&Privileges )
          goto LABEL_104;
        *(_QWORD *)(v5 + 8) = p_Privileges;
        *(_QWORD *)v5 = &Privileges;
        *v38 = (PPRIVILEGE_SET)v5;
        p_Privileges = (PPRIVILEGE_SET *)v5;
        v27 = a1;
      }
      else
      {
        v26 = *(_RTL_BALANCED_NODE **)(v5 + 48);
        v27 = a1;
        HvpViewMapMakeViewRangeInvalid(a1, v25, v6, v26);
      }
      if ( *(_RTL_BALANCED_NODE **)(v22 + 48) == v7 )
      {
        RtlRbRemoveNode((PRTL_RB_TREE)v4, (PRTL_BALANCED_NODE)v22);
        v28 = p_Privileges;
        if ( *p_Privileges != (PPRIVILEGE_SET)&Privileges )
          goto LABEL_104;
        *(_QWORD *)(v22 + 8) = p_Privileges;
        *(_QWORD *)v22 = &Privileges;
        *v28 = (PPRIVILEGE_SET)v22;
        p_Privileges = (PPRIVILEGE_SET *)v22;
      }
      else
      {
        HvpViewMapMakeViewRangeInvalid(v27, v22, *(_QWORD *)(v22 + 40), v7);
      }
      v29 = *(_QWORD *)v4;
      if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v29 )
        v29 ^= v4;
      v30 = 0;
      if ( v29 )
      {
        while ( 1 )
        {
          if ( (signed __int64)v17[1].ParentValue < *(_QWORD *)(v29 + 40) )
          {
            v31 = *(_QWORD *)v29;
            if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
            {
              if ( !v31 )
                goto LABEL_103;
              v31 ^= v29;
            }
            if ( !v31 )
            {
LABEL_103:
              v30 = 0;
              break;
            }
          }
          else
          {
            v31 = *(_QWORD *)(v29 + 8);
            if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
            {
              if ( !v31 )
                goto LABEL_102;
              v31 ^= v29;
            }
            if ( !v31 )
            {
LABEL_102:
              v30 = 1;
              break;
            }
          }
          v29 = v31;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)v4, (PRTL_BALANCED_NODE)v29, v30, v17);
      v32 = Privileges;
      v33 = *(_QWORD *)&Privileges->PrivilegeCount;
      if ( (PPRIVILEGE_SET *)Privileges->Privilege[0].Luid == &Privileges )
      {
        while ( 1 )
        {
          if ( *(PPRIVILEGE_SET *)(v33 + 8) != v32 )
            goto LABEL_104;
          Privileges = (PPRIVILEGE_SET)v33;
          *(_QWORD *)(v33 + 8) = &Privileges;
          if ( v32 == (PPRIVILEGE_SET)&Privileges )
            break;
          v34 = *(void **)&v32[2].Privilege[0].Attributes;
          if ( v34 )
            CmSiUnmapViewOfSection((__int64)&Privileges, *(HANDLE **)(v27 + 24), v34);
          CmSiFreeMemory(v32);
          v32 = Privileges;
          if ( (PPRIVILEGE_SET *)Privileges->Privilege[0].Luid != &Privileges )
            goto LABEL_104;
          v33 = *(_QWORD *)&Privileges->PrivilegeCount;
        }
        ViewRangeValid = 0;
        v16 = v6 + (char *)v17[2].Children[1] - (char *)v17[1].Children[0];
        v17 = 0LL;
        *a4 = v16;
LABEL_75:
        v9 = a1;
        goto LABEL_76;
      }
LABEL_104:
      __fastfail(3u);
    }
  }
LABEL_76:
  if ( v17 )
  {
    v39 = v17[2].Children[1];
    if ( v39 )
      CmSiUnmapViewOfSection(v16, *(HANDLE **)(v9 + 24), v39);
    CmSiFreeMemory((PPRIVILEGE_SET)v17);
  }
  return (unsigned int)ViewRangeValid;
}
