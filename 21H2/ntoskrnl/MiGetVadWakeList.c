/*
 * XREFs of MiGetVadWakeList @ 0x140322D70
 * Callers:
 *     MiFreePlaceholderStorage @ 0x1406229E8 (MiFreePlaceholderStorage.c)
 *     MiReleaseVadEventBlocks @ 0x140704770 (MiReleaseVadEventBlocks.c)
 *     MiFreeRotateView @ 0x1408C86DC (MiFreeRotateView.c)
 *     MiFreeVadEventBitmap @ 0x1408C88B8 (MiFreeVadEventBitmap.c)
 *     MiDeletePartialCloneVads @ 0x1408D9688 (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExpAcquireSpinLockExclusive @ 0x1402C1A70 (ExpAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5DD8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 *__fastcall MiGetVadWakeList(__int64 a1, int a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 **v4; // r14
  __int64 *v5; // rbp
  _KPROCESS *Process; // rbx
  LONG *v8; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 *v10; // rcx
  __int64 *v12; // rdx

  v4 = (__int64 **)(a1 + 56);
  v5 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[1].IdealProcessorPadding[10] & 7) == 2 )
    v8 = &dword_140C4F7C0;
  else
    v8 = (LONG *)&Process[1].IdealNode[2];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a3 = (unsigned int)SchedulerAssist[5];
    SchedulerAssist[5] = a3 | ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v8, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v8, CurrentIrql, a3, (__int64)SchedulerAssist);
  v8[1] = 0;
  v10 = *v4;
  if ( *v4 )
  {
    do
    {
      v12 = (__int64 *)*v10;
      if ( (a2 & (_DWORD)v10[8]) != 0 )
      {
        *v10 = (__int64)v5;
        v5 = v10;
        *v4 = v12;
      }
      else
      {
        v4 = (__int64 **)v10;
      }
      v10 = v12;
    }
    while ( v12 );
  }
  MiUnlockWorkingSetExclusive((__int64)&Process[1].ActiveProcessorsPadding[6], CurrentIrql);
  return v5;
}
