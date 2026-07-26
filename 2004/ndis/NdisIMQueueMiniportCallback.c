/*
 * XREFs of NdisIMQueueMiniportCallback @ 0x1C00714A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006F9D0 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMQueueNewWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAXP6AX22@Z@Z @ 0x1C006FF10 (-ndisMQueueNewWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAXP6AX22@Z@Z.c)
 */

__int64 __fastcall NdisIMQueueMiniportCallback(
        struct _NDIS_MINIPORT_BLOCK *a1,
        void (__fastcall *a2)(void *, _SINGLE_LIST_ENTRY *),
        _SINGLE_LIST_ENTRY *a3)
{
  unsigned __int64 *p_Lock; // rbp
  unsigned int v7; // esi
  KIRQL v8; // r14
  enum _NDIS_WORK_ITEM_TYPE v9; // edx
  char v10; // cl
  int v11; // eax
  int v12; // ebx

  p_Lock = &a1->Lock;
  v7 = 0;
  v8 = KfRaiseIrql(2u);
  if ( KeGetCurrentThread() == a1->MiniportThread )
  {
    KeAcquireSpinLockAtDpcLevel(p_Lock);
LABEL_6:
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    a2(a1->MiniportAdapterContext, a3);
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    ndisMProcessDeferred(a1);
    a1->LockAcquired = 0;
    a1->LockThread = 0LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    goto LABEL_9;
  }
  KeAcquireSpinLockAtDpcLevel(p_Lock);
  v10 = 0;
  a1->MiniportThread = KeGetCurrentThread();
  if ( !a1->LockAcquired )
  {
    v10 = 1;
    a1->LockAcquired = 1;
    a1->LockThread = KeGetCurrentThread();
  }
  if ( v10 )
    goto LABEL_6;
  v11 = ndisMQueueNewWorkItem(a1, v9, a3, (_SINGLE_LIST_ENTRY *)a2);
  a1->MiniportThread = 0LL;
  v12 = v11;
  KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  v7 = -1073741670;
  if ( !v12 )
    v7 = 259;
LABEL_9:
  if ( v8 != 2 )
    KeLowerIrql(v8);
  return v7;
}
