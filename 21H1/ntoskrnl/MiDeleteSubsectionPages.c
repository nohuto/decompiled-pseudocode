/*
 * XREFs of MiDeleteSubsectionPages @ 0x140283240
 * Callers:
 *     MiDeleteSegmentPages @ 0x1402B96A0 (MiDeleteSegmentPages.c)
 *     MiExtendSection @ 0x140641F00 (MiExtendSection.c)
 * Callees:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDeleteClusterSection @ 0x140280410 (MiDeleteClusterSection.c)
 *     MiLockProtoPoolPage @ 0x140282DC0 (MiLockProtoPoolPage.c)
 *     MiInvalidPteConforms @ 0x1402838C0 (MiInvalidPteConforms.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDeleteTransitionPte @ 0x14029A9D0 (MiDeleteTransitionPte.c)
 *     MiDecrementSubsectionViewCount @ 0x1402A33A0 (MiDecrementSubsectionViewCount.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402BCA00 (MiUpdateSystemProtoPtesTree.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x1402F6610 (MiCapturePageFileInfoInline.c)
 *     MiSetLeafPfnBuddy @ 0x14031B2E0 (MiSetLeafPfnBuddy.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDeleteSubsectionLargePages @ 0x1403EF524 (MiDeleteSubsectionLargePages.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054F5FC (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteSubsectionPages(__int64 *BugCheckParameter2, _QWORD *a2)
{
  __int64 v2; // r13
  ULONG_PTR v3; // r12
  _QWORD *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 Process; // rcx
  __int64 v9; // rbp
  __int64 v10; // r15
  unsigned __int64 v11; // rsi
  __int64 v12; // r10
  __int64 v13; // r9
  __int64 v14; // r11
  __int64 v15; // r8
  ULONG_PTR v16; // r12
  __int64 v17; // r14
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  ULONG_PTR v22; // rdi
  __int64 v23; // rdx
  struct _LIST_ENTRY *v24; // r8
  __int64 v25; // rax
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // r15
  unsigned __int64 v30; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v34; // edx
  bool v35; // zf
  PVOID v36; // r14
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r9
  int v39; // eax
  _DWORD *v40; // r8
  __int64 v42; // [rsp+20h] [rbp-98h]
  int v43; // [rsp+28h] [rbp-90h]
  _BYTE v44[12]; // [rsp+2Ch] [rbp-8Ch] BYREF
  ULONG_PTR v45; // [rsp+38h] [rbp-80h]
  __int64 v46; // [rsp+40h] [rbp-78h] BYREF
  char *v47; // [rsp+48h] [rbp-70h]
  __int64 v48; // [rsp+50h] [rbp-68h]
  unsigned __int64 v49; // [rsp+58h] [rbp-60h]
  PVOID P; // [rsp+60h] [rbp-58h]
  _QWORD *v52; // [rsp+C8h] [rbp+10h]
  unsigned __int8 v53; // [rsp+D0h] [rbp+18h] BYREF
  int v54; // [rsp+D8h] [rbp+20h] BYREF

  v52 = a2;
  v2 = *BugCheckParameter2;
  v3 = (ULONG_PTR)BugCheckParameter2;
  v4 = a2;
  *(_QWORD *)&v44[4] = 0LL;
  LOBYTE(a2) = 17;
  v5 = *(_WORD *)(v2 + 60) & 0x3FF;
  v53 = 17;
  v48 = *(_QWORD *)(qword_140C4E588 + 8 * v5);
  v6 = *(_QWORD *)(v2 + 64);
  v7 = 0LL;
  *(_QWORD *)v44 = v6 != 0;
  Process = BugCheckParameter2[1];
  v9 = 0LL;
  v10 = 0LL;
  v49 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v42 = 0LL;
  v43 = *(_DWORD *)(v2 + 56);
  P = (PVOID)Process;
  if ( !Process )
    goto LABEL_77;
  v11 = Process;
  v47 = (char *)(Process + 8LL * *(unsigned int *)(v3 + 44));
  if ( Process >= (unsigned __int64)v47 )
    goto LABEL_77;
  v12 = 0xFFFFFFFFFLL;
  v13 = 0xFFFFFA8000000028uLL;
  v14 = 0x4000000000000LL;
  v15 = 0xFFFFFA8000000000uLL;
  v16 = 0LL;
  do
  {
    v17 = v10;
    if ( (v11 & 0xFFF) != 0 )
    {
      if ( (_BYTE)a2 != 17 )
        goto LABEL_17;
    }
    else if ( (_BYTE)a2 != 17 )
    {
      MiUnlockProtoPoolPage(v9, a2);
    }
    while ( 1 )
    {
      if ( (*(_DWORD *)(v2 + 56) & 0x20) == 0 )
      {
        v18 = MI_READ_PTE_LOCK_FREE(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        *(_QWORD *)&v44[4] = v18;
        if ( (v18 & 1) == 0 && (v18 & 0x400) != 0 && (v18 & 2) != 0 )
        {
          LOBYTE(a2) = 17;
          v9 = 0LL;
          v53 = 17;
          v11 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          goto LABEL_72;
        }
      }
      v9 = MiLockProtoPoolPage(v11, (__int64)&v53);
      if ( v9 )
        break;
      MmAccessFault(2uLL, v11, 0, 0LL);
    }
    v15 = 0xFFFFFA8000000000uLL;
    v12 = 0xFFFFFFFFFLL;
    v13 = 0xFFFFFA8000000028uLL;
    v14 = 0x4000000000000LL;
    while ( 1 )
    {
LABEL_17:
      while ( 1 )
      {
        v19 = *(_QWORD *)v11;
        if ( (*(_QWORD *)v11 & 1) == 0 )
          break;
        v20 = *(_QWORD *)v11;
LABEL_25:
        v21 = 6 * (v12 & (v20 >> 12));
        if ( (v14 & *(_QWORD *)(v13 + 48 * (v12 & (v20 >> 12)))) != 0 )
        {
          v22 = v15 + 48 * (v12 & (v20 >> 12));
          v54 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v54, v21, v15, v13);
              while ( *(__int64 *)(v22 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) );
            v15 = 0xFFFFFA8000000000uLL;
            v12 = 0xFFFFFFFFFLL;
            v13 = 0xFFFFFA8000000028uLL;
            v14 = 0x4000000000000LL;
          }
          if ( *(_QWORD *)v11 == v19 )
            goto LABEL_33;
          _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      if ( (v19 & 0x400) != 0 || (v19 & 0x800) == 0 )
        break;
      if ( (unsigned int)MiInvalidPteConforms(*(_QWORD *)v11) )
      {
        Process = qword_140C4DE80;
        v20 = v19;
        if ( qword_140C4DE80 && (v19 & 0x10) == 0 )
          v20 = v19 & ~qword_140C4DE80;
        goto LABEL_25;
      }
    }
    v22 = 0LL;
LABEL_33:
    v23 = *(_QWORD *)v11;
    if ( v11 >= 0xFFFFF6FB7DBED000uLL
      && v11 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(Process, v23)
      && (v23 & 1) != 0
      && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
    {
      Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      v24 = *(struct _LIST_ENTRY **)(Process + 1928);
      if ( v24 )
      {
        v25 = *((_QWORD *)&v24->Flink + ((v11 >> 3) & 0x1FF));
        v26 = v23 | 0x20;
        Process = (unsigned __int8)v25;
        LOBYTE(Process) = v25 & 0x20;
        if ( (v25 & 0x20) == 0 )
          v26 = v23;
        v23 = v26;
        if ( (v25 & 0x42) != 0 )
          v23 = v26 | 0x42;
      }
    }
    *(_QWORD *)&v44[4] = v23;
    if ( (v23 & 1) != 0 )
    {
      ++v10;
      if ( *(_WORD *)(v22 + 32) <= 2u )
        v10 = v17;
      if ( (MI_READ_PTE_LOCK_FREE(&v44[4]) & 0x1FF000) == 0 )
      {
        MiSetLeafPfnBuddy(v22, v16);
        v16 = v22;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_69;
    }
    if ( (v23 & 0x400) != 0 )
      goto LABEL_69;
    if ( (v23 & 0x800) != 0 )
    {
      if ( qword_140C4DE80 && (v23 & 0x10) == 0 )
        LOWORD(v23) = ~(_WORD)qword_140C4DE80 & v23;
      v7 = v42;
      if ( (*(_DWORD *)(v22 + 16) & 0x400LL) != 0
        && (*(_DWORD *)(v2 + 56) & 0x20) == 0
        && (*(_BYTE *)(v22 + 34) & 0x18) != 0 )
      {
        v7 = ++v42;
      }
      if ( !v49
        && (v23 & 0xF000) == 0
        && (__int64)((unsigned __int64)&v47[-v11] & 0xFFFFFFFFFFFFFFF8uLL) >= 128
        && ((4096 - (v11 & 0xFFF)) & 0xFFFFFFF8) >= 0x80
        && (unsigned int)MiDeleteClusterSection(v22, v11) == 1 )
      {
        v4 = v52;
        v11 += 128LL;
        goto LABEL_71;
      }
      v27 = MiDeleteTransitionPte(v11, v22);
      v4 = v52;
      if ( v27 == 3 )
        ++*v52;
    }
    else
    {
      v46 = v23;
      v28 = MiCapturePageFileInfoInline(&v46, 0LL);
      v46 = v28;
      if ( v28 )
        MiReleasePageFileInfo(v48, v28, 0LL);
LABEL_69:
      v4 = v52;
    }
    v7 = v42;
    v11 += 8LL;
LABEL_71:
    a2 = (_QWORD *)v53;
LABEL_72:
    v12 = 0xFFFFFFFFFLL;
    v15 = 0xFFFFFA8000000000uLL;
    v14 = 0x4000000000000LL;
    v13 = 0xFFFFFA8000000028uLL;
  }
  while ( v11 < (unsigned __int64)v47 );
  v45 = v16;
  v3 = (ULONG_PTR)BugCheckParameter2;
  if ( (_BYTE)a2 != 17 )
  {
    MiUnlockProtoPoolPage(v9, a2);
    v53 = 17;
  }
  if ( v45 )
    *v4 += MiDeleteSubsectionLargePages(BugCheckParameter2, v45, v10, v13);
LABEL_77:
  if ( (v43 & 0x80u) == 0 || (v43 & 0x20) != 0 )
    return v7;
  v29 = MiDecrementSubsectionViewCount(v3);
  v30 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 72));
  while ( *(_DWORD *)(v3 + 104) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v30 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v30 + 1));
          v35 = (v34 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v34;
          if ( v35 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v30);
    _mm_pause();
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 72));
  }
  v36 = P;
  if ( P )
  {
    MiUpdateSystemProtoPtesTree(v3 + 112, 0LL);
    *(_QWORD *)(v3 + 8) = 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v37 = KeGetCurrentIrql();
      if ( v37 <= 0xFu && (unsigned __int8)v30 <= 0xFu && v37 >= 2u )
      {
        v38 = KeGetCurrentPrcb();
        v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v30 + 1));
        v40 = v38->SchedulerAssist;
        v35 = (v39 & v40[5]) == 0;
        v40[5] &= v39;
        if ( v35 )
          KiRemoveSystemWorkPriorityKick(v38);
      }
    }
  }
  __writecr8(v30);
  if ( v36 )
    ExFreePoolWithTag(v36, 0);
  if ( v29 )
    MiReturnCrossPartitionSectionCharges(v48, *(unsigned int *)v44, v29);
  return v42;
}
