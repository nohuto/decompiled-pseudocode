/*
 * XREFs of KiPreprocessFlushTb @ 0x1402F3FE0
 * Callers:
 *     KeFlushSingleTb @ 0x1402EA644 (KeFlushSingleTb.c)
 *     KeFlushTb @ 0x1402F391C (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x1402F3C40 (KeFlushMultipleRangeTb.c)
 *     KeFlushEntireTb @ 0x1403C39C0 (KeFlushEntireTb.c)
 * Callees:
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x1402F4380 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiIsFlushEntire @ 0x14056F694 (KiIsFlushEntire.c)
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
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  int v16; // eax
  _DWORD *v17; // r8
  bool v18; // zf
  signed __int32 v19[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (HvlEnlightenments & 4) == 0 )
    goto LABEL_2;
  if ( (HvlEnlightenments & 2) != 0 )
    goto LABEL_16;
  if ( !a1 )
  {
    if ( (KiFlushPcid & 3) != 1 )
      goto LABEL_6;
LABEL_16:
    *a4 = 1;
    return 0;
  }
  if ( (HvlEnlightenments & 0x800000) != 0 )
  {
    if ( (unsigned __int8)KiIsFlushEntire(a2) )
      goto LABEL_16;
  }
LABEL_6:
  if ( (_DWORD)KeNumberProcessors_0 == 1 )
  {
LABEL_2:
    *a4 = 0;
    return 0;
  }
  if ( a3 )
    goto LABEL_16;
  _InterlockedOr(v19, 0);
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
        v14 = KeGetCurrentIrql();
        if ( v14 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v14 >= 2u )
        {
          v15 = KeGetCurrentPrcb();
          v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
          v17 = v15->SchedulerAssist;
          v18 = (v16 & v17[5]) == 0;
          v17[5] &= v16;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v15);
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
