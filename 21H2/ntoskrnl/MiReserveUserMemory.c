/*
 * XREFs of MiReserveUserMemory @ 0x1407018B0
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1406E7DB0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MmGetCurrentProcessorColor @ 0x140214350 (MmGetCurrentProcessorColor.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14027C398 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiIsProcessCfgEnabled @ 0x14027C590 (MiIsProcessCfgEnabled.c)
 *     MiReferenceVad @ 0x14027C900 (MiReferenceVad.c)
 *     MiGetProcessPartition @ 0x1402BF640 (MiGetProcessPartition.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BF880 (MiUnlockAndDereferenceVad.c)
 *     MiDeleteVad @ 0x1402C08F0 (MiDeleteVad.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiUnlockVad @ 0x14031F3A8 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14031F5B0 (UNLOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE @ 0x14031FFDC (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x1403214A8 (MiLockVad.c)
 *     MiInsertPrivateVad @ 0x140321AD4 (MiInsertPrivateVad.c)
 *     ExAllocatePoolMm @ 0x140346100 (ExAllocatePoolMm.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     MiFindPlaceholderVadToReplace @ 0x140555434 (MiFindPlaceholderVadToReplace.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x14055C010 (MiUnlockAndDereferenceNestedVad.c)
 *     MiMapUserLargePages @ 0x14055E970 (MiMapUserLargePages.c)
 *     MiCreateWriteWatchView @ 0x1405FE7B0 (MiCreateWriteWatchView.c)
 *     MiCreateRotateView @ 0x14061CAB0 (MiCreateRotateView.c)
 *     MiCommitVadCfgBits @ 0x14068592C (MiCommitVadCfgBits.c)
 *     MiIsVaRangeAvailable @ 0x140687848 (MiIsVaRangeAvailable.c)
 *     MiSecureVad @ 0x140689320 (MiSecureVad.c)
 *     MiAddSecureEntry @ 0x140689430 (MiAddSecureEntry.c)
 *     MiArbitraryCodeBlocked @ 0x1406907CC (MiArbitraryCodeBlocked.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     MiSelectUserAddress @ 0x1406EA100 (MiSelectUserAddress.c)
 *     MiInsertVadCharges @ 0x140704050 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x140704340 (MiAdvanceVadHint.c)
 *     MiReleaseVadEventBlocks @ 0x140704770 (MiReleaseVadEventBlocks.c)
 *     MiLogReserveVaFailed @ 0x1408C6DB4 (MiLogReserveVaFailed.c)
 *     MiStoreGraphicsProtectionInVad @ 0x1408C6FB4 (MiStoreGraphicsProtectionInVad.c)
 *     MiCreateUserPhysicalView @ 0x1408D5D08 (MiCreateUserPhysicalView.c)
 *     MiCreatePlaceholderStorage @ 0x1408D8438 (MiCreatePlaceholderStorage.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408D84E8 (MiFinishPlaceholderVadReplacement.c)
 *     MiPreparePlaceholderVadReplacement @ 0x1408D8610 (MiPreparePlaceholderVadReplacement.c)
 *     MiCreateLargePageVad @ 0x1408DA0C4 (MiCreateLargePageVad.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReserveUserMemory(
        _QWORD *a1,
        __int64 *a2,
        unsigned int a3,
        char a4,
        unsigned __int64 *a5,
        _WORD *a6)
{
  int v6; // r13d
  unsigned int v7; // r12d
  __int64 *v8; // rbx
  int v10; // esi
  __int64 v11; // rbp
  unsigned __int64 v12; // r15
  int v13; // eax
  _QWORD *PoolMm; // rax
  __int64 v15; // r14
  int v16; // ecx
  int v17; // r9d
  int v18; // r8d
  unsigned __int64 v19; // rdx
  int v20; // ecx
  int v21; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v23; // eax
  unsigned int v24; // ecx
  bool v25; // zf
  unsigned __int64 v26; // r15
  __int64 v27; // r13
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int v31; // eax
  int v32; // r12d
  unsigned __int64 v33; // r13
  unsigned __int64 v34; // r13
  __int64 v35; // r12
  int v36; // ebx
  int v37; // eax
  PVOID v38; // rsi
  __int64 result; // rax
  int v40; // ebx
  int v41; // eax
  unsigned __int64 v42; // r10
  int v43; // r9d
  __int64 v44; // rcx
  unsigned int v45; // eax
  unsigned __int64 v46; // rdx
  __int64 ProcessPartition; // rax
  int v48; // edx
  __int64 v49; // rdx
  int v50; // ecx
  ULONG_PTR v51; // rbx
  int UserPhysicalView; // [rsp+50h] [rbp-78h] BYREF
  struct _KTHREAD *v53; // [rsp+58h] [rbp-70h]
  PVOID P; // [rsp+60h] [rbp-68h]
  unsigned __int64 v55; // [rsp+68h] [rbp-60h] BYREF
  __int64 v56; // [rsp+70h] [rbp-58h] BYREF
  __int64 v57; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v58; // [rsp+80h] [rbp-48h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-40h]
  char v61; // [rsp+E0h] [rbp+18h]
  char v62; // [rsp+E8h] [rbp+20h] BYREF

  v62 = a4;
  v61 = a3;
  v6 = 0;
  v7 = a3;
  UserPhysicalView = 0;
  v8 = a2;
  P = 0LL;
  if ( a2 == (__int64 *)1 )
    return 3221225485LL;
  v10 = 16;
  v11 = *(_QWORD *)(a1[11] + 1680LL);
  if ( a1[1] - *a1 + 1LL != a1[3] )
    v10 = 0;
  if ( (*((_DWORD *)a1 + 11) & 0x88) != 0 )
    return 3221225541LL;
  if ( (*((_DWORD *)a1 + 15) & 0x20000000) != 0 && (MiFlags & 0x100000) == 0
    || (a3 & 2) == 0
    || (result = MiArbitraryCodeBlocked(a1[12]), UserPhysicalView = result, (int)result >= 0) )
  {
    v12 = ((a1[3] & 0xFFFLL) != 0) + (a1[3] >> 12);
    LOWORD(v13) = MmGetCurrentProcessorColor();
    PoolMm = ExAllocatePoolMm(64, 0x40uLL, 0x53646156u, v13 | 0x80000000);
    v15 = (__int64)PoolMm;
    if ( !PoolMm )
      return 3221225626LL;
    v16 = *((_DWORD *)a1 + 13);
    *PoolMm = -2LL;
    PoolMm[1] = -2LL;
    PoolMm[2] = -2LL;
    BugCheckParameter2 = (ULONG_PTR)(PoolMm + 5);
    PoolMm[5] = 0LL;
    *((_DWORD *)PoolMm + 12) ^= (*((_DWORD *)PoolMm + 12) ^ (v16 << 12)) & 0x3F000;
    v17 = *((_DWORD *)PoolMm + 12);
    if ( v16 )
    {
      *(_BYTE *)(*(_QWORD *)(a1[11] + 1680LL) + 352LL) = 1;
      v17 = *((_DWORD *)PoolMm + 12);
    }
    v18 = *((_DWORD *)a1 + 10);
    if ( (v18 & 0x1000) != 0 )
    {
      *((_DWORD *)PoolMm + 13) |= 0x80000000;
      v19 = v12;
    }
    else
    {
      v19 = 0LL;
    }
    v20 = *((_DWORD *)a1 + 15);
    *((_DWORD *)PoolMm + 12) = v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)((_WORD)v7 << 7)) & 0xF80 | 0x100000;
    if ( (v20 & 0x40000000) != 0 )
      *((_DWORD *)PoolMm + 12) = v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)((_WORD)v7 << 7)) & 0xF80 | 0x4100000;
    if ( (v20 & 1) != 0 )
    {
      v19 = 0x7FFFFFFFELL;
    }
    else if ( (v20 & 0x8000000) != 0 )
    {
      v19 = 0x7FFFFFFFDLL;
    }
    v21 = (*((_DWORD *)PoolMm + 13) ^ v19) & 0x7FFFFFFF;
    *(_BYTE *)(v15 + 34) = v19 >> 31;
    *(_DWORD *)(v15 + 52) ^= v21;
    CurrentThread = KeGetCurrentThread();
    v23 = v18 & 0x20400000;
    v53 = CurrentThread;
    if ( (v18 & 0x20400000) == 0x20000000 )
    {
      v46 = a1[15];
      v6 = (v46 >> 4) & 1 | 2;
    }
    else
    {
      if ( v23 != 541065216 )
      {
        if ( v23 != 0x400000 )
        {
          if ( (v18 & 0x800000) == 0 )
            goto LABEL_21;
          if ( !(unsigned int)MiCreateRotateView(v15) )
          {
            v32 = -1073741670;
            LOBYTE(v8) = v10;
            goto LABEL_76;
          }
          v45 = *(_DWORD *)(v15 + 48) & 0xFFFFFF8F | 0x40;
          goto LABEL_71;
        }
        v48 = v7 & 7;
        if ( (v7 & 0xFFFFFFF8) != 0x10 && (v48 == 4 || v48 == 1) )
        {
          v49 = v7;
          if ( (a1[15] & 1) == 0 )
          {
LABEL_113:
            UserPhysicalView = MiCreateUserPhysicalView(v15, v49, a1, a6);
            if ( UserPhysicalView < 0 )
            {
              v32 = -1073741670;
              LOBYTE(v8) = v10;
              goto LABEL_76;
            }
            v45 = *(_DWORD *)(v15 + 48) & 0xFDFFFF8F | 0x30;
LABEL_71:
            *(_DWORD *)(v15 + 48) = v45;
            goto LABEL_21;
          }
          if ( a1[14] )
          {
            v50 = *((_DWORD *)a1 + 12);
            v49 = v7 | 2;
            if ( (v50 & 0x1C000) == 0 )
              v49 = v7;
            if ( (v50 & 0x12000) != 0 )
              v49 = v49 & 0xFFFFFFFA | 4;
            goto LABEL_113;
          }
        }
        v32 = -1073741755;
        LOBYTE(v8) = v10;
        goto LABEL_77;
      }
      v46 = a1[15];
      v6 = 1;
      if ( (v46 & 2) == 0 )
      {
LABEL_21:
        v24 = (v6 << 18) | *(_DWORD *)(v15 + 48) & 0xFFF3FFFF;
        v25 = (a1[5] & 0x200000) == 0;
        *(_DWORD *)(v15 + 48) = v24;
        if ( !v25 )
        {
          UserPhysicalView = MiCreateWriteWatchView(a1[11], v15);
          v32 = UserPhysicalView;
          LOBYTE(v8) = v10;
          if ( UserPhysicalView < 0 )
            goto LABEL_76;
          *(_DWORD *)(v15 + 48) |= 0x200000u;
          v24 = *(_DWORD *)(v15 + 48);
          LOBYTE(v7) = v61;
        }
        if ( (a1[15] & 1) != 0 )
        {
          if ( (a1[5] & 0x20400000) == 0x400000 || (v24 & 0x500000) == 0x500000 )
          {
            if ( *((_DWORD *)a1 + 12) )
            {
LABEL_24:
              v26 = 0LL;
              LODWORD(v8) = v10;
              v25 = (*((_DWORD *)a1 + 15) & 0x4000000) == 0;
              v55 = 0LL;
              if ( !v25 )
              {
                UserPhysicalView = MiCreatePlaceholderStorage(v15);
                v32 = UserPhysicalView;
                if ( UserPhysicalView < 0 )
                  goto LABEL_73;
                LOBYTE(v7) = v61;
                LODWORD(v8) = v10 | 8;
              }
              v27 = (__int64)v53;
              v28 = 0LL;
              v29 = a1[11];
              v56 = 0LL;
              LODWORD(v8) = (unsigned int)v8 | 4;
              LOCK_ADDRESS_SPACE((__int64)v53, v29);
              v30 = a1[11];
              if ( (*(_DWORD *)(v30 + 1124) & 0x20) != 0 )
              {
                v32 = -1073741558;
                goto LABEL_74;
              }
              v31 = *((_DWORD *)a1 + 15);
              if ( (unsigned int)v8 < 0x10 )
              {
                v32 = MiSelectUserAddress(*((_DWORD *)a1 + 10), *a1, a1[1], a1[3], a1[2], 0LL, v7, v31, &v56, &v55);
                if ( v32 >= 0 )
                {
                  v26 = v55;
                  v28 = v56;
                  v33 = a1[3] + v55 - 1;
                  goto LABEL_29;
                }
                MiLogReserveVaFailed(a1[3], a1[2], *a1, a1[1]);
                v26 = v55;
LABEL_74:
                *a5 = v26;
                if ( P )
                  MiUnlockVad(v27, (__int64)P);
                goto LABEL_76;
              }
              if ( (v31 & 0x4000000) != 0 )
              {
                P = (PVOID)MiFindPlaceholderVadToReplace(*a1, a1[1], *((_BYTE *)a1 + 104), &UserPhysicalView);
                if ( !P )
                {
                  v32 = UserPhysicalView;
                  goto LABEL_74;
                }
                v42 = *a1;
                v33 = a1[1];
LABEL_62:
                v26 = v42;
                v55 = v42;
LABEL_29:
                v34 = v33 >> 12;
                v58 = v26 >> 12;
                *(_DWORD *)(v15 + 24) = v26 >> 12;
                *(_BYTE *)(v15 + 32) = v26 >> 44;
                v25 = (a1[15] & 1) == 0;
                *(_DWORD *)(v15 + 28) = v34;
                *(_BYTE *)(v15 + 33) = BYTE4(v34);
                if ( v25 )
                {
                  UserPhysicalView = MiInsertVadCharges(v15, a1[11]);
                  v32 = UserPhysicalView;
                  if ( UserPhysicalView >= 0 )
                  {
                    if ( P )
                    {
                      LOBYTE(v8) = (unsigned __int8)v8 | 1;
                      MiPreparePlaceholderVadReplacement(P, a1[11], v11 + 48);
                      ExAcquirePushLockExclusiveEx(v15 + 40, 0LL);
                      v35 = (__int64)v53;
                    }
                    else
                    {
                      v35 = (__int64)v53;
                      MiLockVad((__int64)v53, v15);
                    }
                    MiInsertPrivateVad(v15, a1[11]);
                    if ( v28 )
                      MiAdvanceVadHint(v58, v34);
                    if ( (v61 & 2) != 0 && MiIsProcessCfgEnabled() )
                      LOBYTE(v8) = 2;
                    v36 = (unsigned __int8)v8 & 2;
                    if ( !v36 )
                    {
                      v37 = *(_DWORD *)(v15 + 48);
                      if ( ((v37 & 0x100000) == 0 || (v37 & 0x400000) == 0 && (v37 & 0xC0000u) < 0x80000) && !a1[10] )
                      {
                        v38 = P;
                        if ( !P )
                        {
                          MiUnlockVad(v35, v15);
                          UNLOCK_ADDRESS_SPACE(v35, a1[11]);
LABEL_43:
                          *a5 = v26;
                          return 0LL;
                        }
                        v51 = BugCheckParameter2;
                        if ( (_InterlockedExchangeAdd64(
                                (volatile signed __int64 *)BugCheckParameter2,
                                0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                          ExfTryToWakePushLock(v51);
                        KeAbPostRelease(v51);
                        UNLOCK_ADDRESS_SPACE_UNORDERED(v35, a1[11]);
                        v26 = v55;
                        goto LABEL_145;
                      }
                    }
                    UNLOCK_ADDRESS_SPACE_UNORDERED(v35, a1[11]);
                    MiReferenceVad(v15);
                    if ( v36 && (v40 = MiCommitVadCfgBits(v15, 0LL, &v62), v40 < 0)
                      || (v41 = *(_DWORD *)(v15 + 48), (v41 & 0x100000) != 0)
                      && ((v41 & 0x400000) != 0 || (v41 & 0xC0000u) >= 0x80000)
                      && *(int *)(v15 + 52) < 0
                      && (v40 = MiMapUserLargePages(v15), v40 < 0) )
                    {
                      MiDeleteVad((_DWORD *)v15, (__int64)P, 0);
                      return (unsigned int)v40;
                    }
                    if ( !a1[10] )
                    {
LABEL_56:
                      v38 = P;
                      if ( !P )
                      {
                        MiUnlockAndDereferenceVad((char *)v15);
                        goto LABEL_43;
                      }
                      MiUnlockAndDereferenceNestedVad((PVOID)v15);
LABEL_145:
                      MiFinishPlaceholderVadReplacement(v38);
                      goto LABEL_43;
                    }
                    v43 = *((_DWORD *)a1 + 19);
                    v25 = (*((_DWORD *)a1 + 15) & 0x40000000) == 0;
                    v57 = 0LL;
                    if ( v25 )
                    {
                      if ( v43 != -2147483647 && (unsigned int)(v43 - 1) > 1 && v43 != 4 )
                      {
                        v32 = -1073741755;
                        goto LABEL_143;
                      }
                      v32 = MiSecureVad(v15, v26, a1[3], v43, 0, &v57);
                      if ( v32 >= 0 )
                      {
                        v44 = v57;
LABEL_67:
                        *(_QWORD *)a1[10] = qword_140C4DE90 ^ a1[11] ^ v44;
                        goto LABEL_56;
                      }
                    }
                    else
                    {
                      v44 = (__int64)MiAddSecureEntry(
                                       v15,
                                       (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32)) << 12,
                                       ((*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) << 12) | 0xFFF,
                                       v43,
                                       1);
                      if ( v44 )
                        goto LABEL_67;
                      v32 = -1073741670;
                    }
LABEL_143:
                    MiDeleteVad((_DWORD *)v15, (__int64)P, 0);
                    return (unsigned int)v32;
                  }
                }
                else
                {
                  MiStoreGraphicsProtectionInVad(v15, *((unsigned int *)a1 + 12));
                  v32 = -1073741637;
                }
                goto LABEL_73;
              }
              v33 = a1[1];
              if ( MiIsVaRangeAvailable(v30, *a1, a1[3], *a1, v33) )
                goto LABEL_62;
              v32 = -1073741800;
LABEL_73:
              v27 = (__int64)v53;
              goto LABEL_74;
            }
            v32 = -1073741755;
            LOBYTE(v8) = v10;
          }
          else
          {
            v32 = -1073741637;
            LOBYTE(v8) = v10;
          }
        }
        else
        {
          if ( !*((_DWORD *)a1 + 12) )
            goto LABEL_24;
          v32 = -1073741755;
          LOBYTE(v8) = v10;
        }
LABEL_76:
        CurrentThread = v53;
LABEL_77:
        if ( ((unsigned __int8)v8 & 4) != 0 )
          UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, a1[11]);
        MiReleaseVadEventBlocks(v15, 0LL);
        ExFreePoolWithTag((PVOID)v15, 0);
        return (unsigned int)v32;
      }
    }
    if ( (v46 & 4) != 0 )
    {
      if ( (v46 & 0x1A) == 0
        || (!v8
          ? (ProcessPartition = MiGetProcessPartition(a1[11]), CurrentThread = v53)
          : (struct _KTHREAD *)(ProcessPartition = *v8),
            (*(_DWORD *)(ProcessPartition + 4) & 0x40) == 0) )
      {
        v32 = -1073741811;
        LOBYTE(v8) = v10;
        goto LABEL_77;
      }
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, *((_BYTE *)a1 + 104)) )
      {
        v32 = -1073741727;
        LOBYTE(v8) = v10;
        goto LABEL_76;
      }
      *(_DWORD *)(v15 + 48) |= 0x800000u;
    }
    UserPhysicalView = MiCreateLargePageVad(a1[11], v15, v8, 0LL);
    v32 = UserPhysicalView;
    LOBYTE(v8) = v10;
    if ( UserPhysicalView < 0 )
      goto LABEL_76;
    if ( a2 )
      *a6 = *(_WORD *)*a2;
    LOBYTE(v7) = v61;
    if ( (a1[15] & 0x1A) != 0 )
      *(_DWORD *)(v15 + 48) |= 0x400000u;
    goto LABEL_21;
  }
  return result;
}
