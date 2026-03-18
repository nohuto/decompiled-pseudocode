/*
 * XREFs of ExpWaitForSpinLockExclusiveAndAcquire @ 0x14023C7F0
 * Callers:
 *     CcGetPartition @ 0x14022E770 (CcGetPartition.c)
 *     CcSetDirtyPinnedData @ 0x14022FAB0 (CcSetDirtyPinnedData.c)
 *     CcUnpinFileDataEx @ 0x1402305D0 (CcUnpinFileDataEx.c)
 *     ExDeleteResourceLite @ 0x140231040 (ExDeleteResourceLite.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     MiIdentifyPfn @ 0x14025F2A0 (MiIdentifyPfn.c)
 *     ExpAcquireSpinLockExclusive @ 0x14026C5F0 (ExpAcquireSpinLockExclusive.c)
 *     MmGetControlAreaPartition @ 0x14027CB20 (MmGetControlAreaPartition.c)
 *     CcGetVirtualAddress @ 0x140288400 (CcGetVirtualAddress.c)
 *     MiMakePageAvoidRead @ 0x14028B560 (MiMakePageAvoidRead.c)
 *     MiZeroLargePages @ 0x1402946C0 (MiZeroLargePages.c)
 *     MiZeroPage @ 0x1402954B0 (MiZeroPage.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiPfPutPagesInTransition @ 0x1402BA1E0 (MiPfPutPagesInTransition.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14038CC10 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14038D9F0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpWaitForSpinLockExclusiveAndAcquire(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *SchedulerAssist)
{
  unsigned int v4; // ebx
  unsigned __int8 v5; // di
  volatile signed __int32 *v6; // rsi
  signed __int32 v7; // eax
  struct _KPRCB *v8; // rbp
  _DWORD *v9; // rcx
  signed __int32 v11; // ett
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v14; // eax
  bool v15; // zf
  int v16; // eax
  int v17; // eax
  __int64 v18; // [rsp+20h] [rbp-8h]

  v4 = 0;
  v5 = a2;
  v6 = (volatile signed __int32 *)a1;
  while ( 1 )
  {
    v7 = *v6;
    while ( v7 < 0 )
    {
      if ( (v7 & 0x40000000) == 0 )
      {
        a1 = (unsigned int)v7;
        LODWORD(a1) = v7 | 0x40000000;
        v11 = v7;
        v7 = _InterlockedCompareExchange(v6, v7 | 0x40000000, v7);
        if ( v11 != v7 )
          continue;
      }
      if ( v5 != 0xFF )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              a1 = (unsigned int)v5 + 1;
              a2 = -1LL << (v5 + 1);
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v14 = ~(unsigned __int16)a2;
              v15 = (v14 & SchedulerAssist[5]) == 0;
              a3 = (unsigned int)v14 & SchedulerAssist[5];
              SchedulerAssist[5] = a3;
              if ( v15 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v5);
      }
      if ( (++v4 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3, SchedulerAssist, v18) )
      {
        HvlNotifyLongSpinWait(v4);
      }
      else
      {
        _mm_pause();
      }
      if ( v5 != 0xFF )
      {
        v5 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && v5 <= 0xFu )
          {
            a1 = (unsigned int)v5 + 1;
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            a2 = (-1LL << (v5 + 1)) & 4;
            a3 = (unsigned int)a2 | SchedulerAssist[5];
            SchedulerAssist[5] = a3;
          }
        }
      }
      v7 = *v6;
    }
    v8 = KeGetCurrentPrcb();
    v9 = v8->SchedulerAssist;
    if ( v9 )
    {
      if ( v8->NestingLevel <= 1u )
      {
        v16 = v9[6];
        v9[6] = v16 + 1;
        if ( v16 == -1 )
          KiRemoveSystemWorkPriorityKick(v8);
      }
    }
    if ( !_interlockedbittestandset(v6, 0x1Fu) )
      break;
    a1 = (unsigned __int64)v8->SchedulerAssist;
    if ( a1 )
    {
      if ( v8->NestingLevel <= 1u )
      {
        v17 = *(_DWORD *)(a1 + 24) - 1;
        *(_DWORD *)(a1 + 24) = v17;
        if ( !v17 )
          KiRemoveSystemWorkPriorityKick(v8);
      }
    }
  }
  return v4;
}
