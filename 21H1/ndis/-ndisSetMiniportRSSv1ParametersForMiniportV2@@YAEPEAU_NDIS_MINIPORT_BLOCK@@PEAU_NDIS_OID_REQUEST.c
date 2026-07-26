/*
 * XREFs of ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0088B28
 * Callers:
 *     ?ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00371C0 (-ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000DF10 (WPP_RECORDER_SF_qqL.c)
 *     ?ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z @ 0x1C00377EC (-ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z.c)
 *     ?ndisGetMaxNumRssProcessors@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003E3C8 (-ndisGetMaxNumRssProcessors@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memmove @ 0x1C003F400 (memmove.c)
 *     ?ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C008709C (-ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_.c)
 *     ?ndisAreProcessorsEqual@@YAEU_PROCESSOR_NUMBER@@0@Z @ 0x1C00872C8 (-ndisAreProcessorsEqual@@YAEU_PROCESSOR_NUMBER@@0@Z.c)
 *     ?ndisInternalSetRSSInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C0087788 (-ndisInternalSetRSSInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z.c)
 *     ?ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU_PROCESSOR_NUMBER@@U3@G22@Z @ 0x1C0087858 (-ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU.c)
 *     ?ndisInternalSetRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@KKGKKPEAX@Z @ 0x1C0087C28 (-ndisInternalSetRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@KKGKKPEAX@Z.c)
 *     ?ndisIsTargetNonDefaultVPort@@YAEPEBU_NDIS_OID_REQUEST@@PEAK@Z @ 0x1C0087DBC (-ndisIsTargetNonDefaultVPort@@YAEPEBU_NDIS_OID_REQUEST@@PEAK@Z.c)
 *     ?ndisSetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@@Z @ 0x1C0088AA8 (-ndisSetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_VPO.c)
 *     WPP_RECORDER_SF_dqqL @ 0x1C0089C44 (WPP_RECORDER_SF_dqqL.c)
 */

