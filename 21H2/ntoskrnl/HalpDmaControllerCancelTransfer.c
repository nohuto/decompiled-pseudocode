/*
 * XREFs of HalpDmaControllerCancelTransfer @ 0x1404CE6BC
 * Callers:
 *     HalCancelMappedTransfer @ 0x1404CA540 (HalCancelMappedTransfer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KiInsertQueueDpc @ 0x1402C4660 (KiInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpDmaControllerCancelTransfer(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // di
  char v8; // r15
  unsigned __int64 v9; // rcx
  _DWORD *SchedulerAssist; // r10
  KSPIN_LOCK *v11; // rbp
  __int64 result; // rax
  bool v13; // zf
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v16; // r8
  int v17; // eax

  v6 = *(_QWORD *)(a1 + 56) + 160LL * a2;
  CurrentIrql = KeGetCurrentIrql();
  v8 = 0;
  if ( CurrentIrql == 15 )
  {
    v11 = (KSPIN_LOCK *)(a1 + 168);
  }
  else
  {
    v9 = *(unsigned __int8 *)(a1 + 176);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v9);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v9 - 2) <= 0xDu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1LL << (CurrentIrql + 1)) & ((1LL << ((unsigned __int8)v9 + 1)) - 1) & 0xFFFFFFFC;
    }
    v11 = (KSPIN_LOCK *)(a1 + 168);
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 168));
    v8 = 1;
  }
  *(_DWORD *)(a3 + 12) |= 1u;
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 152))(*(_QWORD *)(a1 + 64), a2);
  if ( (_BYTE)result )
  {
    v13 = *(_QWORD *)(v6 + 8) == 0LL;
    *(_BYTE *)(v6 + 6) = 1;
    *(_DWORD *)(v6 + 32) = 2;
    if ( !v13 )
      result = KiInsertQueueDpc(v6 + 40, 0LL, 0LL, 0LL, 0);
  }
  if ( v8 )
  {
    KxReleaseSpinLock(v11);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v14 = KeGetCurrentIrql();
        if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v16 = CurrentPrcb->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v13 = (v17 & v16[5]) == 0;
          v16[5] &= v17;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
