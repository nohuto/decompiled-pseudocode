/*
 * XREFs of ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x1C00013B0
 * Callers:
 *     ndisWMIDispatch @ 0x1C0010BF0 (ndisWMIDispatch.c)
 *     NdisWdfExecuteMethod @ 0x1C0061DF0 (NdisWdfExecuteMethod.c)
 * Callees:
 *     WPP_RECORDER_SF_qDq @ 0x1C000B2F0 (WPP_RECORDER_SF_qDq.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C000C5F0 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     NdisDereferenceWithTag @ 0x1C000F0A0 (NdisDereferenceWithTag.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0012CD8 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0016DAC (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 *     NdisMSleep @ 0x1C00174F0 (NdisMSleep.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C00675E8 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues @ 0x1C008D448 (ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues.c)
 *     ndisWmiXlateNdisOffloadToWmiOffload @ 0x1C008D678 (ndisWmiXlateNdisOffloadToWmiOffload.c)
 *     ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams @ 0x1C008D9A0 (ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00B8000 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ?ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00B82AC (-ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C012A010 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 */

__int64 __fastcall ndisWmiExecuteMethod(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_GUID *pNdisGuidMap,
        struct tagWNODE_METHOD_ITEM *a3,
        unsigned int a4,
        unsigned int *a5)
{
  unsigned int v8; // r12d
  int v9; // edx
  signed int v10; // ebx
  signed __int32 v11; // eax
  wchar_t *v12; // rdx
  __int64 OffsetInstanceName; // rax
  struct _NDIS_CO_VC_PTR_BLOCK *v14; // r13
  struct _NDIS_CO_VC_PTR_BLOCK *v15; // rsi
  unsigned __int16 v16; // cx
  _NDIS_BIND_PATHS *BindPaths; // rcx
  GUID *p_Guid; // r8
  __int64 v19; // rcx
  bool v20; // zf
  unsigned int Flags; // eax
  __int64 SizeDataBlock; // r8
  __int64 v23; // rcx
  char *v24; // r9
  NDIS_PORT_NUMBER v25; // esi
  void *v26; // rbx
  UINT v27; // r13d
  unsigned int v28; // edx
  NDIS_HANDLE RequestHandle; // rdx
  unsigned int Oid; // r8d
  unsigned int v31; // eax
  int v32; // ecx
  struct _NDIS_MINIPORT_BLOCK *v33; // rsi
  unsigned int v34; // eax
  int v35; // ecx
  unsigned int v36; // esi
  unsigned int v37; // ecx
  ULONG v38; // r11d
  struct _NDIS_MINIPORT_BLOCK *v39; // rsi
  _ULONG_REFERENCE *p_Ref; // rdi
  KIRQL v41; // al
  int v42; // edx
  ULONG_PTR RefCountTracker; // rcx
  KIRQL v44; // r12
  int v45; // r14d
  int v46; // edx
  int v47; // edx
  UINT BytesNeeded; // eax
  ULONG v50; // eax
  ULONG v51; // eax
  _LIST_ENTRY *p_WmiEnabledVcs; // r12
  _LIST_ENTRY *Flink; // rsi
  __int64 v54; // rcx
  ULONG v55; // eax
  __int64 v56; // rcx
  ULONG v57; // eax
  ULONG v58; // eax
  UINT v59; // eax
  __int64 DataBlockOffset; // rcx
  ULONG MethodId; // eax
  int v62; // eax
  ULONG BytesWritten; // eax
  signed int v64; // eax
  ULONG v65; // ecx
  __int64 v66; // rcx
  char *v67; // r8
  __m128i v68; // xmm2
  unsigned int v69; // ecx
  struct _KEVENT *RemoveReadyEvent; // rcx
  int v71; // [rsp+5Ch] [rbp-A4h]
  struct _NDIS_MINIPORT_BLOCK *v72; // [rsp+60h] [rbp-A0h] BYREF
  struct _NDIS_CO_VC_PTR_BLOCK *v73; // [rsp+68h] [rbp-98h]
  unsigned int v74; // [rsp+70h] [rbp-90h]
  UNICODE_STRING String2; // [rsp+78h] [rbp-88h] BYREF
  struct _NDIS_OID_REQUEST v76; // [rsp+90h] [rbp-70h] BYREF
  __m128i v77; // [rsp+190h] [rbp+90h]
  int v78; // [rsp+1A0h] [rbp+A0h]

  v74 = a4;
  v8 = a4;
  memset(&v76, 0, 0xF8uLL);
  v10 = 0;
  v71 = 0;
  v72 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      18,
      60,
      (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
      (char)a1);
  }
  v11 = _InterlockedIncrement((volatile signed __int32 *)&ndisPkgs);
  if ( !ImageSectionHandle )
  {
    if ( v11 == 1 )
    {
      ImageSectionHandle = MmLockPagableDataSection(AddressWithinSection);
      MmUnlockPagableImageSection(ImageSectionHandle);
    }
    else
    {
      do
        NdisMSleep(0x32u);
      while ( !ImageSectionHandle );
    }
  }
  MmLockPagableSectionByHandle(ImageSectionHandle);
  if ( (a3->WnodeHeader.Flags & 0x80u) != 0 )
  {
    v73 = 0LL;
LABEL_11:
    BindPaths = a1->BindPaths;
    if ( BindPaths )
      ndisReferenceMiniportByName(BindPaths->Paths, &v72, 0, MPREF_WMI_EXEC);
    goto LABEL_13;
  }
  OffsetInstanceName = a3->OffsetInstanceName;
  v12 = (wchar_t *)((char *)&a3->WnodeHeader.BufferSize + OffsetInstanceName + 2);
  v14 = 0LL;
  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  v15 = 0LL;
  v73 = 0LL;
  v16 = *(_WORD *)((char *)&a3->WnodeHeader.BufferSize + OffsetInstanceName);
  String2.Buffer = v12;
  String2.MaximumLength = v16;
  String2.Length = v16;
  if ( v16 >= 0x30u && v12 && v12[5] == 58 )
  {
    p_WmiEnabledVcs = &a1->WmiEnabledVcs;
    Flink = a1->WmiEnabledVcs.Flink;
    while ( Flink != p_WmiEnabledVcs )
    {
      v14 = (struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-20];
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)&Flink[-2].Blink, &String2, 1u) )
      {
        if ( !ndisReferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-20]) )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v12) = 2;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v12,
              18,
              10,
              (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
              (char)a1);
          }
          v10 = -1073741823;
        }
        break;
      }
      Flink = Flink->Flink;
      v14 = 0LL;
    }
    if ( Flink == p_WmiEnabledVcs )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v12,
          18,
          11,
          (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
          (char)a1,
          (__int64)&String2);
      v10 = -1073741162;
    }
    v15 = v14;
    if ( v10 < 0 )
      v15 = 0LL;
    v8 = v74;
    v73 = v15;
  }
  else if ( !RtlEqualUnicodeString(a1->pAdapterInstanceName, &String2, 1u) )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v12,
        18,
        12,
        (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
        (char)a1);
    }
    v10 = -1073741162;
  }
  if ( v10 < 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v12,
        18,
        61,
        (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
        (char)a1);
    }
    v73 = 0LL;
    goto LABEL_72;
  }
  v10 = 0;
  if ( !v15 )
    goto LABEL_11;
