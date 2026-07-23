/*
 * XREFs of HalpAddAdapterToSystemList @ 0x1404CE38C
 * Callers:
 *     HalGetAdapterV3 @ 0x1407C38D0 (HalGetAdapterV3.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpAddAdapterToSystemList(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf
  __int64 result; // rax

  v4 = *(unsigned __int8 *)(a1 + 176);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v4);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v4 - 2) <= 0xDu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1LL << (CurrentIrql + 1)) & ((1LL << ((unsigned __int8)v4 + 1)) - 1) & 0xFFFFFFFC;
  }
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 168));
  v7 = *(_QWORD **)(a1 + 24);
  v8 = (_QWORD *)(a2 + 456);
  if ( *v7 != a1 + 16 )
    __fastfail(3u);
  *v8 = a1 + 16;
  *(_QWORD *)(a2 + 464) = v7;
  *v7 = v8;
  *(_QWORD *)(a1 + 24) = v8;
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 168));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v12 & v11[5]) == 0;
        v11[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
