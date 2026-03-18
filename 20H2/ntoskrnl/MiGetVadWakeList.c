/*
 * XREFs of MiGetVadWakeList @ 0x140230080
 * Callers:
 *     MiReleaseVadEventBlocks @ 0x140624980 (MiReleaseVadEventBlocks.c)
 *     MiFreePlaceholderStorage @ 0x1406E4134 (MiFreePlaceholderStorage.c)
 *     MiFreeRotateView @ 0x1408CADBC (MiFreeRotateView.c)
 *     MiFreeVadEventBitmap @ 0x1408CAF98 (MiFreeVadEventBitmap.c)
 *     MiDeletePartialCloneVads @ 0x1408DBD68 (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     ExpAcquireSpinLockExclusive @ 0x14027F330 (ExpAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B4198 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 *__fastcall MiGetVadWakeList(__int64 a1, int a2, __int64 a3)
{
  __int64 **v3; // r14
  __int64 *v4; // rbp
  _KPROCESS *Process; // rbx
  LONG *v7; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 *v9; // rcx
  __int64 *v11; // rdx
  _DWORD *SchedulerAssist; // r9

  v3 = (__int64 **)(a1 + 56);
  v4 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[1].IdealProcessorPadding[10] & 7) == 2 )
    v7 = &dword_140C4F600;
  else
    v7 = (LONG *)&Process[1].IdealNode[2];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a3 = (unsigned int)SchedulerAssist[5];
    SchedulerAssist[5] = a3 | ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v7, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v7, CurrentIrql, a3);
  v7[1] = 0;
  v9 = *v3;
  if ( *v3 )
  {
    do
    {
      v11 = (__int64 *)*v9;
      if ( (a2 & (_DWORD)v9[8]) != 0 )
      {
        *v9 = (__int64)v4;
        v4 = v9;
        *v3 = v11;
      }
      else
      {
        v3 = (__int64 **)v9;
      }
      v9 = v11;
    }
    while ( v11 );
  }
  MiUnlockWorkingSetExclusive(&Process[1].ActiveProcessorsPadding[6], CurrentIrql);
  return v4;
}
