/*
 * XREFs of ?ndisOidTranslateBetweenOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C000F420
 * Callers:
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C001BF54 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C000AE64 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_Dq @ 0x1C003D124 (WPP_RECORDER_SF_Dq.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 */

void __fastcall ndisOidTranslateBetweenOids(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, struct _NDIS_OID_REQUEST *a3)
{
  NDIS_OID Oid; // edi
  int v6; // edx
  int v7; // r8d
  PVOID v8; // rax
  int v9; // eax
  int v10; // eax
  PVOID PoolWithTag; // rax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  _QWORD v15[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct _NDIS_OID_REQUEST v16; // [rsp+50h] [rbp-B0h] BYREF

  Oid = a3->DATA.QUERY_INFORMATION.Oid;
  memset(&v16.Header.Revision, 0, 0xF7uLL);
  v15[0] = 0LL;
  if ( Oid == 131334 )
  {
    if ( a1->MajorNdisVersion < 6u )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dq(*((_QWORD *)WPP_GLOBAL_Control + 8), v6, v7, 205);
      memset(&v16, 0, 0xF8uLL);
      *(_DWORD *)&v16.NdisReserved[16] |= 0x100008u;
      v16.DATA.QUERY_INFORMATION.InformationBuffer = v15;
      *(_QWORD *)&v16.NdisReserved[32] = &ndisIntReqGeneric;
      v16.Header = (NDIS_OBJECT_HEADER)15466902;
      v16.DATA.QUERY_INFORMATION.Oid = 131332;
      *(_QWORD *)&v16.RequestType = 2LL;
      v16.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x7172444Eu);
      *(_QWORD *)&a3->NdisReserved[72] = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x40uLL);
        v12 = ndisQuerySetMiniport(a1, 0LL, &v16, 0, 0LL);
        *(_DWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 56LL) = v12;
        if ( !v12 )
        {
          *(_QWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 24LL) = v15[0];
          memset(&v16, 0, 0xF8uLL);
          *(_DWORD *)&v16.NdisReserved[16] |= 0x100008u;
          v16.DATA.QUERY_INFORMATION.InformationBuffer = v15;
          *(_QWORD *)&v16.NdisReserved[32] = &ndisIntReqGeneric;
          v16.Header = (NDIS_OBJECT_HEADER)15466902;
          v16.DATA.QUERY_INFORMATION.Oid = 131333;
          *(_QWORD *)&v16.RequestType = 2LL;
          v16.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
          v13 = ndisQuerySetMiniport(a1, 0LL, &v16, 0, 0LL);
          *(_DWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 56LL) = v13;
          if ( !v13 )
          {
            *(_QWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 32LL) = v15[0];
            *(_QWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 40LL) = *(_QWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 24LL)
                                                                 + *(_QWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 32LL);
            memset(&v16, 0, 0xF8uLL);
            *(_DWORD *)&v16.NdisReserved[16] |= 0x100008u;
            v16.DATA.QUERY_INFORMATION.InformationBuffer = v15;
            *(_QWORD *)&v16.NdisReserved[32] = &ndisIntReqGeneric;
            v16.Header = (NDIS_OBJECT_HEADER)15466902;
            v16.DATA.QUERY_INFORMATION.Oid = 131331;
            *(_QWORD *)&v16.RequestType = 2LL;
            v16.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            v14 = ndisQuerySetMiniport(a1, 0LL, &v16, 0, 0LL);
            *(_DWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 56LL) = v14;
            if ( !v14 )
              *(_QWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 48LL) = v15[0];
          }
        }
      }
    }
  }
  else if ( Oid == 131611 && a1->MajorNdisVersion < 6u )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Dq(*((_QWORD *)WPP_GLOBAL_Control + 8), v6, v7, 204);
    memset(&v16, 0, 0xF8uLL);
    *(_DWORD *)&v16.NdisReserved[16] |= 0x100088u;
    v16.DATA.QUERY_INFORMATION.InformationBuffer = v15;
    *(_QWORD *)&v16.NdisReserved[32] = &ndisIntReqGeneric;
    v16.Header = (NDIS_OBJECT_HEADER)15466902;
    v16.DATA.QUERY_INFORMATION.Oid = 131332;
    *(_QWORD *)&v16.RequestType = 2LL;
    v16.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
    v8 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x7172444Eu);
    *(_QWORD *)&a3->NdisReserved[72] = v8;
    if ( v8 )
    {
      memset(v8, 0, 0x40uLL);
      v9 = ndisQuerySetMiniport(a1, 0LL, &v16, 0, 0LL);
      *(_DWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 56LL) = v9;
      if ( !v9 )
      {
        *(_QWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 24LL) = v15[0];
        memset(&v16, 0, 0xF8uLL);
        *(_DWORD *)&v16.NdisReserved[16] |= 0x100008u;
        v16.DATA.QUERY_INFORMATION.InformationBuffer = v15;
        *(_QWORD *)&v16.NdisReserved[32] = &ndisIntReqGeneric;
        v16.Header = (NDIS_OBJECT_HEADER)15466902;
        v16.DATA.QUERY_INFORMATION.Oid = 131333;
        *(_QWORD *)&v16.RequestType = 2LL;
        v16.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
        v10 = ndisQuerySetMiniport(a1, 0LL, &v16, 0, 0LL);
        *(_DWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 56LL) = v10;
        if ( !v10 )
        {
          *(_QWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 32LL) = v15[0];
          *(_QWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 40LL) = *(_QWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 24LL)
                                                               + *(_QWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 32LL);
        }
      }
    }
  }
}
