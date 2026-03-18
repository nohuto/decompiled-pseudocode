/*
 * XREFs of KzSetIrqlUnsafe @ 0x140569E70
 * Callers:
 *     KiChainedDispatch @ 0x140420C10 (KiChainedDispatch.c)
 *     KiScanInterruptObjectList @ 0x140421050 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x140421230 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140421380 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1404214D0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatch @ 0x1404215E0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140421A20 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140421E60 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1404222A0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1404226D0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140423360 (KxIsrLinkage.c)
 *     KiIdleLoop @ 0x140424300 (KiIdleLoop.c)
 *     KiApcInterrupt @ 0x140425050 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140426820 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140426C70 (KiVmbusInterruptDispatch.c)
 *     KiHvInterruptSubDispatch @ 0x1404270A0 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x140427200 (KiVmbusInterruptSubDispatch.c)
 *     KiSwInterrupt @ 0x140427360 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140427B30 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140428220 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x140428980 (KiIpiInterruptSubDispatch.c)
 *     KiNmiInterruptStart @ 0x14042CF40 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x140430F00 (KiMcheckAbort.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
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
