/*
 * XREFs of MmPurgeSection @ 0x14027F360
 * Callers:
 *     CcPurgeCacheSection @ 0x14027F0E0 (CcPurgeCacheSection.c)
 * Callees:
 *     MiInsertUnusedSubsection @ 0x140220AAC (MiInsertUnusedSubsection.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     MiRemoveUnusedSubsection @ 0x14026EF44 (MiRemoveUnusedSubsection.c)
 *     MiCanFileBeTruncatedInternal @ 0x14027F9DC (MiCanFileBeTruncatedInternal.c)
 *     MiDecrementSubsections @ 0x140286920 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x1402869C0 (MiDecrementSubsectionViewCount.c)
 *     MiComputeDataFlushRange @ 0x140286AB0 (MiComputeDataFlushRange.c)
 *     MiIncrementSubsectionViewCount @ 0x140286EC0 (MiIncrementSubsectionViewCount.c)
 *     MiCheckControlArea @ 0x140287660 (MiCheckControlArea.c)
 *     MiDeleteTransitionPte @ 0x1402C3100 (MiDeleteTransitionPte.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockProtoPoolPage @ 0x140334790 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x140337B00 (MiCheckProtoPtePageState.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     MiWaitForPageWriteCompletion @ 0x140389084 (MiWaitForPageWriteCompletion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14059A31C (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiChangingSubsectionProtos @ 0x14059D69C (MiChangingSubsectionProtos.c)
 *     MiSubsectionProtosCreated @ 0x1405A0FD8 (MiSubsectionProtosCreated.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1405C4B8C (MiReturnCrossPartitionSectionCharges.c)
 */

