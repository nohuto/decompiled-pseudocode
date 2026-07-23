/*
 * XREFs of MiStoreWriteModifiedPages @ 0x1402D3334
 * Callers:
 *     MiGatherPagefilePages @ 0x1402F2788 (MiGatherPagefilePages.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     MiSufficientAvailablePages @ 0x1402488D0 (MiSufficientAvailablePages.c)
 *     RtlClearBits @ 0x140281070 (RtlClearBits.c)
 *     MiUpdatePageFileHighInPte @ 0x1402BB180 (MiUpdatePageFileHighInPte.c)
 *     MiStoreModifiedWriteDereference @ 0x1402CDA7C (MiStoreModifiedWriteDereference.c)
 *     MiStoreFreeWriteSupport @ 0x1402CDB00 (MiStoreFreeWriteSupport.c)
 *     MiStoreWriteIssue @ 0x1402CDB38 (MiStoreWriteIssue.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402D233C (KiQueryUnbiasedInterruptTime.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiStoreCheckCandidatePage @ 0x1402D503C (MiStoreCheckCandidatePage.c)
 *     MiUpdatePagefilePeakUsage @ 0x1402D5284 (MiUpdatePagefilePeakUsage.c)
 *     MiUpdatePfnBackingStore @ 0x1402F4AB4 (MiUpdatePfnBackingStore.c)
 *     MiTransferSoftwarePte @ 0x1402F4DA8 (MiTransferSoftwarePte.c)
 *     MiStoreUpdatePagefileHash @ 0x140315660 (MiStoreUpdatePagefileHash.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiCapturePageFileInfoInline @ 0x1403334B0 (MiCapturePageFileInfoInline.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x1403521E0 (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140352270 (MiRefPageFileSpaceBitmaps.c)
 *     MiStoreLogNotCandidate @ 0x14038AB88 (MiStoreLogNotCandidate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FEFF0 (RtlpInterlockedPopEntrySList.c)
 *     MiStoreLogFullPagefile @ 0x14054F178 (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteDisabled @ 0x14054F284 (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x14054F344 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x14054F4E8 (MiStoreLogWriteIssueRetry.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  __int64 v9; // r13
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
  unsigned int v26; // ebx
  int v27; // ecx
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // rbx
  unsigned int v32; // eax
  __int64 v33; // r8
  int *v34; // r8
  int v35; // r9d
  int *v36; // rdx
  bool j; // zf
  unsigned int v38; // esi
  __int64 v39; // r13
  __int64 updated; // rbx
  unsigned int *v41; // rax
  unsigned int v42; // r15d
  unsigned int v43; // edi
  unsigned int v44; // r8d
  int v45; // edx
  int v46; // r9d
  __int64 v47; // r10
  unsigned int v48; // r11d
  unsigned __int64 v49; // rdx
  __int64 k; // rcx
  _QWORD *v51; // rsi
  unsigned __int64 v52; // rax
  __int64 v53; // rcx
  unsigned int v54; // edx
  __int64 v55; // rdi
  unsigned int v56; // ebx
  void *v57; // rax
  __int64 result; // rax
  unsigned __int8 v59; // al
  void *v60; // rax
  unsigned int v61; // edx
  unsigned __int8 v62; // al
  struct _KPRCB *v63; // r10
  _DWORD *v64; // r9
  int v65; // eax
  int v66; // ebx
  unsigned __int8 v67; // al
  struct _KPRCB *v68; // r10
  _DWORD *v69; // r9
  int v70; // eax
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r10
  _DWORD *v73; // r9
  int v74; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v78; // eax
  __int64 v79; // rdi
  unsigned __int64 v80; // r15
  unsigned __int8 v81; // al
  struct _KPRCB *v82; // r10
  _DWORD *v83; // r9
  int v84; // eax
  unsigned int v85; // [rsp+44h] [rbp-85h]
  int v86; // [rsp+48h] [rbp-81h]
  ULONG v87; // [rsp+4Ch] [rbp-7Dh]
  __int64 v88; // [rsp+50h] [rbp-79h]
  _SLIST_ENTRY *ListEntry; // [rsp+58h] [rbp-71h]
  __int64 v90; // [rsp+68h] [rbp-61h] BYREF
  _QWORD *v91; // [rsp+70h] [rbp-59h]
  union _MM_STORE_KEY v92; // [rsp+78h] [rbp-51h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-49h]
  __int128 v94; // [rsp+88h] [rbp-41h] BYREF
  __int64 UnbiasedInterruptTime; // [rsp+98h] [rbp-31h]
  __int64 v96; // [rsp+A0h] [rbp-29h]
  __int64 v97; // [rsp+A8h] [rbp-21h]
  __int64 v98; // [rsp+B0h] [rbp-19h] BYREF
  __int128 v99; // [rsp+B8h] [rbp-11h]
  __int128 v100; // [rsp+C8h] [rbp-1h]
  int v102; // [rsp+138h] [rbp+6Fh]
  unsigned int v103; // [rsp+140h] [rbp+77h]
  unsigned int v104; // [rsp+148h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 144);
  v2 = a1 + 208;
  v3 = *(_DWORD *)(a1 + 248) >> 12;
  v4 = a1;
  v92.EntireKey = 0LL;
  v5 = *(_QWORD *)(v1 + 248);
  v94 = 0LL;
  v90 = 0LL;
  v99 = 0LL;
  v6 = *(unsigned int *)(v5 + 1172);
  v97 = v2;
  v87 = v3;
  v100 = 0LL;
  if ( (_DWORD)v6 )
  {
    MiStoreLogWriteDisabled(v6, v3);
    result = 3221225626LL;
    --*(_DWORD *)(v5 + 1172);
    return result;
  }
  v7 = *(_QWORD *)(v5 + 8LL * *(unsigned int *)(v5 + 1156) + 6944);
  v88 = v7;
  if ( !*(_QWORD *)(v7 + 24) )
  {
    MiStoreLogFullPagefile();
    return 3221225599LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v98 = 0LL;
  *(_DWORD *)(v4 + 44) = 1;
  LOBYTE(v8) = 17;
  v9 = 0LL;
  v103 = *(_DWORD *)(v7 + 120);
  v86 = 0;
  ListEntry = 0LL;
  v104 = 0;
  v102 = 1;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v11 = (_QWORD *)(v2 + 48);
  v12 = 0;
  v96 = v2 + 48;
LABEL_4:
  v91 = v11;
  v85 = v12;
  while ( v12 < v10 )
  {
    v13 = *v11;
    v14 = 1;
    if ( *v11 == qword_140C4EB68 || !*(_QWORD *)(v7 + 24) )
      goto LABEL_32;
    if ( v98 != *(_QWORD *)(v7 + 112) )
    {
      if ( v98 )
      {
        v60 = (void *)MiDerefPageFileSpaceBitmaps(v7, &v98, 1LL);
        if ( v60 )
          ExFreePoolWithTag(v60, 0);
      }
      MiRefPageFileSpaceBitmaps(v7, &v98);
    }
    v15 = v103;
    v16 = v99 - 1;
    v17 = v103 < (unsigned int)v99 ? v103 : 0;
    v18 = (BYTE8(v99) & 4) != 0LL ? 0x20 : 0;
    v19 = *((_QWORD *)&v99 + 1) - ((BYTE8(v99) & 4) != 0LL ? 4 : 0);
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
        v15 = v103;
      }
      if ( !v17 )
        break;
      v61 = v15 + 1;
      if ( v15 + 1 > (unsigned int)v99 )
        v61 = v99;
      v16 = v61 - 1;
      v17 = 0;
    }
    v9 = 48 * v13 - 0x58000000000LL;
    v8 = (unsigned __int8)MiLockPageInline(v9);
    if ( (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) != 0 )
      goto LABEL_82;
    v90 = 0LL;
    v25 = MiStoreCheckCandidatePage(v9, (__int64)&v90);
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
              v78 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
              j = (v78 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v78;
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
        v32 = v85;
        _bittestandset(*(signed __int32 **)(*(_QWORD *)(v5 + 1272) + 8LL), v85);
      }
      else
      {
        v32 = v85;
      }
      v12 = v32 + 1;
      v10 = v87;
      v11 = v91 + 1;
      v104 = 0;
      v4 = a1;
      v7 = v88;
      goto LABEL_4;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v62 = KeGetCurrentIrql();
        if ( v62 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v62 >= 2u )
        {
          v63 = KeGetCurrentPrcb();
          v64 = v63->SchedulerAssist;
          v65 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          j = (v65 & v64[5]) == 0;
          v64[5] &= v65;
          if ( j )
            KiRemoveSystemWorkPriorityKick(v63);
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
          v86 = 1;
          goto LABEL_36;
        }
      }
    }
    if ( (unsigned __int64)(*(_QWORD *)(v88 + 24) - 1LL) < 8 )
      v26 = *(_DWORD *)(v88 + 24) - 1;
    else
      v26 = 8;
    if ( v102 )
    {
      if ( (unsigned int)MiSufficientAvailablePages(v5, 0x120uLL) )
      {
        v102 &= -((unsigned __int64)(KiQueryUnbiasedInterruptTime() - UnbiasedInterruptTime) < 0x2FAF080);
      }
      else
      {
        v102 = 0;
        if ( v26 >= 3 )
          v26 = 3;
      }
    }
    v4 = a1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
    v27 = MiStoreWriteIssue((__int64)ListEntry, v9, &v92, (int)&v94, (__int64)ListEntry, v90, a1, v102);
    if ( v27 >= 0 )
    {
      ListEntry = 0LL;
      v28 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v88 + 232));
      v103 = v24 + 1;
      _bittestandset(*(signed __int32 **)(*(_QWORD *)(v88 + 112) + 16LL), v24);
      --*(_QWORD *)(v88 + 24);
      *(_DWORD *)(v88 + 120) = v24 + 1;
      MiUpdatePagefilePeakUsage(v88);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v88 + 232));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v67 = KeGetCurrentIrql();
          if ( v67 <= 0xFu && (unsigned __int8)v28 <= 0xFu && v67 >= 2u )
          {
            v68 = KeGetCurrentPrcb();
            v69 = v68->SchedulerAssist;
            v70 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + 1));
            j = (v70 & v69[5]) == 0;
            v69[5] &= v70;
            if ( j )
              KiRemoveSystemWorkPriorityKick(v68);
          }
        }
      }
      __writecr8(v28);
      v29 = (unsigned __int8)MiLockPageInline(v9);
      v30 = MiCapturePageFileInfoInline(v9 + 16, 1LL);
      *(_QWORD *)(v9 + 16) &= ~2uLL;
      v31 = v30;
      MiUpdatePfnBackingStore(v9, v88, v24, 1LL);
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v71 = KeGetCurrentIrql();
          if ( v71 <= 0xFu && (unsigned __int8)v29 <= 0xFu && v71 >= 2u )
          {
            v72 = KeGetCurrentPrcb();
            v73 = v72->SchedulerAssist;
            v74 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v29 + 1));
            j = (v74 & v73[5]) == 0;
            v73[5] &= v74;
            if ( j )
              KiRemoveSystemWorkPriorityKick(v72);
          }
        }
      }
      __writecr8(v29);
      LOBYTE(v8) = 17;
      MiReleasePageFileInfo(v5, v31, 2LL);
      v14 = 0;
      goto LABEL_32;
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 44));
    if ( v27 != -1073740682 )
    {
      v66 = v86;
      if ( v27 == -1073741670 )
        v66 = 1;
      v86 = v66;
LABEL_109:
      MiStoreLogWriteIssueFailure(v27, (unsigned int)&v94, v24, v104, v102, ++*(_DWORD *)(v5 + 1176));
      goto LABEL_36;
    }
    v103 = v24 + 1;
    if ( v104 >= v26 )
      goto LABEL_109;
    MiStoreLogWriteIssueRetry((unsigned int)&v94, v24, v104, v102, *(_DWORD *)(v5 + 1176));
    v10 = v87;
    v7 = v88;
    v12 = v85;
    v11 = v91;
    ++v104;
  }
  if ( v86 )
    *(_DWORD *)(v5 + 1172) = 32;
  v33 = *(_QWORD *)(v5 + 1272);
  if ( *(_DWORD *)v33 )
  {
    if ( v10 <= 1 )
    {
      if ( v10 == 1 )
      {
        v59 = _bittest(*(const signed __int32 **)(v33 + 8), 0);
        goto LABEL_79;
      }
    }
    else if ( *(_DWORD *)v33 >= v10 )
    {
      v34 = *(int **)(v33 + 8);
      v35 = *v34;
      v36 = &v34[(unsigned __int64)(v10 - 1) >> 5];
      if ( v34 != v36 )
      {
        for ( j = v35 == -1; ; j = *v34 == -1 )
        {
          if ( !j )
            goto LABEL_49;
          if ( ++v34 == v36 )
            break;
        }
        if ( ((0xFFFFFFFF >> ~(v10 - 1)) & *v34) != 0xFFFFFFFF >> ~(v10 - 1) )
        {
          v59 = 0;
LABEL_79:
          if ( v59 )
            goto LABEL_76;
          goto LABEL_49;
        }
LABEL_76:
        RtlClearBits(*(PRTL_BITMAP *)(v5 + 1272), 0, v10);
        *(_DWORD *)(v4 + 44) = 0;
        v56 = -1073740759;
        v55 = (__int64)CurrentThread;
        goto LABEL_69;
      }
      if ( (v35 & (0xFFFFFFFF >> (32 - v10))) == 0xFFFFFFFF >> (32 - v10) )
        goto LABEL_76;
    }
  }
LABEL_49:
  v38 = -1;
  v39 = *(_QWORD *)(v4 + 176) >> 12;
  updated = MiTransferSoftwarePte(ZeroPte, *(_QWORD *)(v4 + 144), (unsigned int)v39, 1LL);
  while ( 2 )
  {
    v41 = *(unsigned int **)(v5 + 1272);
    v42 = v38 + 1;
    v43 = *v41;
    v44 = v42 < *v41 ? v42 : 0;
    v45 = *v41 - 1;
    v46 = (v41[2] & 4) != 0LL ? 0x20 : 0;
    v47 = *((_QWORD *)v41 + 1) - ((*((_QWORD *)v41 + 1) & 4LL) != 0 ? 4 : 0);
    while ( 1 )
    {
      v48 = v45 + v46;
      v49 = 1LL;
      k = v44 + v46;
      if ( v48 - (_DWORD)k != -1 )
      {
        v51 = (_QWORD *)(v47 + 8 * ((unsigned __int64)(unsigned int)k >> 6));
        v49 = ~*v51 | ((1LL << ((v44 + v46) & 0x3F)) - 1);
        for ( k = -1LL; v49 == -1LL; v49 = ~*v51 )
        {
          if ( (unsigned __int64)++v51 > v47 + 8 * ((unsigned __int64)v48 >> 6) )
            goto LABEL_61;
        }
        v49 = ~v49;
        _BitScanForward64(&v52, v49);
        v38 = v52 + ((unsigned int)(((__int64)v51 - v47) >> 3) << 6);
        if ( v38 <= v48 )
          break;
      }
LABEL_61:
      v38 = -1;
LABEL_62:
      if ( !v44 )
        goto LABEL_58;
      v54 = v42 + 1;
      if ( v42 + 1 > v43 )
        v54 = v43;
      v45 = v54 - 1;
      v44 = 0;
    }
    if ( v38 == -1 )
      goto LABEL_62;
    v38 -= v46;
LABEL_58:
    if ( v38 != -1 )
    {
      _bittestandreset(*(signed __int32 **)(*(_QWORD *)(v5 + 1272) + 8LL), v38);
      v53 = *(_QWORD *)(v96 + 8LL * v38);
      if ( v53 == qword_140C4EB68 )
      {
        updated = MiUpdatePageFileHighInPte(updated, v38 + (unsigned int)v39);
        MiReleasePageFileInfo(v5, updated, 2LL);
      }
      else
      {
        v79 = 48 * v53 - 0x58000000000LL;
        v80 = (unsigned __int8)MiLockPageInline(v79);
        *(_BYTE *)(v79 + 34) |= 0x10u;
        _InterlockedAnd64((volatile signed __int64 *)(v79 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v81 = KeGetCurrentIrql();
            if ( v81 <= 0xFu && (unsigned __int8)v80 <= 0xFu && v81 >= 2u )
            {
              v82 = KeGetCurrentPrcb();
              v83 = v82->SchedulerAssist;
              v84 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v80 + 1));
              j = (v84 & v83[5]) == 0;
              v83[5] &= v84;
              if ( j )
                KiRemoveSystemWorkPriorityKick(v82);
            }
          }
        }
        __writecr8(v80);
      }
      continue;
    }
    break;
  }
  MiStoreUpdatePagefileHash(k, v49, v97, v87);
  v55 = (__int64)CurrentThread;
  *(_DWORD *)(a1 + 40) |= 0x20u;
  --*(_WORD *)(v55 + 486);
  ++*(_DWORD *)(v5 + 1180);
  KiLeaveGuardedRegionUnsafe(v55);
  MiStoreModifiedWriteDereference(a1);
  v7 = v88;
  v56 = 259;
LABEL_69:
  KeLeaveCriticalRegionThread(v55);
  if ( ListEntry )
    MiStoreFreeWriteSupport(ListEntry, (_SLIST_HEADER *)v5);
  if ( v98 )
  {
    v57 = (void *)MiDerefPageFileSpaceBitmaps(v7, &v98, 0LL);
    if ( v57 )
      ExFreePoolWithTag(v57, 0);
  }
  return v56;
}
