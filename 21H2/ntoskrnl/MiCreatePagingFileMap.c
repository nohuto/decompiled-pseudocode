/*
 * XREFs of MiCreatePagingFileMap @ 0x1406F3A44
 * Callers:
 *     MiCreateSection @ 0x1406FD4A0 (MiCreateSection.c)
 * Callees:
 *     MiReturnResident @ 0x140216E18 (MiReturnResident.c)
 *     MiFreeLargeZeroPages @ 0x14026E05C (MiFreeLargeZeroPages.c)
 *     MiInitializeLargePfnList @ 0x14026E1F4 (MiInitializeLargePfnList.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14026EA80 (MiUpdateSystemProtoPtesTree.c)
 *     MiUpdateControlAreaCommitCount @ 0x14026EC38 (MiUpdateControlAreaCommitCount.c)
 *     MiChargeResident @ 0x1402821F4 (MiChargeResident.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiChargeCommit @ 0x14032A4B0 (MiChargeCommit.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiUpdateLargePageSectionPfns @ 0x14058D990 (MiUpdateLargePageSectionPfns.c)
 *     MiDeleteSectionAwe @ 0x1405AA5E8 (MiDeleteSectionAwe.c)
 *     MiAllocateLargeZeroPages @ 0x1405C0D40 (MiAllocateLargeZeroPages.c)
 *     MiInitializePrototypePtes @ 0x1406F4768 (MiInitializePrototypePtes.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     MmLockPreChargedPagedPool @ 0x140808190 (MmLockPreChargedPagedPool.c)
 *     MmObtainChargesToLockPagedPool @ 0x14081D080 (MmObtainChargesToLockPagedPool.c)
 *     MiLogSectionCreate @ 0x14096BF70 (MiLogSectionCreate.c)
 *     MmReturnChargesToLockPagedPool @ 0x14096CA90 (MmReturnChargesToLockPagedPool.c)
 *     MiAllocateAweInfo @ 0x14097BBE0 (MiAllocateAweInfo.c)
 *     MiValidateUserPhysicalExternalFlags @ 0x14097D948 (MiValidateUserPhysicalExternalFlags.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreatePagingFileMap(__int64 a1)
{
  int v2; // esi
  char v3; // di
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r12
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *v7; // rax
  ULONG_PTR *v8; // r13
  unsigned __int64 v9; // rdi
  _QWORD *Pool; // rbx
  volatile signed __int64 *v11; // rax
  volatile signed __int64 *v12; // r15
  __int16 v13; // dx
  int v14; // ecx
  int v15; // eax
  __int64 v16; // r9
  __int16 v17; // ax
  __int64 v18; // r11
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r8
  _QWORD *v21; // rdx
  _QWORD *v22; // r9
  unsigned __int64 v23; // rax
  __int16 v24; // cx
  __int16 v25; // cx
  PVOID v26; // rax
  ULONG_PTR v27; // rcx
  bool v28; // zf
  unsigned __int64 v30; // r15
  __int16 v31; // ax
  __int64 v32; // rax
  int v33; // eax
  int v34; // eax
  _DWORD *v35; // rbx
  _DWORD *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rcx
  int v39; // eax
  unsigned int v40; // ecx
  __int64 v41; // r8
  void **v42; // rdi
  unsigned __int64 v43; // rsi
  void *v44; // rcx
  unsigned __int64 v45; // r12
  _DWORD *v46; // rsi
  void *v47; // rdi
  int v48; // eax
  __int64 v49; // r9
  __int64 v50; // rcx
  _QWORD *v51; // rax
  __int64 *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rdi
  char v55; // [rsp+30h] [rbp-D0h]
  char v56; // [rsp+31h] [rbp-CFh]
  int v57; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v58; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v59; // [rsp+38h] [rbp-C8h]
  _QWORD *v60; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v61; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v62; // [rsp+48h] [rbp-B8h]
  __int64 v63; // [rsp+48h] [rbp-B8h]
  struct _KTHREAD *v64; // [rsp+50h] [rbp-B0h]
  __int64 v65; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v66; // [rsp+58h] [rbp-A8h]
  PVOID P; // [rsp+60h] [rbp-A0h]
  unsigned int v68; // [rsp+68h] [rbp-98h]
  __int64 v69; // [rsp+70h] [rbp-90h]
  unsigned __int64 v70; // [rsp+78h] [rbp-88h]
  __int64 v71; // [rsp+80h] [rbp-80h]
  __int64 v72; // [rsp+88h] [rbp-78h] BYREF
  __int64 v73; // [rsp+90h] [rbp-70h]
  _QWORD *v74; // [rsp+98h] [rbp-68h]
  _QWORD v75[12]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v76[12]; // [rsp+100h] [rbp+0h] BYREF

  memset(v76, 0, sizeof(v76));
  memset(v75, 0, 0x58uLL);
  v2 = *(_DWORD *)(a1 + 16);
  if ( (v2 & 0x1000000) != 0 )
    return 3221225504LL;
  MiInitializeLargePfnList(v76);
  v3 = *(_BYTE *)(a1 + 192);
  v56 = v3;
  if ( v3 )
  {
    if ( (int)MiValidateUserPhysicalExternalFlags((unsigned int)v2) < 0 )
      return 3221225485LL;
    if ( (*(_DWORD *)(a1 + 28) & 7) != 4 )
      return 3221225541LL;
    if ( (*(_DWORD *)(a1 + 32) & 7) != 4 )
      return 3221225485LL;
  }
  else
  {
    if ( v2 >= 0 )
    {
      if ( (v2 & 0x20000) == 0 )
        goto LABEL_5;
      return 3221225716LL;
    }
    if ( (v2 & 0x8000000) == 0 )
      return 3221225716LL;
  }
  if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *(_BYTE *)(a1 + 72)) )
    return 3221225569LL;
LABEL_5:
  v4 = *(_QWORD *)(a1 + 152);
  if ( v3 )
  {
    if ( v4 )
      return 3221225714LL;
    v5 = 1LL;
  }
  else
  {
    if ( !v4 )
      return 3221225714LL;
    if ( v4 > (-(__int64)((v2 & 0x8000000) != 0) & 0xFFFFF001000uLL) - 4096 )
      return 3221225536LL;
    v5 = (v4 + 4095) >> 12;
  }
  CurrentThread = KeGetCurrentThread();
  v72 = 0LL;
  v69 = 0LL;
  v7 = *(__int64 **)(a1 + 176);
  v55 = 0;
  v64 = CurrentThread;
  if ( v7 )
  {
    v32 = *v7;
    v8 = (ULONG_PTR *)v32;
    if ( (ULONG_PTR *)v32 != &MiSystemPartition && (*(_DWORD *)(v32 + 4) & 0x100) != 0 )
      return 3221225659LL;
  }
  else
  {
    v8 = &MiSystemPartition;
  }
  v57 = v2 & 0x8000000;
  if ( (v2 & 0x8000000) == 0 )
    goto LABEL_16;
  if ( (v2 & 0x80000) != 0 && (v5 & 0xF) != 0 || v2 < 0 && (v5 & 0x1FF) != 0 )
    return 3221225714LL;
  if ( !(unsigned int)MiChargeCommit((__int64)v8, v5, 0) )
    return 3221225773LL;
  if ( v2 < 0 )
  {
    if ( !(unsigned int)MiChargeResident(v8, v5, 0LL) )
      goto LABEL_110;
    v33 = *(_DWORD *)(a1 + 172);
    v55 = 1;
    v34 = v33 ? v33 - 1 : *(_DWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 33364);
    LODWORD(v75[4]) = v34;
    HIDWORD(v75[4]) = *(_DWORD *)(a1 + 32);
    v75[5] = -1LL;
    v75[1] = v8;
    v75[2] = v5;
    v75[3] = 512LL;
    v35 = (_DWORD *)(qword_140C506D8 + 4LL * v34 * (unsigned int)(unsigned __int16)KeNumberNodes);
    v75[10] = v76;
    v36 = &v35[(unsigned __int16)KeNumberNodes];
    MiAllocateLargeZeroPages((unsigned int *)v75);
    v37 = v75[9];
    v38 = v75[2];
    if ( v75[9] != v75[2] )
    {
      do
      {
        if ( ++v35 == v36 )
          break;
        LODWORD(v75[4]) = *v35;
        MiAllocateLargeZeroPages((unsigned int *)v75);
        v37 = v75[9];
        v38 = v75[2];
      }
      while ( v75[9] != v75[2] );
      if ( v37 != v38 )
        goto LABEL_110;
    }
    v69 = v76[2];
  }
LABEL_16:
  P = 0LL;
  if ( (v2 & 0x88000000) == 0x8000000 )
  {
    v70 = v5;
    v9 = 1LL;
    v58 = 1LL;
  }
  else
  {
    v30 = (unsigned __int64)(((v2 >> 31) & 0x100000u) + 0x100000) >> 3;
    v70 = v30;
    v58 = v5 / v30;
    v9 = v5 / v30;
    if ( v5 % v30 )
      v58 = ++v9;
  }
  Pool = MiAllocatePool(64, 88 * v9 + 128, 0x61436D4Du);
  if ( !Pool )
    goto LABEL_109;
  v11 = (volatile signed __int64 *)MiAllocatePool(256, 0x50uLL, 0x6765534Du);
  v12 = v11;
  if ( !v11 )
  {
LABEL_99:
    if ( v9 )
    {
LABEL_100:
      v68 = v2 & 0x88000000;
      v42 = (void **)(Pool + 17);
      v43 = 0LL;
      do
      {
        v44 = *v42;
        if ( !*v42 )
          break;
        if ( v68 == -2013265920 )
        {
          MmReturnChargesToLockPagedPool(v44, 8LL * *((unsigned int *)v42 + 9));
          v44 = *v42;
        }
        ExFreePoolWithTag(v44, 0);
        v42 += 11;
        ++v43;
      }
      while ( v43 < v58 );
    }
    if ( v72 )
      MiDeleteSectionAwe((__int64)Pool);
    ExFreePoolWithTag(Pool, 0);
    if ( v12 )
      ExFreePoolWithTag((PVOID)v12, 0);
LABEL_109:
    if ( !v57 )
      return 3221225626LL;
LABEL_110:
    MiFreeLargeZeroPages((int)v8, (__int64)v76, 0, 0LL);
    if ( v55 )
      MiReturnResident((__int64)v8, v5);
    MiReturnCommit((__int64)v8, v5);
    return 3221225626LL;
  }
  *((_QWORD *)v11 + 9) = 0LL;
  v13 = (*((_WORD *)Pool + 30) ^ *(_WORD *)v8) & 0x3FF;
  *((_DWORD *)Pool + 24) = v9;
  *((_WORD *)Pool + 30) ^= v13;
  Pool[2] = Pool + 1;
  Pool[1] = Pool + 1;
  v14 = *((_DWORD *)Pool + 14);
  Pool[14] = 1LL;
  Pool[3] = 1LL;
  Pool[6] = 1LL;
  *Pool = v11;
  if ( (v2 & 0x200000) != 0 )
  {
    v14 |= 0x40u;
    *((_DWORD *)Pool + 14) = v14;
  }
  if ( (v2 & 0x4000000) != 0 )
  {
    v14 |= 0x1000u;
    *((_DWORD *)Pool + 14) = v14;
  }
  if ( v57 )
  {
    v14 |= 0x2000u;
    *((_DWORD *)Pool + 14) = v14;
  }
  if ( (v2 & 0x80000) != 0 )
  {
    v14 |= 0x80000000;
    *((_DWORD *)Pool + 14) = v14;
  }
  v15 = *(_DWORD *)(a1 + 172);
  Pool[13] = 0LL;
  *((_DWORD *)Pool + 14) = v14 ^ (v14 ^ (v15 << 20)) & 0x7F00000;
  memset((void *)v12, 0, 0x48uLL);
  if ( (v2 & 0x10000000) != 0 )
  {
    v31 = 0x8000;
    goto LABEL_54;
  }
  if ( (v2 & 0x40000000) != 0 )
  {
    v31 = 0x4000;
LABEL_54:
    *((_WORD *)v12 + 6) |= v31;
  }
  *((_BYTE *)v12 + 14) ^= (*((_BYTE *)v12 + 14) ^ (2 * *(_BYTE *)(a1 + 32))) & 0x3E;
  *((_DWORD *)v12 + 12) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
  *((_QWORD *)v12 + 3) = v5 << 12;
  v17 = (*((_WORD *)v12 + 6) ^ WORD2(v5)) & 0x3FF;
  *v12 = (volatile signed __int64)Pool;
  *((_WORD *)v12 + 6) ^= v17;
  *((_DWORD *)v12 + 2) = v5;
  if ( v56 )
  {
    v39 = *(_DWORD *)(a1 + 16);
    if ( (v39 & 0x20000) != 0 )
      v40 = 4;
    else
      v40 = v39 >= 0 ? (v39 & 0x80000) != 0 : 2;
    if ( (v39 & 0x10000000) != 0 )
    {
      v40 |= 0x20u;
    }
    else if ( (v39 & 0x40000000) != 0 )
    {
      v40 |= 0x10u;
    }
    v41 = v40 | 8;
    if ( (*(_DWORD *)(a1 + 196) & 1) == 0 )
      v41 = v40;
    LOBYTE(v16) = *(_BYTE *)(a1 + 72);
    if ( (int)MiAllocateAweInfo(Pool, 0LL, v41, v16, &v72) < 0 )
      goto LABEL_99;
  }
  v66 = v5;
  v18 = 0LL;
  v60 = Pool + 16;
  v19 = 0LL;
  v71 = 0LL;
  v62 = 0LL;
  v20 = v5;
  v21 = Pool + 16;
  v22 = Pool + 16;
  if ( v9 )
  {
    while ( 1 )
    {
      v22 = v21;
      v23 = v21[10] & 0xFFFFFFFFFFFFFFF9uLL;
      *v21 = Pool;
      v74 = v21;
      v21[10] = v23 | 1;
      v24 = (*((_WORD *)v21 + 16) ^ (2 * *(_WORD *)(a1 + 32))) & 0x3E;
      *((_DWORD *)v21 + 9) = v18;
      v25 = *((_WORD *)v21 + 16) ^ v24;
      if ( v66 > v70 )
        v20 = v70;
      v66 -= v20;
      *((_DWORD *)v21 + 11) = v20;
      *((_WORD *)v21 + 16) = v25 & 0x3F | (WORD2(v18) << 6);
      v73 = 8 * v20;
      if ( v57 )
      {
        v26 = MiAllocatePool(274, 8 * v20, 0x74536D4Du);
        P = v26;
        if ( !v26 )
          goto LABEL_100;
        if ( v2 < 0 )
        {
          if ( !(unsigned int)MmObtainChargesToLockPagedPool(v26, v73) )
          {
            ExFreePoolWithTag(P, 0);
            goto LABEL_100;
          }
          v26 = P;
        }
        v21 = v60;
        v22 = v74;
        v19 = v62;
        v18 = v71;
        v20 = *((unsigned int *)v60 + 11);
        v60[1] = v26;
      }
      v21 += 11;
      v18 += (unsigned int)v20;
      v60 = v21;
      ++v19;
      v71 = v18;
      v22[2] = v21;
      v62 = v19;
      if ( v19 >= v9 )
        break;
      v20 = v66;
    }
  }
  v22[2] = 0LL;
  *((_QWORD *)v12 + 8) = P;
  if ( v57 )
  {
    --v64->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v12 + 5), 0LL);
    MiUpdateControlAreaCommitCount((__int64)Pool, v5);
    v27 = (ULONG_PTR)(v12 + 5);
    if ( (_InterlockedExchangeAdd64(v12 + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    {
      ExfTryToWakePushLock(v27);
      v27 = (ULONG_PTR)(v12 + 5);
    }
    KeAbPostRelease(v27);
    v28 = v64->SpecialApcDisable++ == -1;
    if ( v28 && ($CEA84C04E3712D858E5667A507841A2A *)v64->ApcState.ApcListHead[0].Flink != &v64->152 )
      KiCheckForKernelApcDelivery();
    if ( v2 < 0 )
    {
      v61 = 0LL;
      *((_WORD *)v12 + 6) |= 0x1000u;
      *((_DWORD *)Pool + 23) |= 0x10000u;
      if ( v9 )
      {
        v45 = v58;
        v46 = Pool + 22;
        do
        {
          v47 = (void *)*((_QWORD *)v46 - 5);
          v59 = (unsigned __int64)v47;
          MmLockPreChargedPagedPool(v47, 8LL * (unsigned int)*(v46 - 1));
          v48 = *v46 & 0x3FFFFFFF | 0x40000000;
          *v46 = v48;
          if ( v69 )
          {
            --v69;
            *v46 = v48 & 0x3FFFFFFF | 0x80000000;
          }
          memset(v47, 0, 8LL * (unsigned int)*(v46 - 1));
          MiUpdateSystemProtoPtesTree((__int64)(v46 + 2), 1);
          v49 = 0LL;
          v65 = 0LL;
          v63 = 0LL;
          if ( *(v46 - 1) )
          {
            do
            {
              v50 = 0LL;
              v51 = v76;
              while ( (_QWORD *)*v51 == v51 )
              {
                v50 = (unsigned int)(v50 + 1);
                v51 += 3;
                if ( (unsigned int)v50 >= 4 )
                  goto LABEL_129;
              }
              v52 = &v76[3 * v50];
              v49 = *v52;
              v63 = *v52;
              if ( *(__int64 **)(*v52 + 8) != v52 || (v53 = *(_QWORD *)v49, *(_QWORD *)(*(_QWORD *)v49 + 8LL) != v49) )
                __fastfail(3u);
              *v52 = v53;
              *(_QWORD *)(v53 + 8) = v52;
              --v76[3 * v50 + 2];
LABEL_129:
              v54 = MiLargePageSizes[(unsigned int)v50];
              MiUpdateLargePageSectionPfns(v49, v59, *(_DWORD *)(a1 + 32));
              v49 = v63;
              v65 += v54;
              v59 += 8 * v54;
            }
            while ( v65 != *(v46 - 1) );
          }
          v46 += 22;
          ++v61;
        }
        while ( v61 < v45 );
      }
    }
    else
    {
      MiInitializePrototypePtes(Pool[17]);
      MiUpdateSystemProtoPtesTree((__int64)(Pool + 23), 1);
    }
  }
  *(_QWORD *)(a1 + 64) = Pool;
  _InterlockedAdd64((volatile signed __int64 *)v8 + 170, 1uLL);
  *(_DWORD *)a1 |= 4u;
  *(_QWORD *)(a1 + 128) = _InterlockedCompareExchange64(v12 + 3, -1LL, -1LL);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x400001) != 0 )
    MiLogSectionCreate(Pool, 1LL, v20);
  return 0LL;
}