LABEL_13:
  if ( !pNdisGuidMap )
  {
    pNdisGuidMap = a1->pNdisGuidMap;
    p_Guid = &a3->WnodeHeader.Guid;
    if ( pNdisGuidMap )
    {
      LODWORD(v12) = 0;
      if ( a1->cNdisGuidMap )
      {
        while ( a3 == (struct tagWNODE_METHOD_ITEM *)-24LL )
        {
          if ( (pNdisGuidMap->Flags & 2) != 0 )
          {
            v20 = pNdisGuidMap->Oid == 0;
            goto LABEL_20;
          }
LABEL_21:
          LODWORD(v12) = (_DWORD)v12 + 1;
          ++pNdisGuidMap;
          if ( (unsigned int)v12 >= a1->cNdisGuidMap )
            goto LABEL_103;
        }
        v19 = *(_QWORD *)&pNdisGuidMap->Guid.Data1 - *(_QWORD *)&p_Guid->Data1;
        if ( *(_QWORD *)&pNdisGuidMap->Guid.Data1 == *(_QWORD *)&p_Guid->Data1 )
          v19 = *(_QWORD *)pNdisGuidMap->Guid.Data4 - *(_QWORD *)a3->WnodeHeader.Guid.Data4;
        v20 = v19 == 0;
LABEL_20:
        if ( v20 )
          goto LABEL_23;
        goto LABEL_21;
      }
    }
LABEL_103:
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v12,
        18,
        62,
        (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
        (char)a1);
    }
    goto LABEL_105;
  }
