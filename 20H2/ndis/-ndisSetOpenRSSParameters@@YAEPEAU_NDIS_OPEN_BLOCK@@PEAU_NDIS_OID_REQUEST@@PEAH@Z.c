/*
 * XREFs of ?ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C003759C
 * Callers:
 *     ?ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0037400 (-ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000DF10 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000E1E0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001B610 (WPP_RECORDER_SF_qqLd.c)
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0037878 (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z @ 0x1C0037A2C (-ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z.c)
 *     memcmp @ 0x1C003FA70 (memcmp.c)
 *     memmove @ 0x1C003FB80 (memmove.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C0067358 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 */

char __fastcall ndisSetOpenRSSParameters(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int *a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rsi
  UINT InformationBufferLength; // r14d
  _BYTE *InformationBuffer; // rbx
  unsigned __int8 v8; // cl
  unsigned __int16 v9; // dx
  UINT v10; // eax
  int v11; // eax
  int v12; // edi
  _NDIS_RECEIVE_SCALE_PARAMETERS *NdisRSSParameters; // rcx
  UINT v14; // edx
  _NDIS_RECEIVE_SCALE_PARAMETERS *v15; // r14
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *PoolWithTag; // rax
  unsigned __int8 *v17; // rax
  __int64 Oid; // r14
  char v19; // r14
  PVOID v20; // rax
  unsigned __int16 v22; // r9
  unsigned __int16 v23; // r9
  unsigned __int8 v24; // r13
  __int16 v25; // r12
  unsigned __int64 v26; // rcx
  int v27; // ecx
  int v28; // eax
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *RssParametersBuffer; // rbx
  unsigned __int8 v30; // r8
  int v31; // r13d
  int v32; // edx
  bool v33; // al
  bool v34; // r8
  char v35; // r12
  int v36; // ecx
  int v37; // eax
  struct _NDIS_OPEN_BLOCK *OpenQueue; // rcx
  int v39; // r13d
  _NDIS_RECEIVE_SCALE_PARAMETERS *v40; // rax
  KIRQL v41; // dl
  int v42; // ebx
  __int64 v43; // [rsp+38h] [rbp-70h]
  UINT Size; // [rsp+50h] [rbp-58h]
  int Size_4; // [rsp+54h] [rbp-54h]
  KIRQL NewIrql; // [rsp+B0h] [rbp+8h] BYREF
  int v47; // [rsp+B8h] [rbp+10h]
  int *v48; // [rsp+C0h] [rbp+18h]
  unsigned int v49; // [rsp+C8h] [rbp+20h] BYREF

  v48 = a3;
  MiniportHandle = a1->MiniportHandle;
  v49 = 0;
  NewIrql = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x73u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      a2);
  a2->DATA.QUERY_INFORMATION.BytesNeeded = 0;
  InformationBufferLength = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
  LOBYTE(v47) = 1;
  if ( InformationBufferLength < 0x1C )
  {
    a2->DATA.QUERY_INFORMATION.BytesNeeded = 28;
    v12 = -1073676268;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v43) = -1073676268;
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x74u,
        (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
        (char)MiniportHandle,
        (char)a1,
        v43);
    }
    goto LABEL_34;
  }
  InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
  v8 = InformationBuffer[1];
  if ( v8 >= 2u )
  {
    v9 = *((_WORD *)InformationBuffer + 1);
    if ( v9 < 0x28u )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v22 = 117;
LABEL_38:
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xBu,
          v22,
          (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
          (char)MiniportHandle,
          a2);
      }
    }
    else
    {
      v10 = 40;
      if ( v8 < 3u || (v10 = 44, v9 >= 0x2Cu) )
      {
        if ( InformationBufferLength < v10 )
        {
          a2->DATA.QUERY_INFORMATION.BytesNeeded = v10;
          v12 = -1073676268;
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v43) = -1073676268;
            WPP_RECORDER_SF_qqL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0xBu,
              0x77u,
              (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
              (char)MiniportHandle,
              (char)a2,
              v43);
          }
          goto LABEL_34;
        }
        goto LABEL_9;
      }
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v22 = 118;
        goto LABEL_38;
      }
    }
    v12 = -1073676268;
    goto LABEL_34;
  }
