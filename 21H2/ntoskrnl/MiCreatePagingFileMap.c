/*
 * XREFs of MiCreatePagingFileMap @ 0x14061C548
 * Callers:
 *     MiCreateSection @ 0x140705710 (MiCreateSection.c)
 * Callees:
 *     MiChargeCommit @ 0x14021AAD0 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14025A658 (MiChargeResident.c)
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     MiReturnResident @ 0x140296E9C (MiReturnResident.c)
 *     MiUpdateControlAreaCommitCount @ 0x1402B7EC0 (MiUpdateControlAreaCommitCount.c)
 *     MiGetPfnLink @ 0x1402D2F30 (MiGetPfnLink.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402F8260 (MiUpdateSystemProtoPtesTree.c)
 *     MiFreeLargeZeroPages @ 0x1402FD354 (MiFreeLargeZeroPages.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUpdateLargePageSectionPfns @ 0x1403F41AC (MiUpdateLargePageSectionPfns.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiDeleteSectionAwe @ 0x14054BB08 (MiDeleteSectionAwe.c)
 *     MiAllocateLargeZeroPages @ 0x14055DA5C (MiAllocateLargeZeroPages.c)
 *     SeSinglePrivilegeCheck @ 0x140627640 (SeSinglePrivilegeCheck.c)
 *     MiInitializePrototypePtes @ 0x1406E82FC (MiInitializePrototypePtes.c)
 *     MmLockPreChargedPagedPool @ 0x140777740 (MmLockPreChargedPagedPool.c)
 *     MmObtainChargesToLockPagedPool @ 0x1407918C0 (MmObtainChargesToLockPagedPool.c)
 *     MiLogSectionCreate @ 0x1408C7850 (MiLogSectionCreate.c)
 *     MmReturnChargesToLockPagedPool @ 0x1408C84E0 (MmReturnChargesToLockPagedPool.c)
 *     MiAllocateAweInfo @ 0x1408D4B80 (MiAllocateAweInfo.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreatePagingFileMap(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rbp
  char v4; // bl
  unsigned __int64 v5; // rsi
  __int64 v6; // r8
  unsigned __int64 v7; // rsi
  int v8; // r12d
  struct _KTHREAD *CurrentThread; // rbx
  char v10; // r14
  ULONG_PTR **v11; // r13
  ULONG_PTR *v12; // r13
  __int64 v13; // r9
  int v14; // r9d
  unsigned int v15; // r9d
  unsigned int *v16; // r14
  unsigned int *v17; // r15
  unsigned __int64 LargeZeroPages; // rbx
  __int64 PfnLink; // rcx
  __int64 v20; // rbp
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // r14
  __int64 v23; // rbx
  __int64 *v24; // rax
  __int64 *v25; // r14
  __int16 v26; // dx
  int v27; // ecx
  int v28; // eax
  __int64 v29; // r9
  __int16 v30; // ax
  __int16 v31; // ax
  int v32; // eax
  unsigned int v33; // ecx
  __int64 v34; // r8
  __int64 v35; // r11
  unsigned __int64 v36; // r10
  __int64 v37; // rdx
  __int64 i; // r9
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // rax
  __int16 v41; // cx
  unsigned __int8 v42; // al
  PVOID v43; // rax
  __int64 v44; // r14
  __int64 v45; // rsi
  char *v46; // r12
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned __int64 v50; // rbp
  __int64 v51; // rdi
  void *v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rdi
  unsigned __int64 v55; // [rsp+40h] [rbp-D8h]
  __int64 v56; // [rsp+48h] [rbp-D0h]
  __int64 v57; // [rsp+50h] [rbp-C8h]
  __int64 v58; // [rsp+58h] [rbp-C0h]
  unsigned __int64 v59; // [rsp+60h] [rbp-B8h]
  __int64 v60; // [rsp+68h] [rbp-B0h]
  __int64 *v61; // [rsp+78h] [rbp-A0h]
  __int64 v62; // [rsp+80h] [rbp-98h] BYREF
  __int64 v63; // [rsp+88h] [rbp-90h]
  __int64 v64; // [rsp+90h] [rbp-88h]
  __int64 v65; // [rsp+98h] [rbp-80h]
  PVOID Pool; // [rsp+A0h] [rbp-78h]
  _QWORD v67[14]; // [rsp+A8h] [rbp-70h] BYREF
  unsigned int v69; // [rsp+120h] [rbp+8h]
  __int64 v70; // [rsp+120h] [rbp+8h]
  char v71; // [rsp+128h] [rbp+10h]
  char v72; // [rsp+130h] [rbp+18h]
  unsigned __int64 v73; // [rsp+130h] [rbp+18h]
  PVOID P; // [rsp+138h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 16);
  v2 = a1;
  memset(v67, 0, 32);
  if ( (v1 & 0x1000000) != 0 )
    return 3221225504LL;
  v4 = *(_BYTE *)(a1 + 192);
  v72 = v4;
  if ( v4 )
  {
    if ( (v1 & 0x2BF7FFFF) != 0
      || (v1 & 0x4000000) == 0
      || (v1 & 0x8000000) != 0
      || (v1 & 0x80080000) == 0x80080000
      || (v1 & 0x50000000) == 0x50000000 )
    {
      return 3221225485LL;
    }
    if ( (*(_DWORD *)(a1 + 28) & 7) != 4 )
      return 3221225541LL;
    if ( (*(_DWORD *)(a1 + 32) & 7) != 4 )
      return 3221225485LL;
  }
  else
  {
    if ( v1 >= 0 )
      goto LABEL_18;
    if ( (v1 & 0x8000000) == 0 )
      return 3221225716LL;
  }
  if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *(_BYTE *)(a1 + 72)) )
    return 3221225569LL;
LABEL_18:
  v5 = *(_QWORD *)(v2 + 152);
  v6 = 1LL;
  v63 = 1LL;
  if ( v4 )
  {
    if ( v5 )
      return 3221225714LL;
    v7 = 1LL;
    v8 = v1 & 0x8000000;
  }
  else
  {
    if ( !v5 )
      return 3221225714LL;
    v8 = v1 & 0x8000000;
    if ( v5 > (-(__int64)((v1 & 0x8000000) != 0) & 0xFFFFF001000uLL) - 4096 )
      return 3221225536LL;
    v7 = (v5 + 4095) >> 12;
  }
  CurrentThread = KeGetCurrentThread();
  v10 = 0;
  v11 = *(ULONG_PTR ***)(v2 + 176);
  v62 = 0LL;
  v56 = 0LL;
  v71 = 0;
  v60 = (__int64)CurrentThread;
  if ( v11 )
    v12 = *v11;
  else
    v12 = &MiSystemPartition;
  if ( !v8 )
    goto LABEL_49;
  if ( (v1 & 0x80000) != 0 && (v7 & 0xF) != 0 || v1 < 0 && (v7 & 0x1FF) != 0 )
    return 3221225714LL;
  if ( !(unsigned int)MiChargeCommit((__int64)v12, v7, 0) )
    return 3221225773LL;
  if ( v1 >= 0 )
  {
    v6 = 1LL;
  }
  else
  {
    if ( !(unsigned int)MiChargeResident(v12, v7, 0LL, v13) )
    {
LABEL_115:
      if ( v8 )
      {
        MiFreeLargeZeroPages((int)v12, (__int64)v67, 0LL);
        if ( v10 )
          MiReturnResident((__int64)v12, v7);
        MiReturnCommit((__int64)v12, v7);
      }
      return 3221225626LL;
    }
    v14 = *(_DWORD *)(v2 + 172);
    v71 = 1;
    if ( v14 )
      v15 = v14 - 1;
    else
      v15 = *(_DWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 32532);
    v16 = (unsigned int *)(qword_140C4DE98 + 4LL * v15 * (unsigned __int16)KeNumberNodes);
    v17 = &v16[(unsigned __int16)KeNumberNodes];
    LargeZeroPages = MiAllocateLargeZeroPages((__int64)v12, v7, 512LL, v15, *(_DWORD *)(v2 + 32), (__int64)v67, 0);
    if ( LargeZeroPages != v7 )
    {
      do
      {
        if ( ++v16 == v17 )
          break;
        LargeZeroPages += MiAllocateLargeZeroPages(
                            (__int64)v12,
                            v7 - LargeZeroPages,
                            512LL,
                            *v16,
                            *(_DWORD *)(v2 + 32),
                            (__int64)v67,
                            0);
      }
      while ( LargeZeroPages != v7 );
      if ( LargeZeroPages != v7 )
      {
LABEL_114:
        v10 = v71;
        goto LABEL_115;
      }
    }
    PfnLink = v67[0];
    v6 = 1LL;
    if ( v67[0] )
    {
      v20 = 0LL;
      do
      {
        v20 += v6;
        PfnLink = MiGetPfnLink(PfnLink);
      }
      while ( PfnLink );
      v56 = v20;
      v2 = a1;
    }
  }
LABEL_49:
  P = 0LL;
  if ( (v1 & 0x88000000) == 0x8000000 )
  {
    v55 = v7;
    v21 = v6;
  }
  else
  {
    v22 = (unsigned __int64)(((v1 >> 31) & 0x100000u) + 0x100000) >> 3;
    v55 = v22;
    v21 = v7 / v22;
    if ( v7 % v22 )
      v21 += v6;
  }
  Pool = MiAllocatePool(64, 88 * v21 + 128, 0x61436D4Du);
  v23 = (__int64)Pool;
  if ( !Pool )
    goto LABEL_114;
  v24 = (__int64 *)MiAllocatePool(256, 0x50uLL, 0x6765534Du);
  v61 = v24;
  v25 = v24;
  if ( !v24 )
    goto LABEL_103;
  v24[9] = 0LL;
  v26 = (*(_WORD *)(v23 + 60) ^ *(_WORD *)v12) & 0x3FF;
  *(_DWORD *)(v23 + 96) = v21;
  *(_WORD *)(v23 + 60) ^= v26;
  *(_QWORD *)(v23 + 16) = v23 + 8;
  *(_QWORD *)(v23 + 8) = v23 + 8;
  v27 = *(_DWORD *)(v23 + 56);
  *(_QWORD *)(v23 + 112) = 1LL;
  *(_QWORD *)(v23 + 24) = 1LL;
  *(_QWORD *)(v23 + 48) = 1LL;
  *(_QWORD *)v23 = v24;
  if ( (v1 & 0x200000) != 0 )
  {
    v27 |= 0x40u;
    *(_DWORD *)(v23 + 56) = v27;
  }
  if ( (v1 & 0x4000000) != 0 )
  {
    v27 |= 0x1000u;
    *(_DWORD *)(v23 + 56) = v27;
  }
  if ( v8 )
  {
    v27 |= 0x2000u;
    *(_DWORD *)(v23 + 56) = v27;
  }
  if ( (v1 & 0x80000) != 0 )
  {
    v27 |= 0x80000000;
    *(_DWORD *)(v23 + 56) = v27;
  }
  v28 = *(_DWORD *)(v2 + 172);
  *(_QWORD *)(v23 + 104) = 0LL;
  *(_DWORD *)(v23 + 56) = v27 ^ (v27 ^ (v28 << 20)) & 0x3F00000;
  memset(v25, 0, 0x48uLL);
  v29 = 0x40000000LL;
  if ( (v1 & 0x10000000) != 0 )
  {
    v30 = 0x8000;
LABEL_67:
    *((_WORD *)v25 + 6) |= v30;
    goto LABEL_68;
  }
  if ( (v1 & 0x40000000) != 0 )
  {
    v30 = 0x4000;
    goto LABEL_67;
  }
LABEL_68:
  *((_BYTE *)v25 + 14) ^= (*((_BYTE *)v25 + 14) ^ (2 * *(_BYTE *)(v2 + 32))) & 0x3E;
  *((_DWORD *)v25 + 12) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
  v25[3] = v7 << 12;
  v31 = (*((_WORD *)v25 + 6) ^ WORD2(v7)) & 0x3FF;
  *v25 = v23;
  *((_WORD *)v25 + 6) ^= v31;
  *((_DWORD *)v25 + 2) = v7;
  if ( v72 )
  {
    v32 = *(_DWORD *)(v2 + 16);
    v33 = v32 >= 0 ? (v32 & 0x80000) != 0 : 2;
    if ( (v32 & 0x10000000) != 0 )
    {
      v33 |= 0x10u;
    }
    else if ( (v32 & 0x40000000) != 0 )
    {
      v33 |= 8u;
    }
    v34 = v33 | 4;
    if ( (*(_DWORD *)(v2 + 196) & 1) == 0 )
      v34 = v33;
    LOBYTE(v29) = *(_BYTE *)(v2 + 72);
    if ( (int)MiAllocateAweInfo(v23, 0LL, v34, v29, &v62) < 0 )
    {
LABEL_103:
      v50 = 0LL;
      if ( v21 )
      {
        v69 = v1 & 0x88000000;
        v51 = v23 + 136;
        do
        {
          v52 = *(void **)v51;
          if ( !*(_QWORD *)v51 )
            break;
          if ( v69 == -2013265920 )
          {
            MmReturnChargesToLockPagedPool(v52, 8LL * *(unsigned int *)(v51 + 36));
            v52 = *(void **)v51;
          }
          ExFreePoolWithTag(v52, 0);
          v51 += 88LL;
          ++v50;
        }
        while ( v50 < v21 );
        v25 = v61;
      }
      if ( v62 )
        MiDeleteSectionAwe(v23);
      ExFreePoolWithTag((PVOID)v23, 0);
      if ( v25 )
        ExFreePoolWithTag(v25, 0);
      goto LABEL_114;
    }
  }
  v73 = v7;
  v35 = 0LL;
  v58 = v23 + 128;
  v36 = 0LL;
  v57 = 0LL;
  v59 = 0LL;
  v37 = v23 + 128;
  for ( i = v23 + 128; v36 < v21; v59 = v36 )
  {
    i = v37;
    v39 = v55;
    v40 = *(_QWORD *)(v37 + 80) & 0xFFFFFFFFFFFFFFF8uLL | 1;
    *(_QWORD *)v37 = v23;
    *(_QWORD *)(v37 + 80) = v40;
    v41 = *(_WORD *)(v2 + 32);
    v65 = v37;
    if ( v73 <= v55 )
      v39 = v73;
    *(_DWORD *)(v37 + 36) = v35;
    v42 = v63 & *(_WORD *)(v37 + 32);
    v73 -= v39;
    *(_DWORD *)(v37 + 44) = v39;
    *(_WORD *)(v37 + 32) = (WORD2(v35) << 6) | (v42 | (unsigned __int8)(2 * v41)) & 0x3F;
    v64 = 8 * v39;
    if ( v8 )
    {
      v43 = MiAllocatePool(274, 8 * v39, 0x74536D4Du);
      P = v43;
      if ( !v43 )
        goto LABEL_103;
      if ( v1 < 0 )
      {
        if ( !(unsigned int)MmObtainChargesToLockPagedPool(v43, v64) )
        {
          ExFreePoolWithTag(P, 0);
          goto LABEL_103;
        }
        v43 = P;
      }
      v37 = v58;
      i = v65;
      v36 = v59;
      v35 = v57;
      LODWORD(v39) = *(_DWORD *)(v58 + 44);
      *(_QWORD *)(v58 + 8) = v43;
    }
    v37 += 88LL;
    v35 += (unsigned int)v39;
    v58 = v37;
    ++v36;
    v57 = v35;
    *(_QWORD *)(i + 16) = v37;
  }
  *(_QWORD *)(i + 16) = 0LL;
  v25[8] = (__int64)P;
  if ( v8 )
  {
    --*(_WORD *)(v60 + 486);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v25 + 5), 0LL);
    MiUpdateControlAreaCommitCount(v23, v7);
    if ( (_InterlockedExchangeAdd64(v25 + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v25 + 5);
    KeAbPostRelease((ULONG_PTR)(v25 + 5));
    KiLeaveGuardedRegionUnsafe(v60);
    if ( v1 >= 0 )
    {
      MiInitializePrototypePtes(*(_QWORD *)(v23 + 136));
      MiUpdateSystemProtoPtesTree((unsigned __int64 *)(v23 + 184), 1);
    }
    else
    {
      *((_WORD *)v25 + 6) |= 0x1000u;
      *(_DWORD *)(v23 + 92) |= 0x10000u;
      if ( v21 )
      {
        v44 = v56;
        v45 = v23 + 176;
        do
        {
          v46 = *(char **)(v45 - 40);
          MmLockPreChargedPagedPool(v46, 8LL * *(unsigned int *)(v45 - 4));
          v47 = *(_DWORD *)v45 & 0x3FFFFFFF | 0x40000000;
          *(_DWORD *)v45 = v47;
          if ( v44 )
          {
            --v44;
            *(_DWORD *)v45 = v47 & 0x3FFFFFFF | 0x80000000;
          }
          memset(v46, 0, 8LL * *(unsigned int *)(v45 - 4));
          MiUpdateSystemProtoPtesTree((unsigned __int64 *)(v45 + 8), 1);
          v70 = 0LL;
          if ( *(_DWORD *)(v45 - 4) )
          {
            do
            {
              v48 = 0LL;
              while ( 1 )
              {
                v49 = v67[v48];
                if ( v49 )
                  break;
                if ( (unsigned __int64)++v48 >= 4 )
                  goto LABEL_121;
              }
              v53 = MiGetPfnLink(v49);
              v67[v48] = v53;
LABEL_121:
              v54 = MiLargePageSizes[(unsigned int)v48];
              MiUpdateLargePageSectionPfns(v49, (unsigned __int64)v46, *(_DWORD *)(v2 + 32));
              v46 += 8 * v54;
              v70 += v54;
            }
            while ( v70 != *(_DWORD *)(v45 - 4) );
          }
          v45 += 88LL;
          --v21;
        }
        while ( v21 );
        v23 = (__int64)Pool;
        v25 = v61;
      }
    }
  }
  *(_QWORD *)(v2 + 64) = v23;
  _InterlockedAdd64((volatile signed __int64 *)v12 + 170, 1uLL);
  *(_DWORD *)v2 |= 4u;
  *(_QWORD *)(v2 + 128) = _InterlockedCompareExchange64(v25 + 3, -1LL, -1LL);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 )
    MiLogSectionCreate(v23, 1LL);
  return 0LL;
}
