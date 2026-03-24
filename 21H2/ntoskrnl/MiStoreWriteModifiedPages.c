/*
 * XREFs of MiStoreWriteModifiedPages @ 0x140266950
 * Callers:
 *     MiGatherPagefilePages @ 0x1402688A4 (MiGatherPagefilePages.c)
 * Callees:
 *     RtlClearBits @ 0x140206E00 (RtlClearBits.c)
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     MiUpdatePageFileHighInPte @ 0x14023DD80 (MiUpdatePageFileHighInPte.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402546F4 (KiQueryUnbiasedInterruptTime.c)
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiStoreCheckCandidatePage @ 0x14026865C (MiStoreCheckCandidatePage.c)
 *     MiUpdatePfnBackingStore @ 0x140269DE4 (MiUpdatePfnBackingStore.c)
 *     MiTransferSoftwarePte @ 0x14026A0D8 (MiTransferSoftwarePte.c)
 *     MiStoreUpdatePagefileHash @ 0x14026E480 (MiStoreUpdatePagefileHash.c)
 *     MiSufficientAvailablePages @ 0x140275470 (MiSufficientAvailablePages.c)
 *     MiCapturePageFileInfoInline @ 0x1402A2CF0 (MiCapturePageFileInfoInline.c)
 *     MiUpdatePagefilePeakUsage @ 0x1402C3660 (MiUpdatePagefilePeakUsage.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x1402C3CA0 (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x1402C3D30 (MiRefPageFileSpaceBitmaps.c)
 *     MiStoreWriteIssue @ 0x1402D7980 (MiStoreWriteIssue.c)
 *     MiStoreFreeWriteSupport @ 0x1402DAA68 (MiStoreFreeWriteSupport.c)
 *     MiStoreModifiedWriteDereference @ 0x1402DAAA0 (MiStoreModifiedWriteDereference.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MiStoreLogNotCandidate @ 0x14038D5A8 (MiStoreLogNotCandidate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPopEntrySList @ 0x140407930 (RtlpInterlockedPopEntrySList.c)
 *     MiStoreLogFullPagefile @ 0x140554618 (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteDisabled @ 0x140554724 (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x1405547E4 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x140554988 (MiStoreLogWriteIssueRetry.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
  __int64 v16; // rdx
  __int64 v17; // r8
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
  __int64 v29; // rdx
  __int64 v30; // r8
  unsigned __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // rbx
  unsigned int v34; // eax
  __int64 v35; // r8
  int *v36; // r8
  int v37; // r9d
  int *v38; // rdx
  bool j; // zf
  unsigned int v40; // esi
  __int64 v41; // r13
  __int64 updated; // rbx
  unsigned int *v43; // rax
  unsigned int v44; // r15d
  unsigned int v45; // edi
  __int64 v46; // r8
  int v47; // edx
  int v48; // r9d
  __int64 v49; // r10
  unsigned int v50; // r11d
  unsigned __int64 v51; // rdx
  __int64 k; // rcx
  _QWORD *v53; // rsi
  unsigned __int64 v54; // rax
  __int64 v55; // rcx
  unsigned int v56; // edx
  __int64 v57; // rdi
  unsigned int v58; // ebx
  void *v59; // rax
  __int64 result; // rax
  unsigned __int8 v61; // al
  void *v62; // rax
  unsigned int v63; // edx
  unsigned __int8 v64; // al
  struct _KPRCB *v65; // r10
  _DWORD *v66; // r9
  int v67; // eax
  int v68; // ebx
  unsigned __int8 v69; // al
  struct _KPRCB *v70; // r10
  _DWORD *v71; // r9
  int v72; // eax
  unsigned __int8 v73; // al
  struct _KPRCB *v74; // r10
  _DWORD *v75; // r9
  int v76; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v80; // eax
  __int64 v81; // rdi
  unsigned __int64 v82; // r15
  unsigned __int8 v83; // al
  struct _KPRCB *v84; // r10
  _DWORD *v85; // r9
  int v86; // eax
  unsigned int v87; // [rsp+44h] [rbp-85h]
  int v88; // [rsp+48h] [rbp-81h]
  ULONG v89; // [rsp+4Ch] [rbp-7Dh]
  __int64 v90; // [rsp+50h] [rbp-79h]
  struct _SLIST_ENTRY *ListEntry; // [rsp+58h] [rbp-71h]
  __int64 v92; // [rsp+68h] [rbp-61h] BYREF
  _QWORD *v93; // [rsp+70h] [rbp-59h]
  __int64 v94; // [rsp+78h] [rbp-51h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-49h]
  __int128 v96; // [rsp+88h] [rbp-41h] BYREF
  __int64 UnbiasedInterruptTime; // [rsp+98h] [rbp-31h]
  __int64 v98; // [rsp+A0h] [rbp-29h]
  __int64 v99; // [rsp+A8h] [rbp-21h]
  __int64 v100; // [rsp+B0h] [rbp-19h] BYREF
  __int128 v101; // [rsp+B8h] [rbp-11h]
  __int128 v102; // [rsp+C8h] [rbp-1h]
  int v104; // [rsp+138h] [rbp+6Fh]
  unsigned int v105; // [rsp+140h] [rbp+77h]
  unsigned int v106; // [rsp+148h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 144);
  v2 = a1 + 208;
  v3 = *(_DWORD *)(a1 + 248) >> 12;
  v4 = a1;
  v94 = 0LL;
  v5 = *(_QWORD *)(v1 + 248);
  v96 = 0LL;
  v92 = 0LL;
  v101 = 0LL;
  v6 = *(unsigned int *)(v5 + 1172);
  v99 = v2;
  v89 = v3;
  v102 = 0LL;
  if ( (_DWORD)v6 )
  {
    MiStoreLogWriteDisabled(v6, v3);
    result = 3221225626LL;
    --*(_DWORD *)(v5 + 1172);
    return result;
  }
  v7 = *(_QWORD *)(v5 + 8LL * *(unsigned int *)(v5 + 1156) + 6944);
  v90 = v7;
  if ( !*(_QWORD *)(v7 + 24) )
  {
    MiStoreLogFullPagefile();
    return 3221225599LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v100 = 0LL;
  *(_DWORD *)(v4 + 44) = 1;
  LOBYTE(v8) = 17;
  v9 = 0LL;
  v105 = *(_DWORD *)(v7 + 120);
  v88 = 0;
  ListEntry = 0LL;
  v106 = 0;
  v104 = 1;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v11 = (_QWORD *)(v2 + 48);
  v12 = 0;
  v98 = v2 + 48;
LABEL_4:
  v93 = v11;
  v87 = v12;
  while ( v12 < v10 )
  {
    v13 = *v11;
    v14 = 1;
    if ( *v11 == qword_140C4ED68 || !*(_QWORD *)(v7 + 24) )
      goto LABEL_32;
    if ( v100 != *(_QWORD *)(v7 + 112) )
    {
      if ( v100 )
      {
        v62 = (void *)MiDerefPageFileSpaceBitmaps(v7, &v100, 1LL);
        if ( v62 )
          ExFreePoolWithTag(v62, 0);
      }
      MiRefPageFileSpaceBitmaps(v7, &v100);
    }
    v15 = v105;
    v16 = (unsigned int)(v101 - 1);
    v17 = v105 < (unsigned int)v101 ? v105 : 0;
    v18 = (BYTE8(v101) & 4) != 0LL ? 0x20 : 0;
    v19 = *((_QWORD *)&v101 + 1) - ((BYTE8(v101) & 4) != 0LL ? 4 : 0);
    while ( 1 )
    {
      v20 = v16 + v18;
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
        v15 = v105;
      }
      if ( !(_DWORD)v17 )
        break;
      v63 = v15 + 1;
      if ( v15 + 1 > (unsigned int)v101 )
        v63 = v101;
      v16 = v63 - 1;
      v17 = 0LL;
    }
    v9 = 48 * v13 - 0x58000000000LL;
    v8 = (unsigned __int8)MiLockPageInline(v9, v16, v17);
    if ( (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) != 0 )
      goto LABEL_82;
    v92 = 0LL;
    v25 = MiStoreCheckCandidatePage(v9, (__int64)&v92);
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
              v80 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
              j = (v80 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v80;
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
        v34 = v87;
        _bittestandset(*(signed __int32 **)(*(_QWORD *)(v5 + 1272) + 8LL), v87);
      }
      else
      {
        v34 = v87;
      }
      v12 = v34 + 1;
      v10 = v89;
      v11 = v93 + 1;
      v106 = 0;
      v4 = a1;
      v7 = v90;
      goto LABEL_4;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v64 = KeGetCurrentIrql();
        if ( v64 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v64 >= 2u )
        {
          v65 = KeGetCurrentPrcb();
          v66 = v65->SchedulerAssist;
          v67 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          j = (v67 & v66[5]) == 0;
          v66[5] &= v67;
          if ( j )
            KiRemoveSystemWorkPriorityKick(v65);
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
        ListEntry = (struct _SLIST_ENTRY *)MiAllocatePool(64, 0x78uLL, 0x57536D4Du);
        if ( !ListEntry )
        {
          v88 = 1;
          goto LABEL_36;
        }
      }
    }
    if ( (unsigned __int64)(*(_QWORD *)(v90 + 24) - 1LL) < 8 )
      v26 = *(_DWORD *)(v90 + 24) - 1;
    else
      v26 = 8;
    if ( v104 )
    {
      if ( (unsigned int)MiSufficientAvailablePages(v5, 288LL) )
      {
        v104 &= -((unsigned __int64)(KiQueryUnbiasedInterruptTime() - UnbiasedInterruptTime) < 0x2FAF080);
      }
      else
      {
        v104 = 0;
        if ( v26 >= 3 )
          v26 = 3;
      }
    }
    v4 = a1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
    v27 = MiStoreWriteIssue(ListEntry, v9, &v94, &v96, ListEntry, v92, a1, v104);
    if ( v27 >= 0 )
    {
      ListEntry = 0LL;
      v28 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v90 + 232));
      v105 = v24 + 1;
      _bittestandset(*(signed __int32 **)(*(_QWORD *)(v90 + 112) + 16LL), v24);
      --*(_QWORD *)(v90 + 24);
      *(_DWORD *)(v90 + 120) = v24 + 1;
      MiUpdatePagefilePeakUsage(v90);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v90 + 232));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v69 = KeGetCurrentIrql();
          if ( v69 <= 0xFu && (unsigned __int8)v28 <= 0xFu && v69 >= 2u )
          {
            v70 = KeGetCurrentPrcb();
            v29 = -1LL << ((unsigned __int8)v28 + 1);
            v71 = v70->SchedulerAssist;
            v72 = ~(unsigned __int16)v29;
            j = (v72 & v71[5]) == 0;
            v30 = (unsigned int)v72 & v71[5];
            v71[5] = v30;
            if ( j )
              KiRemoveSystemWorkPriorityKick(v70);
          }
        }
      }
      __writecr8(v28);
      v31 = (unsigned __int8)MiLockPageInline(v9, v29, v30);
      v32 = MiCapturePageFileInfoInline(v9 + 16, 1LL, 1LL);
      *(_QWORD *)(v9 + 16) &= ~2uLL;
      v33 = v32;
      MiUpdatePfnBackingStore(v9, v90, v24, 1LL);
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v73 = KeGetCurrentIrql();
          if ( v73 <= 0xFu && (unsigned __int8)v31 <= 0xFu && v73 >= 2u )
          {
            v74 = KeGetCurrentPrcb();
            v75 = v74->SchedulerAssist;
            v76 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v31 + 1));
            j = (v76 & v75[5]) == 0;
            v75[5] &= v76;
            if ( j )
              KiRemoveSystemWorkPriorityKick(v74);
          }
        }
      }
      __writecr8(v31);
      LOBYTE(v8) = 17;
      MiReleasePageFileInfo(v5, v33, 2LL);
      v14 = 0;
      goto LABEL_32;
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 44));
    if ( v27 != -1073740682 )
    {
      v68 = v88;
      if ( v27 == -1073741670 )
        v68 = 1;
      v88 = v68;
LABEL_109:
      MiStoreLogWriteIssueFailure(v27, (unsigned int)&v96, v24, v106, v104, ++*(_DWORD *)(v5 + 1176));
      goto LABEL_36;
    }
    v105 = v24 + 1;
    if ( v106 >= v26 )
      goto LABEL_109;
    MiStoreLogWriteIssueRetry((unsigned int)&v96, v24, v106, v104, *(_DWORD *)(v5 + 1176));
    v10 = v89;
    v7 = v90;
    v12 = v87;
    v11 = v93;
    ++v106;
  }
  if ( v88 )
    *(_DWORD *)(v5 + 1172) = 32;
  v35 = *(_QWORD *)(v5 + 1272);
  if ( *(_DWORD *)v35 )
  {
    if ( v10 <= 1 )
    {
      if ( v10 == 1 )
      {
        v61 = _bittest(*(const signed __int32 **)(v35 + 8), 0);
        goto LABEL_79;
      }
    }
    else if ( *(_DWORD *)v35 >= v10 )
    {
      v36 = *(int **)(v35 + 8);
      v37 = *v36;
      v38 = &v36[(unsigned __int64)(v10 - 1) >> 5];
      if ( v36 != v38 )
      {
        for ( j = v37 == -1; ; j = *v36 == -1 )
        {
          if ( !j )
            goto LABEL_49;
          if ( ++v36 == v38 )
            break;
        }
        if ( ((0xFFFFFFFF >> ~(v10 - 1)) & *v36) != 0xFFFFFFFF >> ~(v10 - 1) )
        {
          v61 = 0;
LABEL_79:
          if ( v61 )
            goto LABEL_76;
          goto LABEL_49;
        }
LABEL_76:
        RtlClearBits(*(PRTL_BITMAP *)(v5 + 1272), 0, v10);
        *(_DWORD *)(v4 + 44) = 0;
        v58 = -1073740759;
        v57 = (__int64)CurrentThread;
        goto LABEL_69;
      }
      if ( (v37 & (0xFFFFFFFF >> (32 - v10))) == 0xFFFFFFFF >> (32 - v10) )
        goto LABEL_76;
    }
  }
LABEL_49:
  v40 = -1;
  v41 = *(_QWORD *)(v4 + 176) >> 12;
  updated = MiTransferSoftwarePte(ZeroPte, *(_QWORD *)(v4 + 144), (unsigned int)v41, 1LL);
  while ( 2 )
  {
    v43 = *(unsigned int **)(v5 + 1272);
    v44 = v40 + 1;
    v45 = *v43;
    v46 = v44 < *v43 ? v44 : 0;
    v47 = *v43 - 1;
    v48 = (v43[2] & 4) != 0LL ? 0x20 : 0;
    v49 = *((_QWORD *)v43 + 1) - ((*((_QWORD *)v43 + 1) & 4LL) != 0 ? 4 : 0);
    while ( 1 )
    {
      v50 = v47 + v48;
      v51 = 1LL;
      k = (unsigned int)(v46 + v48);
      if ( v50 - (_DWORD)k != -1 )
      {
        v53 = (_QWORD *)(v49 + 8 * ((unsigned __int64)(unsigned int)k >> 6));
        v51 = ~*v53 | ((1LL << ((v46 + v48) & 0x3F)) - 1);
        for ( k = -1LL; v51 == -1LL; v51 = ~*v53 )
        {
          if ( (unsigned __int64)++v53 > v49 + 8 * ((unsigned __int64)v50 >> 6) )
            goto LABEL_61;
        }
        v51 = ~v51;
        _BitScanForward64(&v54, v51);
        v40 = v54 + ((unsigned int)(((__int64)v53 - v49) >> 3) << 6);
        if ( v40 <= v50 )
          break;
      }
LABEL_61:
      v40 = -1;
LABEL_62:
      if ( !(_DWORD)v46 )
        goto LABEL_58;
      v56 = v44 + 1;
      if ( v44 + 1 > v45 )
        v56 = v45;
      v47 = v56 - 1;
      v46 = 0LL;
    }
    if ( v40 == -1 )
      goto LABEL_62;
    v40 -= v48;
LABEL_58:
    if ( v40 != -1 )
    {
      _bittestandreset(*(signed __int32 **)(*(_QWORD *)(v5 + 1272) + 8LL), v40);
      v55 = *(_QWORD *)(v98 + 8LL * v40);
      if ( v55 == qword_140C4ED68 )
      {
        updated = MiUpdatePageFileHighInPte(updated, v40 + (unsigned int)v41);
        MiReleasePageFileInfo(v5, updated, 2LL);
      }
      else
      {
        v81 = 48 * v55 - 0x58000000000LL;
        v82 = (unsigned __int8)MiLockPageInline(v81, v51, v46);
        *(_BYTE *)(v81 + 34) |= 0x10u;
        _InterlockedAnd64((volatile signed __int64 *)(v81 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v83 = KeGetCurrentIrql();
            if ( v83 <= 0xFu && (unsigned __int8)v82 <= 0xFu && v83 >= 2u )
            {
              v84 = KeGetCurrentPrcb();
              v85 = v84->SchedulerAssist;
              v86 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v82 + 1));
              j = (v86 & v85[5]) == 0;
              v85[5] &= v86;
              if ( j )
                KiRemoveSystemWorkPriorityKick(v84);
            }
          }
        }
        __writecr8(v82);
      }
      continue;
    }
    break;
  }
  MiStoreUpdatePagefileHash(k, v51, v99, v89);
  v57 = (__int64)CurrentThread;
  *(_DWORD *)(a1 + 40) |= 0x20u;
  --*(_WORD *)(v57 + 486);
  ++*(_DWORD *)(v5 + 1180);
  KiLeaveGuardedRegionUnsafe(v57);
  MiStoreModifiedWriteDereference(a1);
  v7 = v90;
  v58 = 259;
LABEL_69:
  KeLeaveCriticalRegionThread(v57);
  if ( ListEntry )
    MiStoreFreeWriteSupport(ListEntry);
  if ( v100 )
  {
    v59 = (void *)MiDerefPageFileSpaceBitmaps(v7, &v100, 0LL);
    if ( v59 )
      ExFreePoolWithTag(v59, 0);
  }
  return v58;
}
