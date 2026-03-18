/*
 * XREFs of KzSetIrqlUnsafe @ 0x14050D7D0
 * Callers:
 *     KiChainedDispatch @ 0x1403F8370 (KiChainedDispatch.c)
 *     KiScanInterruptObjectList @ 0x1403F8600 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1403F87E0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403F8930 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1403F8A80 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatch @ 0x1403F8B90 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1403F8E20 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1403F90B0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1403F9340 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1403F95C0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1403FA0A0 (KxIsrLinkage.c)
 *     KiIdleLoop @ 0x1403FABA0 (KiIdleLoop.c)
 *     KiApcInterrupt @ 0x1403FB140 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1403FC540 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1403FC7E0 (KiVmbusInterruptDispatch.c)
 *     KiHvInterruptSubDispatch @ 0x1403FCA60 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1403FCBC0 (KiVmbusInterruptSubDispatch.c)
 *     KiSwInterrupt @ 0x1403FCD20 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1403FD2E0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1403FD7D0 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x1403FDD30 (KiIpiInterruptSubDispatch.c)
 *     KiNmiInterruptStart @ 0x140402340 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x140405C40 (KiMcheckAbort.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int8 __fastcall KzSetIrqlUnsafe(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v3; // cl
  struct _KPRCB *v4; // rax
  unsigned __int8 v5; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // edx
  bool v9; // zf

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > a1 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v5 = KeGetCurrentIrql();
        if ( v5 <= 0xFu && a1 <= 0xFu && v5 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v8 = ~(unsigned __int16)(-1LL << (a1 + 1));
          v9 = (v8 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v8;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v1);
  }
  else
  {
    v3 = KeGetCurrentIrql();
    __writecr8(v1);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v3 <= 0xFu && (unsigned __int8)(v1 - 2) <= 0xDu )
    {
      v4 = KeGetCurrentPrcb();
      *((_DWORD *)v4->SchedulerAssist + 5) |= ((1LL << ((unsigned __int8)v1 + 1)) - 1) & ~((1LL << (v3 + 1)) - 1) & 0xFFFFFFFC;
    }
  }
  return CurrentIrql;
}
