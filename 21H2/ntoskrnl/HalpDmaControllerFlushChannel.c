/*
 * XREFs of HalpDmaControllerFlushChannel @ 0x1404CE850
 * Callers:
 *     HalFlushAdapterBuffersEx @ 0x1403A2E80 (HalFlushAdapterBuffersEx.c)
 *     IoFlushAdapterBuffersV3 @ 0x1404CAB50 (IoFlushAdapterBuffersV3.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpDmaControllerFlushChannel(__int64 a1, unsigned int a2)
{
  ULONG_PTR BugCheckParameter4; // r12
  unsigned __int8 CurrentIrql; // si
  char v5; // r15
  unsigned __int64 v6; // rcx
  _DWORD *SchedulerAssist; // r10
  KSPIN_LOCK *v8; // rbp
  __int64 v9; // rbx
  __int64 result; // rax
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf

  BugCheckParameter4 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v5 = 0;
  if ( CurrentIrql == 15 )
  {
    v8 = (KSPIN_LOCK *)(a1 + 168);
  }
  else
  {
    v6 = *(unsigned __int8 *)(a1 + 176);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v6);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v6 - 2) <= 0xDu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1LL << (CurrentIrql + 1)) & ((1LL << ((unsigned __int8)v6 + 1)) - 1) & 0xFFFFFFFC;
    }
    v8 = (KSPIN_LOCK *)(a1 + 168);
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 168));
    v5 = 1;
  }
  v9 = *(_QWORD *)(a1 + 56) + 160 * BugCheckParameter4;
  if ( !*(_BYTE *)(v9 + 6) && *(_QWORD *)(v9 + 8) )
    KeBugCheckEx(0xE6u, 0x23uLL, 0LL, *(unsigned int *)(a1 + 32), BugCheckParameter4);
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 120))(
             *(_QWORD *)(a1 + 64),
             (unsigned int)BugCheckParameter4);
  *(_QWORD *)(v9 + 8) = 0LL;
  *(_QWORD *)(v9 + 16) = 0LL;
  *(_BYTE *)(v9 + 6) = 0;
  if ( v5 )
  {
    KxReleaseSpinLock(v8);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v11 = KeGetCurrentIrql();
        if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v15 = (v14 & v13[5]) == 0;
          v13[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
