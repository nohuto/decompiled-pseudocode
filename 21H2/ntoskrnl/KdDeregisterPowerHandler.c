/*
 * XREFs of KdDeregisterPowerHandler @ 0x140510A70
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KdDeregisterPowerHandler(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v4; // rax
  void *v5; // rsi
  char v6; // di
  __int64 *v7; // rcx
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf
  __int64 **v14; // rdx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  KxAcquireSpinLock(&KdpPowerSpinLock);
  v4 = KdpPowerListHead;
  v5 = 0LL;
  v6 = 0;
  if ( (__int64 *)KdpPowerListHead != &KdpPowerListHead )
  {
    while ( 1 )
    {
      v7 = *(__int64 **)v4;
      v5 = (void *)v4;
      if ( a1 == v4 )
        break;
      v4 = *(_QWORD *)v4;
      if ( v7 == &KdpPowerListHead )
        goto LABEL_8;
    }
    v14 = *(__int64 ***)(v4 + 8);
    if ( v7[1] != v4 || *v14 != (__int64 *)v4 )
      __fastfail(3u);
    *v14 = v7;
    v6 = 1;
    v7[1] = (__int64)v14;
  }
LABEL_8:
  KxReleaseSpinLock(&KdpPowerSpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v11 & v10[5]) == 0;
        v10[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( !v6 )
    return 3221226021LL;
  ExFreePoolWithTag(v5, 0x6F49644Bu);
  return 0LL;
}
