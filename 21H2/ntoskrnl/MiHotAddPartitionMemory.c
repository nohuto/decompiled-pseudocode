/*
 * XREFs of MiHotAddPartitionMemory @ 0x140981BB0
 * Callers:
 *     MmManagePartitionInitialAddMemory @ 0x14098259C (MmManagePartitionInitialAddMemory.c)
 * Callees:
 *     RtlAreBitsClearEx @ 0x14022C900 (RtlAreBitsClearEx.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     memset @ 0x140435E00 (memset.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1405531C0 (IoUpdateDumpPhysicalRanges.c)
 *     MiActOnPartitionNodePages @ 0x1405BCBC4 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x1405BD66C (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionPageNode @ 0x1405BDF38 (MiDeletePartitionPageNode.c)
 *     MiFreePartitionTree @ 0x1405BE614 (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x1405BE81C (MiInsertPartitionPages.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x140982150 (MiUpdatePartitionLargePfnBitMap.c)
 */

__int64 __fastcall MiHotAddPartitionMemory(__int64 a1, unsigned __int64 *a2, int *a3)
{
  int *v4; // r14
  __int64 v5; // r15
  __int64 v6; // r8
  __int64 v7; // r9
  int updated; // ebx
  int v10; // edx
  unsigned int v11; // r13d
  unsigned __int64 v12; // r12
  __int16 *v13; // rdi
  unsigned int v14; // esi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  int v17; // esi
  int v18; // esi
  int v19; // r12d
  char v20; // al
  int v21; // r12d
  unsigned __int64 *i; // rdi
  unsigned __int64 *v23; // rax
  int v24; // r15d
  unsigned __int64 **v25; // rax
  unsigned __int64 *v26; // r13
  unsigned __int64 *v27; // rcx
  unsigned __int64 *v28; // rcx
  int v29; // eax
  int v30; // [rsp+38h] [rbp-59h]
  unsigned int v31; // [rsp+38h] [rbp-59h]
  unsigned __int64 *v32; // [rsp+40h] [rbp-51h] BYREF
  int v33; // [rsp+48h] [rbp-49h]
  int v34; // [rsp+4Ch] [rbp-45h]
  __int128 v35; // [rsp+50h] [rbp-41h] BYREF
  __int128 v36; // [rsp+60h] [rbp-31h]
  __int16 *v37[14]; // [rsp+78h] [rbp-19h] BYREF
  unsigned int v40; // [rsp+110h] [rbp+7Fh]

  v4 = a3;
  v5 = a1;
  v35 = 0LL;
  v36 = 0LL;
  memset(v37, 0, 0x40uLL);
  v32 = 0LL;
  v40 = 14;
  if ( (ULONG_PTR *)v5 == &MiSystemPartition && (*v4 & 4) == 0
    || (v10 = *v4, (*v4 & 8) != 0) && (ULONG_PTR *)v5 == &MiSystemPartition
    || (((v10 & 4) != 0) & !_bittest64(&KeFeatureBits, 0x25u)) != 0 )
  {
    updated = -1073741637;
    goto LABEL_4;
  }
  *((_QWORD *)v4 + 1) = 0LL;
  v11 = v4[1];
  if ( (v10 & 1) != 0 )
  {
    v30 = 1;
  }
  else
  {
    if ( (*(_DWORD *)(v5 + 4) & 0x40) != 0 || (v10 & 4) != 0 )
    {
      updated = -1073741584;
      goto LABEL_4;
    }
    v30 = 0;
  }
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  if ( v11 )
  {
    while ( 1 )
    {
      v15 = *a2;
      if ( *a2 < v12 )
        break;
      v16 = a2[1];
      v12 = v16 + v15;
      if ( v16 + v15 <= v15 || (__int16 *)((char *)v13 + v16) <= v13 || (*v4 & 4) != 0 && ((v15 | v16) & 0x3FFFF) != 0 )
        break;
      v13 = (__int16 *)((char *)v13 + v16);
      if ( !MiAddRangeToPartitionTree((unsigned __int64 *)&v32, v15, v16, 0) )
      {
        updated = -1073741670;
        goto LABEL_4;
      }
      ++v14;
      a2 += 2;
      if ( v14 >= v11 )
      {
        v10 = *v4;
        goto LABEL_24;
      }
    }
    updated = -1073741811;
    goto LABEL_4;
  }
LABEL_24:
  if ( (v10 & 4) != 0 )
  {
    BYTE2(v37[2]) = 1;
    HIDWORD(v37[2]) = (v10 & 2 | 4u) >> 1;
  }
  else
  {
    updated = MiUpdatePartitionLargePfnBitMap(v5, &v32, v6, v7);
    if ( updated < 0 )
      goto LABEL_4;
  }
  updated = 0;
  v17 = DWORD2(v36);
  if ( (*(_DWORD *)(v5 + 4) & 0x40) != 0 )
  {
    BYTE1(v37[2]) = 1;
    v17 = DWORD2(v36) | 8;
  }
  if ( v30 )
  {
    v19 = *v4;
    v20 = *v4;
    v33 = 0;
    v31 = 16 * (v20 & 8);
    v21 = v19 & 2;
    if ( !v21 )
      v17 |= 0x100u;
    v37[0] = (__int16 *)v5;
    v18 = v17 | 0x200;
    v34 = v18;
    v40 = 12 - (v21 != 0);
    i = 0LL;
    v23 = v32;
    DWORD2(v36) = v18;
    while ( v23 )
    {
      i = v23;
      v23 = (unsigned __int64 *)*v23;
    }
    if ( i )
    {
      v24 = v33;
      do
      {
        v25 = (unsigned __int64 **)i[1];
        v26 = i;
        v27 = i;
        if ( v25 )
        {
          v28 = *v25;
          for ( i = (unsigned __int64 *)i[1]; v28; v28 = (unsigned __int64 *)*v28 )
            i = v28;
        }
        else
        {
          while ( 1 )
          {
            i = (unsigned __int64 *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !i || (unsigned __int64 *)*i == v27 )
              break;
            v27 = i;
          }
        }
        if ( !v24 )
        {
          MiActOnPartitionNodePages((__int64)v26, v40, v31, v37);
          if ( SLODWORD(v37[3]) < 0 )
          {
            updated = (int)v37[3];
            if ( v21 && RtlAreBitsClearEx((__int64)(v26 + 4), 0LL, v26[4]) )
              i = v26;
            v24 = 1;
          }
          if ( v21 )
            continue;
        }
        RtlAvlRemoveNode((unsigned __int64 *)&v32, v26);
        MiDeletePartitionPageNode((PVOID *)v26);
      }
      while ( i );
      v18 = v34;
      v4 = a3;
      v5 = a1;
    }
    v13 = v37[6];
    if ( v37[6] )
    {
      IoUpdateDumpPhysicalRanges();
      goto LABEL_59;
    }
LABEL_4:
    MiFreePartitionTree((__int16 *)v5, (unsigned __int64 *)&v32, 0, 0);
    return (unsigned int)updated;
  }
  v18 = v17 | 2;
  DWORD2(v36) = v18;
LABEL_59:
  v29 = *v4;
  if ( (*v4 & 2) == 0 )
    DWORD2(v36) = v18 | 1;
  *(_QWORD *)&v35 = &v32;
  if ( (v29 & 4) != 0 )
  {
    MiFreePartitionTree((__int16 *)v5, (unsigned __int64 *)&v32, 0, 0);
  }
  else if ( v40 != 12 )
  {
    MiInsertPartitionPages((__int16 *)&MiSystemPartition, v5, (__int64)&v35, (__int64)v13, 0LL);
  }
  *((_QWORD *)v4 + 1) = v13;
  return (unsigned int)updated;
}