LABEL_23:
  Flags = pNdisGuidMap->Flags;
  if ( (Flags & 0x80u) == 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v12,
        18,
        63,
        (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
        (char)a1);
    }
    v10 = -1073741637;
    goto LABEL_50;
  }
  if ( (Flags & 0x200) == 0 )
  {
    DataBlockOffset = a3->DataBlockOffset;
    RequestHandle = &ndisIntReqWmi;
    *(_DWORD *)&v76.NdisReserved[16] |= 8u;
    MethodId = a3->MethodId;
    *(_QWORD *)&v76.NdisReserved[32] = &ndisIntReqWmi;
    v76.Header = (NDIS_OBJECT_HEADER)15466902;
    *(_QWORD *)&v76.RequestType = 12LL;
    Oid = pNdisGuidMap->Oid;
    v76.DATA.QUERY_INFORMATION.BytesNeeded = MethodId;
    v76.DATA.QUERY_INFORMATION.InformationBuffer = (char *)a3 + DataBlockOffset;
    v76.DATA.QUERY_INFORMATION.InformationBufferLength = a3->SizeDataBlock;
    v59 = v8 - DataBlockOffset;
    goto LABEL_134;
  }
  SizeDataBlock = a3->SizeDataBlock;
  if ( (unsigned int)SizeDataBlock < 0x20 )
    goto LABEL_105;
  v23 = a3->DataBlockOffset;
  v24 = (char *)a3 + v23;
  if ( *((_BYTE *)&a3->WnodeHeader.BufferSize + v23) != 2 || v24[1] != 1 || *((_WORD *)v24 + 1) < 0x20u )
    goto LABEL_105;
  v25 = *((_DWORD *)v24 + 1);
  v26 = (void *)*((_QWORD *)v24 + 2);
  v27 = *((_DWORD *)v24 + 6);
  v28 = pNdisGuidMap->Oid;
  if ( (Flags & 0x2000000) == 0 )
  {
    if ( v28 == 66086 && v8 - (unsigned int)v23 < 0x43C )
    {
      LODWORD(v12) = 56;
      if ( v8 >= 0x38 )
      {
        v51 = v23 + 1084;
        goto LABEL_113;
      }
      goto LABEL_112;
    }
    memmove((char *)a3 + v23, v24 + 32, SizeDataBlock - 32);
    if ( (pNdisGuidMap->Flags & 0x4000000) != 0 )
    {
      if ( a3->MethodId == 1 )
      {
        v54 = a3->DataBlockOffset;
        if ( v8 - (unsigned int)v54 < 0x10 )
        {
          LODWORD(v12) = 56;
          if ( v8 >= 0x38 )
          {
            a3->WnodeHeader.Flags |= 0x20u;
            v51 = v54 + 16;
            goto LABEL_114;
          }
          goto LABEL_112;
        }
        *(_DWORD *)&v76.NdisReserved[16] |= 8u;
        RequestHandle = &ndisIntReqWmi;
        *(_QWORD *)&v76.NdisReserved[32] = &ndisIntReqWmi;
        v76.Header = (NDIS_OBJECT_HEADER)15466902;
        Oid = pNdisGuidMap->Oid;
        v76.DATA.QUERY_INFORMATION.InformationBuffer = (char *)a3 + v54;
        v55 = a3->SizeDataBlock - 32;
        v76.RequestId = v26;
        v71 = 16;
        v76.RequestType = NdisRequestSetInformation;
        if ( !v26 )
          RequestHandle = v76.RequestHandle;
        v10 = 0;
        v76.RequestHandle = RequestHandle;
        v76.PortNumber = v25;
        v76.DATA.QUERY_INFORMATION.InformationBufferLength = v55;
        v76.Timeout = v27;
        goto LABEL_135;
      }
LABEL_105:
      v10 = -1073741811;
      goto LABEL_50;
    }
    *(_DWORD *)&v76.NdisReserved[16] |= 8u;
    RequestHandle = &ndisIntReqWmi;
    v56 = a3->DataBlockOffset;
    v57 = a3->MethodId;
    *(_QWORD *)&v76.NdisReserved[32] = &ndisIntReqWmi;
    v76.Header = (NDIS_OBJECT_HEADER)15466902;
    v76.RequestType = NdisRequestMethod;
    v76.PortNumber = v25;
    Oid = pNdisGuidMap->Oid;
    v76.DATA.QUERY_INFORMATION.BytesNeeded = v57;
    v76.DATA.QUERY_INFORMATION.InformationBuffer = (char *)a3 + v56;
    v58 = a3->SizeDataBlock - 32;
    v76.RequestId = v26;
    v76.DATA.QUERY_INFORMATION.InformationBufferLength = v58;
    v59 = v8 - v56;
    v76.Timeout = v27;
    if ( !v26 )
      RequestHandle = v76.RequestHandle;
    v10 = 0;
    v76.RequestHandle = RequestHandle;
LABEL_134:
    v76.DATA.QUERY_INFORMATION.BytesWritten = v59;
LABEL_135:
    v76.DATA.QUERY_INFORMATION.Oid = Oid;
    goto LABEL_35;
  }
  if ( ((v28 + 67042805) & 0xFFFFFFFD) != 0 )
  {
    if ( v28 + 67042802 <= 1 && v8 - (unsigned int)v23 < 0x20 )
    {
      LODWORD(v12) = 56;
      if ( v8 >= 0x38 )
      {
        v51 = v23 + 32;
LABEL_113:
        a3->WnodeHeader.Flags |= 0x20u;
LABEL_114:
        v10 = 0;
        goto LABEL_69;
      }
      goto LABEL_112;
    }
  }
  else if ( v8 - (unsigned int)v23 < 0x128 )
  {
    LODWORD(v12) = 56;
    if ( v8 >= 0x38 )
    {
      v51 = v23 + 296;
      goto LABEL_113;
    }
LABEL_112:
    v10 = -1073741789;
    LODWORD(v12) = 4;
    goto LABEL_71;
  }
  *(_DWORD *)&v76.NdisReserved[16] |= 8u;
  RequestHandle = &ndisIntReqWmi;
  *(_QWORD *)&v76.NdisReserved[32] = &ndisIntReqWmi;
  v76.Header = (NDIS_OBJECT_HEADER)15466902;
  Oid = pNdisGuidMap->Oid;
  v76.DATA.QUERY_INFORMATION.Oid = Oid;
  v76.RequestType = NdisRequestQueryStatistics;
  v76.PortNumber = *((_DWORD *)v24 + 1);
  v76.RequestId = v26;
  v76.DATA.QUERY_INFORMATION.InformationBuffer = (char *)a3 + v23;
  v76.DATA.QUERY_INFORMATION.InformationBufferLength = v8 - v23;
  if ( !v26 )
    RequestHandle = v76.RequestHandle;
  v10 = 0;
  v76.RequestHandle = RequestHandle;
  v76.Timeout = v27;
