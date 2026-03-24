/*
 * XREFs of MmPurgeSection @ 0x140238BA0
 * Callers:
 *     CcPurgeCacheSection @ 0x1402F0920 (CcPurgeCacheSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteTransitionPte @ 0x140238830 (MiDeleteTransitionPte.c)
 *     MiUnlockProtoPoolPage @ 0x1402397F0 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x14023B270 (MiCheckProtoPtePageState.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiInsertUnusedSubsection @ 0x140263D60 (MiInsertUnusedSubsection.c)
 *     KeShouldYieldProcessor @ 0x140293FD0 (KeShouldYieldProcessor.c)
 *     MiWaitForPageWriteCompletion @ 0x140299EBC (MiWaitForPageWriteCompletion.c)
 *     MiCanFileBeTruncatedInternal @ 0x1402A10AC (MiCanFileBeTruncatedInternal.c)
 *     MiRemoveUnusedSubsection @ 0x1402F8B04 (MiRemoveUnusedSubsection.c)
 *     MiCheckControlArea @ 0x140314AB0 (MiCheckControlArea.c)
 *     MiDecrementSubsections @ 0x1403150C0 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x140315170 (MiDecrementSubsectionViewCount.c)
 *     MiComputeDataFlushRange @ 0x1403152C0 (MiComputeDataFlushRange.c)
 *     MiIncrementSubsectionViewCount @ 0x140315DE0 (MiIncrementSubsectionViewCount.c)
 *     MiControlAreaUsingExtents @ 0x140332C50 (MiControlAreaUsingExtents.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     MiChangingSubsectionProtos @ 0x14053F918 (MiChangingSubsectionProtos.c)
 *     MiSubsectionProtosCreated @ 0x140542484 (MiSubsectionProtosCreated.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1405550EC (MiReturnCrossPartitionSectionCharges.c)
 */