LABEL_9:
  v11 = ndisCalculateRssParametersSize(
          (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)a2->DATA.QUERY_INFORMATION.InformationBuffer,
          &v49);
  v12 = v11;
  if ( v11 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v43) = v11;
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x78u,
        (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
        (char)MiniportHandle,
        (char)a2,
        v43);
    }
    goto LABEL_48;
  }
  NdisRSSParameters = a1->NdisRSSParameters;
  if ( NdisRSSParameters || (InformationBuffer[4] & 0x10) == 0 && InformationBuffer[8] )
  {
    if ( *((_WORD *)InformationBuffer + 6) > 0x200u )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v23 = 121;
LABEL_46:
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        v23,
        (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
        (char)MiniportHandle,
        a1);
LABEL_47:
      v12 = -1073676267;
LABEL_48:
      v19 = v47;
      goto LABEL_35;
    }
    if ( *((_WORD *)InformationBuffer + 10) != 40 && (InformationBuffer[4] & 0x10) == 0 && InformationBuffer[8] )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v23 = 122;
      goto LABEL_46;
    }
    v14 = v49;
    Size = v49;
    if ( !v49 && (InformationBuffer[4] & 0x10) != 0 )
    {
      v14 = *((unsigned __int16 *)InformationBuffer + 1);
      Size = v14;
    }
    v12 = 0;
    if ( InformationBufferLength < v14 )
    {
      a2->DATA.QUERY_INFORMATION.BytesNeeded = v14;
      v12 = -1073676268;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v43) = -1073676268;
        WPP_RECORDER_SF_qqL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xBu,
          0x7Bu,
          (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
          (char)MiniportHandle,
          (char)a1,
          v43);
      }
      goto LABEL_48;
    }
    v15 = 0LL;
    if ( NdisRSSParameters )
      v15 = a1->NdisRSSParameters;
    if ( (MiniportHandle->RssParametersBuffer
       || (PoolWithTag = (_NDIS_MINIPORT_RSS_PARAMETERS_CACHE *)ExAllocatePoolWithTag(
                                                                  NonPagedPoolNxCacheAligned,
                                                                  0x728uLL,
                                                                  0x7372444Eu),
           (MiniportHandle->RssParametersBuffer = PoolWithTag) != 0LL))
      && (a1->RssParametersBuffer
       || (v17 = (unsigned __int8 *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x394uLL, 0x7372444Eu),
           (a1->RssParametersBuffer = v17) != 0LL)) )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(MiniportHandle, &NewIrql);
      if ( !v15 )
        goto LABEL_24;
      v24 = InformationBuffer[1];
      if ( v15->Header.Revision != v24 )
        goto LABEL_24;
      if ( !InformationBuffer[8] )
        goto LABEL_24;
      v25 = *((_WORD *)InformationBuffer + 2);
      if ( (v25 & 0x10) != 0
        || v15->IndirectionTableSize != *((_WORD *)InformationBuffer + 6)
        || memcmp(
             &v15->Header.Type + v15->IndirectionTableOffset,
             &InformationBuffer[*((unsigned int *)InformationBuffer + 4)],
             v15->IndirectionTableSize)
        || v15->HashSecretKeySize != *((_WORD *)InformationBuffer + 10)
        || v15->BaseCpuNumber != *((_WORD *)InformationBuffer + 3)
        || v15->Flags != v25
        || memcmp(
             &v15->Header.Type + v15->HashSecretKeyOffset,
             &InformationBuffer[*((unsigned int *)InformationBuffer + 6)],
             v15->HashSecretKeySize) )
      {
        goto LABEL_24;
      }
      v26 = *(_QWORD *)&v15->Header.Type - *(_QWORD *)InformationBuffer;
      if ( *(_QWORD *)&v15->Header.Type == *(_QWORD *)InformationBuffer )
        v26 = v15->HashInformation - (unsigned __int64)*((unsigned int *)InformationBuffer + 2);
      if ( !v26
        && (v24 < 2u
         || (v27 = *((_DWORD *)InformationBuffer + 8), v15->NumberOfProcessorMasks == v27)
         && (v28 = *((_DWORD *)InformationBuffer + 9), v15->ProcessorMasksEntrySize == v28)
         && !memcmp(
               &v15->Header.Type + v15->ProcessorMasksOffset,
               &InformationBuffer[*((unsigned int *)InformationBuffer + 7)],
               (unsigned int)(v27 * v28))
         && (v24 < 3u
          || v15->DefaultProcessorNumber.Group == *((_WORD *)InformationBuffer + 20)
          && v15->DefaultProcessorNumber.Number == InformationBuffer[42])) )
      {
        MiniportHandle->MiniportThread = 0LL;
      }
      else
      {
LABEL_24:
        if ( Size <= 0x394 )
        {
          Oid = (__int64)MiniportHandle->RssParametersBuffer->Oid;
          memmove((void *)Oid, InformationBuffer, Size);
          if ( ndisIsRssEnabledForMiniport(MiniportHandle) )
          {
            RssParametersBuffer = MiniportHandle->RssParametersBuffer;
            v30 = *(_BYTE *)(Oid + 1);
            v31 = *(_DWORD *)(Oid + 8);
            v32 = (unsigned __int8)*(_DWORD *)&RssParametersBuffer->Combined[8];
            v33 = RssParametersBuffer->Combined[1] == v30;
            LOBYTE(v47) = RssParametersBuffer->Combined[1];
            LOBYTE(v49) = v30;
            v34 = 0;
            if ( v32 == (unsigned __int8)v31 )
              v34 = v33;
            Size_4 = (unsigned __int8)v31;
            if ( *(_WORD *)&RssParametersBuffer->Combined[12] != *(_WORD *)(Oid + 12) )
              goto LABEL_88;
            v35 = 0;
            if ( (*(_WORD *)&RssParametersBuffer->Combined[4] & 0x10) == (*(_WORD *)(Oid + 4) & 0x10) )
              v35 = v34;
            if ( memcmp(
                   &RssParametersBuffer->Combined[*(unsigned int *)&RssParametersBuffer->Combined[16]],
                   (const void *)(Oid + *(unsigned int *)(Oid + 16)),
                   *(unsigned __int16 *)(Oid + 12)) )
            {
LABEL_88:
              v35 = 0;
            }
            if ( (unsigned __int8)v47 >= 2u && (unsigned __int8)v49 >= 2u )
            {
              v36 = *(_DWORD *)(Oid + 32);
              if ( *(_DWORD *)&RssParametersBuffer->Combined[32] != v36
                || (v37 = *(_DWORD *)(Oid + 36), *(_DWORD *)&RssParametersBuffer->Combined[36] != v37)
                || memcmp(
                     &RssParametersBuffer->Combined[*(unsigned int *)&RssParametersBuffer->Combined[28]],
                     (const void *)(Oid + *(unsigned int *)(Oid + 28)),
                     (unsigned int)(v36 * v37)) )
              {
                v35 = 0;
              }
              if ( (unsigned __int8)v47 >= 3u
                && (unsigned __int8)v49 >= 3u
                && (*(_WORD *)&RssParametersBuffer->Combined[40] != *(_WORD *)(Oid + 40)
                 || RssParametersBuffer->Combined[42] != *(_BYTE *)(Oid + 42)) )
              {
                v35 = 0;
              }
            }
            if ( *(_WORD *)&RssParametersBuffer->Combined[20] != *(_WORD *)(Oid + 20)
              || memcmp(
                   &RssParametersBuffer->Combined[*(unsigned int *)&RssParametersBuffer->Combined[24]],
                   (const void *)(Oid + *(unsigned int *)(Oid + 24)),
                   *(unsigned __int16 *)(Oid + 20)) )
            {
              v35 = 0;
            }
            OpenQueue = MiniportHandle->OpenQueue;
            v39 = v31 & 0xFFFF00;
            while ( OpenQueue )
            {
              v40 = OpenQueue->NdisRSSParameters;
              if ( v40 && OpenQueue != a1 )
                v39 |= v40->HashInformation & 0xFFFF00;
              OpenQueue = OpenQueue->MiniportNextOpen;
            }
            v41 = NewIrql;
            *(_DWORD *)(Oid + 8) = v39 | Size_4;
            v42 = *(_DWORD *)&RssParametersBuffer->Combined[8];
            MiniportHandle->MiniportThread = 0LL;
            KeReleaseSpinLock(&MiniportHandle->Lock, v41);
            v19 = 0;
            if ( v39 == (v42 & 0xFFFF00) )
              v19 = v35;
            if ( v19 == 1 )
              goto LABEL_35;
          }
          else
          {
            MiniportHandle->MiniportThread = 0LL;
            v19 = 0;
            KeReleaseSpinLock(&MiniportHandle->Lock, NewIrql);
          }
          v20 = a2->DATA.QUERY_INFORMATION.InformationBuffer;
          *(_DWORD *)&a2->NdisReserved[16] |= 0x800u;
          MiniportHandle->SetInfoBuf = v20;
          MiniportHandle->SetInfoBufLen = a2->DATA.METHOD_INFORMATION.InputBufferLength;
          a2->DATA.QUERY_INFORMATION.InformationBuffer = MiniportHandle->RssParametersBuffer->Oid;
          a2->DATA.QUERY_INFORMATION.InformationBufferLength = Size;
          goto LABEL_28;
        }
        MiniportHandle->MiniportThread = 0LL;
        v12 = -1073676268;
      }
      KeReleaseSpinLock(&MiniportHandle->Lock, NewIrql);
    }
    else
    {
      v12 = -1073741670;
    }
  }
LABEL_34:
  v19 = v47;
LABEL_35:
  a2->DATA.QUERY_INFORMATION.BytesWritten = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
LABEL_28:
  *v48 = v12;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x7Cu,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      v19,
      v12);
  if ( v12 && (byte_1C00E61C4 & 4) != 0 )
    McTemplateK0jqxddq_EtwWriteTransfer(
      MiniportHandle->IfIndex,
      (unsigned int)&SetOpenRSSCapsFailed,
      (_DWORD)MiniportHandle + 4008,
      (_DWORD)MiniportHandle + 4008,
      MiniportHandle->IfIndex,
      MiniportHandle->NetLuid.Value,
      v12,
      1,
      (char)a1);
  return v19;
}
