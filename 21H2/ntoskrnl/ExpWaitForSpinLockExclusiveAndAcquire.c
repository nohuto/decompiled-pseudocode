/*
 * XREFs of ExpWaitForSpinLockExclusiveAndAcquire @ 0x140220C30
 * Callers:
 *     MiDereferenceControlAreaPfnList @ 0x1402206C0 (MiDereferenceControlAreaPfnList.c)
 *     MiPfPutPagesInTransition @ 0x1402715A0 (MiPfPutPagesInTransition.c)
 *     ExDeleteResourceLite @ 0x14028A7C0 (ExDeleteResourceLite.c)
 *     MiIdentifyPfn @ 0x1402B1E40 (MiIdentifyPfn.c)
 *     MiMakePageAvoidRead @ 0x1402BBEE0 (MiMakePageAvoidRead.c)
 *     MiZeroLargePages @ 0x1402C41D0 (MiZeroLargePages.c)
 *     MiZeroPage @ 0x1402C4E50 (MiZeroPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402C8740 (MiUnlinkFreeOrZeroedPage.c)
 *     MiUnlinkNodeLargePages @ 0x1402CA5E0 (MiUnlinkNodeLargePages.c)
 *     MiAgeWorkingSet @ 0x14030C870 (MiAgeWorkingSet.c)
 *     ExpAcquireSpinLockExclusive @ 0x14030F870 (ExpAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAgePte @ 0x140332110 (MiAgePte.c)
 *     MiLogPageAccess @ 0x140333040 (MiLogPageAccess.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14039D930 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14039EA10 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpWaitForSpinLockExclusiveAndAcquire(int *a1, unsigned __int8 a2)
{
  unsigned int v2; // edi
  int i; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  _DWORD *v11; // r9
  struct _KPRCB *v12; // rbp
  _DWORD *v13; // rcx
  int v14; // eax
  _DWORD *v15; // rcx
  int v16; // eax

  v2 = 0;
  while ( 1 )
  {
    _m_prefetchw(a1);
    for ( i = *a1; *a1 < 0; i = *a1 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr(a1, 0x40000000u);
      if ( a2 != 0xFF )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && a2 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v9 = ~(unsigned __int16)(-1LL << (a2 + 1));
              v10 = (v9 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v9;
              if ( v10 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(a2);
      }
      if ( (++v2 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v2);
      }
      else
      {
        _mm_pause();
      }
      if ( a2 != 0xFF )
      {
        a2 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && a2 <= 0xFu )
          {
            v11 = KeGetCurrentPrcb()->SchedulerAssist;
            v11[5] |= (-1 << (a2 + 1)) & 4;
          }
        }
      }
    }
    v12 = KeGetCurrentPrcb();
    v13 = v12->SchedulerAssist;
    if ( v13 )
    {
      if ( v12->NestingLevel <= 1u )
      {
        v14 = v13[6];
        v13[6] = v14 + 1;
        if ( v14 == -1 )
          KiRemoveSystemWorkPriorityKick(v12);
      }
    }
    if ( !_interlockedbittestandset(a1, 0x1Fu) )
      break;
    v15 = v12->SchedulerAssist;
    if ( v15 && v12->NestingLevel <= 1u )
    {
      v16 = v15[6] - 1;
      v15[6] = v16;
      if ( !v16 )
        KiRemoveSystemWorkPriorityKick(v12);
    }
  }
  return v2;
}
