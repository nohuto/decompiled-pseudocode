/*
 * XREFs of MiGetVadWakeList @ 0x14030E280
 * Callers:
 *     MiFreePlaceholderStorage @ 0x1406EBA90 (MiFreePlaceholderStorage.c)
 *     MiReleaseVadEventBlocks @ 0x1407B97B0 (MiReleaseVadEventBlocks.c)
 *     MiFreeRotateView @ 0x14096D000 (MiFreeRotateView.c)
 *     MiFreeVadEventBitmap @ 0x14096D778 (MiFreeVadEventBitmap.c)
 *     MiDeleteVadHotPatchState @ 0x140972F98 (MiDeleteVadHotPatchState.c)
 *     MiDeletePartialCloneVads @ 0x140980B94 (MiDeletePartialCloneVads.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x14030F870 (ExpAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140461A66 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

unsigned __int64 __fastcall MiGetVadWakeList(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdi
  _QWORD *v5; // r15
  _KPROCESS *Process; // rbx
  unsigned __int16 *v7; // rbp
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v9; // rcx
  unsigned __int64 v11; // rdx
  _DWORD *SchedulerAssist; // r9

  v2 = 0LL;
  v5 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[1].IdealProcessor[30] & 7) == 2 )
    v7 = (unsigned __int16 *)&unk_140C53D00;
  else
    v7 = &Process[1].IdealNode[2];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v7, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v7, CurrentIrql);
  *((_DWORD *)v7 + 1) = 0;
  v9 = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v9 )
  {
    do
    {
      v11 = *(_QWORD *)v9;
      if ( (a2 & *(_DWORD *)(v9 + 64)) != 0 )
      {
        *(_QWORD *)v9 = v2;
        v2 = v9;
        if ( v5 )
          *v5 = v11;
        else
          *(_QWORD *)(a1 + 56) = v11 | *(_DWORD *)(a1 + 56) & 0xF;
      }
      else
      {
        v5 = (_QWORD *)v9;
      }
      v9 = v11;
    }
    while ( v11 );
  }
  MiUnlockWorkingSetExclusive(&Process[1].ActiveProcessors.StaticBitmap[26], CurrentIrql);
  return v2;
}
