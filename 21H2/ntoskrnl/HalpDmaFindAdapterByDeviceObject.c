/*
 * XREFs of HalpDmaFindAdapterByDeviceObject @ 0x1403794BC
 * Callers:
 *     HalGetAdapterV2 @ 0x1407649D0 (HalGetAdapterV2.c)
 *     HalGetAdapterV3 @ 0x1407C38D0 (HalGetAdapterV3.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     ObReferenceObjectSafeWithTag @ 0x1403537F0 (ObReferenceObjectSafeWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 *__fastcall HalpDmaFindAdapterByDeviceObject(__int64 a1)
{
  __int64 *v2; // rdi
  unsigned __int64 v3; // rsi
  __int64 *i; // rax
  __int64 *v5; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v10; // edx
  bool v11; // zf

  if ( !a1 )
    return 0LL;
  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&HalpDmaAdapterListLock);
  for ( i = (__int64 *)HalpDmaAdapterList; i != &HalpDmaAdapterList; i = (__int64 *)*i )
  {
    v5 = i - 57;
    if ( i[8] == a1 )
    {
      if ( ObReferenceObjectSafeWithTag((__int64)(i - 57)) )
        v2 = v5;
      break;
    }
  }
  KxReleaseSpinLock(&HalpDmaAdapterListLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return v2;
}
