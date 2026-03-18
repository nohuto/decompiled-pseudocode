/*
 * XREFs of HalpCmcInitializePolling @ 0x1403D256C
 * Callers:
 *     HalpInitializeCmc @ 0x140A5AA64 (HalpInitializeCmc.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpCmcInitializeErrorPacketContents @ 0x1403D2818 (HalpCmcInitializeErrorPacketContents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
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
    qword_140C54A20 = (__int64)HalpCmcDeferredRoutine;
    qword_140C54A58 = (__int64)HalpCmcWorkerRoutine;
    HalpCmcContext = v3;
    qword_140C549C8 = 8LL;
    qword_140C549D8 = (__int64)&qword_140C549D0;
    qword_140C549D0 = (__int64)&qword_140C549D0;
    dword_140C54A08 = 275;
    qword_140C54A28 = (__int64)&HalpCmcContext;
    qword_140C54A40 = 0LL;
    qword_140C54A18 = 0LL;
    qword_140C54A60 = (__int64)&HalpCmcContext;
    qword_140C54A48 = 0LL;
    qword_140C549E0 = 0LL;
    dword_140C54A04 = 0;
    word_140C54A00 = 0;
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
