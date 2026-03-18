/*
 * XREFs of MiPurgeSubsection @ 0x140524E00
 * Callers:
 *     MiDeleteCachedSubsection @ 0x1405238FC (MiDeleteCachedSubsection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x14022C550 (MiCheckProtoPtePageState.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14023E080 (MiInsertPageInFreeOrZeroedList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiUnlinkPageFromList @ 0x1402A9D50 (MiUnlinkPageFromList.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiLockLeafPage @ 0x1402F6AF0 (MiLockLeafPage.c)
 *     MiDecrementShareCount @ 0x1402F7060 (MiDecrementShareCount.c)
 *     MiDereferenceControlAreaPfnList @ 0x14032D0C0 (MiDereferenceControlAreaPfnList.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPurgeSubsection(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // r12
  unsigned __int8 v8; // bl
  unsigned int v9; // r13d
  unsigned __int64 v10; // rbp
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
  __int64 v29; // rdx
  unsigned __int8 v30; // [rsp+80h] [rbp+8h] BYREF
  int v31; // [rsp+88h] [rbp+10h] BYREF
  __int64 v32; // [rsp+90h] [rbp+18h]
  unsigned __int64 v33; // [rsp+98h] [rbp+20h]

  v4 = *(_QWORD *)(BugCheckParameter2 + 8);
  v6 = *(unsigned int *)(BugCheckParameter2 + 44);
  v7 = *(_QWORD *)BugCheckParameter2;
  v8 = 17;
  v32 = *(_QWORD *)BugCheckParameter2;
  v9 = 1;
  v30 = 17;
  v10 = 0LL;
  v33 = v4 + 8 * v6;
  if ( v4 >= v33 )
    return v9;
  while ( (v4 & 0xFFF) == 0 || v8 == 17 )
  {
    if ( v8 != 17 )
    {
      LOBYTE(a2) = v8;
      MiUnlockProtoPoolPage(v10, a2);
    }
    v10 = MiCheckProtoPtePageState(v4, &v30);
    if ( v10 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
      if ( *(_QWORD *)(BugCheckParameter2 + 96) != 1LL || (*(_BYTE *)(BugCheckParameter2 + 32) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
        LOBYTE(v29) = v30;
        MiUnlockProtoPoolPage(v10, v29);
        return 0LL;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
      v8 = v30;
      break;
    }
    v4 = (v4 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_36:
    v8 = v30;
LABEL_37:
    if ( v4 >= v33 )
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
    if ( qword_140C4DD40 )
    {
      if ( (BugCheckParameter4 & 0x10) != 0 )
        v13 = BugCheckParameter4 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v13 = ~qword_140C4DD40 & BugCheckParameter4;
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
          if ( HIBYTE(word_140C4DE08) == v18 )
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
      v31 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v31, v20, v21, v22);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
      MiDecrementShareCount(v10);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v7 = v32;
      v4 += 8LL;
      goto LABEL_36;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v8 = v30;
  v9 = 0;
LABEL_41:
  if ( v8 != 17 )
  {
    LOBYTE(a2) = v8;
    MiUnlockProtoPoolPage(v10, a2);
  }
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
