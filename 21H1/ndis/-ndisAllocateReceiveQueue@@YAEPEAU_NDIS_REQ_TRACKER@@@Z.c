/*
 * XREFs of ?ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00843A4
 * Callers:
 *     ?ndisOidPreRcvFilterAllocateQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0085780 (-ndisOidPreRcvFilterAllocateQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012D38 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00196A4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001D1DC (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003B584 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     memmove @ 0x1C003F400 (memmove.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     WPP_RECORDER_SF_qdD @ 0x1C005E2B8 (WPP_RECORDER_SF_qdD_ea_1C005E2B8.c)
 *     ?ndisAddReceiveQueueToList@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x1C0084334 (-ndisAddReceiveQueueToList@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z.c)
 */

char __fastcall ndisAllocateReceiveQueue(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_OID_REQUEST *v1; // r15
  struct _NDIS_RECEIVE_QUEUE_BLOCK *v2; // rbp
  struct _NDIS_MINIPORT_BLOCK *v3; // rbx
  int v4; // r12d
  __int64 v5; // r13
  char *InformationBuffer; // r14
  char v8; // si
  int InformationBufferLength; // ecx
  unsigned __int64 v10; // rax
  int v11; // edx
  char v12; // cl
  char v13; // al
  _BYTE *OidSourceHandle; // rax
  struct _NDIS_RECEIVE_QUEUE_BLOCK *PoolWithTag; // rax
  char Revision; // cl
  unsigned int NumReceiveQueues; // ecx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterCurrentCapabilities; // rax
  unsigned __int8 *AllocatedQueueIndices; // r12
  unsigned int AllocatedQueueIndicesLength; // r9d
  __int64 v21; // rax
  unsigned __int8 *v22; // rcx
  int v23; // r8d
  _BYTE *v24; // r14
  __int64 v25; // r10
  int v26; // ecx
  int v27; // eax
  int v28; // edx
  int v29; // r8d
  int v30; // eax
  KIRQL v31; // dl
  _LIST_ENTRY *v32; // rdx
  _LIST_ENTRY *v33; // r8
  _LIST_ENTRY *p_OpenLink; // rax
  KIRQL v35; // dl
  UINT BytesRead; // eax
  unsigned int Size; // [rsp+40h] [rbp-68h]
  unsigned int Size_4; // [rsp+44h] [rbp-64h]
  char *v40; // [rsp+48h] [rbp-60h]
  char v41; // [rsp+B0h] [rbp+8h]
  KIRQL NewIrql; // [rsp+B8h] [rbp+10h] BYREF
  char v43; // [rsp+C0h] [rbp+18h]
  int v44; // [rsp+C8h] [rbp+20h]

  v1 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
  v2 = 0LL;
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = 0;
  v5 = 0LL;
  NewIrql = 0;
  v44 = 0;
  InformationBuffer = (char *)v1->DATA.QUERY_INFORMATION.InformationBuffer;
  v40 = InformationBuffer;
  v8 = 1;
  v43 = 0;
  v41 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x19u,
      0xEu,
      (struct _GUID *)&WPP_8ae6292ee3d833c857d30dcfbd7b4f7f_Traceguids,
      v3);
  InformationBufferLength = 1096;
  *((_DWORD *)a1 + 10) = -1073741637;
  v10 = 1096LL;
  v11 = *((unsigned __int16 *)InformationBuffer + 1);
  if ( (unsigned __int16)v11 < 0x448u )
    v10 = *((unsigned __int16 *)InformationBuffer + 1);
  if ( v10 >= v1->DATA.QUERY_INFORMATION.InformationBufferLength )
  {
    InformationBufferLength = v1->DATA.QUERY_INFORMATION.InformationBufferLength;
  }
  else if ( (unsigned __int16)v11 < 0x448u )
  {
    InformationBufferLength = *((unsigned __int16 *)InformationBuffer + 1);
  }
  v1->DATA.METHOD_INFORMATION.BytesWritten = 0;
  v1->DATA.METHOD_INFORMATION.BytesRead = InformationBufferLength;
  v12 = 2;
  if ( *((_DWORD *)InformationBuffer + 2) != 1 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    v13 = 0;
    goto LABEL_57;
  }
  if ( !ndisReferenceMiniport(v3, 0x45u) )
    goto LABEL_13;
  v43 = 1;
  OidSourceHandle = ndisGetOidSourceHandle(v1);
  if ( !OidSourceHandle || *OidSourceHandle != 18 )
  {
LABEL_18:
    if ( *((_DWORD *)InformationBuffer + 2) == 1 && !v5 )
      goto LABEL_20;
    PoolWithTag = (struct _NDIS_RECEIVE_QUEUE_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x4C8uLL, 0x7571444Eu);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_23:
      *((_DWORD *)a1 + 10) = -1073741670;
      goto LABEL_21;
    }
    memset(PoolWithTag, 0, sizeof(struct _NDIS_RECEIVE_QUEUE_BLOCK));
    v2->Miniport = v3;
    v2->FilterList.Blink = &v2->FilterList;
    v2->FilterList.Flink = &v2->FilterList;
    v2->Open = (_NDIS_OPEN_BLOCK *)v5;
    v2->SharedMemoryList.Blink = &v2->SharedMemoryList;
    v2->SharedMemoryList.Flink = &v2->SharedMemoryList;
    v2->Reference = 1;
    memmove(&v2->QueueParameters, InformationBuffer, v1->DATA.METHOD_INFORMATION.BytesRead);
    Revision = 2;
    v2->QueueParameters.Header.Size = v1->DATA.METHOD_INFORMATION.BytesRead;
    if ( v2->QueueParameters.Header.Revision < 2u )
      Revision = v2->QueueParameters.Header.Revision;
    v2->QueueParameters.Header.Revision = Revision;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v3, &NewIrql);
    NumReceiveQueues = v3->NumReceiveQueues;
    if ( NumReceiveQueues + 1 > 0x3BCBAD )
      goto LABEL_27;
    ReceiveFilterCurrentCapabilities = v3->ReceiveFilterCurrentCapabilities;
    if ( !ReceiveFilterCurrentCapabilities )
    {
      v3->MiniportThread = 0LL;
      KeReleaseSpinLock(&v3->Lock, NewIrql);
LABEL_20:
      *((_DWORD *)a1 + 10) = -1073741637;
LABEL_21:
      v13 = v41;
      goto LABEL_56;
    }
    if ( NumReceiveQueues == ReceiveFilterCurrentCapabilities->NumQueues )
    {
LABEL_27:
      v3->MiniportThread = 0LL;
      KeReleaseSpinLock(&v3->Lock, NewIrql);
      goto LABEL_23;
    }
    AllocatedQueueIndices = v3->AllocatedQueueIndices;
    AllocatedQueueIndicesLength = v3->AllocatedQueueIndicesLength;
    Size = AllocatedQueueIndicesLength;
    if ( AllocatedQueueIndices && (v21 = 0LL, AllocatedQueueIndicesLength) )
    {
      v22 = v3->AllocatedQueueIndices;
      v23 = 0;
      while ( *v22 == 0xFF )
      {
        v23 += 8;
        v21 = (unsigned int)(v21 + 1);
        ++v22;
        v44 = v23;
        if ( (unsigned int)v21 >= AllocatedQueueIndicesLength )
          goto LABEL_36;
      }
      v25 = (unsigned int)v21;
      v26 = 1;
      v27 = AllocatedQueueIndices[v21];
      v28 = 0;
      while ( (v27 & v26) != 0 )
      {
        v26 *= 2;
        if ( (unsigned int)++v28 >= 8 )
          goto LABEL_36;
      }
      v29 = v28 + v23;
      AllocatedQueueIndices[v25] = v26 | v27;
      v44 = v29;
    }
    else
    {
LABEL_36:
      Size_4 = AllocatedQueueIndicesLength + 64;
      v24 = ExAllocatePoolWithTag(NonPagedPoolNx, AllocatedQueueIndicesLength + 64, 0x7571444Eu);
      if ( !v24 )
      {
        v3->MiniportThread = 0LL;
        KeReleaseSpinLock(&v3->Lock, NewIrql);
        InformationBuffer = v40;
        *((_DWORD *)a1 + 10) = -1073741670;
        goto LABEL_38;
      }
      memset(&v24[Size], 0, 0x40uLL);
      if ( AllocatedQueueIndices )
      {
        memmove(v24, AllocatedQueueIndices, Size);
        v24[Size] = 1;
        ExFreePoolWithTag(AllocatedQueueIndices, 0);
        v29 = v44;
      }
      else
      {
        *v24 = 3;
        v29 = 1;
        v44 = 1;
      }
      v3->AllocatedQueueIndices = v24;
      InformationBuffer = v40;
      v3->AllocatedQueueIndicesLength = Size_4;
    }
    *((_DWORD *)InformationBuffer + 3) = v29;
    v2->QueueParameters.QueueId = v29;
    v2->QueueId = v29;
    v30 = ndisAddReceiveQueueToList(v3, v2);
    *((_DWORD *)a1 + 10) = v30;
    if ( !v30 )
    {
      if ( v5 )
      {
        v32 = (_LIST_ENTRY *)(v5 + 736);
        v33 = *(_LIST_ENTRY **)(v5 + 736);
        p_OpenLink = &v2->OpenLink;
        if ( v33->Blink != (_LIST_ENTRY *)(v5 + 736) )
          __fastfail(3u);
        p_OpenLink->Flink = v33;
        v2->OpenLink.Blink = v32;
        v33->Blink = p_OpenLink;
        v32->Flink = p_OpenLink;
        ++*(_DWORD *)(v5 + 752);
      }
      v35 = NewIrql;
      v3->MiniportThread = 0LL;
      KeReleaseSpinLock(&v3->Lock, v35);
      v2->QueuePnPState = NdisReceiveQueuePnPStateAddedToList;
      v13 = 0;
      v8 = 0;
      v43 = 0;
      goto LABEL_55;
    }
    v31 = NewIrql;
    v3->MiniportThread = 0LL;
    KeReleaseSpinLock(&v3->Lock, v31);