char __fastcall MmPurgeSection(SECTION_OBJECT_POINTERS *a1, __int64 *a2, int a3, int a4, _BYTE *a5)
{
  char v5; // r15
  __int64 *v7; // rbx
  __int64 v8; // r13
  __int64 CanFileBeTruncatedInternal; // rax
  unsigned __int8 v10; // di
  __int64 v11; // r14
  __int64 v13; // rdx
  ULONG_PTR v14; // rsi
  unsigned __int8 v15; // bl
  char v16; // di
  ULONG_PTR v17; // r12
  __int64 v18; // r8
  ULONG_PTR v19; // r15
  int v20; // r12d
  __int64 v21; // r8
  unsigned int v22; // r13d
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  ULONG_PTR v26; // rdi
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 v28; // r8
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
  _DWORD *v43; // r9
  int v44; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  char v48; // [rsp+30h] [rbp-C8h]
  __int64 v49; // [rsp+38h] [rbp-C0h]
  ULONG_PTR v50; // [rsp+40h] [rbp-B8h]
  __int64 v51; // [rsp+48h] [rbp-B0h]
  int v52; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v53; // [rsp+58h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+60h] [rbp-98h] BYREF
  ULONG_PTR v55[2]; // [rsp+70h] [rbp-88h]
  __int128 v56; // [rsp+80h] [rbp-78h]
  _BYTE v57[32]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v58; // [rsp+B0h] [rbp-48h]
  __int64 v59; // [rsp+108h] [rbp+10h] BYREF
  int v60; // [rsp+118h] [rbp+20h]

  v60 = a4;
  LOBYTE(v59) = 0;
  v58 = 0LL;
  v53 = 0LL;
  v5 = a4;
  LODWORD(v7) = (_DWORD)a2;
  *a5 = 0;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  *(_OWORD *)v55 = 0LL;
  v56 = 0LL;
  memset(v57, 0, sizeof(v57));
  if ( a2 )
  {
    v7 = &v53;
    v53 = *a2;
  }
  v51 = 0LL;
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
  if ( !(unsigned int)MiComputeDataFlushRange(
                        CanFileBeTruncatedInternal,
                        v10,
                        (_DWORD)v7,
                        a3,
                        1,
                        (__int64)BugCheckParameter2) )
    return 1;
  v14 = BugCheckParameter2[1];
  v15 = 17;
  v16 = 1;
  v17 = v55[1];
  LOBYTE(v59) = 17;
  v48 = 1;
  while ( 1 )
  {
    v50 = v17;
    if ( v15 == 17 )
    {
      v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 72));
      LOBYTE(v59) = v15;
    }
    v18 = *(_QWORD *)(v17 + 8);
    if ( (_QWORD)v56 == v17 )
    {
      v19 = v55[0] + 8;
    }
    else
    {
      v13 = *(_DWORD *)(v17 + 52) & 0x3FFFFFFF;
      v19 = v18 + 8LL * (unsigned int)(*(_DWORD *)(v17 + 44) - v13);
    }
    v20 = MiControlAreaUsingExtents(v11, v13, v18);
    if ( !v21 )
    {
      v31 = v50;
      if ( v50 == (_QWORD)v56 )
        goto LABEL_47;
      goto LABEL_46;
    }
    if ( *(_DWORD *)(v50 + 108) )
      break;
    MiIncrementSubsectionViewCount(v50);
    if ( (*(_BYTE *)(v50 + 34) & 8) != 0 )
      MiRemoveUnusedSubsection(v50);
    *(_WORD *)(v50 + 32) |= 1u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v41 = KeGetCurrentIrql();
        if ( v41 <= 0xFu && v15 <= 0xFu && v41 >= 2u )
        {
          v42 = KeGetCurrentPrcb();
          v43 = v42->SchedulerAssist;
          v15 = v59;
          v44 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v59 + 1));
          v30 = (v44 & v43[5]) == 0;
          v43[5] &= v44;
          if ( v30 )
            KiRemoveSystemWorkPriorityKick(v42);
        }
      }
    }
    __writecr8(v15);
    if ( v20 )
      MiChangingSubsectionProtos(v50);
    v22 = 0;
    if ( v14 < v19 )
    {
      while ( 1 )
      {
        v49 = MiCheckProtoPtePageState(v14);
        if ( !v49 )
        {
          v14 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          goto LABEL_58;
        }
        while ( 1 )
        {
          while ( 1 )
          {
            v23 = *(_QWORD *)v14;
            v24 = *(_QWORD *)v14;
            if ( (*(_QWORD *)v14 & 1) != 0 )
              goto LABEL_32;
            if ( (*(_QWORD *)v14 & 0xC00LL) != 0x800 )
              goto LABEL_53;
            if ( !v23 || !qword_140C4DF40 || (v23 & qword_140C4DF40) != 0 )
            {
              v24 = *(_QWORD *)v14;
              if ( qword_140C4DF40 && (v23 & 0x10) == 0 )
                v24 = v23 & ~qword_140C4DF40;
LABEL_32:
              v25 = 6 * ((v24 >> 12) & 0xFFFFFFFFFLL);
              if ( (*(_QWORD *)(48 * ((v24 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
                break;
            }
          }
          v26 = 48 * ((v24 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v52 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v52);
            while ( *(__int64 *)(v26 + 24) < 0 );
          }
          if ( *(_QWORD *)v14 == v23 )
            break;
          _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        if ( !v26 )
        {
LABEL_53:
          v14 += 8LL;
          goto LABEL_58;
        }
        BugCheckParameter4 = *(_QWORD *)v14;
        if ( !(unsigned int)MiPteInShadowRange(v14, v25)
          || (MiFlags & 0xC00000) == 0
          || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
        {
          goto LABEL_37;
        }
        if ( (BugCheckParameter4 & 1) != 0 )
        {
          if ( (BugCheckParameter4 & 0x20) == 0 || (BugCheckParameter4 & 0x42) == 0 )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v46 = *((_QWORD *)&Flink->Flink + ((v14 >> 3) & 0x1FF));
              v47 = BugCheckParameter4 | 0x20;
              if ( (v46 & 0x20) == 0 )
                v47 = BugCheckParameter4;
              BugCheckParameter4 = v47;
              if ( (v46 & 0x42) != 0 )
                BugCheckParameter4 = v47 | 0x42;
            }
          }
LABEL_37:
          if ( (BugCheckParameter4 & 1) != 0 )
            goto LABEL_41;
        }
        if ( (*(_DWORD *)(v26 + 16) & 0x401) != 0x400LL || (*(_QWORD *)(v26 + 8) | 0x8000000000000000uLL) != v14 )
          KeBugCheckEx(0xDEu, 2uLL, v14, *(_QWORD *)(v26 + 8), BugCheckParameter4);
        v29 = *(_BYTE *)(v26 + 34);
        if ( (((v60 & 2) != 0) & (v29 >> 4)) != 0 )
        {
LABEL_41:
          _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v16 = 0;
          v48 = 0;
          break;
        }
        if ( (v29 & 8) != 0 )
        {
          MiWaitForPageWriteCompletion(v26, v11, v49, 17LL);
          goto LABEL_58;
        }
        if ( v20 && *(_WORD *)(v26 + 32) )
          *a5 = 1;
        LOBYTE(v28) = 17;
        MiDeleteTransitionPte(v14, v26, v28, 1);
        v22 = 1;
        if ( *(_QWORD *)(v11 + 32) )
        {
          v14 += 8LL;
          if ( (v14 & 0x78) == 0 && KeShouldYieldProcessor() )
            MiUnlockProtoPoolPage(v49, 17LL);
LABEL_58:
          if ( v14 < v19 )
            continue;
        }
        v16 = v48;
        break;
      }
    }
    v30 = v20 == 0;
    v31 = v50;
    if ( !v30 )
      MiSubsectionProtosCreated(v50, v57, 0LL, v22);
    LOBYTE(v59) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 72));
    v15 = v59;
    MiDecrementSubsectionViewCount(v50);
    if ( *(_QWORD *)(v50 + 96) || (*(_BYTE *)(v50 + 34) & 1) != 0 )
    {
      v8 = v51;
    }
    else
    {
      v8 = MiInsertUnusedSubsection(v50) + v51;
      v51 = v8;
    }
LABEL_46:
    if ( v31 == (_QWORD)v56 || !v16 )
    {
LABEL_47:
      v32 = v48;
      goto LABEL_48;
    }
    v17 = *(_QWORD *)(v31 + 16);
    v14 = *(_QWORD *)(v17 + 8);
  }
  v32 = 0;
LABEL_48:
  v33 = MiDecrementSubsections(v55[1]) + v8;
  v34 = MiDecrementSubsections(v56);
  --*(_QWORD *)(v11 + 40);
  *(_DWORD *)(v11 + 56) &= ~4u;
  v35 = v34 + v33;
  if ( v35 )
    v36 = *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(v11 + 60) & 0x3FF));
  else
    v36 = 0LL;
  MiCheckControlArea(v11, v15);
  if ( v35 )
    MiReturnCrossPartitionSectionCharges(v36, 1LL, v35);
  return v32;
}
