/*
 * XREFs of MiStoreWriteModifiedPages @ 0x14034DC5C
 * Callers:
 *     MiGatherPagefilePages @ 0x14034FAC8 (MiGatherPagefilePages.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x140228500 (MiUpdatePageFileHighInPte.c)
 *     MiStoreModifiedWriteDereference @ 0x14023AC4C (MiStoreModifiedWriteDereference.c)
 *     MiStoreFreeWriteSupport @ 0x14023ACD0 (MiStoreFreeWriteSupport.c)
 *     MiStoreWriteIssue @ 0x14023AD08 (MiStoreWriteIssue.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14023F4A4 (KiQueryUnbiasedInterruptTime.c)
 *     RtlClearBits @ 0x140244970 (RtlClearBits.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MiSufficientAvailablePages @ 0x1402A1900 (MiSufficientAvailablePages.c)
 *     MiCapturePageFileInfoInline @ 0x1402F6610 (MiCapturePageFileInfoInline.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140314390 (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140314420 (MiRefPageFileSpaceBitmaps.c)
 *     MiStoreUpdatePagefileHash @ 0x1403449A0 (MiStoreUpdatePagefileHash.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiUpdatePagefilePeakUsage @ 0x14034DA58 (MiUpdatePagefilePeakUsage.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MiStoreCheckCandidatePage @ 0x14034F880 (MiStoreCheckCandidatePage.c)
 *     MiUpdatePfnBackingStore @ 0x140350A90 (MiUpdatePfnBackingStore.c)
 *     MiTransferSoftwarePte @ 0x140350D84 (MiTransferSoftwarePte.c)
 *     MiStoreLogNotCandidate @ 0x140389B18 (MiStoreLogNotCandidate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FDD60 (RtlpInterlockedPopEntrySList.c)
 *     MiStoreLogFullPagefile @ 0x14054EB28 (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteDisabled @ 0x14054EC34 (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x14054ECF4 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x14054EE98 (MiStoreLogWriteIssueRetry.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiStoreWriteModifiedPages(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  unsigned int v3; // r11d
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  __int64 v9; // r13
  ULONG v10; // r11d
  _QWORD *v11; // rcx
  ULONG v12; // eax
  __int64 v13; // r15
  int v14; // ebx
  unsigned int v15; // r11d
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // r10d
  __int64 v19; // rbx
  unsigned __int64 v20; // r9
  unsigned int v21; // ecx
  __int64 *v22; // rsi
  __int64 i; // rax
  unsigned int v24; // esi
  int v25; // eax
  unsigned int v26; // ebx
  int v27; // ecx
  unsigned __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r8
  _DWORD *v31; // r9
  unsigned __int64 v32; // r15
  __int64 v33; // rax
  __int64 v34; // rbx
  unsigned int v35; // eax
  __int64 v36; // r8
  int *v37; // r8
  int v38; // r9d
  int *v39; // rdx
  bool j; // zf
  unsigned int v41; // esi
  __int64 v42; // r13
  __int64 updated; // rbx
  unsigned int *v44; // rax
  unsigned int v45; // r15d
  unsigned int v46; // edi
  __int64 v47; // r8
  int v48; // edx
  _DWORD *v49; // r9
  __int64 v50; // r10
  unsigned int v51; // r11d
  __int64 v52; // rdx
  __int64 k; // rcx
  _QWORD *v54; // rsi
  unsigned __int64 v55; // rax
  __int64 v56; // rcx
  unsigned int v57; // edx
  __int64 v58; // rdi
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  unsigned int v65; // ebx
  _DWORD *v66; // rax
  __int64 result; // rax
  unsigned __int8 v68; // al
  _DWORD *v69; // rax
  unsigned int v70; // edx
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r10
  _DWORD *v73; // r9
  int v74; // eax
  int v75; // ebx
  unsigned __int8 v76; // al
  struct _KPRCB *v77; // r10
  int v78; // eax
  unsigned __int8 v79; // al
  struct _KPRCB *v80; // r10
  _DWORD *v81; // r9
  int v82; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v86; // eax
  __int64 v87; // rdi
  unsigned __int64 v88; // r15
  unsigned __int8 v89; // al
  struct _KPRCB *v90; // r10
  _DWORD *v91; // r9
  int v92; // eax
  unsigned int v93; // [rsp+44h] [rbp-85h]
  int v94; // [rsp+48h] [rbp-81h]
  unsigned int v95; // [rsp+4Ch] [rbp-7Dh]
  __int64 v96; // [rsp+50h] [rbp-79h]
  _SLIST_ENTRY *ListEntry; // [rsp+58h] [rbp-71h]
  __int64 v98; // [rsp+68h] [rbp-61h] BYREF
  _QWORD *v99; // [rsp+70h] [rbp-59h]
  union _MM_STORE_KEY v100; // [rsp+78h] [rbp-51h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-49h]
  __int128 v102; // [rsp+88h] [rbp-41h] BYREF
  __int64 UnbiasedInterruptTime; // [rsp+98h] [rbp-31h]
  __int64 v104; // [rsp+A0h] [rbp-29h]
  __int64 v105; // [rsp+A8h] [rbp-21h]
  _DWORD *v106; // [rsp+B0h] [rbp-19h] BYREF
  __int128 v107; // [rsp+B8h] [rbp-11h]
  __int128 v108; // [rsp+C8h] [rbp-1h]
  int v110; // [rsp+138h] [rbp+6Fh]
  unsigned int v111; // [rsp+140h] [rbp+77h]
  unsigned int v112; // [rsp+148h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 144);
  v2 = a1 + 208;
  v3 = *(_DWORD *)(a1 + 248) >> 12;
  v4 = a1;
  v100.EntireKey = 0LL;
  v5 = *(_QWORD *)(v1 + 248);
  v102 = 0LL;
  v98 = 0LL;
  v107 = 0LL;
  v6 = *(unsigned int *)(v5 + 1172);
  v105 = v2;
  v95 = v3;
  v108 = 0LL;
  if ( (_DWORD)v6 )
  {
    MiStoreLogWriteDisabled(v6, v3);
    result = 3221225626LL;
    --*(_DWORD *)(v5 + 1172);
    return result;
  }
  v7 = *(_QWORD *)(v5 + 8LL * *(unsigned int *)(v5 + 1156) + 6944);
  v96 = v7;
  if ( !*(_QWORD *)(v7 + 24) )
  {
    MiStoreLogFullPagefile();
    return 3221225599LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v106 = 0LL;
  *(_DWORD *)(v4 + 44) = 1;
  LOBYTE(v8) = 17;
  v9 = 0LL;
  v111 = *(_DWORD *)(v7 + 120);
  v94 = 0;
  ListEntry = 0LL;
  v112 = 0;
  v110 = 1;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v11 = (_QWORD *)(v2 + 48);
  v12 = 0;
  v104 = v2 + 48;
LABEL_4:
  v99 = v11;
  v93 = v12;
  while ( v12 < v10 )
  {
    v13 = *v11;
    v14 = 1;
    if ( *v11 == qword_140C4ECA8 || !*(_QWORD *)(v7 + 24) )
      goto LABEL_32;
    if ( v106 != *(_DWORD **)(v7 + 112) )
    {
      if ( v106 )
      {
        v69 = MiDerefPageFileSpaceBitmaps(v7, &v106, 1);
        if ( v69 )
          ExFreePoolWithTag(v69, 0);
      }
      MiRefPageFileSpaceBitmaps((int *)v7, (__int64)&v106);
    }
    v15 = v111;
    v16 = (unsigned int)(v107 - 1);
    v17 = v111 < (unsigned int)v107 ? v111 : 0;
    v18 = (BYTE8(v107) & 4) != 0LL ? 0x20 : 0;
    v19 = *((_QWORD *)&v107 + 1) - ((BYTE8(v107) & 4) != 0LL ? 4 : 0);
    while ( 1 )
    {
      v20 = (unsigned int)(v16 + v18);
      v21 = v17 + v18;
      if ( (_DWORD)v16 - (_DWORD)v17 == -1 )
      {
        v24 = -1;
      }
      else
      {
        v16 = (1LL << (v21 & 0x3F)) - 1;
        v22 = (__int64 *)(v19 + 8 * ((unsigned __int64)v21 >> 6));
        for ( i = v16 | *v22; i == -1; i = *v22 )
        {
          if ( (unsigned __int64)++v22 > v19 + 8 * ((unsigned __int64)(unsigned int)v20 >> 6) )
            goto LABEL_37;
        }
        _BitScanForward64((unsigned __int64 *)&i, ~i);
        v24 = i + ((unsigned int)(((__int64)v22 - v19) >> 3) << 6);
        if ( v24 > (unsigned int)v20 )
        {
LABEL_37:
          v24 = -1;
          goto LABEL_38;
        }
        if ( v24 != -1 )
        {
          v24 -= v18;
          break;
        }
LABEL_38:
        v15 = v111;
      }
      if ( !(_DWORD)v17 )
        break;
      v70 = v15 + 1;
      if ( v15 + 1 > (unsigned int)v107 )
        v70 = v107;
      v16 = v70 - 1;
      v17 = 0LL;
    }
    v9 = 48 * v13 - 0x58000000000LL;
    v8 = (unsigned __int8)MiLockPageInline(v9, v16, v17, (_DWORD *)v20);
    if ( (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) != 0 )
      goto LABEL_82;
    v98 = 0LL;
    v25 = MiStoreCheckCandidatePage(v9, (__int64)&v98);
    if ( v25 < 0 )
    {
      MiStoreLogNotCandidate((unsigned int)v25, v24);
LABEL_82:
      v14 = 1;
LABEL_32:
      if ( (_BYTE)v8 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v86 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
              j = (v86 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v86;
              if ( j )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8((unsigned __int8)v8);
        LOBYTE(v8) = 17;
      }
      if ( v14 )
      {
LABEL_36:
        v35 = v93;
        _bittestandset(*(signed __int32 **)(*(_QWORD *)(v5 + 1272) + 8LL), v93);
      }
      else
      {
        v35 = v93;
      }
      v12 = v35 + 1;
      v10 = v95;
      v11 = v99 + 1;
      v112 = 0;
      v4 = a1;
      v7 = v96;
      goto LABEL_4;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v71 = KeGetCurrentIrql();
        if ( v71 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v71 >= 2u )
        {
          v72 = KeGetCurrentPrcb();
          v73 = v72->SchedulerAssist;
          v74 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          j = (v74 & v73[5]) == 0;
          v73[5] &= v74;
          if ( j )
            KiRemoveSystemWorkPriorityKick(v72);
        }
      }
    }
    __writecr8(v8);
    LOBYTE(v8) = 17;
    if ( !ListEntry )
    {
      ListEntry = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v5 + 1232));
      if ( !ListEntry )
      {
        ListEntry = (_SLIST_ENTRY *)MiAllocatePool(64, 0x78uLL, 0x57536D4Du);
        if ( !ListEntry )
        {
          v94 = 1;
          goto LABEL_36;
        }
      }
    }
    if ( (unsigned __int64)(*(_QWORD *)(v96 + 24) - 1LL) < 8 )
      v26 = *(_DWORD *)(v96 + 24) - 1;
    else
      v26 = 8;
    if ( v110 )
    {
      if ( (unsigned int)MiSufficientAvailablePages(v5, 0x120uLL) )
      {
        v110 &= -((unsigned __int64)(KiQueryUnbiasedInterruptTime() - UnbiasedInterruptTime) < 0x2FAF080);
      }
      else
      {
        v110 = 0;
        if ( v26 >= 3 )
          v26 = 3;
      }
    }
    v4 = a1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
    v27 = MiStoreWriteIssue((__int64)ListEntry, v9, &v100, (int)&v102, (__int64)ListEntry, v98, a1, v110);
    if ( v27 >= 0 )
    {
      ListEntry = 0LL;
      v28 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v96 + 232));
      v111 = v24 + 1;
      _bittestandset(*(signed __int32 **)(*(_QWORD *)(v96 + 112) + 16LL), v24);
      --*(_QWORD *)(v96 + 24);
      *(_DWORD *)(v96 + 120) = v24 + 1;
      MiUpdatePagefilePeakUsage((_QWORD *)v96);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v96 + 232));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v76 = KeGetCurrentIrql();
          if ( v76 <= 0xFu && (unsigned __int8)v28 <= 0xFu && v76 >= 2u )
          {
            v77 = KeGetCurrentPrcb();
            v29 = -1LL << ((unsigned __int8)v28 + 1);
            v31 = v77->SchedulerAssist;
            v78 = ~(unsigned __int16)v29;
            j = (v78 & v31[5]) == 0;
            v30 = (unsigned int)v78 & v31[5];
            v31[5] = v30;
            if ( j )
              KiRemoveSystemWorkPriorityKick(v77);
          }
        }
      }
      __writecr8(v28);
      v32 = (unsigned __int8)MiLockPageInline(v9, v29, v30, v31);
      v33 = MiCapturePageFileInfoInline((unsigned __int64 *)(v9 + 16), 1, 1);
      *(_QWORD *)(v9 + 16) &= ~2uLL;
      v34 = v33;
      MiUpdatePfnBackingStore(v9, v96, v24, 1LL);
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v79 = KeGetCurrentIrql();
          if ( v79 <= 0xFu && (unsigned __int8)v32 <= 0xFu && v79 >= 2u )
          {
            v80 = KeGetCurrentPrcb();
            v81 = v80->SchedulerAssist;
            v82 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v32 + 1));
            j = (v82 & v81[5]) == 0;
            v81[5] &= v82;
            if ( j )
              KiRemoveSystemWorkPriorityKick(v80);
          }
        }
      }
      __writecr8(v32);
      LOBYTE(v8) = 17;
      MiReleasePageFileInfo(v5, v34, 2LL);
      v14 = 0;
      goto LABEL_32;
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 44));
    if ( v27 != -1073740682 )
    {
      v75 = v94;
      if ( v27 == -1073741670 )
        v75 = 1;
      v94 = v75;
LABEL_109:
      MiStoreLogWriteIssueFailure(v27, (unsigned int)&v102, v24, v112, v110, ++*(_DWORD *)(v5 + 1176));
      goto LABEL_36;
    }
    v111 = v24 + 1;
    if ( v112 >= v26 )
      goto LABEL_109;
    MiStoreLogWriteIssueRetry((unsigned int)&v102, v24, v112, v110, *(_DWORD *)(v5 + 1176));
    v10 = v95;
    v7 = v96;
    v12 = v93;
    v11 = v99;
    ++v112;
  }
  if ( v94 )
    *(_DWORD *)(v5 + 1172) = 32;
  v36 = *(_QWORD *)(v5 + 1272);
  if ( *(_DWORD *)v36 )
  {
    if ( v10 <= 1 )
    {
      if ( v10 == 1 )
      {
        v68 = _bittest(*(const signed __int32 **)(v36 + 8), 0);
        goto LABEL_79;
      }
    }
    else if ( *(_DWORD *)v36 >= v10 )
    {
      v37 = *(int **)(v36 + 8);
      v38 = *v37;
      v39 = &v37[(unsigned __int64)(v10 - 1) >> 5];
      if ( v37 != v39 )
      {
        for ( j = v38 == -1; ; j = *v37 == -1 )
        {
          if ( !j )
            goto LABEL_49;
          if ( ++v37 == v39 )
            break;
        }
        if ( ((0xFFFFFFFF >> ~(v10 - 1)) & *v37) != 0xFFFFFFFF >> ~(v10 - 1) )
        {
          v68 = 0;
LABEL_79:
          if ( v68 )
            goto LABEL_76;
          goto LABEL_49;
        }
LABEL_76:
        RtlClearBits(*(PRTL_BITMAP *)(v5 + 1272), 0, v10);
        *(_DWORD *)(v4 + 44) = 0;
        v65 = -1073740759;
        v58 = (__int64)CurrentThread;
        goto LABEL_69;
      }
      if ( (v38 & (0xFFFFFFFF >> (32 - v10))) == 0xFFFFFFFF >> (32 - v10) )
        goto LABEL_76;
    }
  }
LABEL_49:
  v41 = -1;
  v42 = *(_QWORD *)(v4 + 176) >> 12;
  updated = MiTransferSoftwarePte(ZeroPte, *(_QWORD *)(v4 + 144), (unsigned int)v42, 1LL);
  while ( 2 )
  {
    v44 = *(unsigned int **)(v5 + 1272);
    v45 = v41 + 1;
    v46 = *v44;
    v47 = v45 < *v44 ? v45 : 0;
    v48 = *v44 - 1;
    v49 = (v44[2] & 4) != 0LL ? (_DWORD *)0x20 : 0LL;
    v50 = *((_QWORD *)v44 + 1) - ((*((_QWORD *)v44 + 1) & 4LL) != 0 ? 4 : 0);
    while ( 1 )
    {
      v51 = v48 + (_DWORD)v49;
      v52 = 1LL;
      k = (unsigned int)(v47 + (_DWORD)v49);
      if ( v51 - (_DWORD)k != -1 )
      {
        v54 = (_QWORD *)(v50 + 8 * ((unsigned __int64)(unsigned int)k >> 6));
        v52 = ~*v54 | ((1LL << ((v47 + (_BYTE)v49) & 0x3F)) - 1);
        for ( k = -1LL; v52 == -1; v52 = ~*v54 )
        {
          if ( (unsigned __int64)++v54 > v50 + 8 * ((unsigned __int64)v51 >> 6) )
            goto LABEL_61;
        }
        v52 = ~v52;
        _BitScanForward64(&v55, v52);
        v41 = v55 + ((unsigned int)(((__int64)v54 - v50) >> 3) << 6);
        if ( v41 <= v51 )
          break;
      }
LABEL_61:
      v41 = -1;
LABEL_62:
      if ( !(_DWORD)v47 )
        goto LABEL_58;
      v57 = v45 + 1;
      if ( v45 + 1 > v46 )
        v57 = v46;
      v48 = v57 - 1;
      v47 = 0LL;
    }
    if ( v41 == -1 )
      goto LABEL_62;
    v41 -= (unsigned int)v49;
LABEL_58:
    if ( v41 != -1 )
    {
      _bittestandreset(*(signed __int32 **)(*(_QWORD *)(v5 + 1272) + 8LL), v41);
      v56 = *(_QWORD *)(v104 + 8LL * v41);
      if ( v56 == qword_140C4ECA8 )
      {
        updated = MiUpdatePageFileHighInPte(updated, v41 + (unsigned int)v42);
        MiReleasePageFileInfo(v5, updated, 2LL);
      }
      else
      {
        v87 = 48 * v56 - 0x58000000000LL;
        v88 = (unsigned __int8)MiLockPageInline(v87, v52, v47, v49);
        *(_BYTE *)(v87 + 34) |= 0x10u;
        _InterlockedAnd64((volatile signed __int64 *)(v87 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v89 = KeGetCurrentIrql();
            if ( v89 <= 0xFu && (unsigned __int8)v88 <= 0xFu && v89 >= 2u )
            {
              v90 = KeGetCurrentPrcb();
              v91 = v90->SchedulerAssist;
              v92 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v88 + 1));
              j = (v92 & v91[5]) == 0;
              v91[5] &= v92;
              if ( j )
                KiRemoveSystemWorkPriorityKick(v90);
            }
          }
        }
        __writecr8(v88);
      }
      continue;
    }
    break;
  }
  MiStoreUpdatePagefileHash(k, v52, v105, v95);
  v58 = (__int64)CurrentThread;
  *(_DWORD *)(a1 + 40) |= 0x20u;
  --*(_WORD *)(v58 + 486);
  ++*(_DWORD *)(v5 + 1180);
  KiLeaveGuardedRegionUnsafe(v58, v59, v60, v61);
  MiStoreModifiedWriteDereference(a1);
  v7 = v96;
  v65 = 259;
LABEL_69:
  KeLeaveCriticalRegionThread(v58, v62, v63, v64);
  if ( ListEntry )
    MiStoreFreeWriteSupport(ListEntry, (_SLIST_HEADER *)v5);
  if ( v106 )
  {
    v66 = MiDerefPageFileSpaceBitmaps(v7, &v106, 0);
    if ( v66 )
      ExFreePoolWithTag(v66, 0);
  }
  return v65;
}
