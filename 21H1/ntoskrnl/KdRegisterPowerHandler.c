/*
 * XREFs of KdRegisterPowerHandler @ 0x14050AEF0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x1402773A0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall KdRegisterPowerHandler(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rbx
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  _QWORD *v11; // rax
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x6F49644Bu);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[2] = a1;
  PoolWithTag[3] = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  KxAcquireSpinLock(&KdpPowerSpinLock);
  v11 = (_QWORD *)qword_140C40858;
  if ( *(__int64 **)qword_140C40858 != &KdpPowerListHead )
    __fastfail(3u);
  *v7 = &KdpPowerListHead;
  v7[1] = v11;
  *v11 = v7;
  qword_140C40858 = (__int64)v7;
  KxReleaseSpinLock(&KdpPowerSpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  *a3 = v7;
  return 0LL;
}
