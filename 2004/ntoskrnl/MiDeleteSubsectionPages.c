/*
 * XREFs of MiDeleteSubsectionPages @ 0x14022A1F0
 * Callers:
 *     MiDeleteSegmentPages @ 0x140260670 (MiDeleteSegmentPages.c)
 *     MiExtendSection @ 0x14060CDB0 (MiExtendSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDeleteClusterSection @ 0x1402273C0 (MiDeleteClusterSection.c)
 *     MiLockProtoPoolPage @ 0x140229D70 (MiLockProtoPoolPage.c)
 *     MiInvalidPteConforms @ 0x14022A870 (MiInvalidPteConforms.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDeleteTransitionPte @ 0x1402419A0 (MiDeleteTransitionPte.c)
 *     MiDecrementSubsectionViewCount @ 0x14024A370 (MiDecrementSubsectionViewCount.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402639D0 (MiUpdateSystemProtoPtesTree.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x1403334B0 (MiCapturePageFileInfoInline.c)
 *     MiSetLeafPfnBuddy @ 0x140358D90 (MiSetLeafPfnBuddy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDeleteSubsectionLargePages @ 0x1403F0884 (MiDeleteSubsectionLargePages.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054FC4C (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  unsigned __int64 v13; // r9
  __int64 v14; // r11
  unsigned __int64 v15; // r8
  __int64 v16; // r12
  __int64 v17; // r14
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rdx
  struct _LIST_ENTRY *v24; // r8
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // r15
  unsigned __int64 v29; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v33; // edx
  bool v34; // zf
  PVOID v35; // r14
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r9
  int v38; // eax
  _DWORD *v39; // r8
  __int64 v41; // [rsp+20h] [rbp-98h]
  int v42; // [rsp+28h] [rbp-90h]
  _BYTE v43[12]; // [rsp+2Ch] [rbp-8Ch] BYREF
  __int64 v44; // [rsp+38h] [rbp-80h]
  __int64 v45; // [rsp+40h] [rbp-78h] BYREF
  char *v46; // [rsp+48h] [rbp-70h]
  __int64 v47; // [rsp+50h] [rbp-68h]
  unsigned __int64 v48; // [rsp+58h] [rbp-60h]
  PVOID P; // [rsp+60h] [rbp-58h]
  _QWORD *v51; // [rsp+C8h] [rbp+10h]
  unsigned __int8 v52; // [rsp+D0h] [rbp+18h] BYREF
  int v53; // [rsp+D8h] [rbp+20h] BYREF

  v51 = a2;
  v2 = *BugCheckParameter2;
  v3 = (ULONG_PTR)BugCheckParameter2;
  v4 = a2;
  *(_QWORD *)&v43[4] = 0LL;
  LOBYTE(a2) = 17;
  v5 = *(_WORD *)(v2 + 60) & 0x3FF;
  v52 = 17;
  v47 = *(_QWORD *)(qword_140C4E448 + 8 * v5);
  v6 = *(_QWORD *)(v2 + 64);
  v7 = 0LL;
  *(_QWORD *)v43 = v6 != 0;
  Process = BugCheckParameter2[1];
  v9 = 0LL;
  v10 = 0LL;
  v48 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v41 = 0LL;
  v42 = *(_DWORD *)(v2 + 56);
  P = (PVOID)Process;
  if ( !Process )
    goto LABEL_77;
  v11 = Process;
  v46 = (char *)(Process + 8LL * *(unsigned int *)(v3 + 44));
  if ( Process >= (unsigned __int64)v46 )
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
        *(_QWORD *)&v43[4] = v18;
        if ( (v18 & 1) == 0 && (v18 & 0x400) != 0 && (v18 & 2) != 0 )
        {
          LOBYTE(a2) = 17;
          v9 = 0LL;
          v52 = 17;
          v11 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          goto LABEL_72;
        }
      }
      v9 = MiLockProtoPoolPage(v11, &v52);
      if ( v9 )
        break;
      MmAccessFault(2uLL, v11);
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
          v53 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v53, v21);
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
        Process = qword_140C4DD40;
        v20 = v19;
        if ( qword_140C4DD40 && (v19 & 0x10) == 0 )
          v20 = v19 & ~qword_140C4DD40;
        goto LABEL_25;
      }
    }
    v22 = 0LL;
LABEL_33:
    v23 = *(_QWORD *)v11;
    if ( v11 >= 0xFFFFF6FB7DBED000uLL
      && v11 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(Process, v23, v15, v13)
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
    *(_QWORD *)&v43[4] = v23;
    if ( (v23 & 1) != 0 )
    {
      ++v10;
      if ( *(_WORD *)(v22 + 32) <= 2u )
        v10 = v17;
      if ( (MI_READ_PTE_LOCK_FREE(&v43[4]) & 0x1FF000) == 0 )
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
      if ( qword_140C4DD40 && (v23 & 0x10) == 0 )
        LOWORD(v23) = ~(_WORD)qword_140C4DD40 & v23;
      v7 = v41;
      if ( (*(_DWORD *)(v22 + 16) & 0x400LL) != 0
        && (*(_DWORD *)(v2 + 56) & 0x20) == 0
        && (*(_BYTE *)(v22 + 34) & 0x18) != 0 )
      {
        v7 = ++v41;
      }
      if ( !v48
        && (v23 & 0xF000) == 0
        && (__int64)((unsigned __int64)&v46[-v11] & 0xFFFFFFFFFFFFFFF8uLL) >= 128
        && ((4096 - (v11 & 0xFFF)) & 0xFFFFFFF8) >= 0x80
        && (unsigned int)MiDeleteClusterSection(v22, v11) == 1 )
      {
        v4 = v51;
        v11 += 128LL;
        goto LABEL_71;
      }
      v4 = v51;
      if ( (unsigned int)MiDeleteTransitionPte(v11) == 3 )
        ++*v51;
    }
    else
    {
      v45 = v23;
      v27 = MiCapturePageFileInfoInline(&v45, 0LL);
      v45 = v27;
      if ( v27 )
        MiReleasePageFileInfo(v47, v27, 0LL);
LABEL_69:
      v4 = v51;
    }
    v7 = v41;
    v11 += 8LL;
LABEL_71:
    a2 = (_QWORD *)v52;
LABEL_72:
    v12 = 0xFFFFFFFFFLL;
    v15 = 0xFFFFFA8000000000uLL;
    v14 = 0x4000000000000LL;
    v13 = 0xFFFFFA8000000028uLL;
  }
  while ( v11 < (unsigned __int64)v46 );
  v44 = v16;
  v3 = (ULONG_PTR)BugCheckParameter2;
  if ( (_BYTE)a2 != 17 )
  {
    MiUnlockProtoPoolPage(v9, a2);
    v52 = 17;
  }
  if ( v44 )
    *v4 += MiDeleteSubsectionLargePages(BugCheckParameter2, v44, v10, v13);
LABEL_77:
  if ( (v42 & 0x80u) == 0 || (v42 & 0x20) != 0 )
    return v7;
  v28 = MiDecrementSubsectionViewCount(v3);
  v29 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 72));
  while ( *(_DWORD *)(v3 + 104) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v29 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v29 + 1));
          v34 = (v33 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v33;
          if ( v34 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v29);
    _mm_pause();
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 72));
  }
  v35 = P;
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
      v36 = KeGetCurrentIrql();
      if ( v36 <= 0xFu && (unsigned __int8)v29 <= 0xFu && v36 >= 2u )
      {
        v37 = KeGetCurrentPrcb();
        v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v29 + 1));
        v39 = v37->SchedulerAssist;
        v34 = (v38 & v39[5]) == 0;
        v39[5] &= v38;
        if ( v34 )
          KiRemoveSystemWorkPriorityKick(v37);
      }
    }
  }
  __writecr8(v29);
  if ( v35 )
    ExFreePoolWithTag(v35, 0);
  if ( v28 )
    MiReturnCrossPartitionSectionCharges(v47, *(unsigned int *)v43, v28);
  return v41;
}
