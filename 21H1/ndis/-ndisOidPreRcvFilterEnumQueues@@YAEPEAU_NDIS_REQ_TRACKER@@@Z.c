/*
 * XREFs of ?ndisOidPreRcvFilterEnumQueues@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0085C90
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003B584 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisCopyReceiveQueueInfo@@YAXPEAU_NDIS_RECEIVE_QUEUE_INFO@@PEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x1C00849B4 (-ndisCopyReceiveQueueInfo@@YAXPEAU_NDIS_RECEIVE_QUEUE_INFO@@PEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z.c)
 */

char __fastcall ndisOidPreRcvFilterEnumQueues(struct _NDIS_MINIPORT_BLOCK **a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rdi
  unsigned int v2; // r12d
  _BYTE *v3; // r14
  char v5; // si
  struct _NDIS_MINIPORT_BLOCK *v6; // rcx
  struct _NDIS_MINIPORT_BLOCK *v7; // rcx
  char v8; // r13
  _BYTE *OidSourceHandle; // rax
  unsigned int NumReceiveQueues; // ebp
  unsigned int v11; // ecx
  struct _NDIS_MINIPORT_BLOCK *v12; // rax
  KIRQL v13; // dl
  wchar_t *Buffer; // rax
  struct _NDIS_RECEIVE_QUEUE_INFO *v15; // r15
  _QWORD *v16; // r13
  _QWORD *v17; // r14
  struct _NDIS_RECEIVE_QUEUE_BLOCK *DefaultReceiveQueue; // rdx
  struct _NDIS_RECEIVE_QUEUE_BLOCK *Flink; // r14
  KIRQL v20; // dl
  struct _NDIS_MINIPORT_BLOCK *v21; // rax
  KIRQL NewIrql; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v24; // [rsp+88h] [rbp+10h]

  v1 = *a1;
  v2 = 0;
  v3 = 0LL;
  NewIrql = 0;
  v5 = 1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x19u,
      0x1Cu,
      (struct _GUID *)&WPP_8ae6292ee3d833c857d30dcfbd7b4f7f_Traceguids,
      a1);
  v6 = a1[4];
  if ( (*(_DWORD *)(&v6->Header + 1) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_32;
  }
  HIDWORD(v6->Reserved28) = 0;
  if ( !v1 )
  {
    v5 = 0;
    goto LABEL_32;
  }
  *((_DWORD *)a1 + 10) = -1073741637;
  if ( v1->ReceiveFilterCurrentCapabilities )
  {
    v7 = a1[4];
    if ( *((_DWORD *)&v7->Header + 1) == 2 )
    {
      v8 = 0;
    }
    else
    {
      OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v7);
      v3 = OidSourceHandle;
      if ( !OidSourceHandle || *OidSourceHandle != 18 )
        goto LABEL_32;
      v8 = 1;
    }
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v1, &NewIrql);
    if ( v8 )
    {
      NumReceiveQueues = *((_DWORD *)v3 + 188);
    }
    else
    {
      NumReceiveQueues = v1->NumReceiveQueues;
      if ( v1->DefaultReceiveQueue )
        ++NumReceiveQueues;
    }
    v11 = 1096 * NumReceiveQueues + 16;
    LODWORD(a1[4]->OpenQueue) = v11;
    v12 = a1[4];
    v24 = v11;
    if ( v11 <= v12->PcwDatapathEventMask )
    {
      Buffer = v12->Reserved4.Buffer;
      *(_DWORD *)Buffer = 1048960;
      v15 = (struct _NDIS_RECEIVE_QUEUE_INFO *)(Buffer + 8);
      *((_DWORD *)Buffer + 1) = 16;
      *((_DWORD *)Buffer + 2) = NumReceiveQueues;
      *((_DWORD *)Buffer + 3) = 1096;
      if ( v8 )
      {
        v16 = v3 + 736;
        v17 = (_QWORD *)*((_QWORD *)v3 + 92);
        while ( v17 != v16 && v2 < NumReceiveQueues )
        {
          ndisCopyReceiveQueueInfo(v15, (struct _NDIS_RECEIVE_QUEUE_BLOCK *)(v17 - 2));
          v17 = (_QWORD *)*v17;
          v15 = (struct _NDIS_RECEIVE_QUEUE_INFO *)((char *)v15 + 1096);
          ++v2;
        }
      }
      else
      {
        DefaultReceiveQueue = v1->DefaultReceiveQueue;
        if ( DefaultReceiveQueue )
        {
          ndisCopyReceiveQueueInfo((struct _NDIS_RECEIVE_QUEUE_INFO *)(Buffer + 8), DefaultReceiveQueue);
          v15 = (struct _NDIS_RECEIVE_QUEUE_INFO *)((char *)v15 + 1096);
          v2 = 1;
        }
        Flink = (struct _NDIS_RECEIVE_QUEUE_BLOCK *)v1->ReceiveQueueList.Flink;
        while ( Flink != (struct _NDIS_RECEIVE_QUEUE_BLOCK *)&v1->ReceiveQueueList && v2 < NumReceiveQueues )
        {
          ndisCopyReceiveQueueInfo(v15, Flink);
          Flink = (struct _NDIS_RECEIVE_QUEUE_BLOCK *)Flink->AdapterLink.Flink;
          v15 = (struct _NDIS_RECEIVE_QUEUE_INFO *)((char *)v15 + 1096);
          ++v2;
        }
      }
      v20 = NewIrql;
      v1->MiniportThread = 0LL;
      KeReleaseSpinLock(&v1->Lock, v20);
      v21 = a1[4];
      *((_DWORD *)a1 + 10) = 0;
      HIDWORD(v21->Reserved28) = v24;
    }
    else
    {
      v13 = NewIrql;
      v1->MiniportThread = 0LL;
      KeReleaseSpinLock(&v1->Lock, v13);
      *((_DWORD *)a1 + 10) = -1073676266;
    }
  }
LABEL_32:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x19u,
      0x1Du,
      (struct _GUID *)&WPP_8ae6292ee3d833c857d30dcfbd7b4f7f_Traceguids,
      (char)v1,
      *((_DWORD *)a1 + 10));
  return v5;
}
