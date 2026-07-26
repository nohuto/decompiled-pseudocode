/*
 * XREFs of ?ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1C0099C24
 * Callers:
 *     ?ndisFOidRequestCompleteInternal@@YAXPEAX@Z @ 0x1C000E7D0 (-ndisFOidRequestCompleteInternal@@YAXPEAX@Z.c)
 *     ?ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1C0099A94 (-ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 * Callees:
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C000B2C0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001A188 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisGrabOidCancellationList@@YAXPEAU_LIST_ENTRY@@0PEAXE@Z @ 0x1C009A758 (-ndisGrabOidCancellationList@@YAXPEAU_LIST_ENTRY@@0PEAXE@Z.c)
 *     McTemplateK0jqxqdq_EtwWriteTransfer @ 0x1C00A16D4 (McTemplateK0jqxqdq_EtwWriteTransfer.c)
 */

void __fastcall ndisCancelOidRequestOnFilter(struct _NDIS_FILTER_BLOCK *a1, void *a2, unsigned __int8 a3)
{
  int v6; // r8d
  int v7; // r9d
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v9; // rcx
  _LIST_ENTRY **p_Blink; // rbx
  struct _LIST_ENTRY *v11; // rdx
  struct _LIST_ENTRY v12; // [rsp+58h] [rbp+17h] BYREF
  __int128 v13; // [rsp+68h] [rbp+27h] BYREF
  __int128 v14; // [rsp+78h] [rbp+37h]
  __int128 v15; // [rsp+88h] [rbp+47h]
  KIRQL NewIrql; // [rsp+A8h] [rbp+67h] BYREF

  NewIrql = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  NDIS_ACQUIRE_FILTER_SPIN_LOCK(a1, &NewIrql);
  ndisGrabOidCancellationList(&a1->OidRequestList, &v12, a2, a3);
  a1->LockThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, NewIrql);
  while ( 1 )
  {
    Flink = v12.Flink;
    if ( v12.Flink == &v12 )
      break;
    if ( v12.Flink->Blink != &v12 || (v9 = v12.Flink->Flink, v12.Flink->Flink->Blink != v12.Flink) )
      __fastfail(3u);
    p_Blink = &v12.Flink[-5].Blink;
    v12.Flink = v12.Flink->Flink;
    v11 = &v12;
    v9->Blink = &v12;
    v13 = 0uLL;
    *(_QWORD *)&v15 = (char *)Flink - 72;
    *((_QWORD *)&v15 + 1) = 0x1C001000CLL;
    v14 = (unsigned __int64)a1;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x9Au,
        (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
        (char)p_Blink,
        a1);
    if ( (Microsoft_Windows_NDISEnableBits & 0x10) != 0 )
      McTemplateK0jqxqdq_EtwWriteTransfer(
        a1->IfBlock,
        (unsigned int)&CancelFilterOidRequestEx,
        (_DWORD)a1 + 672,
        (_DWORD)a1 + 672,
        a1->IfIndex,
        a1->IfBlock->NetLuid.Value,
        *((_DWORD *)p_Blink + 8),
        12);
    ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v13, (int)v11, v6, v7);
  }
}