LABEL_38:
    v13 = v41;
LABEL_55:
    v4 = v44;
    goto LABEL_56;
  }
  v5 = (__int64)OidSourceHandle;
  if ( ndisReferenceOpenByHandle((__int64)OidSourceHandle, 0xAu) )
  {
    v41 = 1;
    goto LABEL_18;
  }
LABEL_13:
  *((_DWORD *)a1 + 10) = -1073676286;
  v13 = 0;
LABEL_56:
  v12 = 2;
LABEL_57:
  if ( *((_DWORD *)a1 + 10) )
  {
    if ( v13 )
      ndisMDereferenceOpenUnlocked(v5, 10);
    if ( v43 )
      ndisDereferenceMiniport(v3, 0x45u);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
  else
  {
    BytesRead = v1->DATA.METHOD_INFORMATION.BytesRead;
    v1->DATA.METHOD_INFORMATION.BytesWritten = BytesRead;
    *((_WORD *)InformationBuffer + 1) = BytesRead;
    if ( (unsigned __int8)InformationBuffer[1] < 2u )
      v12 = InformationBuffer[1];
    InformationBuffer[1] = v12;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      0x19u,
      0xFu,
      (struct _GUID *)&WPP_8ae6292ee3d833c857d30dcfbd7b4f7f_Traceguids,
      (char)v3,
      *((_DWORD *)a1 + 10),
      v4);
  return v8;
}
