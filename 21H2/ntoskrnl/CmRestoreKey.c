/*
 * XREFs of CmRestoreKey @ 0x14087BF30
 * Callers:
 *     NtRestoreKey @ 0x1408694D0 (NtRestoreKey.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x1403510E8 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140351100 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1405EE830 (CmpCleanUpKcbCachedSymlink.c)
 *     HvUnlockHiveFlusherShared @ 0x14066628C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x1406662C4 (HvLockHiveFlusherShared.c)
 *     HvReallocateCell @ 0x1406663B0 (HvReallocateCell.c)
 *     CmpSignalDeferredPosts @ 0x140667890 (CmpSignalDeferredPosts.c)
 *     CmpCleanUpSubKeyInfo @ 0x14066A0AC (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityToKcb @ 0x14066A130 (CmpAssignSecurityToKcb.c)
 *     CmpFreeKeyByCell @ 0x14066B280 (CmpFreeKeyByCell.c)
 *     CmpLockRegistryFreezeAware @ 0x1406726F0 (CmpLockRegistryFreezeAware.c)
 *     CmpReportNotify @ 0x1406A405C (CmpReportNotify.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1406C3144 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpLockKcbShared @ 0x1406F2B10 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x1406F2B40 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1406FC600 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x14071984C (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmpCleanupRollbackPacket @ 0x14071C518 (CmpCleanupRollbackPacket.c)
 *     CmpCreateHive @ 0x14071E618 (CmpCreateHive.c)
 *     CmpDestroyHive @ 0x140728F38 (CmpDestroyHive.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140734AA4 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14076E1A4 (CmpTryAcquireKcbIXLocks.c)
 *     CmpCopyKeyPartial @ 0x14076F88C (CmpCopyKeyPartial.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x140772AC4 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x140772CE0 (CmpInvalidateSubtree.c)
 *     CmpAbortRollbackPacket @ 0x14077A8CC (CmpAbortRollbackPacket.c)
 *     CmpTraceHiveRestoreStart @ 0x14086AD10 (CmpTraceHiveRestoreStart.c)
 *     CmpTraceHiveRestoreStop @ 0x14086AE24 (CmpTraceHiveRestoreStop.c)
 *     CmpCheckKeyAccess @ 0x140871724 (CmpCheckKeyAccess.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140871AC4 (CmpDoAccessCheckOnSubtree.c)
 *     CmpRetryBackOff @ 0x140875040 (CmpRetryBackOff.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x140876258 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpLogUnsupportedOperation @ 0x14087634C (CmpLogUnsupportedOperation.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140876520 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpCopySyncTree @ 0x1408784E4 (CmpCopySyncTree.c)
 *     HvMarkCellDirty @ 0x14087BCE8 (HvMarkCellDirty.c)
 *     CmpLoadHiveVolatile @ 0x14087CF5C (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14087D3F8 (CmpRefreshHive.c)
 *     CmpDeleteTree @ 0x14087E99C (CmpDeleteTree.c)
 */

