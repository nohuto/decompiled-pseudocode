/*
 * XREFs of MiHotAddPartitionMemory @ 0x1408DB3DC
 * Callers:
 *     MmManagePartitionInitialAddMemory @ 0x1408DBB24 (MmManagePartitionInitialAddMemory.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     RtlAreBitsClearEx @ 0x140353CE0 (RtlAreBitsClearEx.c)
 *     MiActOnPartitionNodePages @ 0x140560AE0 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x1405613AC (MiAddRangeToPartitionTree.c)
 *     MiFreePartitionTree @ 0x14056257C (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x140562780 (MiInsertPartitionPages.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1408DB8D8 (MiUpdatePartitionLargePfnBitMap.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiHotAddPartitionMemory(unsigned __int64 a1, unsigned __int64 *a2, int *a3, __int64 a4)
{
  int updated; // ebx
  int v9; // ecx
  unsigned int v10; // r13d
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rdi
  unsigned int v13; // esi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  int v16; // esi
  _QWORD *v17; // rax
  int v18; // r12d
  _QWORD *i; // rdi
  _QWORD **v20; // rax
  __int64 v21; // r13
  _QWORD *v22; // rcx
  _QWORD *v23; // rcx
  int v24; // eax
  __int128 v25; // [rsp+30h] [rbp-39h] BYREF
  __int128 v26; // [rsp+40h] [rbp-29h]
  __int128 v27; // [rsp+50h] [rbp-19h] BYREF
  __int128 v28; // [rsp+60h] [rbp-9h]
  __int128 v29; // [rsp+70h] [rbp+7h]
  __int64 v30; // [rsp+80h] [rbp+17h]
  int v31; // [rsp+D0h] [rbp+67h]
  _QWORD *v32; // [rsp+E8h] [rbp+7Fh] BYREF

  v32 = 0LL;
  v30 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  if ( (ULONG_PTR *)a1 == &MiSystemPartition && (*a3 & 4) == 0 )
  {
    updated = -1073741637;
LABEL_4:
    MiFreePartitionTree(a1, (unsigned __int64 *)&v32, 0, 0);
    return (unsigned int)updated;
  }
  if ( KeGetCurrentThread()->PreviousMode )
  {
    updated = -1073741727;
    goto LABEL_4;
  }
  *((_QWORD *)a3 + 1) = 0LL;
  v9 = *a3;
  v10 = a3[1];
  if ( (*a3 & 1) != 0 )
  {
    v31 = 1;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 4) & 0x40) != 0 || (v9 & 4) != 0 )
    {
      updated = -1073741584;
      goto LABEL_4;
    }
    v31 = 0;
  }
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  if ( v10 )
  {
    while ( 1 )
    {
      v14 = *a2;
      if ( *a2 < v11 )
        break;
      v15 = a2[1];
      v11 = v15 + v14;
      if ( v15 + v14 <= v14 || v15 + v12 <= v12 || (*a3 & 4) != 0 && ((v14 & 0x3FFFF) != 0 || (v15 & 0x3FFFF) != 0) )
        break;
      v12 += v15;
      if ( !MiAddRangeToPartitionTree((unsigned __int64 *)&v32, v14, v15, 0) )
      {
        updated = -1073741670;
        goto LABEL_4;
      }
      ++v13;
      a2 += 2;
      if ( v13 >= v10 )
      {
        v9 = *a3;
        goto LABEL_24;
      }
    }
    updated = -1073741811;
    goto LABEL_4;
  }
LABEL_24:
  if ( (v9 & 4) != 0 )
  {
    BYTE2(v28) = 1;
    if ( (v9 & 2) != 0 )
      BYTE3(v28) = 1;
  }
  else
  {
    updated = MiUpdatePartitionLargePfnBitMap(a1, &v32, a3, a4);
    if ( updated < 0 )
      goto LABEL_4;
  }
  updated = 0;
  v16 = DWORD2(v26);
  if ( (*(_DWORD *)(a1 + 4) & 0x40) != 0 )
  {
    v16 = DWORD2(v26) | 8;
    BYTE1(v28) = 1;
    DWORD2(v26) |= 8u;
  }
  if ( v31 )
  {
    v17 = v32;
    v18 = 0;
    i = 0LL;
    *(_QWORD *)&v27 = a1;
    while ( v17 )
    {
      i = v17;
      v17 = (_QWORD *)*v17;
    }
    while ( i )
    {
      v20 = (_QWORD **)i[1];
      v21 = (__int64)i;
      v22 = i;
      if ( v20 )
      {
        v23 = *v20;
        for ( i = (_QWORD *)i[1]; v23; v23 = (_QWORD *)*v23 )
          i = v23;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v22 )
            break;
          v22 = i;
        }
      }
      if ( v18 == 1 )
      {
        RtlAvlRemoveNode((unsigned __int64 *)&v32, (unsigned __int64 *)v21);
        ExFreePoolWithTag(*(PVOID *)(v21 + 40), 0);
        ExFreePoolWithTag((PVOID)v21, 0);
      }
      else
      {
        MiActOnPartitionNodePages(v21, 9u, (__int16 **)&v27);
        if ( SDWORD1(v28) < 0 )
        {
          updated = DWORD1(v28);
          v18 = 1;
          if ( RtlAreBitsClearEx(v21 + 32, 0LL, 0x40000uLL) )
            i = (_QWORD *)v21;
        }
      }
    }
    v12 = *((_QWORD *)&v29 + 1);
    if ( !*((_QWORD *)&v29 + 1) )
      goto LABEL_4;
  }
  else
  {
    v16 |= 2u;
    DWORD2(v26) = v16;
  }
  v24 = *a3;
  if ( (*a3 & 2) == 0 )
    DWORD2(v26) = v16 | 1;
  *(_QWORD *)&v25 = &v32;
  if ( (v24 & 4) != 0 )
    MiFreePartitionTree(a1, (unsigned __int64 *)&v32, 0, 0);
  else
    MiInsertPartitionPages((unsigned __int64)&MiSystemPartition, a1, (__int64)&v25, v12, 0LL);
  *((_QWORD *)a3 + 1) = v12;
  return (unsigned int)updated;
}
