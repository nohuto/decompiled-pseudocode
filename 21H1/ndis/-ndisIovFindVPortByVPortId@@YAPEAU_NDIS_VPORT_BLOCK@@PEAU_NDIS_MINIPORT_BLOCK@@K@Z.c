/*
 * XREFs of ?ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00775F4
 * Callers:
 *     ?ndisOidPreIovDeleteVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0079600 (-ndisOidPreIovDeleteVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovVPortParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007B150 (-ndisOidPreIovVPortParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostRcvFilterMoveFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00852F0 (-ndisOidPostRcvFilterMoveFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRcvFilterMoveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0086160 (-ndisOidPreRcvFilterMoveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0086974 (-ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPrePDOpenProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C011CA40 (-ndisOidPrePDOpenProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0077650 (-ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

struct _NDIS_VPORT_BLOCK *__fastcall ndisIovFindVPortByVPortId(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2)
{
  struct _NDIS_VPORT_BLOCK *VPortByVPortIdInternal; // rax
  struct _NDIS_VPORT_BLOCK *v5; // rbx
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  VPortByVPortIdInternal = ndisIovFindVPortByVPortIdInternal(a1, a2);
  a1->MiniportThread = 0LL;
  v5 = VPortByVPortIdInternal;
  KeReleaseSpinLock(&a1->Lock, NewIrql);
  return v5;
}