__int64 __fastcall CmRestoreKey(_QWORD *a1, void *a2, int a3, char a4)
{
  char v4; // bl
  __int64 v8; // r13
  ULONG_PTR v9; // r15
  ULONG_PTR v10; // r14
  int Hive; // edi
  char v12; // si
  int HiveVolatile; // eax
  unsigned int v14; // edi
  __int64 v15; // rax
  unsigned int v16; // edx
  __int64 v17; // rax
  unsigned int v18; // eax
  int v19; // eax
  int v20; // edi
  size_t v21; // r8
  const void *v22; // rdx
  __int64 v23; // r13
  __int64 v24; // rcx
  void (__fastcall *v25)(ULONG_PTR, __int64 *); // rax
  char v26; // bl
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // eax
  __int64 v32; // r9
  unsigned int v33; // r12d
  bool v34; // zf
  unsigned int v35; // ebx
  __int64 v36; // rax
  __int64 v37; // rax
  _DWORD *v38; // rdx
  __int64 v39; // rax
  unsigned int v40; // ebx
  void (__fastcall *v41)(ULONG_PTR, _DWORD *); // rax
  _WORD *v42; // rax
  unsigned int v43; // r13d
  unsigned int *v44; // r12
  _WORD *v45; // rbx
  char v46; // al
  __int64 v47; // r8
  unsigned int v48; // edx
  __int64 v49; // rax
  _DWORD *v50; // rcx
  _DWORD *v51; // rcx
  __int64 v52; // rbx
  unsigned int v53; // ecx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rbx
  int v58; // ecx
  int v59; // eax
  __int64 v60; // rcx
  unsigned int v61; // esi
  __int64 v63; // [rsp+28h] [rbp-D8h]
  char v65; // [rsp+61h] [rbp-9Fh]
  unsigned int v66; // [rsp+64h] [rbp-9Ch]
  unsigned int v67; // [rsp+68h] [rbp-98h]
  int v68; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v69; // [rsp+70h] [rbp-90h]
  unsigned int v70; // [rsp+78h] [rbp-88h]
  _DWORD v71[2]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v72[2]; // [rsp+88h] [rbp-78h] BYREF
  PVOID P; // [rsp+90h] [rbp-70h] BYREF
  __int64 v74; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v75[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v76; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v77; // [rsp+B8h] [rbp-48h]
  unsigned int v78; // [rsp+BCh] [rbp-44h]
  __int64 v79; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v80; // [rsp+C8h] [rbp-38h]
  unsigned int v81; // [rsp+CCh] [rbp-34h] BYREF
  _DWORD v82[2]; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD v83[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v84; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v85[496]; // [rsp+F0h] [rbp-10h] BYREF

  v70 = a3;
  v4 = 0;
  v83[1] = 0;
  v74 = 0LL;
  v83[0] = -1;
  v79 = 0xFFFFFFFFLL;
  v71[0] = -1;
  v72[0] = -1;
  v75[0] = -1;
  v8 = 0LL;
  v71[1] = 0;
  v72[1] = 0;
  P = 0LL;
  v75[1] = 0;
  memset(v85, 0, 56);
  memset(&v85[64], 0, 0x1B0uLL);
  v68 = 0;
  v84 = 0LL;
  v76 = 0LL;
  CmpInitializeDelayDerefContext(&v84);
  v9 = a1[1];
  v10 = *(_QWORD *)(v9 + 32);
  if ( (*(_DWORD *)(v10 + 160) & 0x100000) != 0 )
  {
    Hive = -1073741790;
    goto LABEL_119;
  }
  CmpTraceHiveRestoreStart(a2, a3);
  if ( (a3 & 0xFFFFFFFD) != 0 && (a3 & 2) != 0 || a1[7] || a1[8] )
  {
    Hive = -1073741811;
    goto LABEL_119;
  }
  v12 = 1;
  if ( (v70 & 1) != 0 )
  {
    HiveVolatile = CmpLoadHiveVolatile(a1, a2);
LABEL_8:
    Hive = HiveVolatile;
    goto LABEL_119;
  }
  if ( (v70 & 2) != 0 )
  {
    HiveVolatile = CmpRefreshHive(a1);
    goto LABEL_8;
  }
  *(_QWORD *)&v85[8] = v85;
  *(_QWORD *)&v85[24] = a2;
  *(_QWORD *)v85 = v85;
  memset(&v85[32], 0, 24);
  Hive = CmpCreateHive((ULONG_PTR *)&P, 2u, 0x8000, 0, 0LL, &v85[24], 0LL, 18415617, 0LL, 0LL, 0LL, (__int64)&v85[64]);
  if ( Hive < 0 )
    goto LABEL_119;
  CmpLockRegistryFreezeAware(0);
  v4 = 1;
  CmpLockKcbShared(v9);
  v14 = *(_DWORD *)(v9 + 40);
  v66 = v14;
  if ( *(_WORD *)(v9 + 66) )
  {
    CmpLogUnsupportedOperation(0x11u);
    Hive = -1073741822;
LABEL_117:
    CmpUnlockKcb(v9);
    goto LABEL_119;
  }
  if ( CmpIsKeyDeletedForKeyBody((__int64)a1, 0LL) )
  {
    Hive = -1073741535;
    goto LABEL_117;
  }
  if ( *(_BYTE *)(v9 + 65) == 1 || v10 == CmpMasterHive )
  {
    Hive = -1073741790;
    goto LABEL_117;
  }
  if ( *(_BYTE *)(v10 + 2936) == 1 )
  {
    Hive = -1073741431;
    goto LABEL_117;
  }
  HvLockHiveFlusherShared(v10);
  v65 = 1;
  v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v10 + 8))(v10, v14, v71);
  v69 = v15;
  v8 = v15;
  if ( !v15
    || ((*(_BYTE *)(v15 + 2) & 4) == 0 ? (v16 = *(_DWORD *)(v15 + 16)) : (v16 = -1),
        v77 = v16,
        v17 = *((_QWORD *)P + 8),
        v80 = v14 >> 31,
        v18 = CmpCopyKeyPartial((__int64)P, *(unsigned int *)(v17 + 36), v10, v16, 6, v63, v14 >> 31),
        v78 = v18,
        v18 == -1) )
  {
    Hive = -1073741670;
    goto LABEL_115;
  }
  v19 = HvReallocateCell(v10, v18, (unsigned int)*(unsigned __int16 *)(v8 + 72) + 76, 1, &v74, &v79);
  v67 = v19;
  v20 = v19;
  if ( v19 == -1 )
  {
    Hive = -1073741670;
    goto LABEL_112;
  }
  v21 = *(unsigned __int16 *)(v8 + 72);
  v22 = (const void *)(v8 + 76);
  v23 = v74;
  v78 = v19;
  memmove((void *)(v74 + 76), v22, v21);
  v24 = v69;
  *(_WORD *)(v23 + 72) = *(_WORD *)(v69 + 72);
  if ( (*(_BYTE *)(v24 + 2) & 0x20) != 0 )
    *(_WORD *)(v23 + 2) |= 0x20u;
  else
    *(_WORD *)(v74 + 2) &= ~0x20u;
  if ( !CmpCopySyncTree((int)P, *(_DWORD *)(*((_QWORD *)P + 8) + 36LL), v10, v20, 2, 0) )
  {
    v8 = v69;
    Hive = -1073741670;
LABEL_112:
    v61 = v78;
    if ( (unsigned __int8)CmpDeleteTree(v10, v78) )
      CmpFreeKeyByCell(v10, v61, 0);
    v12 = v65;
    if ( !v65 )
    {
LABEL_116:
      if ( !v12 )
        goto LABEL_119;
      goto LABEL_117;
    }
LABEL_115:
    HvUnlockHiveFlusherShared(v10);
    goto LABEL_116;
  }
  HvUnlockHiveFlusherShared(v10);
  v65 = 0;
  CmpUnlockKcb(v9);
  CmpUnlockRegistry();
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v71);
  v25 = *(void (__fastcall **)(ULONG_PTR, __int64 *))(v10 + 16);
  v69 = 0LL;
  v8 = 0LL;
  v25(v10, &v79);
  v74 = 0LL;
  CmpLockRegistryFreezeAware(1);
  while ( 1 )
  {
    v26 = 0;
    if ( (CmpShutdownRundown & 1) != 0 )
    {
LABEL_110:
      Hive = -1073741431;
      goto LABEL_111;
    }
    if ( CmpIsKeyDeletedForKeyBody((__int64)a1, 0LL) )
      goto LABEL_60;
    if ( v66 != *(_DWORD *)(v9 + 40) )
    {
      Hive = -1073741444;
      goto LABEL_111;
    }
    if ( (*(_DWORD *)(v9 + 8) & 0x40000) != 0 )
    {
      Hive = -1073740763;
      goto LABEL_111;
    }
    if ( *(_BYTE *)(v10 + 2936) == 1 )
      goto LABEL_110;
    if ( v77 != -1 )
    {
      Hive = CmpCheckKeyAccess(v10, v77);
      if ( Hive < 0 )
        goto LABEL_111;
    }
    Hive = CmpCheckKeyAccess(v10, v66);
    if ( Hive < 0 )
      goto LABEL_111;
    LOBYTE(v27) = 1;
    Hive = CmpTryAcquireKcbIXLocks(v9, v27, v28, (__int64)&v76);
    if ( Hive == -1073741267 )
    {
      CmpLogTransactionAbortedForRollbackPacket(v9, 7u, (unsigned int *)&v76, v30);
      CmpUnlockRegistry();
      Hive = CmpAbortRollbackPacket((__int64)&v76, 0LL);
      if ( Hive >= 0 )
        goto LABEL_45;
      CmpLockRegistryFreezeAware(1);
LABEL_111:
      v4 = 1;
      goto LABEL_112;
    }
    if ( Hive < 0 )
      goto LABEL_111;
    LOBYTE(v29) = a4;
    Hive = CmpDoAccessCheckOnSubtree(v10, v66, v29, (struct _LOOKASIDE_LIST_EX *)0x10000, 2);
    if ( Hive < 0 )
      goto LABEL_111;
    if ( (v70 & 8) == 0 )
      break;
    Hive = CmpPrepareToInvalidateAllHigherLayerKcbs(v9, 0, (__int64)&v76);
    if ( Hive == -1073741267 )
    {
      v26 = 1;
    }
    else if ( Hive < 0 )
    {
      goto LABEL_111;
    }
    v31 = CmpPrepareForSubtreeInvalidation(v9, 0, (__int64)&v76);
    Hive = v31;
    if ( v31 != -1073741267 )
    {
      if ( v31 < 0 )
        goto LABEL_111;
      if ( !v26 )
      {
        CmpInvalidateAllHigherLayerKcbs(v9, 1, 0, (__int64)&v84);
        CmpInvalidateSubtree(v9, 1, 0, (__int64)&v84, 0LL);
        CmpDrainDelayDerefContext((_QWORD **)&v84);
        goto LABEL_62;
      }
    }
    CmpLogTransactionAbortedForRollbackPacket(v9, 7u, (unsigned int *)&v76, v32);
    CmpUnlockRegistry();
    v4 = 0;
    Hive = CmpAbortRollbackPacket((__int64)&v76, 0LL);
    if ( Hive < 0 )
    {
      CmpLockRegistryFreezeAware(1);
      goto LABEL_112;
    }
LABEL_45:
    CmpCleanupRollbackPacket((__int64)&v76);
    v76 = 0LL;
    CmpRetryBackOff(&v68);
    CmpLockRegistryFreezeAware(1);
  }
  CmpEnumerateAllHigherLayerKcbs(
    v9,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64, __int64))CmpCleanUpHigherLayerKcbCachesPostCallback,
    0LL,
    0LL,
    1,
    1);
  if ( CmpDoesKeyHaveOpenSubkeys(v9) || *(_QWORD *)v9 != 1LL )
  {
LABEL_60:
    Hive = -1073741535;
    goto LABEL_111;
  }