char __fastcall MmPurgeSection(SECTION_OBJECT_POINTERS *a1, __int64 *a2, int a3, int a4, _BYTE *a5)
{
  char v5; // r15
  __int64 *v7; // rbx
  __int64 v8; // r12
  __int64 CanFileBeTruncatedInternal; // rax
  unsigned __int8 v10; // di
  __int64 v11; // r14
  ULONG_PTR v13; // rsi
  unsigned __int8 v14; // di
  ULONG_PTR v15; // r8
  char v16; // bl
  KIRQL v17; // al
  unsigned __int64 v18; // r15
  BOOL v19; // r13d
  unsigned int v20; // r12d
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rdi
  ULONG_PTR BugCheckParameter4; // rcx
  unsigned __int8 v26; // dl
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // r12
  __int64 inserted; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v34; // eax
  bool v35; // zf
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r9
  int v39; // eax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v41; // rax
  _BYTE *v42; // rcx
  __int64 v43; // rbx
  char v44; // [rsp+30h] [rbp-C8h]
  __int64 v45; // [rsp+38h] [rbp-C0h]
  ULONG_PTR v46; // [rsp+40h] [rbp-B8h]
  __int64 v47; // [rsp+48h] [rbp-B0h]
  int v48; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v49; // [rsp+58h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+60h] [rbp-98h] BYREF
  ULONG_PTR v51[2]; // [rsp+70h] [rbp-88h]
  __int128 v52; // [rsp+80h] [rbp-78h]
  _BYTE v53[32]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v54; // [rsp+B0h] [rbp-48h]
  __int64 v55; // [rsp+108h] [rbp+10h] BYREF
  int v56; // [rsp+118h] [rbp+20h]

  v56 = a4;
  LOBYTE(v55) = 0;
  v54 = 0LL;
  v5 = a4;
  v49 = 0LL;
  LODWORD(v7) = (_DWORD)a2;
  *a5 = 0;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  *(_OWORD *)v51 = 0LL;
  v52 = 0LL;
  memset(v53, 0, sizeof(v53));
  if ( a2 )
  {
    v7 = &v49;
    v49 = *a2;
  }
  v8 = 0LL;
  v47 = 0LL;
  CanFileBeTruncatedInternal = MiCanFileBeTruncatedInternal(a1, (__int64)&v55);
  v10 = v55;
  v11 = CanFileBeTruncatedInternal;
  if ( (_BYTE)v55 == 17 )
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
          v10 = v55;
          v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v55 + 1));
          v35 = (v34 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v34;
          if ( v35 )
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
  v13 = BugCheckParameter2[1];
  v14 = 17;
  v15 = v51[1];
  v16 = 1;
  LOBYTE(v55) = 17;
  v44 = 1;
  while ( 1 )
  {
    v46 = v15;
    if ( v14 == 17 )
    {
      v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 72));
      v15 = v46;
      v14 = v17;
      LOBYTE(v55) = v17;
    }
    if ( (_QWORD)v52 == v15 )
      v18 = v51[0] + 8;
    else
      v18 = *(_QWORD *)(v15 + 8) + 8LL * (*(_DWORD *)(v15 + 44) - (*(_DWORD *)(v15 + 52) & 0x3FFFFFFFu));
    v19 = (*(_BYTE *)(v11 + 62) & 0xC) != 0;
    if ( !*(_QWORD *)(v15 + 8) )
    {
      if ( v15 == (_QWORD)v52 )
        goto LABEL_51;
      goto LABEL_50;
    }
    if ( *(_DWORD *)(v15 + 108) )
      break;
    MiIncrementSubsectionViewCount(v46);
    if ( (*(_BYTE *)(v46 + 34) & 8) != 0 )
      MiRemoveUnusedSubsection(v46);
    *(_WORD *)(v46 + 32) |= 1u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v36 = KeGetCurrentIrql();
        if ( v36 <= 0xFu && v14 <= 0xFu && v36 >= 2u )
        {
          v37 = KeGetCurrentPrcb();
          v38 = v37->SchedulerAssist;
          v14 = v55;
          v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v55 + 1));
          v35 = (v39 & v38[5]) == 0;
          v38[5] &= v39;
          if ( v35 )
            KiRemoveSystemWorkPriorityKick(v37);
        }
      }
    }
    __writecr8(v14);
    if ( v19 )
      MiChangingSubsectionProtos(v46);
    v20 = 0;
    if ( v13 < v18 )
    {
      while ( 1 )
      {
        v45 = MiCheckProtoPtePageState(v13);
        if ( !v45 )
        {
          v13 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          goto LABEL_59;
        }
        while ( 1 )
        {
          while ( 1 )
          {
            v21 = *(_QWORD *)v13;
            v22 = *(_QWORD *)v13;
            if ( (*(_QWORD *)v13 & 1) != 0 )
              goto LABEL_32;
            if ( (*(_QWORD *)v13 & 0xC00LL) != 0x800 )
              goto LABEL_54;
            if ( !v21 || !qword_140C50780 || (v21 & qword_140C50780) != 0 )
            {
              v22 = *(_QWORD *)v13;
              if ( qword_140C50780 && (v21 & 0x10) == 0 )
                v22 = v21 & ~qword_140C50780;
LABEL_32:
              v23 = (v22 >> 12) & 0xFFFFFFFFFFLL;
              if ( v23 <= qword_140C50840 )
              {
                if ( _bittest64((const signed __int64 *)(48 * v23 - 0x21FFFFFFFFD8LL), 0x36u) )
                  break;
              }
            }
          }
          v24 = 48 * v23 - 0x220000000000LL;
          v48 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v48);
            while ( *(__int64 *)(v24 + 24) < 0 );
          }
          if ( *(_QWORD *)v13 == v21 )
            break;
          _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        if ( (*(_DWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v24 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x100) != 0 )
          v24 = MiLockSpecialPurposeMemoryCachedPage(v24, 0LL);
        if ( !v24 )
        {
LABEL_54:
          v13 += 8LL;
          goto LABEL_59;
        }
        BugCheckParameter4 = *(_QWORD *)v13;
        if ( v13 < 0xFFFFF6FB7DBED000uLL
          || v13 > 0xFFFFF6FB7DBED7F8uLL
          || (MiFlags & 0xC00000) == 0
          || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
        {
          goto LABEL_41;
        }
        if ( (BugCheckParameter4 & 1) != 0 )
        {
          if ( (BugCheckParameter4 & 0x20) == 0 || (BugCheckParameter4 & 0x42) == 0 )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v41 = *((_QWORD *)&Flink->Flink + ((v13 >> 3) & 0x1FF));
              if ( (v41 & 0x20) != 0 )
                BugCheckParameter4 |= 0x20uLL;
              if ( (v41 & 0x42) != 0 )
                BugCheckParameter4 |= 0x42uLL;
            }
          }
LABEL_41:
          if ( (BugCheckParameter4 & 1) != 0 )
            goto LABEL_45;
        }
        if ( (*(_DWORD *)(v24 + 16) & 0x401) != 0x400LL || (*(_QWORD *)(v24 + 8) | 0x8000000000000000uLL) != v13 )
          KeBugCheckEx(0xDEu, 2uLL, v13, *(_QWORD *)(v24 + 8), BugCheckParameter4);
        v26 = *(_BYTE *)(v24 + 34);
        if ( (((v56 & 2) != 0) & (v26 >> 4)) != 0 )
        {
LABEL_45:
          _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v16 = 0;
          v44 = 0;
          break;
        }
        if ( (v26 & 8) != 0 )
        {
          MiWaitForPageWriteCompletion(v24, v11, v45, 17LL);
          goto LABEL_59;
        }
        if ( v19 )
        {
          v42 = a5;
          if ( *(_WORD *)(v24 + 32) )
            *a5 = 1;
          if ( (*(_BYTE *)(v11 + 62) & 0xC) == 8 )
            *v42 = 1;
        }
        MiDeleteTransitionPte(v13);
        v20 = 1;
        if ( *(_QWORD *)(v11 + 32) )
        {
          v13 += 8LL;
          if ( (v13 & 0x78) == 0 && KeShouldYieldProcessor() )
            MiUnlockProtoPoolPage(v45, 17LL);
LABEL_59:
          if ( v13 < v18 )
            continue;
        }
        v16 = v44;
        break;
      }
    }
    if ( v19 )
      MiSubsectionProtosCreated(v46, v53, 0LL, v20);
    LOBYTE(v55) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 72));
    v14 = v55;
    MiDecrementSubsectionViewCount(v46);
    v15 = v46;
    if ( *(_QWORD *)(v46 + 96) || (*(_BYTE *)(v46 + 34) & 1) != 0 )
    {
      v8 = v47;
    }
    else
    {
      inserted = MiInsertUnusedSubsection(v46);
      v15 = v46;
      v8 = inserted + v47;
      v47 += inserted;
    }
LABEL_50:
    if ( v15 == (_QWORD)v52 || !v16 )
      goto LABEL_51;
    v15 = *(_QWORD *)(v15 + 16);
    v13 = *(_QWORD *)(v15 + 8);
  }
  v16 = 0;
  v44 = 0;
LABEL_51:
  v27 = MiDecrementSubsections(v51[1]) + v8;
  v28 = MiDecrementSubsections(v52);
  --*(_QWORD *)(v11 + 40);
  *(_DWORD *)(v11 + 56) &= ~4u;
  v29 = v28 + v27;
  if ( v29 )
  {
    v43 = *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(v11 + 60) & 0x3FF));
    MiCheckControlArea(v11, v14);
    MiReturnCrossPartitionSectionCharges(v43, 1LL, v29);
    return v44;
  }
  else
  {
    MiCheckControlArea(v11, v14);
  }
  return v16;
}
