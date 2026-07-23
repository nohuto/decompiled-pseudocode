/*
 * XREFs of HalpFreeDmaChannels @ 0x1404CF440
 * Callers:
 *     IoFreeAdapterChannelV3Internal @ 0x1404C6780 (IoFreeAdapterChannelV3Internal.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpAllocateDmaResources @ 0x1404CA800 (HalpAllocateDmaResources.c)
 */

__int64 __fastcall HalpFreeDmaChannels(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rdi
  unsigned __int64 v3; // rcx
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  KSPIN_LOCK *v6; // r14
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // r8
  struct _DMA_ADAPTER *v10; // rbp
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf
  __int64 result; // rax
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax

  v1 = *(_QWORD *)(a1 + 360);
  v2 = *(_QWORD *)(v1 + 56) + 160LL * *(unsigned int *)(a1 + 372);
  *(_DWORD *)(a1 + 384) = 0;
  v3 = *(unsigned __int8 *)(v1 + 176);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v3);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v3 - 2) <= 0xDu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1LL << (CurrentIrql + 1)) & ((1LL << ((unsigned __int8)v3 + 1)) - 1) & 0xFFFFFFFC;
  }
  v6 = (KSPIN_LOCK *)(v1 + 168);
  KxAcquireSpinLock(v6);
  v7 = (_QWORD *)(v2 + 144);
  v8 = *(_QWORD **)(v2 + 144);
  if ( v8 == (_QWORD *)(v2 + 144) )
  {
    *(_WORD *)(v2 + 5) = 0;
    *(_QWORD *)(v2 + 24) = 0LL;
    KxReleaseSpinLock(v6);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v19 = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v15 = (v20 & v19[5]) == 0;
          v19[5] &= v20;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  else
  {
    v9 = *v8;
    if ( (_QWORD *)v8[1] != v7 || *(_QWORD **)(v9 + 8) != v8 )
      __fastfail(3u);
    *v7 = v9;
    v10 = (struct _DMA_ADAPTER *)(v8 - 25);
    *(_QWORD *)(v9 + 8) = v7;
    ++*((_DWORD *)v8 + 104);
    *((_DWORD *)v8 + 46) = 1;
    *(_QWORD *)(v2 + 24) = v8 - 25;
    KxReleaseSpinLock(v6);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v11 = KeGetCurrentIrql();
        if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
        {
          v12 = KeGetCurrentPrcb();
          v13 = v12->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v15 = (v14 & v13[5]) == 0;
          v13[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick((__int64)v12);
        }
      }
    }
    __writecr8(CurrentIrql);
    return HalpAllocateDmaResources(v10);
  }
  return result;
}
