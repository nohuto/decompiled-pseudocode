/*
 * XREFs of NdisFOidRequest @ 0x1C000C460
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000E000 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDd @ 0x1C000E3C0 (WPP_RECORDER_SF_qDd.c)
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0016DAC (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 *     NdisMIndicateStatusEx @ 0x1C0019C90 (NdisMIndicateStatusEx.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C001C124 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     memset @ 0x1C00403C0 (memset.c)
 */

NDIS_STATUS __stdcall NdisFOidRequest(NDIS_HANDLE NdisFilterHandle, PNDIS_OID_REQUEST OidRequest)
{
  int v2; // r8d
  PNDIS_OID_REQUEST v3; // rbx
  NDIS_STATUS v5; // ebp
  NDIS_OID Oid; // esi
  int v7; // eax
  NDIS_STATUS v8; // eax
  unsigned int v10; // eax
  int v11; // ecx
  char v12; // [rsp+30h] [rbp-C8h]
  char v13; // [rsp+30h] [rbp-C8h]
  char v14; // [rsp+30h] [rbp-C8h]
  char v15[4]; // [rsp+38h] [rbp-C0h]
  int v16; // [rsp+40h] [rbp-B8h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+50h] [rbp-A8h] BYREF

  v3 = OidRequest;
  v5 = -1073741823;
  if ( OidRequest->Header.Type == 0x96 && OidRequest->Header.Size >= 0xECu )
  {
    if ( OidRequest->Header.Revision )
    {
      Oid = OidRequest->DATA.QUERY_INFORMATION.Oid;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v15 = OidRequest->DATA.QUERY_INFORMATION.Oid;
        v12 = (char)OidRequest;
        LOBYTE(OidRequest) = 4;
        WPP_RECORDER_SF_qqL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)OidRequest,
          11,
          49,
          (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
          (char)NdisFilterHandle,
          v12,
          v15[0]);
      }
      if ( (*(_DWORD *)(*((_QWORD *)NdisFilterHandle + 4) + 3688LL) & 0x400) == 0 )
        v3->SupportedRevision = 1;
      if ( *(_QWORD *)(*((_QWORD *)NdisFilterHandle + 2) + 256LL) && Oid - 65798 > 1 && Oid != 65812 )
      {
        if ( v3->RequestType == NdisRequestSetInformation && v3->DATA.QUERY_INFORMATION.Oid == 66058 )
        {
          if ( v3->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
          {
            v16 = *(_DWORD *)v3->DATA.QUERY_INFORMATION.InformationBuffer;
            memset(&StatusIndication, 0, sizeof(StatusIndication));
            StatusIndication.SourceHandle = (void *)*((_QWORD *)NdisFilterHandle + 4);
            StatusIndication.StatusBuffer = &v16;
            StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
            StatusIndication.StatusCode = 1073807384;
            StatusIndication.StatusBufferSize = 4;
            NdisMIndicateStatusEx(StatusIndication.SourceHandle, &StatusIndication);
            v5 = 0;
          }
          else
          {
            v5 = -1073676267;
          }
        }
        else
        {
          v7 = *(_DWORD *)&v3->NdisReserved[16] | 0x40;
          *(_QWORD *)&v3->NdisReserved[32] = NdisFilterHandle;
          *(_DWORD *)&v3->NdisReserved[16] = v7;
          if ( v3->RequestType == NdisRequestSetInformation
            && (v7 & 0x4000) == 0
            && (v10 = v3->DATA.QUERY_INFORMATION.Oid + 50265846, v10 <= 5)
            && (v11 = 43, _bittest(&v11, v10)) )
          {
            v8 = ndisOidPMAddRemove(
                   *((struct _NDIS_MINIPORT_BLOCK **)NdisFilterHandle + 4),
                   (struct _NDIS_FILTER_BLOCK *)NdisFilterHandle,
                   v3);
          }
          else
          {
            v8 = ndisQueueOidRequest(
                   v3,
                   *((struct _NDIS_MINIPORT_BLOCK **)NdisFilterHandle + 4),
                   (struct _NDIS_FILTER_BLOCK *)NdisFilterHandle,
                   0LL);
          }
          v5 = v8;
        }
      }
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(OidRequest) = 4;
        WPP_RECORDER_SF_qDd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)OidRequest,
          v2,
          50,
          (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
          (char)v3,
          Oid,
          v5);
      }
      return v5;
    }
    else
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v13 = (char)OidRequest;
        LOBYTE(OidRequest) = 2;
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)OidRequest,
          11,
          48,
          (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
          (char)NdisFilterHandle,
          v13);
      }
      return -1071448020;
    }
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v14 = (char)OidRequest;
      LOBYTE(OidRequest) = 2;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)OidRequest,
        11,
        47,
        (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
        (char)NdisFilterHandle,
        v14);
    }
    return -1073741811;
  }
}
