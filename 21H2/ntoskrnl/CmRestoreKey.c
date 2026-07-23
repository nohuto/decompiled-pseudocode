/*
 * XREFs of CmRestoreKey @ 0x14087C090
 * Callers:
 *     NtRestoreKey @ 0x140869630 (NtRestoreKey.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x14035BE38 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x14035BE50 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpCleanupRollbackPacket @ 0x1405E094C (CmpCleanupRollbackPacket.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x1405E0998 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1405E119C (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpReportNotify @ 0x1405E1B2C (CmpReportNotify.c)
 *     HvUnlockHiveFlusherShared @ 0x14065B0AC (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14065B0E4 (HvLockHiveFlusherShared.c)
 *     HvReallocateCell @ 0x14065B1D0 (HvReallocateCell.c)
 *     CmpSignalDeferredPosts @ 0x14065C6B0 (CmpSignalDeferredPosts.c)
 *     CmpCleanUpSubKeyInfo @ 0x14065EECC (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityToKcb @ 0x14065EF50 (CmpAssignSecurityToKcb.c)
 *     CmpFreeKeyByCell @ 0x1406600A0 (CmpFreeKeyByCell.c)
 *     CmpLockRegistryFreezeAware @ 0x140667920 (CmpLockRegistryFreezeAware.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1406DDF90 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpCreateHive @ 0x1406F756C (CmpCreateHive.c)
 *     CmpLockKcbShared @ 0x140709EF0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140709F20 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1407139E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpDestroyHive @ 0x1407293E8 (CmpDestroyHive.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140734C64 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14076E364 (CmpTryAcquireKcbIXLocks.c)
 *     CmpCopyKeyPartial @ 0x14076FA4C (CmpCopyKeyPartial.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x140772C84 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x140772EA0 (CmpInvalidateSubtree.c)
 *     CmpAbortRollbackPacket @ 0x14077AA8C (CmpAbortRollbackPacket.c)
 *     CmpTraceHiveRestoreStart @ 0x14086AE70 (CmpTraceHiveRestoreStart.c)
 *     CmpTraceHiveRestoreStop @ 0x14086AF84 (CmpTraceHiveRestoreStop.c)
 *     CmpCheckKeyAccess @ 0x140871884 (CmpCheckKeyAccess.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140871C24 (CmpDoAccessCheckOnSubtree.c)
 *     CmpRetryBackOff @ 0x1408751A0 (CmpRetryBackOff.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x1408763B8 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpLogUnsupportedOperation @ 0x1408764AC (CmpLogUnsupportedOperation.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140876680 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpCopySyncTree @ 0x140878644 (CmpCopySyncTree.c)
 *     HvMarkCellDirty @ 0x14087BE48 (HvMarkCellDirty.c)
 *     CmpLoadHiveVolatile @ 0x14087D0BC (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14087D558 (CmpRefreshHive.c)
 *     CmpDeleteTree @ 0x14087EAFC (CmpDeleteTree.c)
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
  int v30; // eax
  unsigned int v31; // r12d
  bool v32; // zf
  unsigned int v33; // ebx
  __int64 v34; // rax
  __int64 v35; // rax
  _DWORD *v36; // rdx
  __int64 v37; // rax
  unsigned int v38; // ebx
  void (__fastcall *v39)(ULONG_PTR, _DWORD *); // rax
  _WORD *v40; // rax
  unsigned int v41; // r13d
  unsigned int *v42; // r12
  _WORD *v43; // rbx
  char v44; // al
  __int64 v45; // r8
  unsigned int v46; // edx
  __int64 v47; // rax
  _DWORD *v48; // rcx
  _DWORD *v49; // rcx
  __int64 v50; // rbx
  unsigned int v51; // ecx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rbx
  int v56; // ecx
  int v57; // eax
  __int64 v58; // rcx
  unsigned int v59; // esi
  __int64 v61; // [rsp+28h] [rbp-D8h]
  char v63; // [rsp+61h] [rbp-9Fh]
  unsigned int v64; // [rsp+64h] [rbp-9Ch]
  unsigned int v65; // [rsp+68h] [rbp-98h]
  int v66; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v67; // [rsp+70h] [rbp-90h]
  unsigned int v68; // [rsp+78h] [rbp-88h]
  _DWORD v69[2]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v70[2]; // [rsp+88h] [rbp-78h] BYREF
  PVOID P; // [rsp+90h] [rbp-70h] BYREF
  __int64 v72; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v73[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v74; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v75; // [rsp+B8h] [rbp-48h]
  unsigned int v76; // [rsp+BCh] [rbp-44h]
  __int64 v77; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v78; // [rsp+C8h] [rbp-38h]
  unsigned int v79; // [rsp+CCh] [rbp-34h] BYREF
  _DWORD v80[2]; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD v81[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v82; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v83; // [rsp+F0h] [rbp-10h] BYREF
  _WORD *v84; // [rsp+100h] [rbp+0h]
  _OWORD v85[2]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v86[432]; // [rsp+130h] [rbp+30h] BYREF

  v68 = a3;
  v4 = 0;
  v84 = 0LL;
  v81[1] = 0;
  v72 = 0LL;
  v81[0] = -1;
  v77 = 0xFFFFFFFFLL;
  v69[0] = -1;
  v70[0] = -1;
  v73[0] = -1;
  v8 = 0LL;
  v69[1] = 0;
  v70[1] = 0;
  P = 0LL;
  v73[1] = 0;
  memset(v85, 0, sizeof(v85));
  v83 = 0LL;
  memset(v86, 0, sizeof(v86));
  v66 = 0;
  v82 = 0LL;
  v74 = 0LL;
  CmpInitializeDelayDerefContext(&v82);
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
  if ( (v68 & 1) != 0 )
  {
    HiveVolatile = CmpLoadHiveVolatile(a1, a2);
LABEL_8:
    Hive = HiveVolatile;
    goto LABEL_119;
  }
  if ( (v68 & 2) != 0 )
  {
    HiveVolatile = CmpRefreshHive(a1);
    goto LABEL_8;
  }
  *((_QWORD *)&v83 + 1) = &v83;
  *(_QWORD *)&v85[0] = a2;
  *(_QWORD *)&v83 = &v83;
  memset((char *)v85 + 8, 0, 24);
  Hive = CmpCreateHive((ULONG_PTR *)&P, 2u, 0x8000, 0, 0LL, v85, 0LL, 18415617, 0LL, 0LL, 0LL, (__int64)v86);
  if ( Hive < 0 )
    goto LABEL_119;
  CmpLockRegistryFreezeAware(0);
  v4 = 1;
  CmpLockKcbShared(v9);
  v14 = *(_DWORD *)(v9 + 40);
  v64 = v14;
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
  if ( *(_BYTE *)(v9 + 65) == 1 || (PVOID)v10 == CmpMasterHive )
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
  v63 = 1;
  v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v10 + 8))(v10, v14, v69);
  v67 = v15;
  v8 = v15;
  if ( !v15
    || ((*(_BYTE *)(v15 + 2) & 4) == 0 ? (v16 = *(_DWORD *)(v15 + 16)) : (v16 = -1),
        v75 = v16,
        v17 = *((_QWORD *)P + 8),
        v78 = v14 >> 31,
        v18 = CmpCopyKeyPartial((__int64)P, *(unsigned int *)(v17 + 36), v10, v16, 6, v61, v14 >> 31),
        v76 = v18,
        v18 == -1) )
  {
    Hive = -1073741670;
    goto LABEL_115;
  }
  v19 = HvReallocateCell(v10, v18, (unsigned int)*(unsigned __int16 *)(v8 + 72) + 76, 1, &v72, &v77);
  v65 = v19;
  v20 = v19;
  if ( v19 == -1 )
  {
    Hive = -1073741670;
    goto LABEL_112;
  }
  v21 = *(unsigned __int16 *)(v8 + 72);
  v22 = (const void *)(v8 + 76);
  v23 = v72;
  v76 = v19;
  memmove((void *)(v72 + 76), v22, v21);
  v24 = v67;
  *(_WORD *)(v23 + 72) = *(_WORD *)(v67 + 72);
  if ( (*(_BYTE *)(v24 + 2) & 0x20) != 0 )
    *(_WORD *)(v23 + 2) |= 0x20u;
  else
    *(_WORD *)(v72 + 2) &= ~0x20u;
  if ( !CmpCopySyncTree((int)P, *(_DWORD *)(*((_QWORD *)P + 8) + 36LL), v10, v20, 2, 0) )
  {
    v8 = v67;
    Hive = -1073741670;
LABEL_112:
    v59 = v76;
    if ( (unsigned __int8)CmpDeleteTree(v10, v76) )
      CmpFreeKeyByCell(v10, v59, 0);
    v12 = v63;
    if ( !v63 )
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
  v63 = 0;
  CmpUnlockKcb(v9);
  CmpUnlockRegistry();
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v69);
  v25 = *(void (__fastcall **)(ULONG_PTR, __int64 *))(v10 + 16);
  v67 = 0LL;
  v8 = 0LL;
  v25(v10, &v77);
  v72 = 0LL;
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
    if ( v64 != *(_DWORD *)(v9 + 40) )
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
    if ( v75 != -1 )
    {
      Hive = CmpCheckKeyAccess(v10, v75);
      if ( Hive < 0 )
        goto LABEL_111;
    }
    Hive = CmpCheckKeyAccess(v10, v64);
    if ( Hive < 0 )
      goto LABEL_111;
    LOBYTE(v27) = 1;
    Hive = CmpTryAcquireKcbIXLocks(v9, v27, v28, (__int64)&v74);
    if ( Hive == -1073741267 )
    {
      CmpLogTransactionAbortedForRollbackPacket(v9, 7u);
      CmpUnlockRegistry();
      Hive = CmpAbortRollbackPacket((__int64)&v74, 0LL);
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
    Hive = CmpDoAccessCheckOnSubtree(v10, v64, v29, (struct _LOOKASIDE_LIST_EX *)0x10000, 2);
    if ( Hive < 0 )
      goto LABEL_111;
    if ( (v68 & 8) == 0 )
      break;
    Hive = CmpPrepareToInvalidateAllHigherLayerKcbs(v9, 0, (__int64)&v74);
    if ( Hive == -1073741267 )
    {
      v26 = 1;
    }
    else if ( Hive < 0 )
    {
      goto LABEL_111;
    }
    v30 = CmpPrepareForSubtreeInvalidation(v9, 0, (__int64)&v74);
    Hive = v30;
    if ( v30 != -1073741267 )
    {
      if ( v30 < 0 )
        goto LABEL_111;
      if ( !v26 )
      {
        CmpInvalidateAllHigherLayerKcbs(v9, 1, 0, (__int64)&v82);
        CmpInvalidateSubtree(v9, 1, 0, (__int64)&v82, 0LL);
        CmpDrainDelayDerefContext((_QWORD **)&v82);
        goto LABEL_62;
      }
    }
    CmpLogTransactionAbortedForRollbackPacket(v9, 7u);
    CmpUnlockRegistry();
    v4 = 0;
    Hive = CmpAbortRollbackPacket((__int64)&v74, 0LL);
    if ( Hive < 0 )
    {
      CmpLockRegistryFreezeAware(1);
      goto LABEL_112;
    }
LABEL_45:
    CmpCleanupRollbackPacket((__int64)&v74);
    v74 = 0LL;
    CmpRetryBackOff(&v66);
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
  v31 = v65;
  if ( !HvMarkCellDirty(v10, v65, 0) )
  {
    Hive = -1073741443;
    goto LABEL_111;
  }
  v72 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v10 + 8))(v10, v64, &v77);
  if ( !v72 )
  {
LABEL_65:
    Hive = -1073741670;
    goto LABEL_111;
  }
  v32 = (*(_BYTE *)(v72 + 2) & 4) == 0;
  v33 = *(_DWORD *)(v72 + 16);
  v68 = v33;
  if ( v32 )
  {
    v8 = 0LL;
    if ( !HvMarkCellDirty(v10, v33, 0) )
    {
      Hive = -1073741443;
      goto LABEL_111;
    }
    v37 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v10 + 8))(v10, v33, v70);
    if ( !v37 )
      goto LABEL_65;
    v38 = *(_DWORD *)(v37 + 4LL * v78 + 28);
    v39 = *(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16);
    v79 = v38;
    v39(v10, v70);
    v40 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v10 + 8))(v10, v38, v81);
    v84 = v40;
    if ( !v40 )
    {
LABEL_68:
      Hive = -1073741670;
      v8 = 0LL;
      goto LABEL_111;
    }
    if ( *v40 == 26994 )
    {
      v41 = (unsigned __int16)v40[1];
      v42 = (unsigned int *)(v40 + 2);
    }
    else
    {
      v41 = 1;
      v42 = &v79;
    }
    v66 = 0;
    if ( v41 )
    {
      while ( 1 )
      {
        v43 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v10 + 8))(v10, *v42, v73);
        if ( !v43 )
          break;
        v44 = HvMarkCellDirty(v10, *v42, 0);
        v45 = 0LL;
        if ( !v44 )
        {
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *, _QWORD))(v10 + 16))(v10, v73, 0LL);
          v8 = v67;
          Hive = -1073741443;
          goto LABEL_111;
        }
        v46 = (unsigned __int16)v43[1];
        v47 = 0LL;
        if ( ((*v43 - 26220) & 0xFDFF) != 0 )
        {
          if ( v43[1] )
          {
            v45 = v64;
            v48 = v43 + 2;
            while ( *v48 != v64 )
            {
              v47 = (unsigned int)(v47 + 1);
              ++v48;
              if ( (unsigned int)v47 >= v46 )
                goto LABEL_92;
            }
            v31 = v65;
            *(_DWORD *)&v43[2 * v47 + 2] = v65;
LABEL_104:
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v73);
            goto LABEL_94;
          }
        }
        else if ( v43[1] )
        {
          v45 = v64;
          v49 = v43 + 2;
          while ( *v49 != v64 )
          {
            v47 = (unsigned int)(v47 + 1);
            v49 += 2;
            if ( (unsigned int)v47 >= v46 )
              goto LABEL_92;
          }
          v31 = v65;
          *(_DWORD *)&v43[4 * v47 + 2] = v65;
          goto LABEL_104;
        }
LABEL_92:
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64))(v10 + 16))(v10, v73, v45);
        ++v42;
        if ( ++v66 >= v41 )
          goto LABEL_93;
      }
      Hive = -1073741670;
      v8 = 0LL;
      goto LABEL_111;
    }
LABEL_93:
    v31 = v65;
LABEL_94:
    v50 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v10 + 8))(v10, v68, v70);
    v51 = *(unsigned __int16 *)((*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v10 + 8))(v10, v31, v69) + 74);
    if ( *(_DWORD *)(v50 + 56) < v51 )
      *(_DWORD *)(v50 + 56) = v51;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v69);
    v36 = v70;
  }
  else
  {
    v34 = (*((__int64 (__fastcall **)(PVOID, _QWORD, _DWORD *))CmpMasterHive + 1))(CmpMasterHive, v33, v70);
    if ( !v34 )
      goto LABEL_68;
    *(_DWORD *)(v34 + 28) = v65;
    (*((void (__fastcall **)(PVOID, _DWORD *))CmpMasterHive + 2))(CmpMasterHive, v70);
    v35 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v10 + 8))(v10, v65, v69);
    v8 = v35;
    if ( !v35 )
    {
LABEL_70:
      Hive = -1073741670;
      goto LABEL_111;
    }
    *(_DWORD *)(v35 + 16) = v33;
    v36 = v69;
    *(_DWORD *)(*(_QWORD *)(v10 + 64) + 36LL) = v65;
  }
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v36);
  *(_DWORD *)(v9 + 40) = v31;
  CmpCleanUpKcbCachedSymlink(v9);
  v52 = *(_QWORD *)(v9 + 32);
  v80[0] = -1;
  v53 = *(unsigned int *)(v9 + 40);
  v80[1] = 0;
  v54 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(v52 + 8))(v52, v53, v80);
  v8 = 0LL;
  v55 = v54;
  if ( !v54 )
    goto LABEL_70;
  v56 = *(_DWORD *)(v54 + 40);
  v57 = *(_DWORD *)(v54 + 36);
  *(_DWORD *)(v9 + 100) = v56;
  *(_DWORD *)(v9 + 96) = v57;
  *(_WORD *)(v9 + 186) = *(_WORD *)(v55 + 2);
  CmpAssignSecurityToKcb(v9, *(unsigned int *)(v55 + 44), 0LL, 0, 0);
  CmpCleanUpSubKeyInfo(v9, 1);
  ++*(_QWORD *)(v9 + 304);
  *(_QWORD *)(v9 + 168) = *(_QWORD *)(v55 + 4);
  *(_WORD *)(v9 + 176) = *(_WORD *)(v55 + 52);
  *(_WORD *)(v9 + 178) = *(_WORD *)(v55 + 60);
  *(_DWORD *)(v9 + 180) = *(_DWORD *)(v55 + 64);
  *(_DWORD *)(v9 + 184) ^= (*(_DWORD *)(v9 + 184) ^ *(unsigned __int16 *)(v55 + 54)) & 0xF;
  *(_DWORD *)(v9 + 184) ^= ((unsigned __int8)*(_DWORD *)(v9 + 184) ^ (unsigned __int8)*(_WORD *)(v55 + 54)) & 0xF0;
  v58 = *(_QWORD *)(v9 + 32);
  *(_BYTE *)(v9 + 185) = *(_BYTE *)(v55 + 55);
  (*(void (__fastcall **)(__int64, _DWORD *))(v58 + 16))(v58, v80);
  *(_WORD *)(v9 + 8) = 64;
  if ( (unsigned __int8)CmpDeleteTree(v10, v64) )
    CmpFreeKeyByCell(v10, v64, 0);
  CmpReportNotify(v9, 0LL, 1u, (__int64)&v83);
  if ( !CmpProfileLoaded )
  {
    CmpGlobalQuotaAllowed = CmpGlobalQuota;
    CmpProfileLoaded = 1;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v82);
  CmpUnlockRegistry();
  v4 = 0;
  CmpDestroyHive((volatile signed __int32 *)P);
  P = 0LL;
  CmpSignalDeferredPosts((_QWORD **)&v83);
LABEL_119:
  CmpDrainDelayDerefContext((_QWORD **)&v82);
  if ( v4 )
    CmpUnlockRegistry();
  if ( P )
  {
    CmpDestroyHive((volatile signed __int32 *)P);
    P = 0LL;
  }
  if ( v84 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v81);
  if ( v8 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v69);
  if ( v72 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v10 + 16))(v10, &v77);
  CmpCleanupRollbackPacket((__int64)&v74);
  CmpTraceHiveRestoreStop(Hive);
  return (unsigned int)Hive;
}
