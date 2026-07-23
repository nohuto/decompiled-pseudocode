/*
 * XREFs of MiStoreWriteModifiedPages @ 0x1402548F0
 * Callers:
 *     MiGatherPagefilePages @ 0x140256844 (MiGatherPagefilePages.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x140220130 (MiCapturePageFileInfoInline.c)
 *     MiUpdatePagefilePeakUsage @ 0x140241BE0 (MiUpdatePagefilePeakUsage.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140242220 (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x1402422B0 (MiRefPageFileSpaceBitmaps.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiStoreCheckCandidatePage @ 0x1402565FC (MiStoreCheckCandidatePage.c)
 *     MiUpdatePfnBackingStore @ 0x140257D84 (MiUpdatePfnBackingStore.c)
 *     MiTransferSoftwarePte @ 0x140258078 (MiTransferSoftwarePte.c)
 *     MiStoreUpdatePagefileHash @ 0x14025C420 (MiStoreUpdatePagefileHash.c)
 *     MiSufficientAvailablePages @ 0x140263410 (MiSufficientAvailablePages.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiStoreWriteIssue @ 0x140288CD0 (MiStoreWriteIssue.c)
 *     MiStoreFreeWriteSupport @ 0x14028BDB8 (MiStoreFreeWriteSupport.c)
 *     MiStoreModifiedWriteDereference @ 0x14028BDF0 (MiStoreModifiedWriteDereference.c)
 *     RtlClearBits @ 0x1402AB730 (RtlClearBits.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiUpdatePageFileHighInPte @ 0x1402E25D0 (MiUpdatePageFileHighInPte.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiStoreLogNotCandidate @ 0x14038D6F8 (MiStoreLogNotCandidate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPopEntrySList @ 0x140407B10 (RtlpInterlockedPopEntrySList.c)
 *     MiStoreLogFullPagefile @ 0x140554858 (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteDisabled @ 0x140554964 (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x140554A24 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x140554BC8 (MiStoreLogWriteIssueRetry.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiStoreWriteModifiedPages(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  ULONG v3; // r11d
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  ULONG_PTR v9; // r13
  ULONG v10; // r11d
  _QWORD *v11; // rcx
  ULONG v12; // eax
  __int64 v13; // r15
  int v14; // ebx
  unsigned int v15; // r11d
  unsigned int v16; // edx
  unsigned int v17; // r8d
  int v18; // r10d
  __int64 v19; // rbx
  unsigned int v20; // r9d
  unsigned int v21; // ecx
  __int64 *v22; // rsi
  __int64 i; // rax
  unsigned int v24; // esi
  int v25; // eax
  __int64 v26; // r9
  unsigned int v27; // ebx
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // ecx
  unsigned __int64 v31; // rdi
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
  unsigned int v47; // r8d
  int v48; // edx
  int v49; // r9d
  __int64 v50; // r10
  unsigned int v51; // r11d
  unsigned __int64 v52; // rdx
  __int64 k; // rcx
  _QWORD *v54; // rsi
  unsigned __int64 v55; // rax
  __int64 v56; // rcx
  unsigned int v57; // edx
  struct _KTHREAD *v58; // rdi
  unsigned int v59; // ebx
  _DWORD *v60; // rax
  __int64 result; // rax
  unsigned __int8 v62; // al
  _DWORD *v63; // rax
  unsigned int v64; // edx
  unsigned __int8 v65; // al
  struct _KPRCB *v66; // r10
  _DWORD *v67; // r9
  int v68; // eax
  int v69; // ebx
  unsigned __int8 v70; // al
  struct _KPRCB *v71; // r10
  _DWORD *v72; // r9
  int v73; // eax
  unsigned __int8 v74; // al
  struct _KPRCB *v75; // r10
  _DWORD *v76; // r9
  int v77; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v81; // eax
  __int64 v82; // rdi
  unsigned __int64 v83; // r15
  unsigned __int8 v84; // al
  struct _KPRCB *v85; // r10
  _DWORD *v86; // r9
  int v87; // eax
  unsigned int v88; // [rsp+44h] [rbp-85h]
  int v89; // [rsp+48h] [rbp-81h]
  ULONG v90; // [rsp+4Ch] [rbp-7Dh]
  __int64 v91; // [rsp+50h] [rbp-79h]
  _SLIST_ENTRY *ListEntry; // [rsp+58h] [rbp-71h]
  __int64 v93; // [rsp+68h] [rbp-61h] BYREF
  _QWORD *v94; // [rsp+70h] [rbp-59h]
  __int64 v95; // [rsp+78h] [rbp-51h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-49h]
  __int128 v97; // [rsp+88h] [rbp-41h] BYREF
  __int64 UnbiasedInterruptTime; // [rsp+98h] [rbp-31h]
  __int64 v99; // [rsp+A0h] [rbp-29h]
  __int64 v100; // [rsp+A8h] [rbp-21h]
  _DWORD *v101; // [rsp+B0h] [rbp-19h] BYREF
  __int128 v102; // [rsp+B8h] [rbp-11h]
  __int128 v103; // [rsp+C8h] [rbp-1h]
  int v105; // [rsp+138h] [rbp+6Fh]
  unsigned int v106; // [rsp+140h] [rbp+77h]
  unsigned int v107; // [rsp+148h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 144);
  v2 = a1 + 208;
  v3 = *(_DWORD *)(a1 + 248) >> 12;
  v4 = a1;
  v95 = 0LL;
  v5 = *(_QWORD *)(v1 + 248);
  v97 = 0LL;
  v93 = 0LL;
  v102 = 0LL;
  v6 = *(unsigned int *)(v5 + 1172);
  v100 = v2;
  v90 = v3;
  v103 = 0LL;
  if ( (_DWORD)v6 )
  {
    MiStoreLogWriteDisabled(v6, v3);
    result = 3221225626LL;
    --*(_DWORD *)(v5 + 1172);
    return result;
  }
  v7 = *(_QWORD *)(v5 + 8LL * *(unsigned int *)(v5 + 1156) + 6944);
  v91 = v7;
  if ( !*(_QWORD *)(v7 + 24) )
  {
    MiStoreLogFullPagefile();
    return 3221225599LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v101 = 0LL;
  *(_DWORD *)(v4 + 44) = 1;
  LOBYTE(v8) = 17;
  v9 = 0LL;
  v106 = *(_DWORD *)(v7 + 120);
  v89 = 0;
  ListEntry = 0LL;
  v107 = 0;
  v105 = 1;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(1LL);
  v11 = (_QWORD *)(v2 + 48);
  v12 = 0;
  v99 = v2 + 48;
LABEL_4:
  v94 = v11;
  v88 = v12;
  while ( v12 < v10 )
  {
    v13 = *v11;
    v14 = 1;
    if ( *v11 == qword_140C4EDA8 || !*(_QWORD *)(v7 + 24) )
      goto LABEL_32;
    if ( v101 != *(_DWORD **)(v7 + 112) )
    {
      if ( v101 )
      {
        v63 = MiDerefPageFileSpaceBitmaps(v7, &v101, 1);
        if ( v63 )
          ExFreePoolWithTag(v63, 0);
      }
      MiRefPageFileSpaceBitmaps((int *)v7, (__int64)&v101);
    }
    v15 = v106;
    v16 = v102 - 1;
    v17 = v106 < (unsigned int)v102 ? v106 : 0;
    v18 = (BYTE8(v102) & 4) != 0LL ? 0x20 : 0;
    v19 = *((_QWORD *)&v102 + 1) - ((BYTE8(v102) & 4) != 0LL ? 4 : 0);
    while ( 1 )
    {
      v20 = v16 + v18;
      v21 = v17 + v18;
      if ( v16 - v17 == -1 )
      {
        v24 = -1;
      }
      else
      {
        v22 = (__int64 *)(v19 + 8 * ((unsigned __int64)v21 >> 6));
        for ( i = ((1LL << (v21 & 0x3F)) - 1) | *v22; i == -1; i = *v22 )
        {
          if ( (unsigned __int64)++v22 > v19 + 8 * ((unsigned __int64)v20 >> 6) )
            goto LABEL_37;
        }
        _BitScanForward64((unsigned __int64 *)&i, ~i);
        v24 = i + ((unsigned int)(((__int64)v22 - v19) >> 3) << 6);
        if ( v24 > v20 )
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
        v15 = v106;
      }
      if ( !v17 )
        break;
      v64 = v15 + 1;
      if ( v15 + 1 > (unsigned int)v102 )
        v64 = v102;
      v16 = v64 - 1;
      v17 = 0;
    }
    v9 = 48 * v13 - 0x58000000000LL;
    v8 = (unsigned __int8)MiLockPageInline(v9);
    if ( (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) != 0 )
      goto LABEL_82;
    v93 = 0LL;
    v25 = MiStoreCheckCandidatePage(v9, (__int64)&v93);
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
              v81 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
              j = (v81 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v81;
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
        v35 = v88;
        _bittestandset(*(signed __int32 **)(*(_QWORD *)(v5 + 1272) + 8LL), v88);
      }
      else
      {
        v35 = v88;
      }
      v12 = v35 + 1;
      v10 = v90;
      v11 = v94 + 1;
      v107 = 0;
      v4 = a1;
      v7 = v91;
      goto LABEL_4;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v65 = KeGetCurrentIrql();
        if ( v65 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v65 >= 2u )
        {
          v66 = KeGetCurrentPrcb();
          v67 = v66->SchedulerAssist;
          v68 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          j = (v68 & v67[5]) == 0;
          v67[5] &= v68;
          if ( j )
            KiRemoveSystemWorkPriorityKick(v66);
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
        ListEntry = (_SLIST_ENTRY *)MiAllocatePool(64LL, 120LL, 1465085261LL, v26);
        if ( !ListEntry )
        {
          v89 = 1;
          goto LABEL_36;
        }
      }
    }
    if ( (unsigned __int64)(*(_QWORD *)(v91 + 24) - 1LL) < 8 )
      v27 = *(_DWORD *)(v91 + 24) - 1;
    else
      v27 = 8;
    if ( v105 )
    {
      if ( (unsigned int)MiSufficientAvailablePages(v5, 288LL) )
      {
        LOBYTE(v28) = 1;
        v29 = KiQueryUnbiasedInterruptTime(v28);
        v105 &= -((unsigned __int64)(v29 - UnbiasedInterruptTime) < 0x2FAF080);
      }
      else
      {
        v105 = 0;
        if ( v27 >= 3 )
          v27 = 3;
      }
    }
    v4 = a1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
    v30 = MiStoreWriteIssue(ListEntry, v9, &v95, &v97, ListEntry, v93, a1, v105);
    if ( v30 >= 0 )
    {
      ListEntry = 0LL;
      v31 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v91 + 232));
      v106 = v24 + 1;
      _bittestandset(*(signed __int32 **)(*(_QWORD *)(v91 + 112) + 16LL), v24);
      --*(_QWORD *)(v91 + 24);
      *(_DWORD *)(v91 + 120) = v24 + 1;
      MiUpdatePagefilePeakUsage((_QWORD *)v91);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v91 + 232));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v70 = KeGetCurrentIrql();
          if ( v70 <= 0xFu && (unsigned __int8)v31 <= 0xFu && v70 >= 2u )
          {
            v71 = KeGetCurrentPrcb();
            v72 = v71->SchedulerAssist;
            v73 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v31 + 1));
            j = (v73 & v72[5]) == 0;
            v72[5] &= v73;
            if ( j )
              KiRemoveSystemWorkPriorityKick(v71);
          }
        }
      }
      __writecr8(v31);
      v32 = (unsigned __int8)MiLockPageInline(v9);
      v33 = MiCapturePageFileInfoInline((unsigned __int64 *)(v9 + 16), 1, 1);
      *(_QWORD *)(v9 + 16) &= ~2uLL;
      v34 = v33;
      MiUpdatePfnBackingStore(v9, v91, v24, 1LL);
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v74 = KeGetCurrentIrql();
          if ( v74 <= 0xFu && (unsigned __int8)v32 <= 0xFu && v74 >= 2u )
          {
            v75 = KeGetCurrentPrcb();
            v76 = v75->SchedulerAssist;
            v77 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v32 + 1));
            j = (v77 & v76[5]) == 0;
            v76[5] &= v77;
            if ( j )
              KiRemoveSystemWorkPriorityKick(v75);
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
    if ( v30 != -1073740682 )
    {
      v69 = v89;
      if ( v30 == -1073741670 )
        v69 = 1;
      v89 = v69;
LABEL_109:
      MiStoreLogWriteIssueFailure(v30, (unsigned int)&v97, v24, v107, v105, ++*(_DWORD *)(v5 + 1176));
      goto LABEL_36;
    }
    v106 = v24 + 1;
    if ( v107 >= v27 )
      goto LABEL_109;
    MiStoreLogWriteIssueRetry((unsigned int)&v97, v24, v107, v105, *(_DWORD *)(v5 + 1176));
    v10 = v90;
    v7 = v91;
    v12 = v88;
    v11 = v94;
    ++v107;
  }
  if ( v89 )
    *(_DWORD *)(v5 + 1172) = 32;
  v36 = *(_QWORD *)(v5 + 1272);
  if ( *(_DWORD *)v36 )
  {
    if ( v10 <= 1 )
    {
      if ( v10 == 1 )
      {
        v62 = _bittest(*(const signed __int32 **)(v36 + 8), 0);
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
          v62 = 0;
LABEL_79:
          if ( v62 )
            goto LABEL_76;
          goto LABEL_49;
        }
LABEL_76:
        RtlClearBits(*(PRTL_BITMAP *)(v5 + 1272), 0, v10);
        *(_DWORD *)(v4 + 44) = 0;
        v59 = -1073740759;
        v58 = CurrentThread;
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
    v49 = (v44[2] & 4) != 0LL ? 0x20 : 0;
    v50 = *((_QWORD *)v44 + 1) - ((*((_QWORD *)v44 + 1) & 4LL) != 0 ? 4 : 0);
    while ( 1 )
    {
      v51 = v48 + v49;
      v52 = 1LL;
      k = v47 + v49;
      if ( v51 - (_DWORD)k != -1 )
      {
        v54 = (_QWORD *)(v50 + 8 * ((unsigned __int64)(unsigned int)k >> 6));
        v52 = ~*v54 | ((1LL << ((v47 + v49) & 0x3F)) - 1);
        for ( k = -1LL; v52 == -1LL; v52 = ~*v54 )
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
      if ( !v47 )
        goto LABEL_58;
      v57 = v45 + 1;
      if ( v45 + 1 > v46 )
        v57 = v46;
      v48 = v57 - 1;
      v47 = 0;
    }
    if ( v41 == -1 )
      goto LABEL_62;
    v41 -= v49;
LABEL_58:
    if ( v41 != -1 )
    {
      _bittestandreset(*(signed __int32 **)(*(_QWORD *)(v5 + 1272) + 8LL), v41);
      v56 = *(_QWORD *)(v99 + 8LL * v41);
      if ( v56 == qword_140C4EDA8 )
      {
        updated = MiUpdatePageFileHighInPte(updated, v41 + (unsigned int)v42);
        MiReleasePageFileInfo(v5, updated, 2LL);
      }
      else
      {
        v82 = 48 * v56 - 0x58000000000LL;
        v83 = (unsigned __int8)MiLockPageInline(v82);
        *(_BYTE *)(v82 + 34) |= 0x10u;
        _InterlockedAnd64((volatile signed __int64 *)(v82 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v84 = KeGetCurrentIrql();
            if ( v84 <= 0xFu && (unsigned __int8)v83 <= 0xFu && v84 >= 2u )
            {
              v85 = KeGetCurrentPrcb();
              v86 = v85->SchedulerAssist;
              v87 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v83 + 1));
              j = (v87 & v86[5]) == 0;
              v86[5] &= v87;
              if ( j )
                KiRemoveSystemWorkPriorityKick(v85);
            }
          }
        }
        __writecr8(v83);
      }
      continue;
    }
    break;
  }
  MiStoreUpdatePagefileHash(k, v52, v100, v90);
  v58 = CurrentThread;
  *(_DWORD *)(a1 + 40) |= 0x20u;
  --v58->SpecialApcDisable;
  ++*(_DWORD *)(v5 + 1180);
  KiLeaveGuardedRegionUnsafe(v58);
  MiStoreModifiedWriteDereference(a1);
  v7 = v91;
  v59 = 259;
LABEL_69:
  KeLeaveCriticalRegionThread(v58);
  if ( ListEntry )
    MiStoreFreeWriteSupport(ListEntry);
  if ( v101 )
  {
    v60 = MiDerefPageFileSpaceBitmaps(v7, &v101, 0);
    if ( v60 )
      ExFreePoolWithTag(v60, 0);
  }
  return v59;
}
