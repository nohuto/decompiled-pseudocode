/*
 * XREFs of HalpDmaRemoveAdapterFromChannelQueue @ 0x1404CF144
 * Callers:
 *     HalCancelAdapterChannel @ 0x1404C6100 (HalCancelAdapterChannel.c)
 *     HalpAllocateDmaResourcesInternal @ 0x1404CA81C (HalpAllocateDmaResourcesInternal.c)
 *     HalCancelAdapterChannelThin @ 0x1404CAF20 (HalCancelAdapterChannelThin.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall HalpDmaRemoveAdapterFromChannelQueue(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  _QWORD **v8; // rdi
  char v9; // bp
  _QWORD *v10; // rax
  _QWORD **v11; // rcx
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v14; // r9
  int v15; // edx
  bool v16; // zf
  _QWORD *v18; // rdx

  v2 = *(_QWORD *)(a1 + 360);
  v3 = 5LL * *(unsigned int *)(a1 + 372);
  v4 = *(unsigned __int8 *)(v2 + 176);
  v5 = *(_QWORD *)(v2 + 56) + 32 * v3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v4);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v4 - 2) <= 0xDu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1LL << (CurrentIrql + 1)) & ((1LL << ((unsigned __int8)v4 + 1)) - 1) & 0xFFFFFFFC;
  }
  KxAcquireSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 360) + 168LL));
  v8 = (_QWORD **)(v5 + 144);
  v9 = 0;
  v10 = *v8;
  if ( *v8 != v8 )
  {
    while ( 1 )
    {
      v11 = (_QWORD **)*v10;
      if ( v10 == (_QWORD *)(a1 + 200) )
        break;
      v10 = (_QWORD *)*v10;
      if ( v11 == v8 )
        goto LABEL_9;
    }
    v18 = (_QWORD *)v10[1];
    if ( v11[1] != v10 || (_QWORD *)*v18 != v10 )
      __fastfail(3u);
    *v18 = v11;
    v9 = 1;
    v11[1] = v18;
  }
LABEL_9:
  KxReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 360) + 168LL));
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
  return v9;
}
