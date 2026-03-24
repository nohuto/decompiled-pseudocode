/*
 * XREFs of EtwpCovSampCaptureCleanupLookasides @ 0x1405AE928
 * Callers:
 *     EtwpCovSampCaptureCleanupDpc @ 0x1405AE910 (EtwpCovSampCaptureCleanupDpc.c)
 *     EtwpCovSampCaptureContextStop @ 0x1405AEA5C (EtwpCovSampCaptureContextStop.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140229C70 (KxReleaseSpinLock.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140358230 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x1405AF36C (EtwpCovSampLookasideFlushFreeListToCleanupList.c)
 */

__int64 __fastcall EtwpCovSampCaptureCleanupLookasides(__int64 a1)
{
  KSPIN_LOCK *v1; // r15
  int v3; // r14d
  unsigned __int64 v4; // rbp
  _QWORD *i; // rdi
  __int64 *v6; // rdx
  bool v7; // cf
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf

  v1 = (KSPIN_LOCK *)(a1 + 264);
  v3 = 1;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 264));
  if ( !*(_DWORD *)(a1 + 912) && !*(_DWORD *)(a1 + 920) )
  {
    for ( i = *(_QWORD **)(a1 + 576); i != (_QWORD *)(a1 + 576); i = (_QWORD *)*i )
      EtwpCovSampLookasideFlushFreeListToCleanupList(i - 2);
    v6 = *(__int64 **)(a1 + 592);
    if ( v6 == (__int64 *)(a1 + 592) )
      goto LABEL_11;
    do
    {
      v7 = *((_DWORD *)v6 + 15) < *((_DWORD *)v6 + 14);
      v6 = (__int64 *)*v6;
      if ( v7 )
        v3 = 0;
    }
    while ( v6 != (__int64 *)(a1 + 592) );
    if ( v3 )
    {
LABEL_11:
      *(_DWORD *)(a1 + 920) = 1;
      KeSetEvent((PRKEVENT)(a1 + 888), 0, 0);
    }
  }
  KxReleaseSpinLock(v1);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v11 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return result;
}
