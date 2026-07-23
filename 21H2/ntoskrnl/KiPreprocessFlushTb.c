/*
 * XREFs of KiPreprocessFlushTb @ 0x1402D5F30
 * Callers:
 *     KeFlushSingleTb @ 0x1402599A8 (KeFlushSingleTb.c)
 *     KeFlushTb @ 0x1402D4970 (KeFlushTb.c)
 *     KeFlushEntireTb @ 0x1403B7260 (KeFlushEntireTb.c)
 * Callees:
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x140353D70 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiIsFlushEntire @ 0x140519CCC (KiIsFlushEntire.c)
 */

char __fastcall KiPreprocessFlushTb(char a1, unsigned int a2, int a3, _BYTE *a4, unsigned __int8 *a5)
{
  char result; // al
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _KTHREAD *CurrentThread; // rax
  unsigned __int8 *v10; // r11
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v12; // rsi
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r9
  int v15; // eax
  _DWORD *v16; // r8
  bool v17; // zf
  signed __int32 v18[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (HvlEnlightenments & 4) == 0 )
    goto LABEL_2;
  if ( (HvlEnlightenments & 2) != 0 )
    goto LABEL_15;
  if ( a1 )
  {
    if ( (HvlEnlightenments & 0x800000) != 0 && (unsigned __int8)KiIsFlushEntire(a2) )
      goto LABEL_15;
  }
  else if ( (KiFlushPcid & 3) == 1 )
  {
LABEL_15:
    *a4 = 1;
    return 0;
  }
  if ( (_DWORD)KeNumberProcessors_0 == 1 )
  {
LABEL_2:
    *a4 = 0;
    return 0;
  }
  if ( a3 )
    goto LABEL_15;
  _InterlockedOr(v18, 0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  *a5 = CurrentIrql;
  if ( (unsigned int)KiAffinityContainsProcessorsOtherThanSelf(
                       CurrentPrcb,
                       &CurrentThread->ApcState.Process->ActiveProcessors) )
  {
    v12 = *v10;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v13 = KeGetCurrentIrql();
        if ( v13 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v13 >= 2u )
        {
          v14 = KeGetCurrentPrcb();
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
          v16 = v14->SchedulerAssist;
          v17 = (v15 & v16[5]) == 0;
          v16[5] &= v15;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(v14);
        }
      }
    }
    __writecr8(v12);
    result = 0;
    *a4 = 1;
  }
  else
  {
    *a4 = 0;
    return 1;
  }
  return result;
}
