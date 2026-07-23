/*
 * XREFs of MmPurgeSection @ 0x1402DD3F0
 * Callers:
 *     CcPurgeCacheSection @ 0x1402FB670 (CcPurgeCacheSection.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     MiCanFileBeTruncatedInternal @ 0x14021E62C (MiCanFileBeTruncatedInternal.c)
 *     MiInsertUnusedSubsection @ 0x14022A08C (MiInsertUnusedSubsection.c)
 *     MiWaitForPageWriteCompletion @ 0x14022A42C (MiWaitForPageWriteCompletion.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteTransitionPte @ 0x1402DD080 (MiDeleteTransitionPte.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x1402DFAC0 (MiCheckProtoPtePageState.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiRemoveUnusedSubsection @ 0x140303854 (MiRemoveUnusedSubsection.c)
 *     MiCheckControlArea @ 0x14031F800 (MiCheckControlArea.c)
 *     MiDecrementSubsections @ 0x14031FE10 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x14031FEC0 (MiDecrementSubsectionViewCount.c)
 *     MiComputeDataFlushRange @ 0x140320010 (MiComputeDataFlushRange.c)
 *     MiIncrementSubsectionViewCount @ 0x140320B30 (MiIncrementSubsectionViewCount.c)
 *     MiControlAreaUsingExtents @ 0x14033D9A0 (MiControlAreaUsingExtents.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiChangingSubsectionProtos @ 0x14053FB58 (MiChangingSubsectionProtos.c)
 *     MiSubsectionProtosCreated @ 0x1405426C4 (MiSubsectionProtosCreated.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055532C (MiReturnCrossPartitionSectionCharges.c)
 */

