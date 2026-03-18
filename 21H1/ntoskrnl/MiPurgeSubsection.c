/*
 * XREFs of MiPurgeSubsection @ 0x1405247B0
 * Callers:
 *     MiDeleteCachedSubsection @ 0x1405232AC (MiDeleteCachedSubsection.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x140217240 (MiUnlinkPageFromList.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x1402855A0 (MiCheckProtoPtePageState.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402970B0 (MiInsertPageInFreeOrZeroedList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDereferenceControlAreaPfnList @ 0x1402F1320 (MiDereferenceControlAreaPfnList.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiLockLeafPage @ 0x140352AD0 (MiLockLeafPage.c)
 *     MiDecrementShareCount @ 0x140353040 (MiDecrementShareCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPurgeSubsection(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // r12
  char v8; // bl
  unsigned int v9; // r13d
  __int64 v10; // rbp
  __int64 v11; // r14
  ULONG_PTR BugCheckParameter4; // rax
  unsigned __int64 v13; // rsi
  ULONG_PTR v14; // rsi
  __int64 v15; // rbx
  int v16; // r12d
  char v17; // dl
  bool v18; // zf
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  char v31; // [rsp+80h] [rbp+8h] BYREF
  int v32; // [rsp+88h] [rbp+10h] BYREF
  __int64 v33; // [rsp+90h] [rbp+18h]
  unsigned __int64 v34; // [rsp+98h] [rbp+20h]

  v4 = *(_QWORD *)(BugCheckParameter2 + 8);
  v6 = *(unsigned int *)(BugCheckParameter2 + 44);
  v7 = *(_QWORD *)BugCheckParameter2;
  v8 = 17;
  v33 = *(_QWORD *)BugCheckParameter2;
  v9 = 1;
  v31 = 17;
  v10 = 0LL;
  v34 = v4 + 8 * v6;
  if ( v4 >= v34 )
    return v9;
  while ( (v4 & 0xFFF) == 0 || v8 == 17 )
  {
    if ( v8 != 17 )
    {
      LOBYTE(a2) = v8;
      MiUnlockProtoPoolPage(v10, a2, a3, a4);
    }
    v10 = MiCheckProtoPtePageState(v4, (__int64)&v31);
    if ( v10 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
      if ( *(_QWORD *)(BugCheckParameter2 + 96) != 1LL || (*(_BYTE *)(BugCheckParameter2 + 32) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
        LOBYTE(v28) = v31;
        MiUnlockProtoPoolPage(v10, v28, v29, v30);
        return 0LL;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
      v8 = v31;
      break;
    }
    v4 = (v4 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_36:
    v8 = v31;
LABEL_37:
    if ( v4 >= v34 )
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
    if ( qword_140C4DE80 )
    {
      if ( (BugCheckParameter4 & 0x10) != 0 )
        v13 = BugCheckParameter4 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v13 = ~qword_140C4DE80 & BugCheckParameter4;
    }
    v14 = (v13 >> 12) & 0xFFFFFFFFFLL;
    v11 = 48 * v14 - 0x58000000000LL;
    if ( (*(_BYTE *)(v11 + 34) & 0x10) == 0 && !*(_WORD *)(v11 + 32) )
    {
      MiDereferenceControlAreaPfnList(v7, BugCheckParameter2, a3, (_DWORD *)2);
      v15 = *(_QWORD *)(v11 + 16);
      v16 = 0;
      if ( MiPteInShadowRange(v4) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v16 = 1;
          if ( HIBYTE(word_140C4DF48) == v17 )
          {
            v18 = (v15 & 1) == 0;
            goto LABEL_28;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v18 = (v15 & 1) == 0;
LABEL_28:
          if ( !v18 )
            v15 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v4 = v15;
      if ( v16 )
        MiWritePteShadow(v4, v15);
      MiUnlinkPageFromList(48 * v14 - 0x58000000000LL, 0);
      MiInsertPageInFreeOrZeroedList(v14, 2);
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v32 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v32, v19, v20, v21);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
      MiDecrementShareCount(v10);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v7 = v33;
      v4 += 8LL;
      goto LABEL_36;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v8 = v31;
  v9 = 0;
LABEL_41:
  if ( v8 != 17 )
  {
    LOBYTE(a2) = v8;
    MiUnlockProtoPoolPage(v10, a2, a3, a4);
  }
  if ( !v9 )
  {
    v22 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 72));
    *(_WORD *)(BugCheckParameter2 + 32) |= 1u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v22 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
          v18 = (v26 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v26;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v22);
  }
  return v9;
}