unsigned __int8 __fastcall ndisSetMiniportRSSv1ParametersForMiniportV2(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int *a3,
        int a4)
{
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *InformationBuffer; // r13
  int v5; // r15d
  unsigned __int16 v8; // r12
  unsigned __int16 Flags; // cx
  int IndirectionTableSize; // edx
  int v11; // edi
  int v12; // eax
  KIRQL v13; // dl
  unsigned __int16 v14; // r9
  UCHAR Revision; // al
  char v16; // di
  unsigned int v17; // ecx
  size_t v18; // rax
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v19; // rax
  char v20; // r9
  struct _PROCESSOR_NUMBER DefaultProcessorNumber; // ebx
  unsigned __int16 v22; // r8
  bool v23; // zf
  unsigned __int16 v24; // cx
  unsigned int MaxNumRssProcessors; // eax
  struct _PROCESSOR_NUMBER *v26; // rax
  KIRQL v27; // dl
  unsigned __int8 result; // al
  bool v29; // [rsp+50h] [rbp-29h]
  bool v30; // [rsp+51h] [rbp-28h]
  char IsTargetNonDefaultVPort; // [rsp+52h] [rbp-27h]
  struct _PROCESSOR_NUMBER v32; // [rsp+54h] [rbp-25h] BYREF
  unsigned __int16 v33; // [rsp+58h] [rbp-21h]
  unsigned int v34; // [rsp+5Ch] [rbp-1Dh] BYREF
  void *Src; // [rsp+60h] [rbp-19h] BYREF
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v36; // [rsp+68h] [rbp-11h] BYREF
  struct _NDIS_VPORT_BLOCK *v37; // [rsp+70h] [rbp-9h] BYREF
  void *v38; // [rsp+78h] [rbp-1h]
  struct _PROCESSOR_NUMBER *v39; // [rsp+80h] [rbp+7h]
  struct _PROCESSOR_NUMBER *v40; // [rsp+88h] [rbp+Fh]
  size_t Size; // [rsp+90h] [rbp+17h] BYREF
  char v42; // [rsp+E8h] [rbp+6Fh]
  KIRQL NewIrql; // [rsp+F8h] [rbp+7Fh] BYREF

  InformationBuffer = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
  v5 = 0;
  Src = 0LL;
  v32 = 0;
  NewIrql = 0;
  v8 = 0;
  Flags = InformationBuffer->Flags;
  v40 = 0LL;
  v39 = 0LL;
  v33 = 0;
  v37 = 0LL;
  v29 = 0;
  v30 = 0;
  v38 = 0LL;
  v36 = 0LL;
  InformationBuffer->DefaultProcessorNumber.Reserved = 0;
  if ( (Flags & 0x10) != 0 || !LOBYTE(InformationBuffer->HashInformation) )
  {
    v42 = 0;
    goto LABEL_9;
  }
  v42 = 1;
  if ( (Flags & 4) != 0
    || (IndirectionTableSize = InformationBuffer->IndirectionTableSize,
        v8 = (unsigned __int16)IndirectionTableSize >> 2,
        (unsigned __int16)IndirectionTableSize >> 2)
    && ((v8 - 1LL) & v8) == 0 )
  {
LABEL_9:
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    v12 = ndisAllocateCombinedRSSParameters(
            a1,
            a2,
            &v37,
            &v36,
            (struct _NDIS_RECEIVE_SCALE_PARAMETERS **)&Size,
            (struct _NDIS_RECEIVE_SCALE_PARAMETERS **)&Src);
    v13 = NewIrql;
    v11 = v12;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v13);
    if ( v11 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_49;
      v14 = 12;
LABEL_12:
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        v14,
        (struct _GUID *)&WPP_55eab71d2273366299e40de7bd26ba8a_Traceguids,
        (char)a1,
        (char)a2,
        v11);
      goto LABEL_49;
    }
    IsTargetNonDefaultVPort = ndisIsTargetNonDefaultVPort(a2, (NDIS_OBJECT_HEADER *)&v34);
    v11 = ndisCalculateRssParametersSize(InformationBuffer, (unsigned int *)&v32.Group);
    if ( v11 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_49;
      v14 = 13;
      goto LABEL_12;
    }
    Revision = InformationBuffer->Header.Revision;
    v16 = 0;
    if ( Revision == 1 )
    {
      v17 = 28;
    }
    else if ( Revision == 2 )
    {
      v17 = 40;
    }
    else
    {
      v16 = 1;
      v17 = 44;
    }
    v18 = (unsigned int)v32;
    if ( *(_DWORD *)&v32 <= v17 )
      v18 = v17;
    Size = v18;
    memmove(Src, InformationBuffer, (unsigned int)v18);
    v19 = v36;
    v20 = 0;
    DefaultProcessorNumber = v36->DefaultProcessorNumber;
    v32 = DefaultProcessorNumber;
    if ( v42 )
    {
      v22 = InformationBuffer->Flags;
      v5 = ~(_BYTE)v22 & 2 | 1;
      if ( (v22 & 8) == 0 )
      {
        v5 = ~(unsigned __int8)InformationBuffer->Flags & 2 | 5;
        v38 = &InformationBuffer->Header.Type + InformationBuffer->HashSecretKeyOffset;
      }
      if ( v16 && (v22 & 0x20) == 0 )
      {
        v32 = InformationBuffer->DefaultProcessorNumber;
        v32.Reserved = 0;
        v23 = !ndisAreProcessorsEqual(DefaultProcessorNumber, v32);
        v19 = v36;
        v30 = v23;
      }
      if ( (v22 & 4) == 0 )
      {
        v40 = (struct _PROCESSOR_NUMBER *)(&v19->Header.Type + v19->IndirectionTableOffset);
        v24 = v19->IndirectionTableSize >> 2;
        v33 = v24;
        v8 = *((_WORD *)Src + 6) >> 2;
        v39 = (struct _PROCESSOR_NUMBER *)((char *)Src + *((unsigned int *)Src + 4));
        v29 = v8 < v24;
        if ( v8 > v24 )
        {
          v5 |= 0x10u;
          v29 = v8 < v24;
        }
      }
    }
    if ( IsTargetNonDefaultVPort == v20 )
    {
      MaxNumRssProcessors = ndisGetMaxNumRssProcessors(a1);
      v20 = 0;
    }
    else
    {
      MaxNumRssProcessors = v37->VPortParams.NumQueuePairs;
    }
    v34 = MaxNumRssProcessors;
    if ( v42 != v20 && a1->RssV2Initialized == v20 )
    {
      v11 = ndisInternalSetRSSInitialize(a1, a2);
      if ( v11 )
        goto LABEL_49;
      a1->RssV2Initialized = 1;
    }
    v11 = ndisInternalSetRSSv2Parameters(
            a1,
            a2,
            v5,
            v34,
            v8,
            InformationBuffer->HashInformation,
            InformationBuffer->HashSecretKeySize,
            v38);
    if ( v11 )
      goto LABEL_49;
    if ( v42 )
    {
      if ( v30 )
      {
        v26 = (struct _PROCESSOR_NUMBER *)((char *)Src + 40);
      }
      else
      {
        if ( (InformationBuffer->Flags & 4) != 0 )
          goto LABEL_48;
        v26 = &v32;
      }
      v11 = ndisInternalSetRSSv2IndirectionTable(a1, a2, v33, v40, DefaultProcessorNumber, v8, v39, v26);
      if ( v11 )
        goto LABEL_49;
      if ( v29 )
      {
        v11 = ndisInternalSetRSSv2Parameters(a1, a2, v5 & 1 | 0x10u, 0, v8, 0, 0, 0LL);
        if ( v11 )
          goto LABEL_49;
      }
    }
LABEL_48:
    v11 = 0;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    memmove(v36, Src, Size);
    ndisSetCombinedRSSParameters(a1, a2, v37, v36);
    v27 = NewIrql;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v27);
    goto LABEL_49;
  }
  v11 = -1073741811;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqqL(*((_QWORD *)WPP_GLOBAL_Control + 8), IndirectionTableSize, (_DWORD)a3, a4);
LABEL_49:
  result = 1;
  a2->DATA.QUERY_INFORMATION.BytesWritten = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
  *a3 = v11;
  return result;
}
