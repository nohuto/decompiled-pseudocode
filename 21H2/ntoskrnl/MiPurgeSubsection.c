/*
 * XREFs of MiPurgeSubsection @ 0x14052A4F0
 * Callers:
 *     MiDeleteCachedSubsection @ 0x140528FEC (MiDeleteCachedSubsection.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiLockLeafPage @ 0x140257C70 (MiLockLeafPage.c)
 *     MiDereferenceControlAreaPfnList @ 0x140284F70 (MiDereferenceControlAreaPfnList.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x1402DFAC0 (MiCheckProtoPtePageState.c)
 *     MiDecrementShareCount @ 0x1402E4A10 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPurgeSubsection(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 v1; // rdi
  __int64 v3; // rax
  __int64 v4; // r12
  unsigned __int8 v5; // bl
  unsigned int v6; // r13d
  unsigned __int64 v7; // rbp
  __int64 v8; // r14
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v10; // r8
  unsigned __int64 v11; // rsi
  ULONG_PTR v12; // rsi
  __int64 v13; // rbx
  int v14; // r12d
  char v15; // dl
  bool v16; // zf
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  unsigned __int8 v26; // [rsp+80h] [rbp+8h] BYREF
  int v27; // [rsp+88h] [rbp+10h] BYREF
  __int64 v28; // [rsp+90h] [rbp+18h]
  unsigned __int64 v29; // [rsp+98h] [rbp+20h]

  v1 = *(_QWORD *)(BugCheckParameter2 + 8);
  v3 = *(unsigned int *)(BugCheckParameter2 + 44);
  v4 = *(_QWORD *)BugCheckParameter2;
  v5 = 17;
  v28 = *(_QWORD *)BugCheckParameter2;
  v6 = 1;
  v26 = 17;
  v7 = 0LL;
  v29 = v1 + 8 * v3;
  if ( v1 >= v29 )
    return v6;
  while ( (v1 & 0xFFF) == 0 || v5 == 17 )
  {
    if ( v5 != 17 )
      MiUnlockProtoPoolPage(v7, v5);
    v7 = MiCheckProtoPtePageState(v1, (__int64)&v26);
    if ( v7 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
      if ( *(_QWORD *)(BugCheckParameter2 + 96) != 1LL || (*(_BYTE *)(BugCheckParameter2 + 32) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
        MiUnlockProtoPoolPage(v7, v26);
        return 0LL;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
      v5 = v26;
      break;
    }
    v1 = (v1 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_36:
    v5 = v26;
LABEL_37:
    if ( v1 >= v29 )
      goto LABEL_41;
  }
  v8 = MiLockLeafPage((unsigned __int64 *)v1, 0LL);
  BugCheckParameter4 = MI_READ_PTE_LOCK_FREE(v1);
  v11 = BugCheckParameter4;
  if ( !v8 )
  {
    if ( (BugCheckParameter4 & 0xC00) == 0 && BugCheckParameter4 )
      KeBugCheckEx(0xDEu, 4uLL, BugCheckParameter2, v1, BugCheckParameter4);
    v1 += 8LL;
    goto LABEL_37;
  }
  if ( (BugCheckParameter4 & 1) == 0 )
  {
    if ( qword_140C4DF80 )
    {
      if ( (BugCheckParameter4 & 0x10) != 0 )
        v11 = BugCheckParameter4 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v11 = ~qword_140C4DF80 & BugCheckParameter4;
    }
    v12 = (v11 >> 12) & 0xFFFFFFFFFLL;
    v8 = 48 * v12 - 0x58000000000LL;
    if ( (*(_BYTE *)(v8 + 34) & 0x10) == 0 && !*(_WORD *)(v8 + 32) )
    {
      MiDereferenceControlAreaPfnList(v4, BugCheckParameter2, v10, 2);
      v13 = *(_QWORD *)(v8 + 16);
      v14 = 0;
      if ( MiPteInShadowRange(v1) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v14 = 1;
          if ( HIBYTE(word_140C4E048) == v15 )
          {
            v16 = (v13 & 1) == 0;
            goto LABEL_28;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v16 = (v13 & 1) == 0;
LABEL_28:
          if ( !v16 )
            v13 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v1 = v13;
      if ( v14 )
        MiWritePteShadow(v1, v13);
      MiUnlinkPageFromList(48 * v12 - 0x58000000000LL, 0);
      MiInsertPageInFreeOrZeroedList(v12, 2);
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v27 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v27, v17, v18, v19);
        while ( *(__int64 *)(v7 + 24) < 0 );
      }
      MiDecrementShareCount(v7);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v4 = v28;
      v1 += 8LL;
      goto LABEL_36;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v5 = v26;
  v6 = 0;
LABEL_41:
  if ( v5 != 17 )
    MiUnlockProtoPoolPage(v7, v5);
  if ( !v6 )
  {
    v20 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
    *(_WORD *)(BugCheckParameter2 + 32) |= 1u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v20 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
          v16 = (v24 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v24;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v20);
  }
  return v6;
}
