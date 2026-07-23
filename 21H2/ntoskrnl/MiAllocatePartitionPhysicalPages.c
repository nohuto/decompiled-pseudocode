/*
 * XREFs of MiAllocatePartitionPhysicalPages @ 0x1408DAAD8
 * Callers:
 *     MiReleasePartitionHugeIoSpace @ 0x140533AC8 (MiReleasePartitionHugeIoSpace.c)
 *     MmManagePartitionMoveMemory @ 0x1408DBC40 (MmManagePartitionMoveMemory.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x140217EF8 (MiReleaseNonPagedResources.c)
 *     MiZeroLargePage @ 0x1402353D8 (MiZeroLargePage.c)
 *     MiAllocatePagesForMdl @ 0x140294744 (MiAllocatePagesForMdl.c)
 *     MiAcquireNonPagedResources @ 0x140296FE0 (MiAcquireNonPagedResources.c)
 *     MiFreePagesFromMdl @ 0x14030A23C (MiFreePagesFromMdl.c)
 *     MiFreeMdlPageRun @ 0x14030AA48 (MiFreeMdlPageRun.c)
 *     MiFindLargeNodePage @ 0x140395020 (MiFindLargeNodePage.c)
 *     MiGetHugeRangeFromNode @ 0x140532C94 (MiGetHugeRangeFromNode.c)
 *     MiHugeRangeIsZeroed @ 0x1405335B8 (MiHugeRangeIsZeroed.c)
 *     MiInsertHugeRangeInList @ 0x140533848 (MiInsertHugeRangeInList.c)
 *     MiAddMdlToPartitionTree @ 0x1405612C0 (MiAddMdlToPartitionTree.c)
 *     MiAddRangeToPartitionTree @ 0x1405613AC (MiAddRangeToPartitionTree.c)
 *     MiFreePartitionTree @ 0x14056257C (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x140562780 (MiInsertPartitionPages.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1408DB8D8 (MiUpdatePartitionLargePfnBitMap.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  __int64 v10; // r9
  int HugeRangeFromNode; // edi
  unsigned __int64 v12; // r14
  int v13; // eax
  int v14; // ecx
  int v15; // r13d
  int v16; // ebx
  int v17; // eax
  unsigned __int64 v19; // r12
  BOOL v20; // ecx
  int v21; // r15d
  unsigned int v22; // ebx
  unsigned int v23; // eax
  unsigned int v24; // ebx
  __int64 v25; // rbx
  BOOL IsZeroed; // eax
  int v27; // r9d
  __int64 LargeNodePage; // rax
  unsigned __int64 v29; // r13
  BOOL v30; // eax
  __int64 v31; // r15
  unsigned __int64 v32; // rdi
  int updated; // ebx
  __int64 v34; // rax
  char v35; // r12
  __int64 v36; // rbx
  int v37; // edi
  unsigned int v38; // edi
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  __int64 PagesForMdl; // rax
  unsigned int *v42; // r15
  int v43; // edi
  unsigned __int64 v44; // rsi
  __int32 v45; // eax
  ULONG_PTR *v46; // [rsp+40h] [rbp-59h]
  int v47; // [rsp+48h] [rbp-51h]
  int v48; // [rsp+4Ch] [rbp-4Dh]
  unsigned __int64 v49; // [rsp+50h] [rbp-49h] BYREF
  __int64 v50; // [rsp+58h] [rbp-41h]
  __int64 v51; // [rsp+60h] [rbp-39h]
  unsigned int v52; // [rsp+68h] [rbp-31h]
  unsigned __int64 v53; // [rsp+70h] [rbp-29h]
  __m256i v54; // [rsp+78h] [rbp-21h] BYREF
  BOOL v55; // [rsp+F0h] [rbp+57h] BYREF
  unsigned __int64 v56; // [rsp+F8h] [rbp+5Fh]
  unsigned __int64 v57; // [rsp+100h] [rbp+67h]
  int v58; // [rsp+108h] [rbp+6Fh]

  v57 = a3;
  v56 = a2;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = &MiSystemPartition;
  v8 = a4;
  v52 = a4;
  v9 = a3;
  v10 = 0LL;
  v49 = 0LL;
  HugeRangeFromNode = 0;
  v50 = 0LL;
  if ( a1 )
    v7 = a1;
  v12 = 0LL;
  v46 = v7;
  v48 = a5 & 4;
  v13 = ((v6 & 0x40) == 0) | 0x100000;
  v14 = v13 | 0x8000;
  *(_OWORD *)v54.m256i_i8 = 0LL;
  if ( (a5 & 4) == 0 )
    v14 = v13;
  v15 = v14 | 0x4000;
  *(_OWORD *)&v54.m256i_u64[2] = 0LL;
  if ( (a5 & 0x12) != 0 )
    v15 = v14;
  v16 = a5 & 0x200;
  v58 = v16;
  v47 = v15;
  if ( (a5 & 0x200) == 0 )
  {
    v17 = MiAcquireNonPagedResources(v7, a3, 0LL, 0);
    v10 = 0LL;
    if ( v17 < 0 )
      return 3221225626LL;
    v7 = v46;
    v9 = v57;
  }
  v51 = 0x40000LL;
  while ( 1 )
  {
    v19 = v9 - v12;
    v53 = v9 - v12;
    if ( v9 - v12 < 0x200 )
      goto LABEL_39;
    v20 = 1;
    if ( (a5 & 0x60) == 0 )
      v20 = v19 < 0x40000;
    HugeRangeFromNode &= 0xFFFC0000;
    v55 = v20;
    v21 = 0;
    if ( v16 )
    {
      v22 = 0;
      if ( KeNumberNodes )
      {
        do
        {
          HugeRangeFromNode = MiGetHugeRangeFromNode(v46, v22, (v15 & 1) == 0);
          if ( (*(_QWORD *)&HugeRangeFromNode & 0x3FFFFLL) != 0 || (a5 & 1) == 0 )
            break;
          v23 = v22 + 1;
          v24 = 0;
          if ( v23 != (unsigned __int16)KeNumberNodes )
            v24 = v23;
          v22 = v24 + 1;
        }
        while ( v22 < (unsigned __int16)KeNumberNodes );
        v8 = v52;
        v10 = 0LL;
        v19 = v53;
        v9 = v57;
      }
      if ( (HugeRangeFromNode & 0x3FFFF) == 0 )
        goto LABEL_38;
      v25 = (unsigned __int64)(HugeRangeFromNode & 0x3FFFF) << 18;
      v55 = 0;
      IsZeroed = MiHugeRangeIsZeroed(HugeRangeFromNode);
      v21 = v27;
      LOBYTE(v21) = IsZeroed;
    }
    else
    {
      LargeNodePage = MiFindLargeNodePage((__int64)v7, v8, (unsigned int *)&v55, 1, v15, 1, 1u);
      v10 = LargeNodePage;
      if ( !LargeNodePage )
      {
        v9 = v57;
        goto LABEL_39;
      }
      v25 = (LargeNodePage + 0x58000000000LL) / 48;
      if ( (*(_DWORD *)(LargeNodePage + 16) & 0x3E0LL) != 0 )
      {
        if ( (v15 & 1) != 0 )
          goto LABEL_30;
        MiZeroLargePage(LargeNodePage, v55);
      }
      v21 = 1;
    }
LABEL_30:
    v29 = MiLargePageSizes[v55];
    v30 = MiAddRangeToPartitionTree(&v49, v25, v29, v21);
    v10 = 0LL;
    if ( !v30 )
      break;
    v7 = v46;
    v16 = v58;
    if ( v46 == &MiSystemPartition && !v58 )
      _InterlockedExchangeAdd64(&qword_140C4EFF8, v29);
    v9 = v57;
    v12 += v29;
    if ( v12 == v57 )
      goto LABEL_48;
    v15 = v47;
  }
  if ( v58 )
  {
    MiInsertHugeRangeInList(HugeRangeFromNode, v21, 0LL);
    v9 = v57;
LABEL_38:
    v16 = v58;
LABEL_39:
    v31 = v50;
    goto LABEL_40;
  }
  v34 = MiFreeMdlPageRun(v25, v29, v21);
  v9 = v57;
  v31 = v34;
  v16 = v58;
LABEL_40:
  if ( v12 == v9 )
  {
    LODWORD(v7) = (_DWORD)v46;
    v10 = 0LL;
  }
  else
  {
    v32 = (unsigned __int64)v46;
    if ( v16 || (MiReleaseNonPagedResources((__int64)v46, v19 - v31, a3, v10), (a5 & 0xA2) != 0) || (v10 = 0LL, v31) )
    {
      updated = -1073741670;
      goto LABEL_74;
    }
    v9 = v57;
    LODWORD(v7) = (_DWORD)v46;
  }
LABEL_48:
  v35 = a5;
  v36 = 0LL;
  v37 = v47 & 1 | 2;
  if ( (a5 & 1) != 0 )
    v37 = v47 & 1;
  v38 = v37 | 0x10;
  if ( (a5 & 0x10) != 0 )
  {
    v38 |= 0x40u;
    v36 = 0x200000LL;
    v39 = 0x40000LL;
  }
  else
  {
    if ( (a5 & 0x40) != 0 )
    {
      v38 |= 0x40u;
      v39 = 512LL;
      v36 = 0x200000LL;
    }
    else if ( (a5 & 0x100) != 0 )
    {
      v38 |= 0x40u;
      v39 = 0x40000LL;
      v36 = 0x40000000LL;
    }
    else
    {
      v39 = 1048574LL;
    }
    v51 = v39;
  }
  if ( v12 == v9 )
  {
LABEL_71:
    v43 = v58;
    v44 = v56;
    if ( !v58 )
    {
      updated = MiUpdatePartitionLargePfnBitMap(v56, &v49, a3, v10);
      if ( updated < 0 )
        goto LABEL_73;
    }
    v54.m256i_i64[0] = (__int64)&v49;
    v45 = 3;
    *(_OWORD *)&v54.m256i_u64[1] = 0LL;
    if ( (v35 & 8) != 0 )
      v45 = 7;
    v54.m256i_i32[6] = v45;
    if ( v43 )
      v54.m256i_i32[6] = v45 | 0x10;
    return (unsigned int)MiInsertPartitionPages((unsigned __int64)v46, v44, (__int64)&v54, v12, a6);
  }
  while ( 2 )
  {
    v40 = v39;
    if ( v9 - v12 <= v39 )
      v40 = v9 - v12;
    PagesForMdl = MiAllocatePagesForMdl((int)v7, -(__int64)(v48 != 0) & 0x100000000LL, -1LL, v36, v40 << 12, 1, v8, v38);
    v42 = (unsigned int *)PagesForMdl;
    if ( !PagesForMdl )
    {
      if ( (v38 & 0x40) == 0 )
        goto LABEL_70;
      v38 = v38 & 0xFFFFFF9F | 0x20;
      goto LABEL_67;
    }
    if ( (unsigned int)MiAddMdlToPartitionTree((__int64)&v49, PagesForMdl, v38) )
    {
      v12 += (unsigned __int64)v42[10] >> 12;
      ExFreePoolWithTag(v42, 0);
LABEL_67:
      v9 = v57;
      if ( v12 == v57 )
        goto LABEL_71;
      LODWORD(v7) = (_DWORD)v46;
      v39 = v51;
      continue;
    }
    break;
  }
  MiFreePagesFromMdl((ULONG_PTR)v42, 0);
  ExFreePoolWithTag(v42, 0);
LABEL_70:
  updated = -1073741670;
LABEL_73:
  v32 = (unsigned __int64)v46;
LABEL_74:
  MiFreePartitionTree(v32, &v49, 1, 1);
  return (unsigned int)updated;
}