char __fastcall MmPurgeSection(SECTION_OBJECT_POINTERS *a1, unsigned __int64 *a2, int a3, unsigned int a4, _BYTE *a5)
{
  char v5; // r15
  unsigned __int64 *v7; // rbx
  __int64 v8; // r13
  char *v9; // rax
  unsigned __int8 v10; // di
  __int64 v11; // r14
  ULONG_PTR v13; // rsi
  unsigned __int8 v14; // bl
  char v15; // di
  ULONG_PTR v16; // r12
  unsigned __int64 v17; // r15
  int v18; // r12d
  __int64 v19; // r8
  unsigned int v20; // r13d
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rax
  __int64 v23; // rdi
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 v25; // r8
  unsigned __int8 v26; // dl
  bool v27; // zf
  ULONG_PTR v28; // r12
  char v29; // si
  __int64 v30; // r13
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v37; // eax
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  _DWORD *v40; // r9
  int v41; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  char v45; // [rsp+30h] [rbp-C8h]
  __int64 v46; // [rsp+38h] [rbp-C0h]
  ULONG_PTR v47; // [rsp+40h] [rbp-B8h]
  __int64 v48; // [rsp+48h] [rbp-B0h]
  int v49; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int64 v50; // [rsp+58h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+60h] [rbp-98h] BYREF
  ULONG_PTR v52[2]; // [rsp+70h] [rbp-88h]
  __int128 v53; // [rsp+80h] [rbp-78h]
  _BYTE v54[32]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v55; // [rsp+B0h] [rbp-48h]
  __int64 v56; // [rsp+108h] [rbp+10h] BYREF
  unsigned int v57; // [rsp+118h] [rbp+20h]

  v57 = a4;
  LOBYTE(v56) = 0;
  v55 = 0LL;
  v50 = 0LL;
  v5 = a4;
  v7 = a2;
  *a5 = 0;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  *(_OWORD *)v52 = 0LL;
  v53 = 0LL;
  memset(v54, 0, sizeof(v54));
  if ( a2 )
  {
    v7 = &v50;
    v50 = *a2;
  }
  v48 = 0LL;
  v8 = 0LL;
  v9 = MiCanFileBeTruncatedInternal(a1, v7, 1, (a4 >> 1) & 1, &v56);
  v10 = v56;
  v11 = (__int64)v9;
  if ( (_BYTE)v56 == 17 )
    return 0;
  if ( !v9 )
    return 1;
  if ( (v5 & 1) == 0 && *((_DWORD *)v9 + 22) || !*((_QWORD *)v9 + 8) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v9 + 18);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = v56;
          v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v56 + 1));
          v27 = (v37 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v37;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v10);
    return 0;
  }
  *((_DWORD *)v9 + 14) |= 0x8000u;
  if ( !(unsigned int)MiComputeDataFlushRange((_DWORD)v9, v10, (_DWORD)v7, a3, 1, (__int64)BugCheckParameter2) )
    return 1;
  v13 = BugCheckParameter2[1];
  v14 = 17;
  v15 = 1;
  v16 = v52[1];
  LOBYTE(v56) = 17;
  v45 = 1;
  while ( 1 )
  {
    v47 = v16;
    if ( v14 == 17 )
    {
      v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 72));
      LOBYTE(v56) = v14;
    }
    if ( (_QWORD)v53 == v16 )
      v17 = v52[0] + 8;
    else
      v17 = *(_QWORD *)(v16 + 8) + 8LL * (*(_DWORD *)(v16 + 44) - (*(_DWORD *)(v16 + 52) & 0x3FFFFFFFu));
    v18 = MiControlAreaUsingExtents(v11);
    if ( !v19 )
    {
      v28 = v47;
      if ( v47 == (_QWORD)v53 )
        goto LABEL_47;
      goto LABEL_46;
    }
    if ( *(_DWORD *)(v47 + 108) )
      break;
    MiIncrementSubsectionViewCount(v47);
    if ( (*(_BYTE *)(v47 + 34) & 8) != 0 )
      MiRemoveUnusedSubsection(v47);
    *(_WORD *)(v47 + 32) |= 1u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v38 = KeGetCurrentIrql();
        if ( v38 <= 0xFu && v14 <= 0xFu && v38 >= 2u )
        {
          v39 = KeGetCurrentPrcb();
          v40 = v39->SchedulerAssist;
          v14 = v56;
          v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v56 + 1));
          v27 = (v41 & v40[5]) == 0;
          v40[5] &= v41;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(v39);
        }
      }
    }
    __writecr8(v14);
    if ( v18 )
      MiChangingSubsectionProtos(v47);
    v20 = 0;
    if ( v13 < v17 )
    {
      while ( 1 )
      {
        v46 = MiCheckProtoPtePageState(v13);
        if ( !v46 )
        {
          v13 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          goto LABEL_58;
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
              goto LABEL_53;
            if ( !v21 || !qword_140C4DF80 || (v21 & qword_140C4DF80) != 0 )
            {
              v22 = *(_QWORD *)v13;
              if ( qword_140C4DF80 && (v21 & 0x10) == 0 )
                v22 = v21 & ~qword_140C4DF80;
LABEL_32:
              if ( (*(_QWORD *)(48 * ((v22 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
                break;
            }
          }
          v23 = 48 * ((v22 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v49 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v49);
            while ( *(__int64 *)(v23 + 24) < 0 );
          }
          if ( *(_QWORD *)v13 == v21 )
            break;
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        if ( !v23 )
        {
LABEL_53:
          v13 += 8LL;
          goto LABEL_58;
        }
        BugCheckParameter4 = *(_QWORD *)v13;
        if ( !(unsigned int)MiPteInShadowRange(v13)
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
              v43 = *((_QWORD *)&Flink->Flink + ((v13 >> 3) & 0x1FF));
              v44 = BugCheckParameter4 | 0x20;
              if ( (v43 & 0x20) == 0 )
                v44 = BugCheckParameter4;
              BugCheckParameter4 = v44;
              if ( (v43 & 0x42) != 0 )
                BugCheckParameter4 = v44 | 0x42;
            }
          }
LABEL_37:
          if ( (BugCheckParameter4 & 1) != 0 )
            goto LABEL_41;
        }
        if ( (*(_DWORD *)(v23 + 16) & 0x401) != 0x400LL || (*(_QWORD *)(v23 + 8) | 0x8000000000000000uLL) != v13 )
          KeBugCheckEx(0xDEu, 2uLL, v13, *(_QWORD *)(v23 + 8), BugCheckParameter4);
        v26 = *(_BYTE *)(v23 + 34);
        if ( (((v57 & 2) != 0) & (v26 >> 4)) != 0 )
        {
LABEL_41:
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v15 = 0;
          v45 = 0;
          break;
        }
        if ( (v26 & 8) != 0 )
        {
          MiWaitForPageWriteCompletion(v23, v11, v46, 17);
          goto LABEL_58;
        }
        if ( v18 && *(_WORD *)(v23 + 32) )
          *a5 = 1;
        LOBYTE(v25) = 17;
        MiDeleteTransitionPte(v13, v23, v25, 1);
        v20 = 1;
        if ( *(_QWORD *)(v11 + 32) )
        {
          v13 += 8LL;
          if ( (v13 & 0x78) == 0 && KeShouldYieldProcessor() )
            MiUnlockProtoPoolPage(v46, 17LL);
LABEL_58:
          if ( v13 < v17 )
            continue;
        }
        v15 = v45;
        break;
      }
    }
    v27 = v18 == 0;
    v28 = v47;
    if ( !v27 )
      MiSubsectionProtosCreated(v47, v54, 0LL, v20);
    LOBYTE(v56) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 72));
    v14 = v56;
    MiDecrementSubsectionViewCount(v47);
    if ( *(_QWORD *)(v47 + 96) || (*(_BYTE *)(v47 + 34) & 1) != 0 )
    {
      v8 = v48;
    }
    else
    {
      v8 = MiInsertUnusedSubsection((_QWORD *)v47) + v48;
      v48 = v8;
    }
LABEL_46:
    if ( v28 == (_QWORD)v53 || !v15 )
    {
LABEL_47:
      v29 = v45;
      goto LABEL_48;
    }
    v16 = *(_QWORD *)(v28 + 16);
    v13 = *(_QWORD *)(v16 + 8);
  }
  v29 = 0;
LABEL_48:
  v30 = MiDecrementSubsections(v52[1]) + v8;
  v31 = MiDecrementSubsections(v53);
  --*(_QWORD *)(v11 + 40);
  *(_DWORD *)(v11 + 56) &= ~4u;
  v32 = v31 + v30;
  if ( v32 )
    v33 = *(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(v11 + 60) & 0x3FF));
  else
    v33 = 0LL;
  MiCheckControlArea(v11, v14);
  if ( v32 )
    MiReturnCrossPartitionSectionCharges(v33, 1LL, v32);
  return v29;
}
