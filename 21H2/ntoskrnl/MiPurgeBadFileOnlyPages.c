/*
 * XREFs of MiPurgeBadFileOnlyPages @ 0x1405A032C
 * Callers:
 *     MiDeleteExtentPfns @ 0x14059E2C0 (MiDeleteExtentPfns.c)
 * Callees:
 *     MiPreventControlAreaDeletion @ 0x14023F8E8 (MiPreventControlAreaDeletion.c)
 *     MiDecrementSubsection @ 0x14023F9CC (MiDecrementSubsection.c)
 *     MiAddLockedPageCharge @ 0x140274508 (MiAddLockedPageCharge.c)
 *     MiReleaseControlAreaWaiters @ 0x1402879F8 (MiReleaseControlAreaWaiters.c)
 *     MiDecrementModifiedWriteCount @ 0x140287A8C (MiDecrementModifiedWriteCount.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRemoveLockedPageCharge @ 0x1403377E0 (MiRemoveLockedPageCharge.c)
 *     MiPfnReferenceCountIsZero @ 0x140338500 (MiPfnReferenceCountIsZero.c)
 *     MiSetPfnTbFlushStamp @ 0x14033C33C (MiSetPfnTbFlushStamp.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiPurgeFileOnlyPfn @ 0x1405A0774 (MiPurgeFileOnlyPfn.c)
 *     MiUnlinkPageFromBadList @ 0x1405ADEB8 (MiUnlinkPageFromBadList.c)
 */

__int64 MiPurgeBadFileOnlyPages()
{
  KIRQL CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  ULONG_PTR v2; // r12
  __int64 v3; // rdi
  unsigned __int8 v4; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v6; // r9
  int v7; // eax
  bool v8; // zf
  __int64 v9; // r13
  __int64 v10; // r8
  __int64 v11; // r14
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r10
  _DWORD *v14; // r9
  int v15; // eax
  __int64 v16; // rsi
  KIRQL v17; // al
  unsigned __int64 v18; // r15
  __int64 *v19; // rax
  volatile LONG *v20; // rcx
  __int64 *v21; // r14
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  _DWORD *v24; // r9
  int v25; // eax
  unsigned __int64 v26; // rbx
  __int16 v27; // r14
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // eax
  unsigned __int8 v32; // al
  char v33; // cl
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r9
  int v36; // eax
  _DWORD *v37; // r8
  __int64 result; // rax
  __int64 *v39; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp+10h] BYREF

  BugCheckParameter2 = 0LL;
  v39 = 0LL;
  do
  {
    while ( 1 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C56920);
      v2 = qword_140C4F258;
      byte_140C4F2EA = 0;
      if ( qword_140C4F258 == 0x3FFFFFFFFFLL )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C56920);
        if ( !KiIrqlFlags )
          goto LABEL_66;
        if ( (KiIrqlFlags & 1) == 0 )
          goto LABEL_66;
        v34 = KeGetCurrentIrql();
        if ( v34 > 0xFu || CurrentIrql > 0xFu || v34 < 2u )
          goto LABEL_66;
        v33 = CurrentIrql + 1;
        goto LABEL_64;
      }
      v3 = 48 * qword_140C4F258 - 0x220000000000LL;
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
        break;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C56920);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v4 = KeGetCurrentIrql();
          if ( v4 <= 0xFu && CurrentIrql <= 0xFu && v4 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v6 = CurrentPrcb->SchedulerAssist;
            v7 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v8 = (v7 & v6[5]) == 0;
            v6[5] &= v7;
            if ( v8 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    v9 = qword_140C4F248;
    MiUnlinkPageFromBadList(48 * v2 - 0x220000000000LL, 128LL);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C56920);
    MiAddLockedPageCharge(48 * v2 - 0x220000000000LL, 1LL, v10);
    v39 = 0LL;
    BugCheckParameter2 = 0LL;
    v11 = MiPreventControlAreaDeletion(48 * v2 - 0x220000000000LL, (__int64 *)&BugCheckParameter2, (__int64 *)&v39);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v12 = KeGetCurrentIrql();
        if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
        {
          v13 = KeGetCurrentPrcb();
          v14 = v13->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v8 = (v15 & v14[5]) == 0;
          v14[5] &= v15;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick((__int64)v13);
        }
      }
    }
    __writecr8(CurrentIrql);
    LODWORD(v16) = 0;
    if ( v11 )
    {
      if ( v39 )
        MiReleaseControlAreaWaiters(v39);
      MiPurgeFileOnlyPfn(48 * v2 - 0x220000000000LL);
      v16 = (*(_QWORD *)(v3 + 24) >> 62) & 1LL;
      if ( BugCheckParameter2 )
        MiDecrementSubsection((__int64 *)BugCheckParameter2);
      v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 72));
      *(_DWORD *)(v11 + 56) &= ~4u;
      v18 = v17;
      v19 = (__int64 *)MiDecrementModifiedWriteCount(v11, 1);
      v20 = (volatile LONG *)(v11 + 72);
      v39 = v19;
      v21 = v19;
      ExReleaseSpinLockExclusiveFromDpcLevel(v20);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v22 = KeGetCurrentIrql();
          if ( v22 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v22 >= 2u )
          {
            v23 = KeGetCurrentPrcb();
            v24 = v23->SchedulerAssist;
            v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
            v8 = (v25 & v24[5]) == 0;
            v24[5] &= v25;
            if ( v8 )
              KiRemoveSystemWorkPriorityKick((__int64)v23);
            v21 = v39;
          }
        }
      }
      __writecr8(v18);
      if ( v21 )
        MiReleaseControlAreaWaiters(v21);
    }
    v26 = (unsigned __int8)MiLockPageInline(48 * v2 - 0x220000000000LL);
    if ( (unsigned int)MiRemoveLockedPageCharge(48 * v2 - 0x220000000000LL) )
    {
      MiSetPfnTbFlushStamp(48 * v2 - 0x220000000000LL, 0, 1);
      MiPfnReferenceCountIsZero(48 * v2 - 0x220000000000LL, v2);
    }
    v27 = *(_WORD *)(v3 + 32);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v28 = KeGetCurrentIrql();
        if ( v28 <= 0xFu && (unsigned __int8)v26 <= 0xFu && v28 >= 2u )
        {
          v29 = KeGetCurrentPrcb();
          v30 = v29->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
          v8 = (v31 & v30[5]) == 0;
          v30[5] &= v31;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick((__int64)v29);
        }
      }
    }
    __writecr8(v26);
  }
  while ( !v27 && (_DWORD)v16 || v9 != 1 );
  CurrentIrql = ExAcquireSpinLockExclusive(&dword_140C56920);
  if ( qword_140C4F248 )
    byte_140C4F2EA = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C56920);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v32 = KeGetCurrentIrql();
      if ( v32 <= 0xFu && CurrentIrql <= 0xFu && v32 >= 2u )
      {
        v33 = CurrentIrql + 1;
LABEL_64:
        v35 = KeGetCurrentPrcb();
        v36 = ~(unsigned __int16)(-1LL << v33);
        v37 = v35->SchedulerAssist;
        v8 = (v36 & v37[5]) == 0;
        v37[5] &= v36;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick((__int64)v35);
      }
    }
  }
LABEL_66:
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