LABEL_62:
  v33 = v67;
  if ( !HvMarkCellDirty(v10, v67, 0) )
  {
    Hive = -1073741443;
    goto LABEL_111;
  }
  v74 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v10 + 8))(v10, v66, &v79);
  if ( !v74 )
  {
LABEL_65:
    Hive = -1073741670;
    goto LABEL_111;
  }
  v34 = (*(_BYTE *)(v74 + 2) & 4) == 0;
  v35 = *(_DWORD *)(v74 + 16);
  v70 = v35;
  if ( v34 )
  {
    v8 = 0LL;
    if ( !HvMarkCellDirty(v10, v35, 0) )
    {
      Hive = -1073741443;
      goto LABEL_111;
    }
    v39 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v10 + 8))(v10, v35, v72);
    if ( !v39 )
      goto LABEL_65;
    v40 = *(_DWORD *)(v39 + 4LL * v80 + 28);
    v41 = *(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16);
    v81 = v40;
    v41(v10, v72);
    v42 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v10 + 8))(v10, v40, v83);
    *(_QWORD *)&v85[16] = v42;
    if ( !v42 )
    {
LABEL_68:
      Hive = -1073741670;
      v8 = 0LL;
      goto LABEL_111;
    }
    if ( *v42 == 26994 )
    {
      v43 = (unsigned __int16)v42[1];
      v44 = (unsigned int *)(v42 + 2);
    }
    else
    {
      v43 = 1;
      v44 = &v81;
    }
    v68 = 0;
    if ( v43 )
    {
      while ( 1 )
      {
        v45 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v10 + 8))(v10, *v44, v75);
        if ( !v45 )
          break;
        v46 = HvMarkCellDirty(v10, *v44, 0);
        v47 = 0LL;
        if ( !v46 )
        {
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *, _QWORD))(v10 + 16))(v10, v75, 0LL);
          v8 = v69;
          Hive = -1073741443;
          goto LABEL_111;
        }
        v48 = (unsigned __int16)v45[1];
        v49 = 0LL;
        if ( ((*v45 - 26220) & 0xFDFF) != 0 )
        {
          if ( v45[1] )
          {
            v47 = v66;
            v50 = v45 + 2;
            while ( *v50 != v66 )
            {
              v49 = (unsigned int)(v49 + 1);
              ++v50;
              if ( (unsigned int)v49 >= v48 )
                goto LABEL_92;
            }
            v33 = v67;
            *(_DWORD *)&v45[2 * v49 + 2] = v67;
LABEL_104:
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v75);
            goto LABEL_94;
          }
        }
        else if ( v45[1] )
        {
          v47 = v66;
          v51 = v45 + 2;
          while ( *v51 != v66 )
          {
            v49 = (unsigned int)(v49 + 1);
            v51 += 2;
            if ( (unsigned int)v49 >= v48 )
              goto LABEL_92;
          }
          v33 = v67;
          *(_DWORD *)&v45[4 * v49 + 2] = v67;
          goto LABEL_104;
        }
