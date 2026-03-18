/*
 * XREFs of MiReserveUserMemory @ 0x1407B8B60
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1407BE3C0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MmGetCurrentProcessorColor @ 0x140221E50 (MmGetCurrentProcessorColor.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140281A58 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiUnlockVad @ 0x140281C44 (MiUnlockVad.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     MiUpdateVadStartVpn @ 0x14030B420 (MiUpdateVadStartVpn.c)
 *     MiLockVad @ 0x14030B7F0 (MiLockVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x14030B820 (LOCK_ADDRESS_SPACE.c)
 *     ExAllocatePoolMm @ 0x14030B860 (ExAllocatePoolMm.c)
 *     MiInsertVad @ 0x14030E390 (MiInsertVad.c)
 *     MiReferenceVad @ 0x14030EB64 (MiReferenceVad.c)
 *     MiGetProcessPartition @ 0x14032A72C (MiGetProcessPartition.c)
 *     MiUnlockAndDereferenceVad @ 0x14032E700 (MiUnlockAndDereferenceVad.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x1405B204C (MiUnlockAndDereferenceNestedVad.c)
 *     MiFindPlaceholderVadToReplace @ 0x1405B2088 (MiFindPlaceholderVadToReplace.c)
 *     MiMapUserLargePages @ 0x1405C2A4C (MiMapUserLargePages.c)
 *     MiSecureVad @ 0x1406A2588 (MiSecureVad.c)
 *     MiCreateWriteWatchView @ 0x1406BF94C (MiCreateWriteWatchView.c)
 *     MiCreateRotateView @ 0x1406E97B4 (MiCreateRotateView.c)
 *     MiCommitVadMetadataBits @ 0x1406F74A8 (MiCommitVadMetadataBits.c)
 *     MiIsVaRangeAvailable @ 0x1406F8804 (MiIsVaRangeAvailable.c)
 *     MiAdvanceVadHint @ 0x1406FCFF0 (MiAdvanceVadHint.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     MiArbitraryCodeBlocked @ 0x14079EC14 (MiArbitraryCodeBlocked.c)
 *     MiSelectUserAddress @ 0x1407B83C0 (MiSelectUserAddress.c)
 *     MiInsertVadCharges @ 0x1407B88C0 (MiInsertVadCharges.c)
 *     MiAddSecureEntry @ 0x1407B9190 (MiAddSecureEntry.c)
 *     MiReleaseVadEventBlocks @ 0x1407B97B0 (MiReleaseVadEventBlocks.c)
 *     MiDeleteVad @ 0x1407BC0B0 (MiDeleteVad.c)
 *     MiLogReserveVaFailed @ 0x14096B308 (MiLogReserveVaFailed.c)
 *     MiStoreGraphicsProtectionInVad @ 0x14096B508 (MiStoreGraphicsProtectionInVad.c)
 *     MiCreateUserPhysicalView @ 0x14097CD04 (MiCreateUserPhysicalView.c)
 *     MiCreatePlaceholderStorage @ 0x14097EE60 (MiCreatePlaceholderStorage.c)
 *     MiFinishPlaceholderVadReplacement @ 0x14097EF10 (MiFinishPlaceholderVadReplacement.c)
 *     MiPreparePlaceholderVadReplacement @ 0x14097F038 (MiPreparePlaceholderVadReplacement.c)
 *     MiCreateLargePageVad @ 0x140982DE4 (MiCreateLargePageVad.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReserveUserMemory(_QWORD *a1, __int64 *a2, unsigned int a3, unsigned __int64 *a4, _WORD *a5)
{
  int v5; // r13d
  int v8; // esi
  __int64 v9; // rbp
  unsigned __int64 v10; // r15
  int v11; // eax
  _QWORD *PoolMm; // rax
  __int64 v13; // r14
  int v14; // ecx
  int v15; // r9d
  int v16; // r8d
  unsigned __int64 v17; // rdx
  int v18; // ecx
  int v19; // eax
  struct _KTHREAD *CurrentThread; // r12
  int v21; // eax
  unsigned int v22; // ebx
  unsigned int v23; // ecx
  bool v24; // zf
  unsigned __int64 v25; // rsi
  __int64 v26; // rdx
  _QWORD *v27; // r13
  __int64 v28; // rcx
  unsigned int v29; // eax
  int v30; // r15d
  unsigned __int64 v31; // r12
  __int64 v32; // rcx
  unsigned __int64 v33; // r12
  PVOID v34; // r15
  __int64 v35; // rbx
  int v36; // eax
  __int64 result; // rax
  int v38; // eax
  int v39; // r8d
  int v40; // ebx
  unsigned __int64 v41; // r10
  int v42; // r9d
  __int64 v43; // rcx
  unsigned int v44; // eax
  int v45; // ecx
  __int64 v46; // rdx
  int v47; // ecx
  __int64 v48; // rax
  __int64 *v49; // rsi
  __int64 ProcessPartition; // rax
  ULONG_PTR v51; // rsi
  int UserPhysicalView; // [rsp+50h] [rbp-78h] BYREF
  struct _KTHREAD *v53; // [rsp+58h] [rbp-70h]
  unsigned __int64 v54; // [rsp+60h] [rbp-68h] BYREF
  PVOID P; // [rsp+68h] [rbp-60h]
  _QWORD *v56; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v57; // [rsp+78h] [rbp-50h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-48h]
  __int64 *v59; // [rsp+D8h] [rbp+10h] BYREF
  unsigned int v60; // [rsp+E0h] [rbp+18h]
  unsigned __int64 *v61; // [rsp+E8h] [rbp+20h]

  v61 = a4;
  v60 = a3;
  v59 = a2;
  v5 = 0;
  UserPhysicalView = 0;
  P = 0LL;
  if ( a2 == (__int64 *)1 )
    return 3221225485LL;
  v8 = 8;
  v9 = *(_QWORD *)(a1[11] + 1680LL);
  if ( a1[1] - *a1 + 1LL != a1[3] )
    v8 = 0;
  if ( (*((_DWORD *)a1 + 11) & 0x88) != 0 )
    return 3221225541LL;
  if ( (a1[8] & 0x20000000) != 0 && (MiFlags & 0x80000) == 0
    || (a3 & 2) == 0
    || (result = MiArbitraryCodeBlocked(a1[12]), UserPhysicalView = result, (int)result >= 0) )
  {
    v10 = ((a1[3] & 0xFFFLL) != 0) + (a1[3] >> 12);
    v54 = v10;
    LOWORD(v11) = MmGetCurrentProcessorColor();
    PoolMm = ExAllocatePoolMm(64LL, 0x40uLL, 0x53646156u, v11 | 0x80000000);
    v13 = (__int64)PoolMm;
    if ( !PoolMm )
      return 3221225626LL;
    v14 = *((_DWORD *)a1 + 13);
    *PoolMm = -2LL;
    PoolMm[1] = -2LL;
    PoolMm[2] = -2LL;
    BugCheckParameter2 = (ULONG_PTR)(PoolMm + 5);
    PoolMm[5] = 0LL;
    *((_DWORD *)PoolMm + 12) ^= (*((_DWORD *)PoolMm + 12) ^ (v14 << 12)) & 0x7F000;
    v15 = *((_DWORD *)PoolMm + 12);
    if ( v14 )
    {
      *(_BYTE *)(*(_QWORD *)(a1[11] + 1680LL) + 340LL) = 1;
      v15 = *((_DWORD *)PoolMm + 12);
    }
    v16 = *((_DWORD *)a1 + 10);
    if ( (v16 & 0x1000) != 0 )
    {
      *((_DWORD *)PoolMm + 13) |= 0x80000000;
      v17 = v10;
    }
    else
    {
      v17 = 0LL;
    }
    v18 = *((_DWORD *)a1 + 16);
    *((_DWORD *)PoolMm + 12) = v15 ^ ((unsigned __int16)v15 ^ (unsigned __int16)((_WORD)a3 << 7)) & 0xF80 | 0x200000;
    if ( (v18 & 0x40000000) != 0 )
      *((_DWORD *)PoolMm + 12) = v15 ^ ((unsigned __int16)v15 ^ (unsigned __int16)((_WORD)a3 << 7)) & 0xF80 | 0x8200000;
    if ( (v18 & 1) != 0 )
    {
      v17 = 0x7FFFFFFFELL;
    }
    else if ( (v18 & 0x8000000) != 0 )
    {
      v17 = 0x7FFFFFFFDLL;
    }
    v19 = (*((_DWORD *)PoolMm + 13) ^ v17) & 0x7FFFFFFF;
    *(_BYTE *)(v13 + 34) = v17 >> 31;
    *(_DWORD *)(v13 + 52) ^= v19;
    CurrentThread = KeGetCurrentThread();
    v21 = v16 & 0x20400000;
    v53 = CurrentThread;
    if ( (v16 & 0x20400000) == 0x20000000 )
    {
      v22 = v8 | 0x10;
      v5 = (*((_DWORD *)a1 + 28) >> 4) & 1 | 2;
    }
    else
    {
      if ( v21 != 541065216 )
      {
        if ( v21 != 0x400000 )
        {
          v22 = v8;
          if ( (v16 & 0x800000) == 0 )
            goto LABEL_21;
          if ( !(unsigned int)MiCreateRotateView(v13) )
          {
            v30 = -1073741670;
            goto LABEL_71;
          }
          v44 = *(_DWORD *)(v13 + 48) & 0xFFFFFF8F | 0x40;
          goto LABEL_77;
        }
        v45 = a3 & 7;
        if ( (a3 & 0xFFFFFFF8) != 0x10 && (v45 == 4 || v45 == 1) )
        {
          v46 = a3;
          if ( (a1[14] & 1) == 0 )
          {
LABEL_95:
            UserPhysicalView = MiCreateUserPhysicalView(v13, v46, a1, a5);
            v22 = v8;
            if ( UserPhysicalView < 0 )
            {
              v30 = -1073741670;
              goto LABEL_71;
            }
            v44 = *(_DWORD *)(v13 + 48) & 0xFBFFFF8F | 0x30;
LABEL_77:
            *(_DWORD *)(v13 + 48) = v44;
            goto LABEL_21;
          }
          if ( a1[13] )
          {
            v47 = *((_DWORD *)a1 + 12);
            v46 = a3 | 2;
            if ( (v47 & 0x1C000) == 0 )
              v46 = a3;
            if ( (v47 & 0x12000) != 0 )
              v46 = v46 & 0xFFFFFFFA | 4;
            goto LABEL_95;
          }
        }
        v30 = -1073741755;
        LOBYTE(v22) = v8;
        goto LABEL_71;
      }
      v22 = v8 | 0x10;
      v5 = 1;
      if ( (a1[14] & 2) == 0 )
        v22 = v8;
    }
LABEL_21:
    if ( v22 >= 0x10 )
    {
      v48 = a1[14];
      if ( (v48 & 4) != 0 )
      {
        if ( (v48 & 0x1A) == 0
          || ((v49 = v59) == 0LL ? (ProcessPartition = MiGetProcessPartition(a1[11])) : (ProcessPartition = *v59),
              (*(_DWORD *)(ProcessPartition + 4) & 0x40) == 0) )
        {
          v30 = -1073741811;
          goto LABEL_71;
        }
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, *((_BYTE *)a1 + 57)) )
        {
          v30 = -1073741727;
          goto LABEL_71;
        }
        *(_DWORD *)(v13 + 48) |= 0x1000000u;
      }
      else
      {
        v49 = v59;
      }
      UserPhysicalView = MiCreateLargePageVad(a1[11], v13, v49, 0LL);
      v30 = UserPhysicalView;
      if ( UserPhysicalView < 0 )
        goto LABEL_71;
      if ( v49 )
        *a5 = *(_WORD *)*v49;
      if ( (a1[14] & 0x1A) != 0 )
        *(_DWORD *)(v13 + 48) |= 0x800000u;
    }
    v23 = (v5 << 19) | *(_DWORD *)(v13 + 48) & 0xFFE7FFFF;
    v24 = (a1[5] & 0x200000) == 0;
    *(_DWORD *)(v13 + 48) = v23;
    if ( !v24 )
    {
      UserPhysicalView = MiCreateWriteWatchView(a1[11], v13);
      v30 = UserPhysicalView;
      if ( UserPhysicalView < 0 )
        goto LABEL_71;
      *(_DWORD *)(v13 + 48) |= 0x400000u;
      v23 = *(_DWORD *)(v13 + 48);
    }
    if ( (a1[14] & 1) != 0 )
    {
      if ( (a1[5] & 0x20400000) != 0x400000 && (v23 & 0xA00000) != 0xA00000 )
      {
        v30 = -1073741637;
        goto LABEL_71;
      }
      if ( !*((_DWORD *)a1 + 12) )
      {
        v30 = -1073741755;
        goto LABEL_71;
      }
    }
    else if ( *((_DWORD *)a1 + 12) )
    {
      v30 = -1073741755;
      goto LABEL_71;
    }
    v25 = 0LL;
    v24 = (a1[8] & 0x4000000) == 0;
    v54 = 0LL;
    if ( !v24 )
    {
      UserPhysicalView = MiCreatePlaceholderStorage(v13);
      v30 = UserPhysicalView;
      if ( UserPhysicalView < 0 )
        goto LABEL_78;
      LOBYTE(v22) = v22 | 4;
    }
    v26 = a1[11];
    v27 = 0LL;
    v56 = 0LL;
    LOBYTE(v22) = v22 | 2;
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, v26);
    v28 = a1[11];
    if ( (*(_DWORD *)(v28 + 1124) & 0x20) != 0 )
    {
      v30 = -1073741558;
      *v61 = 0LL;
      goto LABEL_71;
    }
    v29 = *((_DWORD *)a1 + 16);
    if ( (v22 & 8) == 0 )
    {
      v30 = MiSelectUserAddress(*((_DWORD *)a1 + 10), *a1, a1[1], a1[3], a1[2], 0LL, v60, v29, (__int64 *)&v56, &v54);
      if ( v30 >= 0 )
      {
        v25 = v54;
        v27 = v56;
        v31 = a1[3] + v54 - 1;
LABEL_30:
        v57 = v25 >> 12;
        MiUpdateVadStartVpn(v13, v25 >> 12);
        v33 = v31 >> 12;
        *(_DWORD *)(v13 + 28) = v33;
        v24 = (a1[14] & 1) == 0;
        *(_BYTE *)(v13 + 33) = BYTE4(v33);
        if ( v24 )
        {
          UserPhysicalView = MiInsertVadCharges(v32, (struct _KPROCESS *)a1[11]);
          v30 = UserPhysicalView;
          if ( UserPhysicalView >= 0 )
          {
            v34 = P;
            if ( P )
            {
              MiPreparePlaceholderVadReplacement(P, a1[11], v9 + 48);
              ExAcquirePushLockExclusiveEx(v13 + 40, 0LL);
              v35 = (__int64)v53;
            }
            else
            {
              v35 = (__int64)v53;
              MiLockVad((__int64)v53, v13);
            }
            MiInsertVad(v13, a1[11], 0);
            if ( v27 )
              MiAdvanceVadHint(v57, v33, v27);
            if ( !*((_DWORD *)a1 + 30) )
            {
              v36 = *(_DWORD *)(v13 + 48);
              if ( ((v36 & 0x200000) == 0 || (v36 & 0x800000) == 0 && (v36 & 0x180000u) < 0x100000) && !a1[9] )
              {
                if ( !v34 )
                {
                  MiUnlockVad(v35, v13);
                  UNLOCK_ADDRESS_SPACE_UNORDERED(v35, a1[11]);
LABEL_43:
                  result = 0LL;
                  *v61 = v25;
                  return result;
                }
                v51 = BugCheckParameter2;
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v51);
                KeAbPostRelease(v51);
                UNLOCK_ADDRESS_SPACE_UNORDERED(v35, a1[11]);
                v25 = v54;
                goto LABEL_144;
              }
            }
            UNLOCK_ADDRESS_SPACE_UNORDERED(v35, a1[11]);
            MiReferenceVad(v13);
            v38 = *(_DWORD *)(v13 + 48);
            if ( (v38 & 0x200000) != 0
              && ((v38 & 0x800000) != 0 || (v38 & 0x180000u) >= 0x100000)
              && *(int *)(v13 + 52) < 0
              && (v40 = MiMapUserLargePages(v13, *((_DWORD *)a1 + 13), *((_BYTE *)a1 + 56), v59), v40 < 0)
              || (v39 = *((_DWORD *)a1 + 30)) != 0 && (v40 = MiCommitVadMetadataBits(v13, 0LL, v39), v40 < 0) )
            {
              MiDeleteVad((PVOID)v13);
              return (unsigned int)v40;
            }
            if ( !a1[9] )
            {
LABEL_53:
              if ( !v34 )
              {
                MiUnlockAndDereferenceVad((char *)v13);
                goto LABEL_43;
              }
              MiUnlockAndDereferenceNestedVad((PVOID)v13);
LABEL_144:
              MiFinishPlaceholderVadReplacement(v34);
              goto LABEL_43;
            }
            v24 = (a1[8] & 0x40000000) == 0;
            v42 = *((_DWORD *)a1 + 17);
            v59 = 0LL;
            if ( v24 )
            {
              if ( v42 != -2147483647 && (unsigned int)(v42 - 1) > 1 && v42 != 4 )
              {
                v30 = -1073741755;
                goto LABEL_142;
              }
              v30 = MiSecureVad(v13, v25, a1[3], v42, 0, (__int64 *)&v59);
              if ( v30 >= 0 )
              {
                v43 = (__int64)v59;
                v34 = P;
LABEL_64:
                *(_QWORD *)a1[9] = qword_140C50680 ^ a1[11] ^ v43;
                goto LABEL_53;
              }
            }
            else
            {
              v43 = MiAddSecureEntry(v13, *(_DWORD *)(v13 + 24) << 12, (*(_DWORD *)(v13 + 28) << 12) | 0xFFFu, v42, 1);
              if ( v43 )
                goto LABEL_64;
              v30 = -1073741670;
            }
LABEL_142:
            MiDeleteVad((PVOID)v13);
            return (unsigned int)v30;
          }
        }
        else
        {
          MiStoreGraphicsProtectionInVad(v32, *((unsigned int *)a1 + 12));
          v30 = -1073741637;
        }
        CurrentThread = v53;
        goto LABEL_78;
      }
      MiLogReserveVaFailed(a1[3], a1[2], *a1, a1[1]);
      *v61 = v54;
LABEL_71:
      if ( (v22 & 2) != 0 )
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v53, a1[11]);
      MiReleaseVadEventBlocks(v13, 0LL);
      ExFreePoolWithTag((PVOID)v13, 0);
      return (unsigned int)v30;
    }
    if ( (v29 & 0x4000000) == 0 )
    {
      v31 = a1[1];
      if ( !MiIsVaRangeAvailable(v28, *a1, a1[3], *a1, v31) )
      {
        v30 = -1073741800;
        *v61 = 0LL;
        goto LABEL_71;
      }
LABEL_57:
      v25 = v41;
      v54 = v41;
      goto LABEL_30;
    }
    P = (PVOID)MiFindPlaceholderVadToReplace(*a1, a1[1], *((_BYTE *)a1 + 57), &UserPhysicalView);
    if ( P )
    {
      v41 = *a1;
      v31 = a1[1];
      goto LABEL_57;
    }
    v30 = UserPhysicalView;
LABEL_78:
    *v61 = v25;
    if ( P )
      MiUnlockVad((__int64)CurrentThread, (__int64)P);
    goto LABEL_71;
  }
  return result;
}
