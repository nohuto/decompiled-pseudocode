/*
 * XREFs of MiUpdatePfnBackingStore @ 0x140342520
 * Callers:
 *     MiGatherPagefilePages @ 0x140341EC0 (MiGatherPagefilePages.c)
 *     MiStoreWriteModifiedPages @ 0x140342AB0 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiTransferSoftwarePte @ 0x140347114 (MiTransferSoftwarePte.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiUpdatePfnBackingStore(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned __int8 v4; // di
  __int64 v9; // rbx
  int v10; // r15d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // r8
  bool v13; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax

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
      if ( HIBYTE(word_140C4DE88) )
        goto LABEL_4;
      v13 = (v9 & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_4;
      v13 = (v9 & 1) == 0;
    }
    if ( !v13 )
    {
      LOBYTE(CurrentThread) = 0;
      v9 |= 0x8000000000000000uLL;
    }
  }
LABEL_4:
  *(_QWORD *)(a1 + 16) = v9;
  if ( v10 )
    LOBYTE(CurrentThread) = MiWritePteShadow(a1 + 16, v9, v12);
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
          v17 = ~(unsigned __int16)(-1LL << (v4 + 1));
          v13 = (v17 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v17;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    LOBYTE(CurrentThread) = v4;
    __writecr8(v4);
  }
  return (char)CurrentThread;
}
