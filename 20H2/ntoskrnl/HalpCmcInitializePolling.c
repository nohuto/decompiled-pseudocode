/*
 * XREFs of HalpCmcInitializePolling @ 0x1403C4C80
 * Callers:
 *     HalpInitializeCmc @ 0x1409A3998 (HalpInitializeCmc.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     HalpCmcInitializeErrorPacketContents @ 0x1403C4DE8 (HalpCmcInitializeErrorPacketContents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpCmcInitializePolling(__int64 a1)
{
  unsigned __int64 v2; // rbx
  int v3; // ecx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&HalpCmcFallbackLock);
  if ( !HalpCmcPollingInitialized )
  {
    HalpCmcErrorPacket = (__int64)&HalpCmcReserveErrorPacket;
    HalpCmcInitializeErrorPacketContents();
    v3 = *(_DWORD *)(a1 + 52);
    qword_140C50710 = (__int64)HalpCmcDeferredRoutine;
    qword_140C50748 = (__int64)HalpCmcWorkerRoutine;
    HalpCmcContext = v3;
    qword_140C506B8 = 8LL;
    qword_140C506C8 = (__int64)&qword_140C506C0;
    qword_140C506C0 = (__int64)&qword_140C506C0;
    dword_140C506F8 = 275;
    qword_140C50718 = (__int64)&HalpCmcContext;
    qword_140C50730 = 0LL;
    qword_140C50708 = 0LL;
    qword_140C50750 = (__int64)&HalpCmcContext;
    qword_140C50738 = 0LL;
    qword_140C506D0 = 0LL;
    dword_140C506F4 = 0;
    word_140C506F0 = 0;
    HalpCmcPollingInitialized = 1;
  }
  KxReleaseSpinLock(&HalpCmcFallbackLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v7 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
