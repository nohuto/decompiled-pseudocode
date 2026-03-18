/*
 * XREFs of MmPurgeSection @ 0x14031FBF0
 * Callers:
 *     CcPurgeCacheSection @ 0x14031F970 (CcPurgeCacheSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiControlAreaUsingExtents @ 0x1402241C0 (MiControlAreaUsingExtents.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x14022C550 (MiCheckProtoPtePageState.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiDeleteTransitionPte @ 0x1402419A0 (MiDeleteTransitionPte.c)
 *     MiComputeDataFlushRange @ 0x140248960 (MiComputeDataFlushRange.c)
 *     MiIncrementSubsectionViewCount @ 0x140249480 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsections @ 0x14024A2C0 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x14024A370 (MiDecrementSubsectionViewCount.c)
 *     MiCheckControlArea @ 0x14024A8A0 (MiCheckControlArea.c)
 *     MiInsertUnusedSubsection @ 0x14024C2B0 (MiInsertUnusedSubsection.c)
 *     MiRemoveUnusedSubsection @ 0x14024C568 (MiRemoveUnusedSubsection.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiWaitForPageWriteCompletion @ 0x14030F4FC (MiWaitForPageWriteCompletion.c)
 *     MiCanFileBeTruncatedInternal @ 0x14032023C (MiCanFileBeTruncatedInternal.c)
 *     KeShouldYieldProcessor @ 0x140327BB0 (KeShouldYieldProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MiChangingSubsectionProtos @ 0x14053A448 (MiChangingSubsectionProtos.c)
 *     MiSubsectionProtosCreated @ 0x14053CFB4 (MiSubsectionProtosCreated.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054FC4C (MiReturnCrossPartitionSectionCharges.c)
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
  unsigned __int64 v22; // rax
  unsigned int v23; // r13d
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdi
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 v29; // r8
  unsigned __int8 v30; // dl
  bool v31; // zf
  ULONG_PTR v32; // r12
  char v33; // si
  __int64 v34; // r13
  __int64 v35; // rax
  _DWORD *v36; // r8
  __int64 v37; // r13
  __int64 v38; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v42; // eax
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r10
  int v45; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  char v49; // [rsp+30h] [rbp-C8h]
  __int64 v50; // [rsp+38h] [rbp-C0h]
  ULONG_PTR v51; // [rsp+40h] [rbp-B8h]
  __int64 v52; // [rsp+48h] [rbp-B0h]
  int v53; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v54; // [rsp+58h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+60h] [rbp-98h] BYREF
  ULONG_PTR v56[2]; // [rsp+70h] [rbp-88h]
  __int128 v57; // [rsp+80h] [rbp-78h]
  _BYTE v58[32]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v59; // [rsp+B0h] [rbp-48h]
  unsigned __int8 v60; // [rsp+100h] [rbp+8h] BYREF
  __int64 v61; // [rsp+108h] [rbp+10h] BYREF
  int v62; // [rsp+118h] [rbp+20h]

  v62 = a4;
  LOBYTE(v61) = 0;
  v59 = 0LL;
  v60 = 0;
  v54 = 0LL;
  v5 = a4;
  v7 = a2;
  *a5 = 0;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  *(_OWORD *)v56 = 0LL;
  v57 = 0LL;
  memset(v58, 0, sizeof(v58));
  if ( a2 )
  {
    v7 = &v54;
    v54 = *a2;
  }
  v52 = 0LL;
  v8 = 0LL;
  CanFileBeTruncatedInternal = MiCanFileBeTruncatedInternal(a1, (__int64)&v61);
  v10 = v61;
  v11 = CanFileBeTruncatedInternal;
  if ( (_BYTE)v61 == 17 )
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
          v10 = v61;
          v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v61 + 1));
          v31 = (v42 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v42;
          if ( v31 )
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
  v16 = v56[1];
  LOBYTE(v61) = 17;
  v49 = 1;
LABEL_11:
  v51 = v16;
  if ( v14 == 17 )
  {
    v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 72));
    LOBYTE(v61) = v14;
  }
  if ( (_QWORD)v57 == v16 )
    v17 = v56[0] + 8;
  else
    v17 = *(_QWORD *)(v16 + 8) + 8LL * (*(_DWORD *)(v16 + 44) - (*(_DWORD *)(v16 + 52) & 0x3FFFFFFFu));
  v18 = MiControlAreaUsingExtents(v11);
  if ( !v19 )
  {
    v32 = v51;
    if ( v51 != (_QWORD)v57 )
      goto LABEL_49;
LABEL_50:
    v33 = v49;
    goto LABEL_51;
  }
  if ( !*(_DWORD *)(v51 + 108) )
  {
    MiIncrementSubsectionViewCount((_QWORD *)v51, 0LL);
    if ( (*(_BYTE *)(v51 + 34) & 8) != 0 )
      MiRemoveUnusedSubsection(v51);
    *(_WORD *)(v51 + 32) |= 1u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v43 = KeGetCurrentIrql();
        if ( v43 <= 0xFu && v14 <= 0xFu && v43 >= 2u )
        {
          v44 = KeGetCurrentPrcb();
          v21 = (__int64)v44->SchedulerAssist;
          v14 = v61;
          v45 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v61 + 1));
          v31 = (v45 & *(_DWORD *)(v21 + 20)) == 0;
          v20 = (unsigned int)v45 & *(_DWORD *)(v21 + 20);
          *(_DWORD *)(v21 + 20) = v20;
          if ( v31 )
            KiRemoveSystemWorkPriorityKick(v44);
        }
      }
    }
    __writecr8(v14);
    v22 = 0LL;
    v60 = 17;
    v50 = 0LL;
    if ( v18 )
    {
      MiChangingSubsectionProtos(v51);
      v22 = 0LL;
    }
    v23 = 0;
    if ( v13 >= v17 )
      goto LABEL_45;
    while ( 1 )
    {
      if ( (v13 & 0xFFF) != 0 )
      {
        if ( v60 != 17 )
          goto LABEL_25;
      }
      else if ( v60 != 17 )
      {
        MiUnlockProtoPoolPage(v22, v60);
      }
      v22 = MiCheckProtoPtePageState(v13, &v60);
      v50 = v22;
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
          if ( !v24 || !qword_140C4DD40 || (v24 & qword_140C4DD40) != 0 )
          {
            v25 = *(_QWORD *)v13;
            if ( qword_140C4DD40 && (v24 & 0x10) == 0 )
              v25 = v24 & ~qword_140C4DD40;
LABEL_33:
            v26 = 6 * ((v25 >> 12) & 0xFFFFFFFFFLL);
            if ( (*(_QWORD *)(48 * ((v25 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
              break;
          }
        }
        v27 = 48 * ((v25 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v53 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v53, v26, v20, v21);
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
            v47 = *((_QWORD *)&Flink->Flink + ((v13 >> 3) & 0x1FF));
            v48 = BugCheckParameter4 | 0x20;
            if ( (v47 & 0x20) == 0 )
              v48 = BugCheckParameter4;
            BugCheckParameter4 = v48;
            if ( (v47 & 0x42) != 0 )
              BugCheckParameter4 = v48 | 0x42;
          }
        }
LABEL_38:
        if ( (BugCheckParameter4 & 1) != 0 )
          goto LABEL_42;
      }
      if ( (*(_DWORD *)(v27 + 16) & 0x401) != 0x400LL || (*(_QWORD *)(v27 + 8) | 0x8000000000000000uLL) != v13 )
        KeBugCheckEx(0xDEu, 2uLL, v13, *(_QWORD *)(v27 + 8), BugCheckParameter4);
      v30 = *(_BYTE *)(v27 + 34);
      if ( (((v62 & 2) != 0) & (v30 >> 4)) != 0 )
      {
LABEL_42:
        _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v15 = 0;
        v49 = 0;
        goto LABEL_43;
      }
      if ( (v30 & 8) != 0 )
      {
        MiWaitForPageWriteCompletion(v27, v11, v50, v60);
        v60 = 17;
        goto LABEL_61;
      }
      if ( v18 && *(_WORD *)(v27 + 32) )
        *a5 = 1;
      LOBYTE(v29) = 17;
      MiDeleteTransitionPte(v13, v27, v29, 1);
      v23 = 1;
      if ( *(_QWORD *)(v11 + 32) )
      {
        v13 += 8LL;
        if ( (v13 & 0x78) == 0 && KeShouldYieldProcessor() )
        {
          MiUnlockProtoPoolPage(v50, v60);
          v60 = 17;
        }
LABEL_61:
        v22 = v50;
LABEL_62:
        if ( v13 < v17 )
          continue;
      }
      v15 = v49;
LABEL_43:
      if ( v60 != 17 )
        MiUnlockProtoPoolPage(v50, v60);
LABEL_45:
      v31 = !v18;
      v32 = v51;
      if ( !v31 )
        MiSubsectionProtosCreated(v51, v58, 0LL, v23);
      LOBYTE(v61) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 72));
      v14 = v61;
      MiDecrementSubsectionViewCount((__int64 *)v51, 0);
      if ( *(_QWORD *)(v51 + 96) || (*(_BYTE *)(v51 + 34) & 1) != 0 )
      {
        v8 = v52;
      }
      else
      {
        v8 = MiInsertUnusedSubsection(v51) + v52;
        v52 = v8;
      }
LABEL_49:
      if ( v32 == (_QWORD)v57 || !v15 )
        goto LABEL_50;
      v16 = *(_QWORD *)(v32 + 16);
      v13 = *(_QWORD *)(v16 + 8);
      goto LABEL_11;
    }
  }
  v33 = 0;
LABEL_51:
  v34 = MiDecrementSubsections(v56[1], v56[1], 0) + v8;
  v35 = MiDecrementSubsections(v57, v57, 0);
  --*(_QWORD *)(v11 + 40);
  *(_DWORD *)(v11 + 56) &= ~4u;
  v37 = v35 + v34;
  if ( v37 )
    v38 = *(_QWORD *)(qword_140C4E448 + 8LL * (*(_WORD *)(v11 + 60) & 0x3FF));
  else
    v38 = 0LL;
  MiCheckControlArea(v11, v14, v36);
  if ( v37 )
    MiReturnCrossPartitionSectionCharges(v38, 1LL, v37);
  return v33;
}
