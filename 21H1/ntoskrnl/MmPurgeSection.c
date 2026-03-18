/*
 * XREFs of MmPurgeSection @ 0x1402CF7C0
 * Callers:
 *     CcPurgeCacheSection @ 0x1402CF540 (CcPurgeCacheSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiControlAreaUsingExtents @ 0x14027D210 (MiControlAreaUsingExtents.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x1402855A0 (MiCheckProtoPtePageState.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiDeleteTransitionPte @ 0x14029A9D0 (MiDeleteTransitionPte.c)
 *     MiComputeDataFlushRange @ 0x1402A1990 (MiComputeDataFlushRange.c)
 *     MiIncrementSubsectionViewCount @ 0x1402A24B0 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsections @ 0x1402A32F0 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x1402A33A0 (MiDecrementSubsectionViewCount.c)
 *     MiCheckControlArea @ 0x1402A38D0 (MiCheckControlArea.c)
 *     MiInsertUnusedSubsection @ 0x1402A52E0 (MiInsertUnusedSubsection.c)
 *     MiRemoveUnusedSubsection @ 0x1402A5598 (MiRemoveUnusedSubsection.c)
 *     MiWaitForPageWriteCompletion @ 0x1402CDB2C (MiWaitForPageWriteCompletion.c)
 *     MiCanFileBeTruncatedInternal @ 0x1402CFE0C (MiCanFileBeTruncatedInternal.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiChangingSubsectionProtos @ 0x140539DF8 (MiChangingSubsectionProtos.c)
 *     MiSubsectionProtosCreated @ 0x14053C964 (MiSubsectionProtosCreated.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054F5FC (MiReturnCrossPartitionSectionCharges.c)
 */

char __fastcall MmPurgeSection(SECTION_OBJECT_POINTERS *a1, __int64 *a2, __int64 a3, int a4, _BYTE *a5)
{
  char v5; // r15
  __int64 *v7; // rbx
  __int64 v8; // r13
  __int64 CanFileBeTruncatedInternal; // rax
  unsigned __int8 v10; // di
  __int64 v11; // r14
  ULONG_PTR v13; // rsi
  unsigned __int8 v14; // bl
  char v15; // di
  ULONG_PTR v16; // r12
  unsigned __int64 v17; // r15
  BOOL v18; // r12d
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  unsigned int v23; // r13d
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdi
  ULONG_PTR BugCheckParameter4; // rbx
  unsigned __int8 v29; // dl
  bool v30; // zf
  ULONG_PTR v31; // r12
  char v32; // si
  __int64 v33; // r13
  __int64 v34; // rax
  __int64 v35; // r13
  __int64 v36; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v40; // eax
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r10
  int v43; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  char v47; // [rsp+30h] [rbp-C8h]
  __int64 v48; // [rsp+38h] [rbp-C0h]
  ULONG_PTR v49; // [rsp+40h] [rbp-B8h]
  __int64 v50; // [rsp+48h] [rbp-B0h]
  int v51; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+58h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+60h] [rbp-98h] BYREF
  ULONG_PTR v54[2]; // [rsp+70h] [rbp-88h]
  __int128 v55; // [rsp+80h] [rbp-78h]
  _BYTE v56[32]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v57; // [rsp+B0h] [rbp-48h]
  unsigned __int8 v58; // [rsp+100h] [rbp+8h] BYREF
  __int64 v59; // [rsp+108h] [rbp+10h] BYREF
  int v60; // [rsp+118h] [rbp+20h]

  v60 = a4;
  LOBYTE(v59) = 0;
  v57 = 0LL;
  v58 = 0;
  v52 = 0LL;
  v5 = a4;
  v7 = a2;
  *a5 = 0;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  *(_OWORD *)v54 = 0LL;
  v55 = 0LL;
  memset(v56, 0, sizeof(v56));
  if ( a2 )
  {
    v7 = &v52;
    v52 = *a2;
  }
  v50 = 0LL;
  v8 = 0LL;
  CanFileBeTruncatedInternal = MiCanFileBeTruncatedInternal(a1, (__int64)&v59);
  v10 = v59;
  v11 = CanFileBeTruncatedInternal;
  if ( (_BYTE)v59 == 17 )
    return 0;
  if ( !CanFileBeTruncatedInternal )
    return 1;
  if ( (v5 & 1) == 0 && *(_DWORD *)(CanFileBeTruncatedInternal + 88) || !*(_QWORD *)(CanFileBeTruncatedInternal + 64) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(CanFileBeTruncatedInternal + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = v59;
          v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v59 + 1));
          v30 = (v40 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v40;
          if ( v30 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v10);
    return 0;
  }
  *(_DWORD *)(CanFileBeTruncatedInternal + 56) |= 0x8000u;
  if ( !(unsigned int)MiComputeDataFlushRange(CanFileBeTruncatedInternal, v10, v7, a3, 1, (__int64)BugCheckParameter2) )
    return 1;
  v13 = BugCheckParameter2[1];
  v14 = 17;
  v15 = 1;
  v16 = v54[1];
  LOBYTE(v59) = 17;
  v47 = 1;
