/*
 * XREFs of MiAllocatePartitionPhysicalPages @ 0x1408D6028
 * Callers:
 *     MiReleasePartitionHugeIoSpace @ 0x14052DD68 (MiReleasePartitionHugeIoSpace.c)
 *     MmManagePartitionMoveMemory @ 0x1408D7190 (MmManagePartitionMoveMemory.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x1402FA2F8 (MiReleaseNonPagedResources.c)
 *     MiZeroLargePage @ 0x14030B58C (MiZeroLargePage.c)
 *     MiAcquireNonPagedResources @ 0x140328924 (MiAcquireNonPagedResources.c)
 *     MiAllocatePagesForMdl @ 0x140342ADC (MiAllocatePagesForMdl.c)
 *     MiFreeMdlPageRun @ 0x1403468F8 (MiFreeMdlPageRun.c)
 *     MiFreePagesFromMdl @ 0x140346FD4 (MiFreePagesFromMdl.c)
 *     MiFindLargeNodePage @ 0x1403919F0 (MiFindLargeNodePage.c)
 *     MiGetHugeRangeFromNode @ 0x14052CF34 (MiGetHugeRangeFromNode.c)
 *     MiHugeRangeIsZeroed @ 0x14052D858 (MiHugeRangeIsZeroed.c)
 *     MiInsertHugeRangeInList @ 0x14052DAE8 (MiInsertHugeRangeInList.c)
 *     MiAddMdlToPartitionTree @ 0x14055B590 (MiAddMdlToPartitionTree.c)
 *     MiAddRangeToPartitionTree @ 0x14055B67C (MiAddRangeToPartitionTree.c)
 *     MiFreePartitionTree @ 0x14055C84C (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x14055CA50 (MiInsertPartitionPages.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1408D6E28 (MiUpdatePartitionLargePfnBitMap.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocatePartitionPhysicalPages(
        ULONG_PTR *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int16 a5,
        unsigned int a6)
{
  int v6; // eax
  ULONG_PTR *v7; // r10
  unsigned int v8; // esi
  unsigned __int64 v9; // r11
  int HugeRangeFromNode; // edi
  unsigned __int64 v11; // r14
  int v12; // eax
  int v13; // ecx
  int v14; // r13d
  int v15; // ebx
  unsigned __int64 v17; // r12
  BOOL v18; // ecx
  int v19; // r15d
  unsigned int v20; // ebx
  unsigned int v21; // eax
  unsigned int v22; // ebx
  __int64 v23; // rbx
  BOOL IsZeroed; // eax
  int v25; // r9d
  __int64 LargeNodePage; // rax
  unsigned __int64 v27; // r13
  BOOL v28; // eax
  __int64 v29; // r9
  __int64 v30; // r15
  unsigned __int64 v31; // rdi
  int updated; // ebx
  __int64 v33; // rax
  char v34; // r12
  unsigned __int64 v35; // rbx
  int v36; // edi
  unsigned int v37; // edi
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 PagesForMdl; // rax
  unsigned int *v41; // r15
  int v42; // edi
  unsigned __int64 v43; // rsi
  __int32 v44; // eax
  ULONG_PTR *v45; // [rsp+40h] [rbp-59h]
  int v46; // [rsp+48h] [rbp-51h]
  int v47; // [rsp+4Ch] [rbp-4Dh]
  unsigned __int64 v48; // [rsp+50h] [rbp-49h] BYREF
  __int64 v49; // [rsp+58h] [rbp-41h]
  __int64 v50; // [rsp+60h] [rbp-39h]
  unsigned int v51; // [rsp+68h] [rbp-31h]
  unsigned __int64 v52; // [rsp+70h] [rbp-29h]
  __m256i v53; // [rsp+78h] [rbp-21h] BYREF
  BOOL v54; // [rsp+F0h] [rbp+57h] BYREF
  unsigned __int64 v55; // [rsp+F8h] [rbp+5Fh]
  unsigned __int64 v56; // [rsp+100h] [rbp+67h]
  int v57; // [rsp+108h] [rbp+6Fh]

  v56 = a3;
  v55 = a2;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = &MiSystemPartition;
  v8 = a4;
  v51 = a4;
  v9 = a3;
  v48 = 0LL;
  HugeRangeFromNode = 0;
  v49 = 0LL;
  if ( a1 )
    v7 = a1;
  v11 = 0LL;
  v45 = v7;
  v47 = a5 & 4;
  v12 = ((v6 & 0x40) == 0) | 0x100000;
  v13 = v12 | 0x8000;
  *(_OWORD *)v53.m256i_i8 = 0LL;
  if ( (a5 & 4) == 0 )
    v13 = v12;
  v14 = v13 | 0x4000;
  *(_OWORD *)&v53.m256i_u64[2] = 0LL;
  if ( (a5 & 0x12) != 0 )
    v14 = v13;
  v15 = a5 & 0x200;
  v57 = v15;
  v46 = v14;
  if ( (a5 & 0x200) == 0 )
  {
    if ( (int)MiAcquireNonPagedResources((__int64)v7, a3, 0LL, 0) < 0 )
      return 3221225626LL;
    v7 = v45;
    v9 = v56;
  }
  v50 = 0x40000LL;
  while ( 1 )
  {
    v17 = v9 - v11;
    v52 = v9 - v11;
    if ( v9 - v11 < 0x200 )
      goto LABEL_39;
    v18 = 1;
    if ( (a5 & 0x60) == 0 )
      v18 = v17 < 0x40000;
    HugeRangeFromNode &= 0xFFFC0000;
    v54 = v18;
    v19 = 0;
    if ( v15 )
    {
      v20 = 0;
      if ( KeNumberNodes )
      {
        do
        {
          HugeRangeFromNode = MiGetHugeRangeFromNode(v45, v20, (v14 & 1) == 0);
          if ( (*(_QWORD *)&HugeRangeFromNode & 0x3FFFFLL) != 0 || (a5 & 1) == 0 )
            break;
          v21 = v20 + 1;
          v22 = 0;
          if ( v21 != (unsigned __int16)KeNumberNodes )
            v22 = v21;
          v20 = v22 + 1;
        }
        while ( v20 < (unsigned __int16)KeNumberNodes );
        v8 = v51;
        v17 = v52;
        v9 = v56;
      }
      if ( (HugeRangeFromNode & 0x3FFFF) == 0 )
        goto LABEL_38;
      v23 = (unsigned __int64)(HugeRangeFromNode & 0x3FFFF) << 18;
      v54 = 0;
      IsZeroed = MiHugeRangeIsZeroed(HugeRangeFromNode);
      v19 = v25;
      LOBYTE(v19) = IsZeroed;
    }
    else
    {
      LargeNodePage = MiFindLargeNodePage((__int64)v7, v8, (unsigned int *)&v54, 1, v14, 1u, 1u);
      if ( !LargeNodePage )
      {
        v9 = v56;
        goto LABEL_39;
      }
      v23 = (LargeNodePage + 0x58000000000LL) / 48;
      if ( (*(_DWORD *)(LargeNodePage + 16) & 0x3E0LL) != 0 )
      {
        if ( (v14 & 1) != 0 )
          goto LABEL_30;
        MiZeroLargePage(LargeNodePage, v54);
      }
      v19 = 1;
    }
LABEL_30:
    v27 = MiLargePageSizes[v54];
    v28 = MiAddRangeToPartitionTree(&v48, v23, v27, v19);
    v29 = 0LL;
    if ( !v28 )
      break;
    v7 = v45;
    v15 = v57;
    if ( v45 == &MiSystemPartition && !v57 )
      _InterlockedExchangeAdd64(&qword_140C4EEF8, v27);
    v9 = v56;
    v11 += v27;
    if ( v11 == v56 )
      goto LABEL_48;
    v14 = v46;
  }
  if ( v57 )
  {
    MiInsertHugeRangeInList(HugeRangeFromNode, v19, 0LL);
    v9 = v56;
LABEL_38:
    v15 = v57;
LABEL_39:
    v30 = v49;
    goto LABEL_40;
  }
  v33 = MiFreeMdlPageRun(v23, v27, v19);
  v9 = v56;
  v30 = v33;
  v15 = v57;
LABEL_40:
  if ( v11 == v9 )
  {
    v7 = v45;
    v29 = 0LL;
  }
  else
  {
    v31 = (unsigned __int64)v45;
    if ( v15 || (MiReleaseNonPagedResources((__int64)v45, v17 - v30), (a5 & 0xA2) != 0) || (v29 = 0LL, v30) )
    {
      updated = -1073741670;
      goto LABEL_74;
    }
    v9 = v56;
    v7 = v45;
  }
LABEL_48:
  v34 = a5;
  v35 = 0LL;
  v36 = v46 & 1 | 2;
  if ( (a5 & 1) != 0 )
    v36 = v46 & 1;
  v37 = v36 | 0x10;
  if ( (a5 & 0x10) != 0 )
  {
    v37 |= 0x40u;
    v35 = 0x200000LL;
    v38 = 0x40000LL;
  }
  else
  {
    if ( (a5 & 0x40) != 0 )
    {
      v37 |= 0x40u;
      v38 = 512LL;
      v35 = 0x200000LL;
    }
    else if ( (a5 & 0x100) != 0 )
    {
      v37 |= 0x40u;
      v38 = 0x40000LL;
      v35 = 0x40000000LL;
    }
    else
    {
      v38 = 1048574LL;
    }
    v50 = v38;
  }
  if ( v11 == v9 )
  {
LABEL_71:
    v42 = v57;
    v43 = v55;
    if ( !v57 )
    {
      updated = MiUpdatePartitionLargePfnBitMap(v55, &v48, a3, v29);
      if ( updated < 0 )
        goto LABEL_73;
    }
    v53.m256i_i64[0] = (__int64)&v48;
    v44 = 3;
    *(_OWORD *)&v53.m256i_u64[1] = 0LL;
    if ( (v34 & 8) != 0 )
      v44 = 7;
    v53.m256i_i32[6] = v44;
    if ( v42 )
      v53.m256i_i32[6] = v44 | 0x10;
    return (unsigned int)MiInsertPartitionPages((unsigned __int64)v45, v43, (__int64)&v53, v11, a6);
  }
  while ( 2 )
  {
    v39 = v38;
    if ( v9 - v11 <= v38 )
      v39 = v9 - v11;
    PagesForMdl = MiAllocatePagesForMdl(
                    (__int64)v7,
                    -(__int64)(v47 != 0) & 0x100000000LL,
                    0xFFFFFFFFFFFFFFFFuLL,
                    v35,
                    v39 << 12,
                    1,
                    v8,
                    v37);
    v41 = (unsigned int *)PagesForMdl;
    if ( !PagesForMdl )
    {
      if ( (v37 & 0x40) == 0 )
        goto LABEL_70;
      v37 = v37 & 0xFFFFFF9F | 0x20;
      goto LABEL_67;
    }
    if ( (unsigned int)MiAddMdlToPartitionTree((__int64)&v48, PagesForMdl, v37) )
    {
      v11 += (unsigned __int64)v41[10] >> 12;
      ExFreePoolWithTag(v41, 0);
LABEL_67:
      v9 = v56;
      if ( v11 == v56 )
        goto LABEL_71;
      v7 = v45;
      v38 = v50;
      continue;
    }
    break;
  }
  MiFreePagesFromMdl((ULONG_PTR)v41, 0);
  ExFreePoolWithTag(v41, 0);
LABEL_70:
  updated = -1073741670;
LABEL_73:
  v31 = (unsigned __int64)v45;
LABEL_74:
  MiFreePartitionTree(v31, &v48, 1, 1);
  return (unsigned int)updated;
}