LABEL_35:
  v31 = pNdisGuidMap->Oid + 50265846;
  if ( v31 <= 5 && (v32 = 43, _bittest(&v32, v31)) )
  {
    v34 = ndisOidPMAddRemove(a1, 0LL, &v76);
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(RequestHandle) = 4;
      WPP_RECORDER_SF_qDq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)RequestHandle,
        Oid,
        64,
        (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
        (char)&v76,
        Oid,
        (char)a1);
    }
    if ( v73 || (v33 = v72) == 0LL )
      v33 = a1;
    v34 = ndisQuerySetMiniportEx(v33, v73, &v76, 0, 0LL, 0LL);
  }
  v36 = v34;
  LODWORD(v12) = -3;
  if ( ((v34 + 1073676268) & 0xFFFFFFFD) != 0 )
  {
    if ( v34 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v12,
          18,
          65,
          (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
          (char)a1);
      }
      LODWORD(v12) = 16;
      if ( (byte_1C00E6181 & 0x10) != 0 )
        McTemplateK0jqxddq_EtwWriteTransfer(
          v35,
          (unsigned int)&ExecuteMethodFailed,
          (_DWORD)a1 + 4008,
          (_DWORD)a1 + 4008,
          a1->IfIndex,
          a1->NetLuid.Value,
          v36,
          1,
          a3->MethodId);
      if ( (pNdisGuidMap->Flags & 0x200) != 0 )
      {
        if ( (v36 & 0xC0010000) == 0xC0010000 )
          v36 = (unsigned __int16)v36 | 0xC0230000;
      }
      else if ( v36 != 259 && v36 != -2147483643 )
      {
        v62 = -1073741823;
        if ( v36 != -1073741823 && v36 != -1073741670 && v36 != -1073741637 )
        {
          if ( v36 == -1073676267 )
            v62 = -1073741811;
          v10 = v62;
          goto LABEL_50;
        }
      }
      v10 = v36;
    }
    else
    {
      v37 = pNdisGuidMap->Oid;
      if ( v76.RequestType != NdisRequestMethod )
      {
        if ( v76.RequestType != NdisRequestSetInformation )
        {
          if ( ((v37 + 67042805) & 0xFFFFFFFD) != 0 )
          {
            if ( v37 + 67042802 <= 1 )
            {
              v67 = (char *)a3 + a3->DataBlockOffset;
              v68 = *(__m128i *)v67;
              LODWORD(v12) = *((_DWORD *)v67 + 4);
              *((_DWORD *)v67 + 7) = (_DWORD)v12;
              *(_DWORD *)v67 = _mm_cvtsi128_si32(v68);
              *((_WORD *)v67 + 1) = 32;
              v69 = _mm_cvtsi128_si32(_mm_srli_si128(v68, 8));
              v77 = v68;
              v78 = (int)v12;
              *((_DWORD *)v67 + 1) = _mm_cvtsi128_si32(_mm_srli_si128(v68, 4));
              *((_DWORD *)v67 + 2) = v69 & 3;
              *((_DWORD *)v67 + 3) = (v69 >> 2) & 3;
              *((_DWORD *)v67 + 4) = (v69 >> 4) & 3;
              *((_DWORD *)v67 + 5) = (unsigned __int8)v69 >> 6;
              *((_DWORD *)v67 + 6) = _mm_cvtsi128_si32(_mm_srli_si128(v68, 12));
              v38 = a3->DataBlockOffset + 32;
              a3->SizeDataBlock = 32;
            }
            else
            {
              v38 = v76.DATA.QUERY_INFORMATION.BytesWritten + a3->DataBlockOffset;
              a3->SizeDataBlock = v76.DATA.QUERY_INFORMATION.BytesWritten;
            }
            goto LABEL_49;
          }
          ndisWmiXlateNdisOffloadToWmiOffload((char *)a3 + a3->DataBlockOffset);
          BytesWritten = 296;
          goto LABEL_171;
        }
        if ( v37 != -50265846 && v37 != -50265843 )
        {
          v66 = a3->DataBlockOffset;
          *(_OWORD *)((char *)&a3->WnodeHeader.BufferSize + v66) = 0LL;
          *(ULONG *)((char *)&a3->WnodeHeader.BufferSize + v66) = 1048837;
          *((_BYTE *)&a3->WnodeHeader.HistoricalContext + v66) = v76.SupportedRevision;
          v38 = a3->DataBlockOffset + v71;
          BytesWritten = v71;
          goto LABEL_172;
        }
        BytesWritten = 196;
LABEL_171:
        v38 = BytesWritten + a3->DataBlockOffset;
        goto LABEL_172;
      }
      v12 = (wchar_t *)a3->DataBlockOffset;
      if ( v37 == 66086 )
      {
        ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams((char *)v12 + (_QWORD)a3);
        BytesWritten = 1084;
        goto LABEL_171;
      }
      if ( v37 != 66085 )
      {
        BytesWritten = v76.DATA.METHOD_INFORMATION.BytesWritten;
        v38 = v76.DATA.METHOD_INFORMATION.BytesWritten + (_DWORD)v12;
LABEL_172:
        a3->SizeDataBlock = BytesWritten;
        goto LABEL_49;
      }
      v64 = ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues(
              (char *)v12 + (_QWORD)a3,
              v76.DATA.METHOD_INFORMATION.BytesWritten);
      v10 = v64;
      if ( v64 == -1073676268 )
      {
        LODWORD(v12) = 56;
        if ( v8 >= 0x38 )
        {
          v65 = a3->DataBlockOffset;
          a3->WnodeHeader.Flags |= 0x20u;
          a3->OffsetInstanceName = v65 + 32;
          v10 = 0;
          goto LABEL_70;
        }
        goto LABEL_112;
      }
      if ( !v64 )
      {
        v38 = a3->DataBlockOffset;
        a3->SizeDataBlock = 0;
        v10 = 0;
LABEL_49:
        a3->WnodeHeader.BufferSize = v38;
        *a5 = v38;
        goto LABEL_50;
      }
      if ( (v64 & 0xC0010000) == 0xC0010000 )
        v10 = (unsigned __int16)v64 | 0xC0230000;
    }
