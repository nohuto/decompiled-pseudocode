/*
 * XREFs of HalpCmcInitializePolling @ 0x1403C5810
 * Callers:
 *     HalpInitializeCmc @ 0x1409A20E8 (HalpInitializeCmc.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpCmcInitializeErrorPacketContents @ 0x1403C5978 (HalpCmcInitializeErrorPacketContents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
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
    qword_140C508D0 = (__int64)HalpCmcDeferredRoutine;
    qword_140C50908 = (__int64)HalpCmcWorkerRoutine;
    HalpCmcContext = v3;
    qword_140C50878 = 8LL;
    qword_140C50888 = (__int64)&qword_140C50880;
    qword_140C50880 = (__int64)&qword_140C50880;
    dword_140C508B8 = 275;
    qword_140C508D8 = (__int64)&HalpCmcContext;
    qword_140C508F0 = 0LL;
    qword_140C508C8 = 0LL;
    qword_140C50910 = (__int64)&HalpCmcContext;
    qword_140C508F8 = 0LL;
    qword_140C50890 = 0LL;
    dword_140C508B4 = 0;
    word_140C508B0 = 0;
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
