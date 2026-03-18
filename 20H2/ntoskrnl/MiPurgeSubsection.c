/*
 * XREFs of MiPurgeSubsection @ 0x1405287D0
 * Callers:
 *     MiDeleteCachedSubsection @ 0x1405272CC (MiDeleteCachedSubsection.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14022EA40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkPageFromList @ 0x140279090 (MiUnlinkPageFromList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementShareCount @ 0x140290770 (MiDecrementShareCount.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C3730 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x1402C9A90 (MiCheckProtoPtePageState.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiDereferenceControlAreaPfnList @ 0x140300800 (MiDereferenceControlAreaPfnList.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiLockLeafPage @ 0x14034A220 (MiLockLeafPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPurgeSubsection(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // r12
  unsigned __int8 v8; // bl
  unsigned int v9; // r13d
  __int64 v10; // rbp
  __int64 v11; // r14
  ULONG_PTR BugCheckParameter4; // rax
  unsigned __int64 v13; // rsi
  ULONG_PTR v14; // rsi
  __int64 v15; // rbx
  int v16; // r12d
  __int64 v17; // r8
  char v18; // dl
  bool v19; // zf
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  unsigned __int8 v29; // [rsp+80h] [rbp+8h] BYREF
  int v30; // [rsp+88h] [rbp+10h] BYREF
  __int64 v31; // [rsp+90h] [rbp+18h]
  unsigned __int64 v32; // [rsp+98h] [rbp+20h]

  v4 = *(_QWORD *)(BugCheckParameter2 + 8);
  v6 = *(unsigned int *)(BugCheckParameter2 + 44);
  v7 = *(_QWORD *)BugCheckParameter2;
  v8 = 17;
  v31 = *(_QWORD *)BugCheckParameter2;
  v9 = 1;
  v29 = 17;
  v10 = 0LL;
  v32 = v4 + 8 * v6;
  if ( v4 >= v32 )
    return v9;
  while ( (v4 & 0xFFF) == 0 || v8 == 17 )
  {
    if ( v8 != 17 )
      MiUnlockProtoPoolPage(v10, v8);
    v10 = MiCheckProtoPtePageState(v4, (__int64)&v29);
    if ( v10 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
      if ( *(_QWORD *)(BugCheckParameter2 + 96) != 1LL || (*(_BYTE *)(BugCheckParameter2 + 32) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
        MiUnlockProtoPoolPage(v10, v29);
        return 0LL;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
      v8 = v29;
      break;
    }
    v4 = (v4 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_36:
    v8 = v29;
LABEL_37:
    if ( v4 >= v32 )
      goto LABEL_41;
  }
  v11 = MiLockLeafPage((__int64 *)v4, 0, a3, a4);
  BugCheckParameter4 = MI_READ_PTE_LOCK_FREE(v4);
  v13 = BugCheckParameter4;
  if ( !v11 )
  {
    if ( (BugCheckParameter4 & 0xC00) == 0 && BugCheckParameter4 )
      KeBugCheckEx(0xDEu, 4uLL, BugCheckParameter2, v4, BugCheckParameter4);
    v4 += 8LL;
    goto LABEL_37;
  }
  if ( (BugCheckParameter4 & 1) == 0 )
  {
    if ( qword_140C4DDC0 )
    {
      if ( (BugCheckParameter4 & 0x10) != 0 )
        v13 = BugCheckParameter4 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v13 = ~qword_140C4DDC0 & BugCheckParameter4;
    }
    v14 = (v13 >> 12) & 0xFFFFFFFFFLL;
    v11 = 48 * v14 - 0x58000000000LL;
    if ( (*(_BYTE *)(v11 + 34) & 0x10) == 0 && !*(_WORD *)(v11 + 32) )
    {
      MiDereferenceControlAreaPfnList(v7, BugCheckParameter2, a3, 2LL);
      v15 = *(_QWORD *)(v11 + 16);
      v16 = 0;
      if ( MiPteInShadowRange(v4) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v16 = 1;
          if ( HIBYTE(word_140C4DE88) == v18 )
          {
            v19 = (v15 & 1) == 0;
            goto LABEL_28;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v19 = (v15 & 1) == 0;
LABEL_28:
          if ( !v19 )
            v15 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v4 = v15;
      if ( v16 )
        MiWritePteShadow(v4, v15, v17);
      MiUnlinkPageFromList(48 * v14 - 0x58000000000LL, 0);
      MiInsertPageInFreeOrZeroedList(v14, 2);
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v30 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v30, v20, v21, v22);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
      MiDecrementShareCount(v10);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v7 = v31;
      v4 += 8LL;
      goto LABEL_36;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v8 = v29;
  v9 = 0;
LABEL_41:
  if ( v8 != 17 )
    MiUnlockProtoPoolPage(v10, v8);
  if ( !v9 )
  {
    v23 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 72));
    *(_WORD *)(BugCheckParameter2 + 32) |= 1u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v23 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v23 + 1));
          v19 = (v27 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v27;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v23);
  }
  return v9;
}
