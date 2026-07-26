/*
 * XREFs of ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0089BCC
 * Callers:
 *     ?ndisOidPreRSSv2Parameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00888A0 (-ndisOidPreRSSv2Parameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000E000 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000E2D0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001B820 (WPP_RECORDER_SF_qqLd.c)
 *     memcmp @ 0x1C003FFE0 (memcmp.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C00675E8 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C00878FC (-ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_.c)
 *     ?ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C0087FB0 (-ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_R.c)
 *     ?ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00899BC (-ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

char __fastcall ndisSetOpenRSSv2Parameters(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int *a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbx
  int *v4; // r15
  char v7; // si
  int v8; // eax
  int v9; // edi
  unsigned __int8 *PoolWithTag; // rax
  int CombinedRSSParameters; // eax
  void *v12; // r11
  _DWORD *InformationBuffer; // r13
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *RssParametersBuffer; // r12
  int v15; // r15d
  char v16; // dl
  bool v17; // r8
  bool v18; // zf
  unsigned int v19; // edx
  bool v20; // si
  struct _NDIS_MINIPORT_BLOCK *VPortBlockForRequest; // rax
  char v22; // dl
  struct _NDIS_OPEN_BLOCK *OpenQueue; // rcx
  int v24; // r15d
  _NDIS_RECEIVE_SCALE_PARAMETERS *NdisRSSParameters; // rax
  KIRQL v26; // dl
  __int64 v28; // [rsp+38h] [rbp-50h]
  KIRQL NewIrql; // [rsp+90h] [rbp+8h] BYREF
  int v30; // [rsp+98h] [rbp+10h]
  int *v31; // [rsp+A0h] [rbp+18h]

  v31 = a3;
  MiniportHandle = a1->MiniportHandle;
  v4 = a3;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x24u,
      (struct _GUID *)&WPP_55eab71d2273366299e40de7bd26ba8a_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      a2);
  NewIrql = 0;
  a2->DATA.QUERY_INFORMATION.BytesNeeded = 0;
  v7 = 1;
  v8 = ndisSetMiniportRSSv2ParametersHelper(MiniportHandle, a2);
  v9 = v8;
  if ( v8 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v28) = v8;
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x25u,
        (struct _GUID *)&WPP_55eab71d2273366299e40de7bd26ba8a_Traceguids,
        (char)MiniportHandle,
        (char)a2,
        v28);
    }
    goto LABEL_33;
  }
  if ( !a1->RssParametersBuffer )
  {
    PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x394uLL, 0x7372444Eu);
    a1->RssParametersBuffer = PoolWithTag;
    if ( !PoolWithTag )
    {
      v9 = -1073741670;
LABEL_33:
      a2->DATA.QUERY_INFORMATION.BytesWritten = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
      goto LABEL_34;
    }
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(MiniportHandle, &NewIrql);
  CombinedRSSParameters = ndisAllocateCombinedRSSParameters(MiniportHandle, a2, 0LL, 0LL, 0LL, 0LL);
  v12 = 0LL;
  v9 = CombinedRSSParameters;
  if ( !CombinedRSSParameters )
  {
    InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
    if ( MiniportHandle->CombinedNdisRSSParameters )
    {
      RssParametersBuffer = MiniportHandle->RssParametersBuffer;
      v15 = InformationBuffer[2];
      v30 = (unsigned __int8)v15;
      if ( (RssParametersBuffer->Combined[4] & 0x10) != 0
        || (v16 = 1, !(unsigned __int8)*(_DWORD *)&RssParametersBuffer->Combined[8]) )
      {
        v16 = 0;
      }
      v17 = 0;
      v18 = v16 == (InformationBuffer[1] & 1);
      v19 = InformationBuffer[3];
      if ( v18 )
        v17 = (unsigned __int8)*(_DWORD *)&RssParametersBuffer->Combined[8] == (unsigned __int8)v15;
      if ( *(unsigned __int16 *)&RssParametersBuffer->Combined[20] != v19 )
        goto LABEL_21;
      v20 = 0;
      if ( *(unsigned __int16 *)&RssParametersBuffer->Combined[12] >> 2 == InformationBuffer[6] )
        v20 = v17;
      if ( memcmp(
             &RssParametersBuffer->Combined[*(unsigned int *)&RssParametersBuffer->Combined[24]],
             (char *)InformationBuffer + (unsigned int)InformationBuffer[4],
             v19) )
      {
LABEL_21:
        v20 = 0;
      }
      VPortBlockForRequest = ndisGetVPortBlockForRequest(MiniportHandle, a2);
      v22 = (char)v12;
      if ( InformationBuffer[5] == LODWORD(VPortBlockForRequest->Reserved30) )
        v22 = v20;
      OpenQueue = MiniportHandle->OpenQueue;
      v24 = v15 & 0xFFFF00;
      while ( OpenQueue )
      {
        NdisRSSParameters = OpenQueue->NdisRSSParameters;
        if ( NdisRSSParameters && OpenQueue != a1 )
          v24 |= NdisRSSParameters->HashInformation & 0xFFFF00;
        OpenQueue = OpenQueue->MiniportNextOpen;
      }
      v7 = v22;
      InformationBuffer[2] = v24 | v30;
      v18 = v24 == (*(_DWORD *)&RssParametersBuffer->Combined[8] & 0xFFFF00);
      v4 = v31;
      if ( !v18 )
        v7 = (char)v12;
    }
    else
    {
      v7 = 0;
    }
  }
  v26 = NewIrql;
  MiniportHandle->MiniportThread = v12;
  KeReleaseSpinLock(&MiniportHandle->Lock, v26);
  if ( v7 )
    goto LABEL_33;
LABEL_34:
  *v4 = v9;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x26u,
      (struct _GUID *)&WPP_55eab71d2273366299e40de7bd26ba8a_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      v7,
      v9);
  if ( v9 && (byte_1C00E6184 & 4) != 0 )
    McTemplateK0jqxddq_EtwWriteTransfer(
      MiniportHandle->IfIndex,
      &SetOpenRSSCapsFailed,
      &MiniportHandle->InterfaceGuid,
      (__int64)&MiniportHandle->InterfaceGuid,
      MiniportHandle->IfIndex,
      MiniportHandle->NetLuid.Value,
      v9,
      2,
      (char)a1);
  return v7;
}
