/*
 * XREFs of MiCreatePagingFileMap @ 0x14063F164
 * Callers:
 *     MiCreateSection @ 0x14062FFB0 (MiCreateSection.c)
 * Callees:
 *     MiChargeCommit @ 0x14021A460 (MiChargeCommit.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402BCA00 (MiUpdateSystemProtoPtesTree.c)
 *     MiUpdateControlAreaCommitCount @ 0x1402BCBAC (MiUpdateControlAreaCommitCount.c)
 *     MiReturnResident @ 0x1402D4EFC (MiReturnResident.c)
 *     MiGetPfnLink @ 0x140322740 (MiGetPfnLink.c)
 *     MiFreeLargeZeroPages @ 0x1403264CC (MiFreeLargeZeroPages.c)
 *     MiChargeResident @ 0x1403550AC (MiChargeResident.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MiUpdateLargePageSectionPfns @ 0x1403ED43C (MiUpdateLargePageSectionPfns.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiDeleteSectionAwe @ 0x140545FE8 (MiDeleteSectionAwe.c)
 *     MiAllocateLargeZeroPages @ 0x140557F6C (MiAllocateLargeZeroPages.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     MiInitializePrototypePtes @ 0x14063FAC4 (MiInitializePrototypePtes.c)
 *     MmLockPreChargedPagedPool @ 0x140762D40 (MmLockPreChargedPagedPool.c)
 *     MmObtainChargesToLockPagedPool @ 0x14077BBF0 (MmObtainChargesToLockPagedPool.c)
 *     MiLogSectionCreate @ 0x1408C2F00 (MiLogSectionCreate.c)
 *     MmReturnChargesToLockPagedPool @ 0x1408C3B90 (MmReturnChargesToLockPagedPool.c)
 *     MiAllocateAweInfo @ 0x1408D0230 (MiAllocateAweInfo.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r14
  __int64 v47; // rsi
  char *v48; // r12
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned __int64 v52; // rbp
  __int64 v53; // rdi
  void *v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rdi
  unsigned __int64 v57; // [rsp+40h] [rbp-D8h]
  __int64 v58; // [rsp+48h] [rbp-D0h]
  __int64 v59; // [rsp+50h] [rbp-C8h]
  __int64 v60; // [rsp+58h] [rbp-C0h]
  unsigned __int64 v61; // [rsp+60h] [rbp-B8h]
  __int64 v62; // [rsp+68h] [rbp-B0h]
  __int64 *v63; // [rsp+78h] [rbp-A0h]
  __int64 v64; // [rsp+80h] [rbp-98h] BYREF
  __int64 v65; // [rsp+88h] [rbp-90h]
  __int64 v66; // [rsp+90h] [rbp-88h]
  __int64 v67; // [rsp+98h] [rbp-80h]
  PVOID Pool; // [rsp+A0h] [rbp-78h]
  _QWORD v69[14]; // [rsp+A8h] [rbp-70h] BYREF
  unsigned int v71; // [rsp+120h] [rbp+8h]
  __int64 v72; // [rsp+120h] [rbp+8h]
  char v73; // [rsp+128h] [rbp+10h]
  char v74; // [rsp+130h] [rbp+18h]
  unsigned __int64 v75; // [rsp+130h] [rbp+18h]
  PVOID P; // [rsp+138h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 16);
  v2 = a1;
  memset(v69, 0, 32);
  if ( (v1 & 0x1000000) != 0 )
    return 3221225504LL;
  v4 = *(_BYTE *)(a1 + 192);
  v74 = v4;
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
  v65 = 1LL;
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
  v64 = 0LL;
  v58 = 0LL;
  v73 = 0;
  v62 = (__int64)CurrentThread;
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
        MiFreeLargeZeroPages((int)v12, (char *)v69, 0);
        if ( v10 )
          MiReturnResident((__int64)v12, v7);
        MiReturnCommit((__int64)v12, v7);
      }
      return 3221225626LL;
    }
    v13 = *(_DWORD *)(v2 + 172);
    v73 = 1;
    if ( v13 )
      v14 = v13 - 1;
    else
      v14 = *(_DWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 32532);
    v15 = (unsigned int *)(qword_140C4DDD8 + 4LL * v14 * (unsigned __int16)KeNumberNodes);
    v16 = &v15[(unsigned __int16)KeNumberNodes];
    LargeZeroPages = MiAllocateLargeZeroPages((__int64)v12, v7, 512LL, v14, *(_DWORD *)(v2 + 32), (__int64)v69, 0);
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
                            (__int64)v69,
                            0);
      }
      while ( LargeZeroPages != v7 );
      if ( LargeZeroPages != v7 )
      {
LABEL_114:
        v10 = v73;
        goto LABEL_115;
      }
    }
    PfnLink = v69[0];
    v6 = 1LL;
    if ( v69[0] )
    {
      v19 = 0LL;
      do
      {
        v19 += v6;
        PfnLink = MiGetPfnLink(PfnLink);
      }
      while ( PfnLink );
      v58 = v19;
      v2 = a1;
    }
  }
LABEL_49:
  P = 0LL;
  if ( (v1 & 0x88000000) == 0x8000000 )
  {
    v57 = v7;
    v20 = v6;
  }
  else
  {
    v21 = (unsigned __int64)(((v1 >> 31) & 0x100000u) + 0x100000) >> 3;
    v57 = v21;
    v20 = v7 / v21;
    if ( v7 % v21 )
      v20 += v6;
  }
  Pool = MiAllocatePool(64, 88 * v20 + 128, 0x61436D4Du);
  v22 = (__int64)Pool;
  if ( !Pool )
    goto LABEL_114;
  v23 = (__int64 *)MiAllocatePool(256, 0x50uLL, 0x6765534Du);
  v63 = v23;
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
  if ( v74 )
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
    if ( (int)MiAllocateAweInfo(v22, 0LL, v33, v28, &v64) < 0 )
    {
LABEL_103:
      v52 = 0LL;
      if ( v20 )
      {
        v71 = v1 & 0x88000000;
        v53 = v22 + 136;
        do
        {
          v54 = *(void **)v53;
          if ( !*(_QWORD *)v53 )
            break;
          if ( v71 == -2013265920 )
          {
            MmReturnChargesToLockPagedPool(v54, 8LL * *(unsigned int *)(v53 + 36));
            v54 = *(void **)v53;
          }
          ExFreePoolWithTag(v54, 0);
          v53 += 88LL;
          ++v52;
        }
        while ( v52 < v20 );
        v24 = v63;
      }
      if ( v64 )
        MiDeleteSectionAwe(v22);
      ExFreePoolWithTag((PVOID)v22, 0);
      if ( v24 )
        ExFreePoolWithTag(v24, 0);
      goto LABEL_114;
    }
  }
  v75 = v7;
  v34 = 0LL;
  v60 = v22 + 128;
  v35 = 0LL;
  v59 = 0LL;
  v61 = 0LL;
  v36 = v22 + 128;
  for ( i = v22 + 128; v35 < v20; v61 = v35 )
  {
    i = v36;
    v38 = v57;
    v39 = *(_QWORD *)(v36 + 80) & 0xFFFFFFFFFFFFFFF8uLL | 1;
    *(_QWORD *)v36 = v22;
    *(_QWORD *)(v36 + 80) = v39;
    v40 = *(_WORD *)(v2 + 32);
    v67 = v36;
    if ( v75 <= v57 )
      v38 = v75;
    *(_DWORD *)(v36 + 36) = v34;
    v41 = v65 & *(_WORD *)(v36 + 32);
    v75 -= v38;
    *(_DWORD *)(v36 + 44) = v38;
    *(_WORD *)(v36 + 32) = (WORD2(v34) << 6) | (v41 | (unsigned __int8)(2 * v40)) & 0x3F;
    v66 = 8 * v38;
    if ( v8 )
    {
      v42 = MiAllocatePool(274, 8 * v38, 0x74536D4Du);
      P = v42;
      if ( !v42 )
        goto LABEL_103;
      if ( v1 < 0 )
      {
        if ( !(unsigned int)MmObtainChargesToLockPagedPool(v42, v66) )
        {
          ExFreePoolWithTag(P, 0);
          goto LABEL_103;
        }
        v42 = P;
      }
      v36 = v60;
      i = v67;
      v35 = v61;
      v34 = v59;
      LODWORD(v38) = *(_DWORD *)(v60 + 44);
      *(_QWORD *)(v60 + 8) = v42;
    }
    v36 += 88LL;
    v34 += (unsigned int)v38;
    v60 = v36;
    ++v35;
    v59 = v34;
    *(_QWORD *)(i + 16) = v36;
  }
  *(_QWORD *)(i + 16) = 0LL;
  v24[8] = (__int64)P;
  if ( v8 )
  {
    --*(_WORD *)(v62 + 486);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v24 + 5), 0LL);
    MiUpdateControlAreaCommitCount(v22, v7);
    if ( (_InterlockedExchangeAdd64(v24 + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v24 + 5);
    KeAbPostRelease((ULONG_PTR)(v24 + 5));
    KiLeaveGuardedRegionUnsafe(v62, v43, v44, v45);
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
        v46 = v58;
        v47 = v22 + 176;
        do
        {
          v48 = *(char **)(v47 - 40);
          MmLockPreChargedPagedPool(v48, 8LL * *(unsigned int *)(v47 - 4));
          v49 = *(_DWORD *)v47 & 0x3FFFFFFF | 0x40000000;
          *(_DWORD *)v47 = v49;
          if ( v46 )
          {
            --v46;
            *(_DWORD *)v47 = v49 & 0x3FFFFFFF | 0x80000000;
          }
          memset(v48, 0, 8LL * *(unsigned int *)(v47 - 4));
          MiUpdateSystemProtoPtesTree((unsigned __int64 *)(v47 + 8), 1);
          v72 = 0LL;
          if ( *(_DWORD *)(v47 - 4) )
          {
            do
            {
              v50 = 0LL;
              while ( 1 )
              {
                v51 = v69[v50];
                if ( v51 )
                  break;
                if ( (unsigned __int64)++v50 >= 4 )
                  goto LABEL_121;
              }
              v55 = MiGetPfnLink(v51);
              v69[v50] = v55;
LABEL_121:
              v56 = MiLargePageSizes[(unsigned int)v50];
              MiUpdateLargePageSectionPfns(v51, (unsigned __int64)v48, *(unsigned int *)(v2 + 32));
              v48 += 8 * v56;
              v72 += v56;
            }
            while ( v72 != *(_DWORD *)(v47 - 4) );
          }
          v47 += 88LL;
          --v20;
        }
        while ( v20 );
        v22 = (__int64)Pool;
        v24 = v63;
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
