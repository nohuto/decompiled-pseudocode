/*
 * XREFs of KzSetIrqlUnsafe @ 0x140511100
 * Callers:
 *     KiChainedDispatch @ 0x1403FD300 (KiChainedDispatch.c)
 *     KiScanInterruptObjectList @ 0x1403FD6C0 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1403FD8A0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403FD9F0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1403FDB40 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatch @ 0x1403FDC50 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1403FE010 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1403FE3D0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1403FE790 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1403FEB50 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1403FF760 (KxIsrLinkage.c)
 *     KiIdleLoop @ 0x140400500 (KiIdleLoop.c)
 *     KiApcInterrupt @ 0x140400A90 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140401FC0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140402390 (KiVmbusInterruptDispatch.c)
 *     KiHvInterruptSubDispatch @ 0x140402750 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1404028B0 (KiVmbusInterruptSubDispatch.c)
 *     KiSwInterrupt @ 0x140402A10 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140403100 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140403720 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x140403DB0 (KiIpiInterruptSubDispatch.c)
 *     KiNmiInterruptStart @ 0x140408700 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x14040C300 (KiMcheckAbort.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
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