LABEL_72:
    if ( v10 == 259 )
      goto LABEL_52;
    goto LABEL_50;
  }
  BytesNeeded = v76.DATA.METHOD_INFORMATION.BytesNeeded;
  if ( v76.RequestType != NdisRequestMethod )
    BytesNeeded = v76.DATA.QUERY_INFORMATION.BytesNeeded;
  v50 = a3->DataBlockOffset + BytesNeeded;
  LODWORD(v12) = 56;
  if ( v8 >= 0x38 )
  {
    a3->WnodeHeader.Flags |= 0x20u;
    v51 = v50 + 32;
LABEL_69:
    a3->OffsetInstanceName = v51;
LABEL_70:
    a3->WnodeHeader.BufferSize = 56;
LABEL_71:
    *a5 = (unsigned int)v12;
    goto LABEL_72;
  }
  v10 = -1073741789;
  *a5 = 4;
LABEL_50:
  if ( v73 )
    ndisDereferenceVcPtr(v73);
LABEL_52:
  if ( v72 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v12,
        20,
        25,
        (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
        (char)v72);
    }
    v39 = v72;
    p_Ref = &v72->Ref;
    v41 = KeAcquireSpinLockRaiseToDpc(&v72->Ref.SpinLock);
    RefCountTracker = (ULONG_PTR)v39->RefCountTracker;
    v44 = v41;
    if ( RefCountTracker )
      NdisDereferenceWithTag(RefCountTracker);
    v45 = p_Ref->ReferenceCount - 1;
    p_Ref->ReferenceCount = v45;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v42) = 4;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v42,
        20,
        14,
        (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
        (char)v72,
        v72->Ref.ReferenceCount);
    }
    KeReleaseSpinLock(&p_Ref->SpinLock, v44);
    if ( !v45 )
    {
      RemoveReadyEvent = v72->RemoveReadyEvent;
      if ( RemoveReadyEvent )
        KeSetEvent(RemoveReadyEvent, 0, 0);
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v46) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v46,
        20,
        26,
        (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
        (char)v72);
    }
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v47) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v47,
      18,
      66,
      (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
      (char)a1,
      v10);
  }
  return (unsigned int)v10;
}
