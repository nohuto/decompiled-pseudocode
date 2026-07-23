/*
 * XREFs of HalpDmaGetNextWcb @ 0x1404B7C24
 * Callers:
 *     IoFreeAdapterChannelV3 @ 0x1404C65DC (IoFreeAdapterChannelV3.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 *__fastcall HalpDmaGetNextWcb(__int64 a1)
{
  KSPIN_LOCK *v1; // rbp
  KIRQL v3; // al
  _QWORD *v4; // rdx
  __int64 *v5; // rbx
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v11; // edx
  bool v12; // zf

  v1 = (KSPIN_LOCK *)(a1 + 176);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 176));
  *(_QWORD *)(a1 + 352) = 0LL;
  v4 = (_QWORD *)(a1 + 184);
  v5 = *(__int64 **)(a1 + 184);
  v6 = v3;
  if ( v5 == (__int64 *)(a1 + 184) )
  {
    v5 = 0LL;
    *(_BYTE *)(a1 + 216) = 0;
  }
  else
  {
    v7 = *v5;
    if ( (_QWORD *)v5[1] != v4 || *(__int64 **)(v7 + 8) != v5 )
      __fastfail(3u);
    *v4 = v7;
    *(_QWORD *)(v7 + 8) = v4;
  }
  KxReleaseSpinLock(v1);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return v5;
}
