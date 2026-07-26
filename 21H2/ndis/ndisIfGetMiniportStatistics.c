/*
 * XREFs of ndisIfGetMiniportStatistics @ 0x1C00FA650
 * Callers:
 *     ndisIfQueryFilterObject @ 0x1C00FA8E0 (ndisIfQueryFilterObject.c)
 *     ndisIfQueryMiniportObject @ 0x1C00FD658 (ndisIfQueryMiniportObject.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C000AF54 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqqL @ 0x1C000E1D0 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000E2D0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000EAC0 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     ?ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000ECC0 (-ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_M.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     memset @ 0x1C00403C0 (memset.c)
 */

__int64 __fastcall ndisIfGetMiniportStatistics(
        struct _NDIS_MINIPORT_BLOCK *a1,
        _OWORD *a2,
        struct _NDIS_FILTER_BLOCK *a3)
{
  int v6; // r14d
  _QWORD *v7; // r15
  int v8; // edx
  int v9; // eax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  NDIS_OID *v19; // r12
  __int64 v20; // r13
  __int64 v21; // rax
  _QWORD v22[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct _NDIS_OID_REQUEST v23; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v24[20]; // [rsp+160h] [rbp+60h] BYREF

  v6 = 0;
  memset(&v23, 0, 0xF8uLL);
  memset(v24, 0, 0x98uLL);
  v22[0] = 0LL;
  v7 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xAu,
      (struct _GUID *)&WPP_c920fc8b5d2332d789f3c4881e4e0e63_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  memset(a2, 0, 0x90uLL);
  if ( (unsigned __int8)ndisReferenceMiniportByHandleForNsi(a1, 3u, 0x3Bu) )
  {
    memset(&v23, 0, 0xF8uLL);
    v23.Header = (NDIS_OBJECT_HEADER)15466902;
    *(_QWORD *)&v23.NdisReserved[32] = &ndisIntReqNsi;
    v9 = *(_DWORD *)&v23.NdisReserved[16] | 8;
    v23.DATA.QUERY_INFORMATION.Oid = 0;
    *(_DWORD *)&v23.NdisReserved[16] |= 8u;
    *(_QWORD *)&v23.RequestType = 2LL;
    v23.DATA.QUERY_INFORMATION.InformationBuffer = 0LL;
    v23.DATA.QUERY_INFORMATION.InformationBufferLength = 0;
    if ( !a3 )
      *(_DWORD *)&v23.NdisReserved[16] = v9 | 0x100000;
    if ( a1->MajorNdisVersion < 6u )
    {
      v19 = (NDIS_OID *)&unk_1C00D3820;
      v20 = 18LL;
      do
      {
        switch ( *v19 )
        {
          case 0x20202u:
            v23.DATA.QUERY_INFORMATION.Oid = 131586;
            goto LABEL_35;
          case 0x20208u:
            v23.DATA.QUERY_INFORMATION.Oid = 131592;
LABEL_35:
            *v7 = 0LL;
            v23.DATA.QUERY_INFORMATION.InformationBuffer = v22;
            v22[0] = 0LL;
            v23.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            v6 = ndisQuerySetMiniport(a1, 0LL, &v23, 0, a3);
            if ( v6 )
              break;
            goto LABEL_41;
          case 0x20219u:
            v22[0] = 0LL;
            v23.DATA.QUERY_INFORMATION.InformationBuffer = v22;
            *v7 = 0LL;
            v23.DATA.QUERY_INFORMATION.Oid = 131591;
            v23.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, &v23, 0, a3) )
              *v7 = v22[0];
            v22[0] = 0LL;
            v23.DATA.QUERY_INFORMATION.InformationBuffer = v22;
            v23.DATA.QUERY_INFORMATION.Oid = 131593;
            v23.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, &v23, 0, a3) )
              *v7 += v22[0];
            v23.DATA.QUERY_INFORMATION.Oid = 131595;
            goto LABEL_27;
          case 0x2021Au:
            *v7 = 0LL;
            v23.DATA.QUERY_INFORMATION.InformationBuffer = v22;
            v22[0] = 0LL;
            v23.DATA.QUERY_INFORMATION.Oid = 131585;
            v23.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, &v23, 0, a3) )
              *v7 = v22[0];
            v22[0] = 0LL;
            v23.DATA.QUERY_INFORMATION.InformationBuffer = v22;
            v23.DATA.QUERY_INFORMATION.Oid = 131587;
            v23.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, &v23, 0, a3) )
              *v7 += v22[0];
            v23.DATA.QUERY_INFORMATION.Oid = 131589;
            goto LABEL_27;
          case 0x2021Bu:
            v22[0] = 0LL;
            v23.DATA.QUERY_INFORMATION.InformationBuffer = v22;
            *v7 = 0LL;
            v23.DATA.QUERY_INFORMATION.Oid = 131332;
            v23.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, &v23, 0, a3) )
              *v7 = v22[0];
            v23.DATA.QUERY_INFORMATION.Oid = 131333;
LABEL_27:
            v22[0] = 0LL;
            v23.DATA.QUERY_INFORMATION.InformationBuffer = v22;
            v23.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            v6 = ndisQuerySetMiniport(a1, 0LL, &v23, 0, a3);
            if ( !v6 )
              *v7 += v22[0];
            break;
          case 0x2021Cu:
            v22[0] = 0LL;
            v21 = 2LL;
            do
            {
              *v7 = 0LL;
              --v21;
            }
            while ( v21 );
            break;
          default:
            v23.DATA.QUERY_INFORMATION.Oid = *v19;
            v23.DATA.QUERY_INFORMATION.InformationBuffer = v22;
            *v7 = 0LL;
            v22[0] = 0LL;
            v23.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            v6 = ndisQuerySetMiniport(a1, 0LL, &v23, 0, a3);
            if ( !v6 )
LABEL_41:
              *v7 = v22[0];
            break;
        }
        ++v7;
        ++v19;
        --v20;
      }
      while ( v20 );
    }
    else
    {
      v23.DATA.QUERY_INFORMATION.Oid = 131334;
      v23.DATA.QUERY_INFORMATION.InformationBuffer = v24;
      v23.DATA.QUERY_INFORMATION.InformationBufferLength = 152;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xBu,
          0xBu,
          (struct _GUID *)&WPP_c920fc8b5d2332d789f3c4881e4e0e63_Traceguids,
          (char)&v23,
          a1);
      v6 = ndisQuerySetMiniport(a1, 0LL, &v23, 0, a3);
      if ( !v6 )
      {
        v10 = *(_OWORD *)&v24[3];
        *a2 = *(_OWORD *)&v24[1];
        v11 = *(_OWORD *)&v24[5];
        a2[1] = v10;
        v12 = *(_OWORD *)&v24[7];
        a2[2] = v11;
        v13 = *(_OWORD *)&v24[9];
        a2[3] = v12;
        v14 = *(_OWORD *)&v24[11];
        a2[4] = v13;
        v15 = *(_OWORD *)&v24[13];
        a2[5] = v14;
        v16 = *(_OWORD *)&v24[15];
        a2[6] = v15;
        v17 = *(_OWORD *)&v24[17];
        a2[7] = v16;
        a2[8] = v17;
      }
    }
    ndisDereferenceMiniportForNsi(a1, NSIREF_IFSTATS, 0x3Bu);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      0x16u,
      0xCu,
      (struct _GUID *)&WPP_c920fc8b5d2332d789f3c4881e4e0e63_Traceguids,
      (char)a1,
      (char)a2,
      (char)a3,
      v6);
  return 0LL;
}