LABEL_92:
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64))(v10 + 16))(v10, v75, v47);
        ++v44;
        if ( ++v68 >= v43 )
          goto LABEL_93;
      }
      Hive = -1073741670;
      v8 = 0LL;
      goto LABEL_111;
    }
LABEL_93:
    v33 = v67;
LABEL_94:
    v52 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v10 + 8))(v10, v70, v72);
    v53 = *(unsigned __int16 *)((*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v10 + 8))(v10, v33, v71) + 74);
    if ( *(_DWORD *)(v52 + 56) < v53 )
      *(_DWORD *)(v52 + 56) = v53;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v71);
    v38 = v72;
  }
  else
  {
    v36 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(CmpMasterHive + 8))(CmpMasterHive, v35, v72);
    if ( !v36 )
      goto LABEL_68;
    *(_DWORD *)(v36 + 28) = v67;
    (*(void (__fastcall **)(__int64, _DWORD *))(CmpMasterHive + 16))(CmpMasterHive, v72);
    v37 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v10 + 8))(v10, v67, v71);
    v8 = v37;
    if ( !v37 )
    {
LABEL_70:
      Hive = -1073741670;
      goto LABEL_111;
    }
    *(_DWORD *)(v37 + 16) = v35;
    v38 = v71;
    *(_DWORD *)(*(_QWORD *)(v10 + 64) + 36LL) = v67;
  }
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v38);
  *(_DWORD *)(v9 + 40) = v33;
  CmpCleanUpKcbCachedSymlink(v9);
  v54 = *(_QWORD *)(v9 + 32);
  v82[0] = -1;
  v55 = *(unsigned int *)(v9 + 40);
  v82[1] = 0;
  v56 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(v54 + 8))(v54, v55, v82);
  v8 = 0LL;
  v57 = v56;
  if ( !v56 )
    goto LABEL_70;
  v58 = *(_DWORD *)(v56 + 40);
  v59 = *(_DWORD *)(v56 + 36);
  *(_DWORD *)(v9 + 100) = v58;
  *(_DWORD *)(v9 + 96) = v59;
  *(_WORD *)(v9 + 186) = *(_WORD *)(v57 + 2);
  CmpAssignSecurityToKcb(v9, *(unsigned int *)(v57 + 44), 0LL, 0, 0);
  CmpCleanUpSubKeyInfo(v9, 1);
  ++*(_QWORD *)(v9 + 304);
  *(_QWORD *)(v9 + 168) = *(_QWORD *)(v57 + 4);
  *(_WORD *)(v9 + 176) = *(_WORD *)(v57 + 52);
  *(_WORD *)(v9 + 178) = *(_WORD *)(v57 + 60);
  *(_DWORD *)(v9 + 180) = *(_DWORD *)(v57 + 64);
  *(_DWORD *)(v9 + 184) ^= (*(_DWORD *)(v9 + 184) ^ *(unsigned __int16 *)(v57 + 54)) & 0xF;
  *(_DWORD *)(v9 + 184) ^= ((unsigned __int8)*(_DWORD *)(v9 + 184) ^ (unsigned __int8)*(_WORD *)(v57 + 54)) & 0xF0;
  v60 = *(_QWORD *)(v9 + 32);
  *(_BYTE *)(v9 + 185) = *(_BYTE *)(v57 + 55);
  (*(void (__fastcall **)(__int64, _DWORD *))(v60 + 16))(v60, v82);
  *(_WORD *)(v9 + 8) = 64;
  if ( (unsigned __int8)CmpDeleteTree(v10, v66) )
    CmpFreeKeyByCell(v10, v66, 0);
  CmpReportNotify(v9, 0, 1LL, (struct _LOOKASIDE_LIST_EX *)v85);
  if ( !CmpProfileLoaded )
  {
    CmpGlobalQuotaAllowed = CmpGlobalQuota;
    CmpProfileLoaded = 1;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v84);
  CmpUnlockRegistry();
  v4 = 0;
  CmpDestroyHive((volatile signed __int32 *)P);
  P = 0LL;
  CmpSignalDeferredPosts((_QWORD **)v85);
LABEL_119:
  CmpDrainDelayDerefContext((_QWORD **)&v84);
  if ( v4 )
    CmpUnlockRegistry();
  if ( P )
  {
    CmpDestroyHive((volatile signed __int32 *)P);
    P = 0LL;
  }
  if ( *(_QWORD *)&v85[16] )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v83);
  if ( v8 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v71);
  if ( v74 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v10 + 16))(v10, &v79);
  CmpCleanupRollbackPacket((__int64)&v76);
  CmpTraceHiveRestoreStop(Hive);
  return (unsigned int)Hive;
}
