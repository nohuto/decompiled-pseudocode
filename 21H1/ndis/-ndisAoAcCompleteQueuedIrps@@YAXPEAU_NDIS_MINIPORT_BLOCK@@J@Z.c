/*
 * XREFs of ?ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0059DB8
 * Callers:
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C005A528 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C005B5B4 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C005BA9C (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisWdfAoAcDisengageComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C005CCE0 (-ndisWdfAoAcDisengageComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 * Callees:
 *     ?ndisMoveLinkedList@@YAXPEAU_LIST_ENTRY@@0@Z @ 0x1C00A56BC (-ndisMoveLinkedList@@YAXPEAU_LIST_ENTRY@@0@Z.c)
 */

void __fastcall ndisAoAcCompleteQueuedIrps(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v4; // r8
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v6; // rax
  _IRP *p_Blink; // rcx
  struct _LIST_ENTRY v8; // [rsp+20h] [rbp-18h] BYREF

  AoAc = a1->AoAc;
  v8 = 0LL;
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  ndisMoveLinkedList(&v8, (struct _LIST_ENTRY *)AoAc + 2);
  *((_DWORD *)AoAc + 12) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v4);
  while ( 1 )
  {
    Flink = v8.Flink;
    if ( v8.Flink == &v8 )
      break;
    if ( v8.Flink->Blink != &v8 || (v6 = v8.Flink->Flink, v8.Flink->Flink->Blink != v8.Flink) )
      __fastfail(3u);
    v8.Flink = v8.Flink->Flink;
    v6->Blink = &v8;
    p_Blink = (_IRP *)&Flink[-11].Blink;
    p_Blink->IoStatus.Status = a2;
    IofCompleteRequest(p_Blink, 0);
  }
}
