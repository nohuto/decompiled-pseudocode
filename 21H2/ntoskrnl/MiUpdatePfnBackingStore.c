/*
 * XREFs of MiUpdatePfnBackingStore @ 0x140257D84
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402548F0 (MiStoreWriteModifiedPages.c)
 *     MiGatherPagefilePages @ 0x140256844 (MiGatherPagefilePages.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiTransferSoftwarePte @ 0x140258078 (MiTransferSoftwarePte.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiUpdatePfnBackingStore(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned __int8 v4; // di
  __int64 v9; // rbx
  int v10; // r15d
  struct _KTHREAD *CurrentThread; // rax
  bool v12; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax

  v4 = 0;
  if ( !a4 )
    v4 = MiLockPageInline(a1);
  v9 = MiTransferSoftwarePte(*(_QWORD *)(a1 + 16), a2, a3, 2 * ((*(_DWORD *)(a1 + 16) >> 1) & 1u) + 1);
  v10 = 0;
  LODWORD(CurrentThread) = MiPteInShadowRange(a1 + 16);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v10 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_4;
      v12 = (v9 & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_4;
      v12 = (v9 & 1) == 0;
    }
    if ( !v12 )
    {
      LOBYTE(CurrentThread) = 0;
      v9 |= 0x8000000000000000uLL;
    }
  }
LABEL_4:
  *(_QWORD *)(a1 + 16) = v9;
  if ( v10 )
    LOBYTE(CurrentThread) = MiWritePteShadow(a1 + 16, v9);
  if ( !a4 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << (v4 + 1));
          v12 = (v16 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v16;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    LOBYTE(CurrentThread) = v4;
    __writecr8(v4);
  }
  return (char)CurrentThread;
}
