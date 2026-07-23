/*
 * XREFs of MiExtendSection @ 0x1405E8C28
 * Callers:
 *     MmExtendSection @ 0x1405E894C (MmExtendSection.c)
 * Callees:
 *     MiAppendSubsectionChain @ 0x14021E9FC (MiAppendSubsectionChain.c)
 *     MiSetSubsectionBase @ 0x14021EDF4 (MiSetSubsectionBase.c)
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiGetControlAreaPartition @ 0x14027C914 (MiGetControlAreaPartition.c)
 *     MiDeleteSubsectionPages @ 0x1402DD9C0 (MiDeleteSubsectionPages.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140302FB0 (MiUpdateSystemProtoPtesTree.c)
 *     MiDecrementSubsectionViewCount @ 0x14031FEC0 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x140320B30 (MiIncrementSubsectionViewCount.c)
 *     MiControlAreaUsingExtents @ 0x14033D9A0 (MiControlAreaUsingExtents.c)
 *     MiSubsectionNeedsExtents @ 0x14053D080 (MiSubsectionNeedsExtents.c)
 *     MiGetSubsectionCharges @ 0x140555108 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055532C (MiReturnCrossPartitionSectionCharges.c)
 *     MiInitializePrototypePtes @ 0x1406FF6DC (MiInitializePrototypePtes.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 MiExtendSection(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4, ...)
{
  __int64 v4; // r10
  __int128 *v5; // r14
  unsigned __int64 v7; // r9
  unsigned int v8; // r12d
  __int128 v9; // xmm1
  int v10; // eax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  __int128 v16; // xmm0
  int v17; // r15d
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  unsigned __int64 v21; // rbx
  unsigned int v22; // edi
  _QWORD *Pool; // rax
  _QWORD *v24; // rdx
  unsigned int v25; // r8d
  __int64 v26; // rdi
  __int16 v27; // cx
  unsigned int v28; // r9d
  __int64 v29; // rax
  unsigned __int64 v30; // rbx
  __int64 v31; // rax
  int appended; // eax
  __int16 v33; // r8
  unsigned __int64 v34; // rdx
  __int64 v36; // rdi
  __int64 v37; // rbp
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r15
  unsigned __int64 v40; // rcx
  unsigned int v41; // eax
  unsigned __int64 v42; // rcx
  PVOID v43; // r12
  int v44; // ebx
  __int64 v45; // r8
  unsigned __int64 v46; // r14
  int SubsectionCharges; // ebx
  __int64 ControlAreaPartition; // rax
  __int64 v49; // r8
  __int64 v50; // r14
  __int64 v51; // rbp
  __int64 v52; // [rsp+20h] [rbp-F8h]
  unsigned __int64 v53; // [rsp+28h] [rbp-F0h]
  unsigned __int64 v54; // [rsp+30h] [rbp-E8h]
  __int64 v55; // [rsp+38h] [rbp-E0h]
  __int128 v56; // [rsp+40h] [rbp-D8h] BYREF
  __int128 Privileges; // [rsp+50h] [rbp-C8h]
  __int128 v58; // [rsp+60h] [rbp-B8h]
  __int128 v59; // [rsp+70h] [rbp-A8h]
  __int128 v60; // [rsp+80h] [rbp-98h]
  __int128 v61; // [rsp+90h] [rbp-88h]
  __int128 v62; // [rsp+A0h] [rbp-78h]
  __int128 v63; // [rsp+B0h] [rbp-68h]
  __int128 v64; // [rsp+C0h] [rbp-58h]
  int v65; // [rsp+120h] [rbp+8h]
  __int64 v69; // [rsp+138h] [rbp+20h]
  __int64 *v70; // [rsp+140h] [rbp+28h] BYREF
  va_list va; // [rsp+140h] [rbp+28h]
  va_list va1; // [rsp+148h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v70 = va_arg(va1, __int64 *);
  v5 = &v56;
  v52 = *(_QWORD *)a1;
  v4 = *(_QWORD *)a1;
  v7 = (8 * a4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v8 = a3;
  *v70 = 0LL;
  v55 = *(_QWORD *)v4;
  v9 = *(_OWORD *)(a1 + 16);
  v10 = *(_DWORD *)(v4 + 56);
  v56 = *(_OWORD *)a1;
  v53 = v7;
  v11 = *(_OWORD *)(a1 + 32);
  Privileges = v9;
  v12 = *(_OWORD *)(a1 + 48);
  v13 = 0LL;
  v58 = v11;
  v14 = (-(__int64)((v10 & 0x40000000) != 0) & 0x100000) + 0x100000;
  v15 = 0LL;
  v16 = *(_OWORD *)(a1 + 64);
  v17 = 0;
  v54 = v14;
  v59 = v12;
  v18 = *(_OWORD *)(a1 + 80);
  v60 = v16;
  v19 = *(_OWORD *)(a1 + 96);
  v61 = v18;
  v20 = *(_OWORD *)(a1 + 128);
  v62 = v19;
  v63 = *(_OWORD *)(a1 + 112);
  v64 = v20;
  if ( a3 )
    DWORD1(v59) ^= (DWORD1(v59) ^ (DWORD1(v59) - a3)) & 0x3FFFFFFF;
  v21 = 0LL;
  do
  {
    if ( v7 - v13 > v14 )
      v22 = v14;
    else
      v22 = v7 - v13;
    Pool = MiAllocatePool(64, 0x90uLL, 0x64536D4Du);
    v24 = Pool;
    if ( !Pool )
    {
      v36 = Privileges;
LABEL_49:
      SubsectionCharges = -1073741670;
      goto LABEL_50;
    }
    v25 = v22 >> 3;
    Pool[11] = Pool + 10;
    Pool[10] = Pool + 10;
    *((_QWORD *)v5 + 2) = Pool;
    *Pool = v52;
    *((_DWORD *)Pool + 11) = v22 >> 3;
    v13 += v22;
    if ( v13 > 8 * a4 )
      *((_DWORD *)Pool + 13) ^= (*((_DWORD *)Pool + 13) ^ ((v13 >> 3) - a4)) & 0x3FFFFFFF;
    v26 = v55;
    v27 = Pool[4] & 0xFFC1 | (2 * ((*(_BYTE *)(v55 + 14) >> 1) & 0x1F));
    *((_WORD *)Pool + 16) = v27;
    if ( v5 == &v56 )
    {
      *((_WORD *)v5 + 17) &= 0xFu;
      v28 = *((_DWORD *)v5 + 11);
      v29 = *((unsigned int *)v5 + 9);
      v30 = (unsigned __int64)((_WORD)v5[2] & 0xFFC0) << 26;
      *((_DWORD *)v5 + 10) = v28;
      v21 = v29 | v30;
      v27 = *((_WORD *)v24 + 16);
    }
    else
    {
      v28 = *((_DWORD *)v5 + 10);
    }
    v31 = v28;
    v7 = v53;
    v21 += v31;
    *((_DWORD *)v24 + 9) = v21;
    *((_WORD *)v24 + 16) = v27 & 0x3F | (WORD2(v21) << 6);
    if ( v13 < v53 )
    {
      *((_DWORD *)v24 + 10) = v25;
    }
    else
    {
      *((_DWORD *)v24 + 10) = (*a2 >> 12) - v21;
      *((_WORD *)v24 + 17) = *((_WORD *)v24 + 17) & 0xF | (16 * *(_WORD *)a2);
    }
    v5 = (__int128 *)v24;
    v14 = v54;
  }
  while ( v13 < v53 );
  if ( v8 && MiControlAreaUsingExtents(v52) && *(_QWORD *)(a1 + 8) )
  {
    MiSubsectionNeedsExtents((_DWORD *)a1);
    *v70 = a1;
  }
  appended = MiAppendSubsectionChain((__int64 *)a1, (__int64)&v56, 0);
  if ( !appended )
  {
LABEL_16:
    v33 = *(_WORD *)(v26 + 12);
    v34 = (*(unsigned int *)(v26 + 8) | ((unsigned __int64)(v33 & 0x3FF) << 32)) + a4 + v8;
    *(_DWORD *)(v26 + 8) += a4 + v8;
    *(_WORD *)(v26 + 12) = v33 ^ (v33 ^ WORD2(v34)) & 0x3FF;
    return 0LL;
  }
  v36 = Privileges;
LABEL_18:
  v37 = v36;
  if ( (appended & 1) != 0 )
  {
    v38 = v53;
    v65 = v17 | 1;
    v39 = 0LL;
    while ( 1 )
    {
      v40 = v38;
      v41 = v54;
      v42 = v40 - v39;
      if ( v42 <= v54 )
        v41 = v42;
      v39 += v41;
      v43 = MiAllocatePool(274, v41, 0x74536D4Du);
      if ( !v43 )
        break;
      v44 = *(_DWORD *)(v52 + 56) & 0x40000000;
      MiInitializePrototypePtes((ULONG_PTR)v43);
      if ( v44 )
      {
        if ( !*v70 )
          *v70 = v37;
      }
      else if ( (v65 & 2) != 0 )
      {
        MiDecrementSubsectionViewCount((_QWORD *)v37, 0LL, v45);
      }
      MiSetSubsectionBase((__int64 *)v37, (__int64)v43, 0xFFFFFFFF);
      MiUpdateSystemProtoPtesTree((unsigned __int64 *)(v37 + 112), 1);
      v38 = v53;
      v37 = *(_QWORD *)(v37 + 16);
      if ( v39 >= v53 )
      {
        v17 = v65;
        v8 = a3;
        goto LABEL_28;
      }
    }
    LOBYTE(v17) = v65;
    goto LABEL_49;
  }
  v17 |= 2u;
  while ( 1 )
  {
    v46 = *(_DWORD *)(v37 + 44) - (*(_DWORD *)(v37 + 52) & 0x3FFFFFFFu);
    SubsectionCharges = MiGetSubsectionCharges(v37, v46);
    if ( SubsectionCharges < 0 )
      break;
    if ( (int)MiIncrementSubsectionViewCount((_QWORD *)v37, 56LL) <= 1 )
    {
      v15 += v46;
      break;
    }
    v37 = *(_QWORD *)(v37 + 16);
    if ( !v37 )
    {
      if ( v8 )
      {
        SubsectionCharges = MiGetSubsectionCharges(a1, v8);
        if ( SubsectionCharges < 0 )
          break;
        v15 += v8;
      }
LABEL_28:
      appended = MiAppendSubsectionChain((__int64 *)a1, (__int64)&v56, v17);
      if ( appended )
        goto LABEL_18;
      v26 = v55;
      goto LABEL_16;
    }
  }
LABEL_50:
  ControlAreaPartition = MiGetControlAreaPartition(v52);
  v69 = ControlAreaPartition;
  v50 = ControlAreaPartition;
  if ( v15 )
  {
    MiReturnCrossPartitionSectionCharges(ControlAreaPartition, 1u, v15);
    v15 = 0LL;
  }
  if ( v36 )
  {
    do
    {
      v51 = *(_QWORD *)(v36 + 16);
      if ( (*(_DWORD *)(v52 + 56) & 0x40000000) != 0 )
      {
        if ( *(_QWORD *)(v36 + 8) )
        {
          v70 = 0LL;
          MiDeleteSubsectionPages((__int64 *)v36, (__int64)va);
        }
      }
      else
      {
        if ( (v17 & 2) != 0 && (*(_DWORD *)(v36 + 48) & 0x3FFFFFFF) != 0 )
          v15 += MiDecrementSubsectionViewCount((_QWORD *)v36, 24LL, v49);
        if ( *(_QWORD *)(v36 + 8) )
        {
          MiUpdateSystemProtoPtesTree((unsigned __int64 *)(v36 + 112), 0);
          ExFreePoolWithTag(*(PVOID *)(v36 + 8), 0);
        }
      }
      CmSiFreeMemory((PPRIVILEGE_SET)v36);
      v36 = v51;
    }
    while ( v51 );
    v50 = v69;
  }
  if ( v15 )
    MiReturnCrossPartitionSectionCharges(v50, 1u, v15);
  return (unsigned int)SubsectionCharges;
}
