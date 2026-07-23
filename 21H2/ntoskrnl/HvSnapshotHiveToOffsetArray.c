/*
 * XREFs of HvSnapshotHiveToOffsetArray @ 0x1408809B4
 * Callers:
 *     CmpFlushBackupHive @ 0x1408710A0 (CmpFlushBackupHive.c)
 *     CmDumpKey @ 0x14087BE78 (CmDumpKey.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     HvpHeaderCheckSum @ 0x1406FC8D4 (HvpHeaderCheckSum.c)
 *     HvpGetCellMap @ 0x14071FB10 (HvpGetCellMap.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HvSnapshotHiveToOffsetArray(__int64 a1, int *a2, __int64 *a3, unsigned int *a4)
{
  unsigned int v4; // r10d
  unsigned int v6; // ebx
  __int64 CellMap; // rax
  int v11; // r10d
  int v12; // eax
  unsigned int v13; // esi
  unsigned int v14; // ecx
  __int64 v15; // rax
  size_t v16; // rbp
  PVOID PoolWithTag; // rax
  unsigned int v18; // ebx
  unsigned int v19; // ebp
  PVOID v20; // rax
  __int64 v21; // rsi
  unsigned int v22; // r12d
  _DWORD *v23; // rcx
  int v24; // eax
  unsigned int *v25; // rdx
  __int64 v26; // r9
  unsigned int v27; // eax
  unsigned int v28; // ebx
  unsigned int v29; // r15d
  int i; // r10d
  unsigned int v31; // eax
  PVOID v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // eax
  unsigned int v36; // ebx
  __int64 v37; // rax
  int v38; // r10d
  unsigned int v39; // edx
  __int64 v40; // rax
  void *v41; // rcx
  unsigned int *v43; // [rsp+20h] [rbp-48h]
  void *Src; // [rsp+70h] [rbp+8h]
  int Srca; // [rsp+70h] [rbp+8h]
  unsigned int v46; // [rsp+78h] [rbp+10h]
  __int64 v47; // [rsp+78h] [rbp+10h]
  int v48; // [rsp+80h] [rbp+18h]

  *a3 = 0LL;
  v4 = 0;
  *a2 = 0;
  v6 = *(_DWORD *)(a1 + 272);
  Src = *(void **)(a1 + 64);
  if ( v6 )
  {
    while ( 1 )
    {
      CellMap = HvpGetCellMap(a1, v4);
      if ( *(_DWORD *)(*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL) != 1852400232 )
        break;
      if ( *(_DWORD *)((*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL) + 4) != v11 )
        break;
      v12 = *(_DWORD *)((*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL) + 8);
      v4 = v12 + v11;
      if ( v4 > v6 || (v12 & 0xFFF) != 0 )
        break;
      if ( v4 >= v6 )
        goto LABEL_7;
    }
    v18 = -1073741492;
    goto LABEL_35;
  }
LABEL_7:
  v13 = v6 + 4096;
  v14 = (v6 + 4096) >> 20;
  v15 = v14 + 1;
  if ( ((v6 + 4096) & 0xFFFFF) == 0 )
    v15 = v14;
  v16 = 24 * v15;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 24 * v15, 0x20204D43u);
  *a3 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v16);
    *a4 = v13;
    v19 = 0x100000;
    if ( v13 < 0x100000 )
      v19 = v6 + 4096;
    v20 = ExAllocatePoolWithTag(PagedPool, v19, 0x20204D43u);
    v21 = *a3;
    *(_QWORD *)(*a3 + 8) = v20;
    if ( v20 )
    {
      *(_DWORD *)v21 = 0;
      v22 = 4096;
      *(_DWORD *)(v21 + 16) = v19;
      memmove(v20, Src, 0x1000uLL);
      v23 = *(_DWORD **)(v21 + 8);
      v23[2] = v23[1];
      v23[10] = v6;
      v24 = HvpHeaderCheckSum(v23);
      v25 = 0LL;
      *(_DWORD *)(v26 + 508) = v24;
      v27 = *(_DWORD *)(a1 + 272);
      v28 = 0;
      v29 = 0;
      v46 = 0;
      Srca = 4096;
      *a2 = 1;
      v43 = 0LL;
      if ( !v27 )
        return 0;
      for ( i = 1; ; i = v48 )
      {
        v48 = i;
        if ( v22 == v19 )
        {
          v31 = v27 - v28;
          v19 = 0x100000;
          if ( v31 < 0x100000 )
            v19 = v31;
          v32 = ExAllocatePoolWithTag(PagedPool, v19, 0x20204D43u);
          v33 = (unsigned int)*a2;
          v21 = *a3;
          v34 = 3 * v33;
          *(_QWORD *)(*a3 + 24 * v33 + 8) = v32;
          if ( !v32 )
            goto LABEL_10;
          i = v33 + 1;
          v25 = v43;
          v22 = 0;
          *(_DWORD *)(v21 + 8 * v34) = Srca;
          *(_DWORD *)(v21 + 8 * v34 + 16) = v19;
          v48 = i;
          *a2 = i;
        }
        if ( v29 )
          break;
        v37 = HvpGetCellMap(a1, v28);
        if ( !v37 )
        {
          v18 = -1073741275;
          goto LABEL_35;
        }
        v43 = (unsigned int *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0uLL);
        v39 = v43[2];
        v29 = v19 - v22 < v39 ? v39 - (v19 - v22) : 0;
        if ( v39 > v19 - v22 )
          v39 = v19 - v22;
        v47 = v39;
        memmove(
          (void *)(*(_QWORD *)(v21 + 24LL * (unsigned int)(v38 - 1) + 8) + v22),
          (const void *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0uLL),
          v39);
        v40 = v47;
        Srca += v47;
        v28 += v47;
        v22 += v47;
        v46 = v28;
        if ( !v29 )
          goto LABEL_26;
        v25 = (unsigned int *)((char *)v43 + v40);
        v43 = (unsigned int *)((char *)v43 + v40);
LABEL_27:
        v27 = *(_DWORD *)(a1 + 272);
        if ( v28 >= v27 )
          return 0;
      }
      v35 = v29;
      if ( v29 > v19 )
        v35 = v19;
      v36 = v35;
      memmove(*(void **)(v21 + 24LL * (unsigned int)(i - 1) + 8), v25, v35);
      v46 += v36;
      v29 -= v36;
      v22 += v36;
      Srca += v36;
      v28 = v46;
LABEL_26:
      v25 = v43;
      goto LABEL_27;
    }
  }
LABEL_10:
  v18 = -1073741801;
LABEL_35:
  v41 = (void *)*a3;
  if ( *a3 )
  {
    if ( *a2 )
    {
      do
        ExFreePoolWithTag(*(PVOID *)(*a3 + 24LL * (unsigned int)--*a2 + 8), 0);
      while ( *a2 );
      v41 = (void *)*a3;
    }
    ExFreePoolWithTag(v41, 0);
    *a2 = 0;
  }
  return v18;
}
