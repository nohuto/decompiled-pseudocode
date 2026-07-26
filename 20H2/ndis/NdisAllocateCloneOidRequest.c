/*
 * XREFs of NdisAllocateCloneOidRequest @ 0x1C000E430
 * Callers:
 *     ?ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C000AF10 (-ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qDDqq @ 0x1C000E6F0 (WPP_RECORDER_SF_qDDqq.c)
 *     memset @ 0x1C003FE40 (memset.c)
 */

NDIS_STATUS __stdcall NdisAllocateCloneOidRequest(
        NDIS_HANDLE SourceHandle,
        PNDIS_OID_REQUEST OidRequest,
        UINT PoolTag,
        PNDIS_OID_REQUEST *ClonedOidRequest)
{
  NDIS_STATUS v5; // ebp
  char v6; // r15
  char *v9; // rbx
  __int64 v10; // rcx
  char *PoolWithTag; // rax
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  UCHAR v15; // al
  NDIS_REQUEST_TYPE RequestType; // ecx
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  UCHAR Revision; // al
  USHORT Size; // ax
  __int64 v25; // rcx

  v5 = 0;
  v6 = 0;
  v9 = 0LL;
  if ( (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x20) == 0 )
  {
    if ( *(_BYTE *)SourceHandle == 18 )
      goto LABEL_26;
    if ( ((*(_BYTE *)SourceHandle - 5) & 0xEF) != 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xBu,
          0xAu,
          (struct _GUID *)&WPP_0ab6cdb66a74331fb483b2e922e06dd7_Traceguids,
          SourceHandle);
      v5 = -1073741811;
      goto LABEL_20;
    }
  }
  if ( *(_BYTE *)SourceHandle != 18 && (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x20) == 0 )
  {
    if ( *(_BYTE *)SourceHandle == 5 )
    {
      v10 = *((_QWORD *)SourceHandle + 2);
      if ( *(_BYTE *)(v10 + 100) <= 6u && (*(_BYTE *)(v10 + 100) != 6 || *(_BYTE *)(v10 + 101) < 0x32u) )
        goto LABEL_10;
    }
    goto LABEL_21;
  }
LABEL_26:
  v25 = *((_QWORD *)SourceHandle + 3);
  if ( *(_BYTE *)(v25 + 56) <= 6u && (*(_BYTE *)(v25 + 56) != 6 || *(_BYTE *)(v25 + 57) < 0x32u) )
    goto LABEL_10;
LABEL_21:
  v6 = 1;
