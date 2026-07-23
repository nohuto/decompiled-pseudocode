/*
 * XREFs of MiCreatePagingFileMap @ 0x1406861B8
 * Callers:
 *     MiCreateSection @ 0x14071CAF0 (MiCreateSection.c)
 * Callees:
 *     MiUpdateControlAreaCommitCount @ 0x1402360D0 (MiUpdateControlAreaCommitCount.c)
 *     MiGetPfnLink @ 0x1402514D0 (MiGetPfnLink.c)
 *     MiReturnResident @ 0x140273F7C (MiReturnResident.c)
 *     MiChargeResident @ 0x14027BBC8 (MiChargeResident.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140302FB0 (MiUpdateSystemProtoPtesTree.c)
 *     MiFreeLargeZeroPages @ 0x1403080A4 (MiFreeLargeZeroPages.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUpdateLargePageSectionPfns @ 0x1403F41AC (MiUpdateLargePageSectionPfns.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiDeleteSectionAwe @ 0x14054BD48 (MiDeleteSectionAwe.c)
 *     MiAllocateLargeZeroPages @ 0x14055DC9C (MiAllocateLargeZeroPages.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     MiInitializePrototypePtes @ 0x1406FF6DC (MiInitializePrototypePtes.c)
 *     MmLockPreChargedPagedPool @ 0x140777900 (MmLockPreChargedPagedPool.c)
 *     MmObtainChargesToLockPagedPool @ 0x140792E70 (MmObtainChargesToLockPagedPool.c)
 *     MiLogSectionCreate @ 0x1408C79B0 (MiLogSectionCreate.c)
 *     MmReturnChargesToLockPagedPool @ 0x1408C8640 (MmReturnChargesToLockPagedPool.c)
 *     MiAllocateAweInfo @ 0x1408D4CE0 (MiAllocateAweInfo.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  int v13; // r9d
  unsigned int v14; // r9d
  unsigned int *v15; // r14
  unsigned int *v16; // r15
  unsigned __int64 LargeZeroPages; // rbx
  __int64 PfnLink; // rcx
  __int64 v19; // rbp
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // r14
  __int64 v22; // rbx
  __int64 *v23; // rax
  __int64 *v24; // r14
  __int16 v25; // dx
  int v26; // ecx
  int v27; // eax
  __int64 v28; // r9
  __int16 v29; // ax
  __int16 v30; // ax
  int v31; // eax
  unsigned int v32; // ecx
  __int64 v33; // r8
  __int64 v34; // r11
  unsigned __int64 v35; // r10
  __int64 v36; // rdx
  __int64 i; // r9
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // rax
  __int16 v40; // cx
  unsigned __int8 v41; // al
  PVOID v42; // rax
  __int64 v43; // r14
  __int64 v44; // rsi
  char *v45; // r12
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned __int64 v49; // rbp
  __int64 v50; // rdi
  void *v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rdi
  unsigned __int64 v54; // [rsp+40h] [rbp-D8h]
  __int64 v55; // [rsp+48h] [rbp-D0h]
  __int64 v56; // [rsp+50h] [rbp-C8h]
  __int64 v57; // [rsp+58h] [rbp-C0h]
  unsigned __int64 v58; // [rsp+60h] [rbp-B8h]
  __int64 v59; // [rsp+68h] [rbp-B0h]
  __int64 *v60; // [rsp+78h] [rbp-A0h]
  __int64 v61; // [rsp+80h] [rbp-98h] BYREF
  __int64 v62; // [rsp+88h] [rbp-90h]
  __int64 v63; // [rsp+90h] [rbp-88h]
  __int64 v64; // [rsp+98h] [rbp-80h]
  PVOID Pool; // [rsp+A0h] [rbp-78h]
  _QWORD v66[14]; // [rsp+A8h] [rbp-70h] BYREF
  unsigned int v68; // [rsp+120h] [rbp+8h]
  __int64 v69; // [rsp+120h] [rbp+8h]
  char v70; // [rsp+128h] [rbp+10h]
  char v71; // [rsp+130h] [rbp+18h]
  unsigned __int64 v72; // [rsp+130h] [rbp+18h]
  PVOID P; // [rsp+138h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 16);
  v2 = a1;
  memset(v66, 0, 32);
  if ( (v1 & 0x1000000) != 0 )
    return 3221225504LL;
  v4 = *(_BYTE *)(a1 + 192);
  v71 = v4;
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
  v62 = 1LL;
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
  v61 = 0LL;
  v55 = 0LL;
  v70 = 0;
  v59 = (__int64)CurrentThread;
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
    if ( !(unsigned int)MiChargeResident(v12, v7, 0LL) )
    {
LABEL_115:
      if ( v8 )
      {
        MiFreeLargeZeroPages((int)v12, (char *)v66, 0);
        if ( v10 )
          MiReturnResident((__int64)v12, v7);
        MiReturnCommit((__int64)v12, v7);
      }
      return 3221225626LL;
    }
    v13 = *(_DWORD *)(v2 + 172);
    v70 = 1;
    if ( v13 )
      v14 = v13 - 1;
    else
      v14 = *(_DWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 32532);
    v15 = (unsigned int *)(qword_140C4DED8 + 4LL * v14 * (unsigned __int16)KeNumberNodes);
    v16 = &v15[(unsigned __int16)KeNumberNodes];
    LargeZeroPages = MiAllocateLargeZeroPages((__int64)v12, v7, 512LL, v14, *(_DWORD *)(v2 + 32), (__int64)v66, 0);
    if ( LargeZeroPages != v7 )
    {
      do
      {
        if ( ++v15 == v16 )
          break;
        LargeZeroPages += MiAllocateLargeZeroPages(
                            (__int64)v12,
                            v7 - LargeZeroPages,
                            512LL,
                            *v15,
                            *(_DWORD *)(v2 + 32),
                            (__int64)v66,
                            0);
      }
      while ( LargeZeroPages != v7 );
      if ( LargeZeroPages != v7 )
      {
LABEL_114:
        v10 = v70;
        goto LABEL_115;
      }
    }
    PfnLink = v66[0];
    v6 = 1LL;
    if ( v66[0] )
    {
      v19 = 0LL;
      do
      {
        v19 += v6;
        PfnLink = MiGetPfnLink(PfnLink);
      }
      while ( PfnLink );
      v55 = v19;
      v2 = a1;
    }
  }
LABEL_49:
  P = 0LL;
  if ( (v1 & 0x88000000) == 0x8000000 )
  {
    v54 = v7;
    v20 = v6;
  }
  else
  {
    v21 = (unsigned __int64)(((v1 >> 31) & 0x100000u) + 0x100000) >> 3;
    v54 = v21;
    v20 = v7 / v21;
    if ( v7 % v21 )
      v20 += v6;
  }
  Pool = MiAllocatePool(64, 88 * v20 + 128, 0x61436D4Du);
  v22 = (__int64)Pool;
  if ( !Pool )
    goto LABEL_114;
  v23 = (__int64 *)MiAllocatePool(256, 0x50uLL, 0x6765534Du);
  v60 = v23;
  v24 = v23;
  if ( !v23 )
    goto LABEL_103;
  v23[9] = 0LL;
  v25 = (*(_WORD *)(v22 + 60) ^ *(_WORD *)v12) & 0x3FF;
  *(_DWORD *)(v22 + 96) = v20;
  *(_WORD *)(v22 + 60) ^= v25;
  *(_QWORD *)(v22 + 16) = v22 + 8;
  *(_QWORD *)(v22 + 8) = v22 + 8;
  v26 = *(_DWORD *)(v22 + 56);
  *(_QWORD *)(v22 + 112) = 1LL;
  *(_QWORD *)(v22 + 24) = 1LL;
  *(_QWORD *)(v22 + 48) = 1LL;
  *(_QWORD *)v22 = v23;
  if ( (v1 & 0x200000) != 0 )
  {
    v26 |= 0x40u;
    *(_DWORD *)(v22 + 56) = v26;
  }
  if ( (v1 & 0x4000000) != 0 )
  {
    v26 |= 0x1000u;
    *(_DWORD *)(v22 + 56) = v26;
  }
  if ( v8 )
  {
    v26 |= 0x2000u;
    *(_DWORD *)(v22 + 56) = v26;
  }
  if ( (v1 & 0x80000) != 0 )
  {
    v26 |= 0x80000000;
    *(_DWORD *)(v22 + 56) = v26;
  }
  v27 = *(_DWORD *)(v2 + 172);
  *(_QWORD *)(v22 + 104) = 0LL;
  *(_DWORD *)(v22 + 56) = v26 ^ (v26 ^ (v27 << 20)) & 0x3F00000;
  memset(v24, 0, 0x48uLL);
  v28 = 0x40000000LL;
  if ( (v1 & 0x10000000) != 0 )
  {
    v29 = 0x8000;
LABEL_67:
    *((_WORD *)v24 + 6) |= v29;
    goto LABEL_68;
  }
  if ( (v1 & 0x40000000) != 0 )
  {
    v29 = 0x4000;
    goto LABEL_67;
  }
LABEL_68:
  *((_BYTE *)v24 + 14) ^= (*((_BYTE *)v24 + 14) ^ (2 * *(_BYTE *)(v2 + 32))) & 0x3E;
  *((_DWORD *)v24 + 12) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
  v24[3] = v7 << 12;
  v30 = (*((_WORD *)v24 + 6) ^ WORD2(v7)) & 0x3FF;
  *v24 = v22;
  *((_WORD *)v24 + 6) ^= v30;
  *((_DWORD *)v24 + 2) = v7;
  if ( v71 )
  {
    v31 = *(_DWORD *)(v2 + 16);
    v32 = v31 >= 0 ? (v31 & 0x80000) != 0 : 2;
    if ( (v31 & 0x10000000) != 0 )
    {
      v32 |= 0x10u;
    }
    else if ( (v31 & 0x40000000) != 0 )
    {
      v32 |= 8u;
    }
    v33 = v32 | 4;
    if ( (*(_DWORD *)(v2 + 196) & 1) == 0 )
      v33 = v32;
    LOBYTE(v28) = *(_BYTE *)(v2 + 72);
    if ( (int)MiAllocateAweInfo(v22, 0LL, v33, v28, &v61) < 0 )
    {
LABEL_103:
      v49 = 0LL;
      if ( v20 )
      {
        v68 = v1 & 0x88000000;
        v50 = v22 + 136;
        do
        {
          v51 = *(void **)v50;
          if ( !*(_QWORD *)v50 )
            break;
          if ( v68 == -2013265920 )
          {
            MmReturnChargesToLockPagedPool(v51, 8LL * *(unsigned int *)(v50 + 36));
            v51 = *(void **)v50;
          }
          ExFreePoolWithTag(v51, 0);
          v50 += 88LL;
          ++v49;
        }
        while ( v49 < v20 );
        v24 = v60;
      }
      if ( v61 )
        MiDeleteSectionAwe(v22);
      ExFreePoolWithTag((PVOID)v22, 0);
      if ( v24 )
        ExFreePoolWithTag(v24, 0);
      goto LABEL_114;
    }
  }
  v72 = v7;
  v34 = 0LL;
  v57 = v22 + 128;
  v35 = 0LL;
  v56 = 0LL;
  v58 = 0LL;
  v36 = v22 + 128;
  for ( i = v22 + 128; v35 < v20; v58 = v35 )
  {
    i = v36;
    v38 = v54;
    v39 = *(_QWORD *)(v36 + 80) & 0xFFFFFFFFFFFFFFF8uLL | 1;
    *(_QWORD *)v36 = v22;
    *(_QWORD *)(v36 + 80) = v39;
    v40 = *(_WORD *)(v2 + 32);
    v64 = v36;
    if ( v72 <= v54 )
      v38 = v72;
    *(_DWORD *)(v36 + 36) = v34;
    v41 = v62 & *(_WORD *)(v36 + 32);
    v72 -= v38;
    *(_DWORD *)(v36 + 44) = v38;
    *(_WORD *)(v36 + 32) = (WORD2(v34) << 6) | (v41 | (unsigned __int8)(2 * v40)) & 0x3F;
    v63 = 8 * v38;
    if ( v8 )
    {
      v42 = MiAllocatePool(274, 8 * v38, 0x74536D4Du);
      P = v42;
      if ( !v42 )
        goto LABEL_103;
      if ( v1 < 0 )
      {
        if ( !(unsigned int)MmObtainChargesToLockPagedPool(v42, v63) )
        {
          ExFreePoolWithTag(P, 0);
          goto LABEL_103;
        }
        v42 = P;
      }
      v36 = v57;
      i = v64;
      v35 = v58;
      v34 = v56;
      LODWORD(v38) = *(_DWORD *)(v57 + 44);
      *(_QWORD *)(v57 + 8) = v42;
    }
    v36 += 88LL;
    v34 += (unsigned int)v38;
    v57 = v36;
    ++v35;
    v56 = v34;
    *(_QWORD *)(i + 16) = v36;
  }
  *(_QWORD *)(i + 16) = 0LL;
  v24[8] = (__int64)P;
  if ( v8 )
  {
    --*(_WORD *)(v59 + 486);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v24 + 5), 0LL);
    MiUpdateControlAreaCommitCount(v22, v7);
    if ( (_InterlockedExchangeAdd64(v24 + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v24 + 5);
    KeAbPostRelease((ULONG_PTR)(v24 + 5));
    KiLeaveGuardedRegionUnsafe(v59);
    if ( v1 >= 0 )
    {
      MiInitializePrototypePtes(*(_QWORD *)(v22 + 136));
      MiUpdateSystemProtoPtesTree((unsigned __int64 *)(v22 + 184), 1);
    }
    else
    {
      *((_WORD *)v24 + 6) |= 0x1000u;
      *(_DWORD *)(v22 + 92) |= 0x10000u;
      if ( v20 )
      {
        v43 = v55;
        v44 = v22 + 176;
        do
        {
          v45 = *(char **)(v44 - 40);
          MmLockPreChargedPagedPool(v45, 8LL * *(unsigned int *)(v44 - 4));
          v46 = *(_DWORD *)v44 & 0x3FFFFFFF | 0x40000000;
          *(_DWORD *)v44 = v46;
          if ( v43 )
          {
            --v43;
            *(_DWORD *)v44 = v46 & 0x3FFFFFFF | 0x80000000;
          }
          memset(v45, 0, 8LL * *(unsigned int *)(v44 - 4));
          MiUpdateSystemProtoPtesTree((unsigned __int64 *)(v44 + 8), 1);
          v69 = 0LL;
          if ( *(_DWORD *)(v44 - 4) )
          {
            do
            {
              v47 = 0LL;
              while ( 1 )
              {
                v48 = v66[v47];
                if ( v48 )
                  break;
                if ( (unsigned __int64)++v47 >= 4 )
                  goto LABEL_121;
              }
              v52 = MiGetPfnLink(v48);
              v66[v47] = v52;
LABEL_121:
              v53 = MiLargePageSizes[(unsigned int)v47];
              MiUpdateLargePageSectionPfns(v48, (unsigned __int64)v45, *(_DWORD *)(v2 + 32));
              v45 += 8 * v53;
              v69 += v53;
            }
            while ( v69 != *(_DWORD *)(v44 - 4) );
          }
          v44 += 88LL;
          --v20;
        }
        while ( v20 );
        v22 = (__int64)Pool;
        v24 = v60;
      }
    }
  }
  *(_QWORD *)(v2 + 64) = v22;
  _InterlockedAdd64((volatile signed __int64 *)v12 + 170, 1uLL);
  *(_DWORD *)v2 |= 4u;
  *(_QWORD *)(v2 + 128) = _InterlockedCompareExchange64(v24 + 3, -1LL, -1LL);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 )
    MiLogSectionCreate(v22, 1LL);
  return 0LL;
}