LABEL_11:
  v49 = v16;
  if ( v14 == 17 )
  {
    v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 72));
    LOBYTE(v59) = v14;
  }
  if ( (_QWORD)v55 == v16 )
    v17 = v54[0] + 8;
  else
    v17 = *(_QWORD *)(v16 + 8) + 8LL * (*(_DWORD *)(v16 + 44) - (*(_DWORD *)(v16 + 52) & 0x3FFFFFFFu));
  v18 = MiControlAreaUsingExtents(v11);
  if ( !v19 )
  {
    v31 = v49;
    if ( v49 != (_QWORD)v55 )
      goto LABEL_49;
LABEL_50:
    v32 = v47;
    goto LABEL_51;
  }
  if ( !*(_DWORD *)(v49 + 108) )
  {
    MiIncrementSubsectionViewCount((_QWORD *)v49, 0LL);
    if ( (*(_BYTE *)(v49 + 34) & 8) != 0 )
      MiRemoveUnusedSubsection(v49);
    *(_WORD *)(v49 + 32) |= 1u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v41 = KeGetCurrentIrql();
        if ( v41 <= 0xFu && v14 <= 0xFu && v41 >= 2u )
        {
          v42 = KeGetCurrentPrcb();
          v21 = (__int64)v42->SchedulerAssist;
          v14 = v59;
          v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v59 + 1));
          v30 = (v43 & *(_DWORD *)(v21 + 20)) == 0;
          v20 = (unsigned int)v43 & *(_DWORD *)(v21 + 20);
          *(_DWORD *)(v21 + 20) = v20;
          if ( v30 )
            KiRemoveSystemWorkPriorityKick(v42);
        }
      }
    }
    __writecr8(v14);
    v22 = 0LL;
    v58 = 17;
    v48 = 0LL;
    if ( v18 )
    {
      MiChangingSubsectionProtos(v49);
      v22 = 0LL;
    }
    v23 = 0;
    if ( v13 >= v17 )
      goto LABEL_45;
    while ( 1 )
    {
      if ( (v13 & 0xFFF) != 0 )
      {
        if ( v58 != 17 )
          goto LABEL_25;
      }
      else if ( v58 != 17 )
      {
        MiUnlockProtoPoolPage(v22, v58, v20, v21);
      }
      v22 = MiCheckProtoPtePageState(v13, (__int64)&v58);
      v48 = v22;
      if ( !v22 )
      {
        v13 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        goto LABEL_62;
      }
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_25:
          v24 = *(_QWORD *)v13;
          v25 = *(_QWORD *)v13;
          if ( (*(_QWORD *)v13 & 1) != 0 )
            goto LABEL_33;
          if ( (*(_QWORD *)v13 & 0xC00LL) != 0x800 )
            goto LABEL_56;
          if ( !v24 || !qword_140C4DE80 || (v24 & qword_140C4DE80) != 0 )
          {
            v25 = *(_QWORD *)v13;
            if ( qword_140C4DE80 && (v24 & 0x10) == 0 )
              v25 = v24 & ~qword_140C4DE80;
LABEL_33:
            v26 = 6 * ((v25 >> 12) & 0xFFFFFFFFFLL);
            if ( (*(_QWORD *)(48 * ((v25 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
              break;
          }
        }
        v27 = 48 * ((v25 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v51 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v51, v26, v20, v21);
          while ( *(__int64 *)(v27 + 24) < 0 );
        }
        if ( *(_QWORD *)v13 == v24 )
          break;
        _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      if ( !v27 )
      {
LABEL_56:
        v13 += 8LL;
        goto LABEL_61;
      }
      BugCheckParameter4 = *(_QWORD *)v13;
      if ( !MiPteInShadowRange(v13)
        || (MiFlags & 0xC00000) == 0
        || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
      {
        goto LABEL_38;
      }
      if ( (BugCheckParameter4 & 1) != 0 )
      {
        if ( (BugCheckParameter4 & 0x20) == 0 || (BugCheckParameter4 & 0x42) == 0 )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v45 = *((_QWORD *)&Flink->Flink + ((v13 >> 3) & 0x1FF));
            v46 = BugCheckParameter4 | 0x20;
            if ( (v45 & 0x20) == 0 )
              v46 = BugCheckParameter4;
            BugCheckParameter4 = v46;
            if ( (v45 & 0x42) != 0 )
              BugCheckParameter4 = v46 | 0x42;
          }
        }
LABEL_38:
        if ( (BugCheckParameter4 & 1) != 0 )
          goto LABEL_42;
      }
      if ( (*(_DWORD *)(v27 + 16) & 0x401) != 0x400LL || (*(_QWORD *)(v27 + 8) | 0x8000000000000000uLL) != v13 )
        KeBugCheckEx(0xDEu, 2uLL, v13, *(_QWORD *)(v27 + 8), BugCheckParameter4);
      v29 = *(_BYTE *)(v27 + 34);
      if ( (((v60 & 2) != 0) & (v29 >> 4)) != 0 )
      {
LABEL_42:
        _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v15 = 0;
        v47 = 0;
        goto LABEL_43;
      }
      if ( (v29 & 8) != 0 )
      {
        MiWaitForPageWriteCompletion(v27, v11, v48, v58);
        v58 = 17;
        goto LABEL_61;
      }
      if ( v18 && *(_WORD *)(v27 + 32) )
        *a5 = 1;
      LOBYTE(v20) = 17;
      MiDeleteTransitionPte(v13, v27, v20, 1);
      v23 = 1;
      if ( *(_QWORD *)(v11 + 32) )
      {
        v13 += 8LL;
        if ( (v13 & 0x78) == 0 && KeShouldYieldProcessor() )
        {
          MiUnlockProtoPoolPage(v48, v58, v20, v21);
          v58 = 17;
        }
LABEL_61:
        v22 = v48;
LABEL_62:
        if ( v13 < v17 )
          continue;
      }
      v15 = v47;
LABEL_43:
      if ( v58 != 17 )
        MiUnlockProtoPoolPage(v48, v58, v20, v21);
LABEL_45:
      v30 = !v18;
      v31 = v49;
      if ( !v30 )
        MiSubsectionProtosCreated(v49, v56, 0LL, v23);
      LOBYTE(v59) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 72));
      v14 = v59;
      MiDecrementSubsectionViewCount((__int64 *)v49, 0);
      if ( *(_QWORD *)(v49 + 96) || (*(_BYTE *)(v49 + 34) & 1) != 0 )
      {
        v8 = v50;
      }
      else
      {
        v8 = MiInsertUnusedSubsection(v49) + v50;
        v50 = v8;
      }
LABEL_49:
      if ( v31 == (_QWORD)v55 || !v15 )
        goto LABEL_50;
      v16 = *(_QWORD *)(v31 + 16);
      v13 = *(_QWORD *)(v16 + 8);
      goto LABEL_11;
    }
  }
  v32 = 0;
LABEL_51:
  v33 = MiDecrementSubsections(v54[1], v54[1], 0) + v8;
  v34 = MiDecrementSubsections(v55, v55, 0);
  --*(_QWORD *)(v11 + 40);
  *(_DWORD *)(v11 + 56) &= ~4u;
  v35 = v34 + v33;
  if ( v35 )
    v36 = *(_QWORD *)(qword_140C4E588 + 8LL * (*(_WORD *)(v11 + 60) & 0x3FF));
  else
    v36 = 0LL;
  MiCheckControlArea(v11, v14);
  if ( v35 )
    MiReturnCrossPartitionSectionCharges(v36, 1LL, v35);
  return v32;
}