LABEL_10:
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xF8uLL, PoolTag);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag + 1, 0, 0xF7uLL);
    *v9 = -106;
    if ( !v6 )
    {
      v15 = 1;
      *((_WORD *)v9 + 1) = 236;
      goto LABEL_13;
    }
    Revision = OidRequest->Header.Revision;
    if ( Revision == 1 )
    {
      Size = OidRequest->Header.Size;
      if ( Size >= 0xECu )
      {
LABEL_25:
        *((_WORD *)v9 + 1) = Size;
        v15 = OidRequest->Header.Revision;
LABEL_13:
        v9[1] = v15;
        *((_DWORD *)v9 + 1) = OidRequest->RequestType;
        *((_DWORD *)v9 + 3) = OidRequest->Timeout;
        *((_DWORD *)v9 + 2) = OidRequest->PortNumber;
        *((_QWORD *)v9 + 2) = OidRequest->RequestId;
        *((_DWORD *)v9 + 3) = OidRequest->Timeout;
        *((_QWORD *)v9 + 3) = OidRequest->RequestHandle;
        v9[232] = OidRequest->SupportedRevision;
        if ( OidRequest->Header.Revision >= 2u || (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x4000) != 0 )
        {
          *((_DWORD *)v9 + 60) = OidRequest[1].Header;
          *((_DWORD *)v9 + 61) = OidRequest[1].RequestType;
        }
        RequestType = OidRequest->RequestType;
        *((_DWORD *)v9 + 8) = OidRequest->DATA.QUERY_INFORMATION.Oid;
        if ( RequestType == NdisRequestMethod )
        {
          *((_DWORD *)v9 + 14) = OidRequest->DATA.QUERY_INFORMATION.BytesNeeded;
          *((_QWORD *)v9 + 5) = OidRequest->DATA.QUERY_INFORMATION.InformationBuffer;
          *((_DWORD *)v9 + 12) = OidRequest->DATA.QUERY_INFORMATION.InformationBufferLength;
          *((_DWORD *)v9 + 12) = OidRequest->DATA.QUERY_INFORMATION.InformationBufferLength;
          *((_DWORD *)v9 + 13) = OidRequest->DATA.QUERY_INFORMATION.BytesWritten;
          *((_DWORD *)v9 + 16) = OidRequest->DATA.METHOD_INFORMATION.BytesRead;
          *((_DWORD *)v9 + 17) = OidRequest->DATA.METHOD_INFORMATION.BytesNeeded;
          *((_DWORD *)v9 + 15) = OidRequest->DATA.METHOD_INFORMATION.BytesWritten;
        }
        else
        {
          *((_QWORD *)v9 + 5) = OidRequest->DATA.QUERY_INFORMATION.InformationBuffer;
          *((_DWORD *)v9 + 12) = OidRequest->DATA.QUERY_INFORMATION.InformationBufferLength;
          *((_DWORD *)v9 + 13) = OidRequest->DATA.QUERY_INFORMATION.BytesWritten;
          *((_DWORD *)v9 + 14) = OidRequest->DATA.QUERY_INFORMATION.BytesNeeded;
        }
        *((_DWORD *)v9 + 22) ^= (*(_DWORD *)&OidRequest->NdisReserved[16] ^ *((_DWORD *)v9 + 22)) & 0x8000;
        v17 = *((_DWORD *)v9 + 22) ^ ((unsigned __int8)*((_DWORD *)v9 + 22) ^ (unsigned __int8)*(_DWORD *)&OidRequest->NdisReserved[16]) & 0x80;
        *((_DWORD *)v9 + 22) = v17;
        v18 = v17 ^ (*(_DWORD *)&OidRequest->NdisReserved[16] ^ v17) & 4;
        *((_DWORD *)v9 + 22) = v18;
        v19 = v18 ^ (*(_DWORD *)&OidRequest->NdisReserved[16] ^ v18) & 0x80000;
        *((_DWORD *)v9 + 22) = v19;
        v20 = v19 ^ (*(_DWORD *)&OidRequest->NdisReserved[16] ^ v19) & 0x800000;
        *((_DWORD *)v9 + 22) = v20;
        v21 = v20 ^ (*(_DWORD *)&OidRequest->NdisReserved[16] ^ v20) & 0x1000000;
        *((_DWORD *)v9 + 22) = v21;
        *((_DWORD *)v9 + 38) = *(_DWORD *)&OidRequest->NdisReserved[80];
        *((_DWORD *)v9 + 38) = *(_DWORD *)&OidRequest->NdisReserved[80];
        v9[144] = OidRequest->NdisReserved[72];
        *((_DWORD *)v9 + 22) = v21 | 0x4000;
        *((_QWORD *)v9 + 12) = OidRequest;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qDDqq(*((_QWORD *)WPP_GLOBAL_Control + 8), v12, v13, v14);
        goto LABEL_20;
      }
    }
    else if ( Revision == 2 )
    {
      Size = OidRequest->Header.Size;
      if ( Size >= 0xF8u )
        goto LABEL_25;
    }
    KeBugCheckEx(0x7Cu, 0x21uLL, (ULONG_PTR)SourceHandle, (ULONG_PTR)OidRequest, 0LL);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      0xBu,
      (struct _GUID *)&WPP_0ab6cdb66a74331fb483b2e922e06dd7_Traceguids,
      OidRequest);
  v5 = -1073741670;
LABEL_20:
  *ClonedOidRequest = (PNDIS_OID_REQUEST)v9;
  return v5;
}
