/*
 * XREFs of MiDeleteSubsectionPages @ 0x1402DD9C0
 * Callers:
 *     MiDeleteSegmentPages @ 0x14030295C (MiDeleteSegmentPages.c)
 *     MiExtendSection @ 0x1405E8C28 (MiExtendSection.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x140220130 (MiCapturePageFileInfoInline.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiSetLeafPfnBuddy @ 0x14024920C (MiSetLeafPfnBuddy.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteTransitionPte @ 0x1402DD080 (MiDeleteTransitionPte.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiInvalidPteConforms @ 0x1402DFD90 (MiInvalidPteConforms.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140302FB0 (MiUpdateSystemProtoPtesTree.c)
 *     MiDeleteClusterSection @ 0x14030B130 (MiDeleteClusterSection.c)
 *     MiDecrementSubsectionViewCount @ 0x14031FEC0 (MiDecrementSubsectionViewCount.c)
 *     MiLockProtoPoolPage @ 0x140324E50 (MiLockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDeleteSubsectionLargePages @ 0x1403F6534 (MiDeleteSubsectionLargePages.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055532C (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteSubsectionPages(__int64 *BugCheckParameter2, __int64 a2)
{
  __int64 v2; // r13
  ULONG_PTR v3; // r12
  _QWORD *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rbx
  char *v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // r15
  unsigned __int64 v11; // rsi
  __int64 v12; // r10
  unsigned __int64 v13; // r9
  __int64 v14; // r11
  unsigned __int64 Flink; // r8
  unsigned __int64 v16; // r12
  __int64 v17; // r14
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rax
  ULONG_PTR v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  unsigned __int64 v25; // rax
  __int64 v26; // r15
  unsigned __int64 v27; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v31; // edx
  bool v32; // zf
  PVOID v33; // r14
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r9
  int v36; // eax
  _DWORD *v37; // r8
  __int64 v39; // [rsp+20h] [rbp-98h]
  int v40; // [rsp+28h] [rbp-90h]
  _BYTE v41[12]; // [rsp+2Ch] [rbp-8Ch] BYREF
  unsigned __int64 v42; // [rsp+38h] [rbp-80h]
  unsigned __int64 v43; // [rsp+40h] [rbp-78h] BYREF
  char *v44; // [rsp+48h] [rbp-70h]
  __int64 v45; // [rsp+50h] [rbp-68h]
  unsigned __int64 v46; // [rsp+58h] [rbp-60h]
  PVOID P; // [rsp+60h] [rbp-58h]
  _QWORD *v49; // [rsp+C8h] [rbp+10h]
  unsigned __int8 v50; // [rsp+D0h] [rbp+18h] BYREF
  int v51; // [rsp+D8h] [rbp+20h] BYREF

  v49 = (_QWORD *)a2;
  v2 = *BugCheckParameter2;
  v3 = (ULONG_PTR)BugCheckParameter2;
  v4 = (_QWORD *)a2;
  *(_QWORD *)&v41[4] = 0LL;
  LOBYTE(a2) = 17;
  v5 = *(_WORD *)(v2 + 60) & 0x3FF;
  v50 = 17;
  v45 = *(_QWORD *)(qword_140C4E688 + 8 * v5);
  v6 = *(_QWORD *)(v2 + 64);
  v7 = 0LL;
  *(_QWORD *)v41 = v6 != 0;
  v8 = (char *)BugCheckParameter2[1];
  v9 = 0LL;
  v10 = 0LL;
  v46 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v39 = 0LL;
  v40 = *(_DWORD *)(v2 + 56);
  P = v8;
  if ( !v8 )
    goto LABEL_77;
  v11 = (unsigned __int64)v8;
  v44 = &v8[8 * *(unsigned int *)(v3 + 44)];
  if ( v8 >= v44 )
    goto LABEL_77;
  v12 = 0xFFFFFFFFFLL;
  v13 = 0xFFFFFA8000000028uLL;
  v14 = 0x4000000000000LL;
  Flink = 0xFFFFFA8000000000uLL;
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
        *(_QWORD *)&v41[4] = v18;
        if ( (v18 & 1) == 0 && (v18 & 0x400) != 0 && (v18 & 2) != 0 )
        {
          LOBYTE(a2) = 17;
          v9 = 0LL;
          v50 = 17;
          v11 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          goto LABEL_72;
        }
      }
      v9 = MiLockProtoPoolPage(v11, &v50);
      if ( v9 )
        break;
      MmAccessFault(2uLL, v11, 0, 0LL);
    }
    Flink = 0xFFFFFA8000000000uLL;
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
        a2 = 6 * (v12 & (v20 >> 12));
        if ( (v14 & *(_QWORD *)(v13 + 48 * (v12 & (v20 >> 12)))) != 0 )
        {
          v21 = Flink + 48 * (v12 & (v20 >> 12));
          v51 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v51);
              while ( *(__int64 *)(v21 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) );
            Flink = 0xFFFFFA8000000000uLL;
            v12 = 0xFFFFFFFFFLL;
            v13 = 0xFFFFFA8000000028uLL;
            v14 = 0x4000000000000LL;
          }
          if ( *(_QWORD *)v11 == v19 )
            goto LABEL_33;
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      if ( (v19 & 0x400) != 0 || (v19 & 0x800) == 0 )
        break;
      if ( (unsigned int)MiInvalidPteConforms(*(_QWORD *)v11, a2) )
      {
        v20 = v19;
        if ( qword_140C4DF80 && (v19 & 0x10) == 0 )
          v20 = v19 & ~qword_140C4DF80;
        goto LABEL_25;
      }
    }
    v21 = 0LL;
LABEL_33:
    v22 = *(_QWORD *)v11;
    if ( v11 >= 0xFFFFF6FB7DBED000uLL
      && v11 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v22 & 1) != 0
      && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
    {
      Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v23 = *(_QWORD *)(Flink + 8 * ((v11 >> 3) & 0x1FF));
        Flink = v22 | 0x20;
        if ( (v23 & 0x20) == 0 )
          Flink = v22;
        v22 = Flink;
        if ( (v23 & 0x42) != 0 )
          v22 = Flink | 0x42;
      }
    }
    *(_QWORD *)&v41[4] = v22;
    if ( (v22 & 1) != 0 )
    {
      ++v10;
      if ( *(_WORD *)(v21 + 32) <= 2u )
        v10 = v17;
      if ( (MI_READ_PTE_LOCK_FREE(&v41[4]) & 0x1FF000) == 0 )
      {
        MiSetLeafPfnBuddy((_QWORD *)v21, v16);
        v16 = v21;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_69;
    }
    if ( (v22 & 0x400) != 0 )
      goto LABEL_69;
    if ( (v22 & 0x800) != 0 )
    {
      if ( qword_140C4DF80 && (v22 & 0x10) == 0 )
        LOWORD(v22) = ~(_WORD)qword_140C4DF80 & v22;
      v7 = v39;
      if ( (*(_DWORD *)(v21 + 16) & 0x400LL) != 0
        && (*(_DWORD *)(v2 + 56) & 0x20) == 0
        && (*(_BYTE *)(v21 + 34) & 0x18) != 0 )
      {
        v7 = ++v39;
      }
      if ( !v46
        && (v22 & 0xF000) == 0
        && (__int64)((unsigned __int64)&v44[-v11] & 0xFFFFFFFFFFFFFFF8uLL) >= 128
        && ((4096 - (v11 & 0xFFF)) & 0xFFFFFFF8) >= 0x80
        && (unsigned int)MiDeleteClusterSection(v21, v11, Flink, v13) == 1 )
      {
        v4 = v49;
        v11 += 128LL;
        goto LABEL_71;
      }
      LOBYTE(Flink) = 17;
      v24 = MiDeleteTransitionPte(v11, v21, Flink, 1);
      v4 = v49;
      if ( v24 == 3 )
        ++*v49;
    }
    else
    {
      v43 = v22;
      v25 = MiCapturePageFileInfoInline(&v43, 0, 1);
      v43 = v25;
      if ( v25 )
        MiReleasePageFileInfo(v45, v25, 0);
LABEL_69:
      v4 = v49;
    }
    v7 = v39;
    v11 += 8LL;
LABEL_71:
    a2 = v50;
LABEL_72:
    v12 = 0xFFFFFFFFFLL;
    Flink = 0xFFFFFA8000000000uLL;
    v14 = 0x4000000000000LL;
    v13 = 0xFFFFFA8000000028uLL;
  }
  while ( v11 < (unsigned __int64)v44 );
  v42 = v16;
  v3 = (ULONG_PTR)BugCheckParameter2;
  if ( (_BYTE)a2 != 17 )
  {
    MiUnlockProtoPoolPage(v9, a2);
    v50 = 17;
  }
  if ( v42 )
    *v4 += MiDeleteSubsectionLargePages(BugCheckParameter2, v42, v10, v13);
LABEL_77:
  if ( (v40 & 0x80u) == 0 || (v40 & 0x20) != 0 )
    return v7;
  v26 = MiDecrementSubsectionViewCount(v3);
  v27 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 72));
  while ( *(_DWORD *)(v3 + 104) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v27 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v27 + 1));
          v32 = (v31 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v31;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v27);
    _mm_pause();
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 72));
  }
  v33 = P;
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
      v34 = KeGetCurrentIrql();
      if ( v34 <= 0xFu && (unsigned __int8)v27 <= 0xFu && v34 >= 2u )
      {
        v35 = KeGetCurrentPrcb();
        v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v27 + 1));
        v37 = v35->SchedulerAssist;
        v32 = (v36 & v37[5]) == 0;
        v37[5] &= v36;
        if ( v32 )
          KiRemoveSystemWorkPriorityKick(v35);
      }
    }
  }
  __writecr8(v27);
  if ( v33 )
    ExFreePoolWithTag(v33, 0);
  if ( v26 )
    MiReturnCrossPartitionSectionCharges(v45, *(unsigned int *)v41, v26);
  return v39;
}
