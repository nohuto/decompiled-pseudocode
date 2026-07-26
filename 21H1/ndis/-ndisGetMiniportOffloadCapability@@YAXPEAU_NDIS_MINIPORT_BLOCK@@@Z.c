/*
 * XREFs of ?ndisGetMiniportOffloadCapability@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008E270
 * Callers:
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C006C580 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 * Callees:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C000C500 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     ?ndisMAllocateMiniportOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0024CAC (-ndisMAllocateMiniportOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 */

void __fastcall ndisGetMiniportOffloadCapability(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v2; // r14
  char v3; // r15
  char v4; // r12
  char v5; // r13
  char v6; // si
  char v7; // bl
  _NDIS_OFFLOAD *p_MiniportInitialConfig; // rcx
  unsigned int v9; // r10d
  char *i; // rdx
  int v11; // r9d
  int v12; // r8d
  int v13; // r8d
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  struct _NDIS_OID_REQUEST v21; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v22[36]; // [rsp+138h] [rbp+30h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  memset(v22, 0, sizeof(v22));
  if ( !(unsigned int)ndisMAllocateMiniportOffload(a1) )
  {
    v22[3] = 0;
    v22[5] |= 1u;
    v22[0] = 1;
    v22[1] = 28;
    v22[4] = 2;
    v22[6] = 14;
    memset(&v21, 0, 0xF8uLL);
    *(_DWORD *)&v21.NdisReserved[16] |= 0x80u;
    v21.DATA.QUERY_INFORMATION.InformationBuffer = v22;
    v21.Header = (NDIS_OBJECT_HEADER)15466902;
    *(_QWORD *)&v21.NdisReserved[32] = &ndisIntReqGeneric;
    v21.DATA.QUERY_INFORMATION.Oid = -67042815;
    v21.DATA.QUERY_INFORMATION.InformationBufferLength = 144;
    if ( !(unsigned int)ndisQuerySetMiniportEx(a1, 0LL, &v21, 0, 0LL, 0LL) && v22[3] )
    {
      p_MiniportInitialConfig = &a1->Offload->MiniportInitialConfig;
      *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Transmit + 1) &= 0xFFFFFC00;
      *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Receive + 1) &= 0xFFFFFC00;
      *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Receive + 1) &= 0xFFFFFF00;
      *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Transmit + 1) &= 0xFFFFFF00;
      *((_DWORD *)&p_MiniportInitialConfig->LsoV1.IPv4 + 3) &= 0xFFFFFFF0;
      *((_DWORD *)&p_MiniportInitialConfig->LsoV2.IPv6 + 3) &= 0xFFFFFFF0;
      p_MiniportInitialConfig->Checksum.IPv4Receive.Encapsulation = 0;
      p_MiniportInitialConfig->Checksum.IPv6Receive.Encapsulation = 0;
      p_MiniportInitialConfig->Checksum.IPv6Transmit.Encapsulation = 0;
      *(_QWORD *)&p_MiniportInitialConfig->LsoV1.IPv4.Encapsulation = 0LL;
      p_MiniportInitialConfig->LsoV1.IPv4.MinSegmentCount = 0;
      p_MiniportInitialConfig->LsoV2.IPv4.Encapsulation = 0;
      *(_QWORD *)&p_MiniportInitialConfig->LsoV2.IPv4.MinSegmentCount = 0LL;
      *(_QWORD *)&p_MiniportInitialConfig->LsoV2.IPv6.MaxOffLoadSize = 0LL;
      *(_QWORD *)&p_MiniportInitialConfig->Header.Type = 7340455LL;
      v9 = v22[1];
      for ( i = (char *)v22 + v22[1]; *(_DWORD *)i == 1; i += v20 )
      {
        if ( *((_DWORD *)i + 1) != 24 )
          break;
        v11 = *((_DWORD *)i + 4);
        if ( v11 + v9 + 20 > 0x90 )
          break;
        v12 = *((_DWORD *)i + 2);
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            if ( v13 == 1 )
            {
              a1->Offload->Ndis5LSO = 1;
              if ( *((_DWORD *)i + 5) > 1u )
                break;
              if ( i[33] == 1 )
              {
                v6 = 1;
                *((_DWORD *)&p_MiniportInitialConfig->LsoV1.IPv4 + 3) = *((_DWORD *)&p_MiniportInitialConfig->LsoV1.IPv4
                                                                        + 3) & 0xFFFFFFF3 | 4;
              }
              if ( i[32] == 1 )
              {
                v6 = 1;
                *((_DWORD *)&p_MiniportInitialConfig->LsoV1.IPv4 + 3) = *((_DWORD *)&p_MiniportInitialConfig->LsoV1.IPv4
                                                                        + 3) & 0xFFFFFFFC | 1;
              }
              p_MiniportInitialConfig->LsoV1.IPv4.MinSegmentCount = *((_DWORD *)i + 7);
              p_MiniportInitialConfig->LsoV1.IPv4.MaxOffLoadSize = *((_DWORD *)i + 6);
              if ( *((_DWORD *)i + 7) && *((_DWORD *)i + 6) )
                v6 = 1;
              if ( v6 == 1 )
                p_MiniportInitialConfig->LsoV1.IPv4.Encapsulation = 2;
            }
          }
          else
          {
            if ( v11 != 24 )
              break;
            a1->Offload->Ndis5IPsec = 1;
            p_MiniportInitialConfig->IPsecV1.Supported.TransportTunnelCombined = 0;
            p_MiniportInitialConfig->IPsecV1.Supported.Flags = *((_DWORD *)i + 8);
            if ( *((_DWORD *)i + 5) )
            {
              p_MiniportInitialConfig->IPsecV1.Supported.AhEspCombined = 1;
              v7 = 1;
            }
            if ( *((_DWORD *)i + 7) )
            {
              p_MiniportInitialConfig->IPsecV1.Supported.IPv4Options = 1;
              v7 = 1;
            }
            v14 = *((_DWORD *)i + 9);
            if ( (v14 & 1) != 0 )
            {
              v7 = 1;
              p_MiniportInitialConfig->IPsecV1.IPv4AH = (_NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4AH>)(*(_DWORD *)&p_MiniportInitialConfig->IPsecV1.IPv4AH & 0xFFFFFFFC | 1);
              v14 = *((_DWORD *)i + 9);
            }
            if ( (v14 & 2) != 0 )
            {
              v7 = 1;
              p_MiniportInitialConfig->IPsecV1.IPv4AH = (_NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4AH>)(*(_DWORD *)&p_MiniportInitialConfig->IPsecV1.IPv4AH & 0xFFFFFFF3 | 4);
              v14 = *((_DWORD *)i + 9);
            }
            if ( (v14 & 4) != 0 )
            {
              v7 = 1;
              p_MiniportInitialConfig->IPsecV1.IPv4AH = (_NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4AH>)(*(_DWORD *)&p_MiniportInitialConfig->IPsecV1.IPv4AH & 0xFFFFFFCF | 0x10);
              v14 = *((_DWORD *)i + 9);
            }
            if ( (v14 & 0x10) != 0 )
            {
              v7 = 1;
              p_MiniportInitialConfig->IPsecV1.IPv4AH = (_NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4AH>)(*(_DWORD *)&p_MiniportInitialConfig->IPsecV1.IPv4AH & 0xFFFFFCFF | 0x100);
              v14 = *((_DWORD *)i + 9);
            }
            if ( (v14 & 0x20) != 0 )
            {
              v7 = 1;
              p_MiniportInitialConfig->IPsecV1.IPv4AH = (_NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4AH>)(*(_DWORD *)&p_MiniportInitialConfig->IPsecV1.IPv4AH & 0xFFFFF3FF | 0x400);
            }
            v15 = *((_DWORD *)i + 10);
            if ( (v15 & 0x40) != 0 )
            {
              v7 = 1;
              p_MiniportInitialConfig->IPsecV1.IPv4ESP = (_NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4ESP>)(*(_DWORD *)&p_MiniportInitialConfig->IPsecV1.IPv4ESP & 0xFFFFCFFF | 0x1000);
              v15 = *((_DWORD *)i + 10);
            }
            if ( (v15 & 0x80u) != 0 )
            {
              v7 = 1;
              p_MiniportInitialConfig->IPsecV1.IPv4ESP = (_NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4ESP>)(*(_DWORD *)&p_MiniportInitialConfig->IPsecV1.IPv4ESP & 0xFFFF3FFF | 0x4000);
              v15 = *((_DWORD *)i + 10);
            }
            if ( (v15 & 1) != 0 )
            {
              v7 = 1;
              p_MiniportInitialConfig->IPsecV1.IPv4ESP = (_NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4ESP>)(*(_DWORD *)&p_MiniportInitialConfig->IPsecV1.IPv4ESP & 0xFFFFFFFC | 1);
              v15 = *((_DWORD *)i + 10);
            }
            if ( (v15 & 4) != 0 )
            {
              v7 = 1;
              p_MiniportInitialConfig->IPsecV1.IPv4ESP = (_NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4ESP>)(*(_DWORD *)&p_MiniportInitialConfig->IPsecV1.IPv4ESP & 0xFFFFFFCF | 0x10);
              v15 = *((_DWORD *)i + 10);
            }
            if ( (v15 & 8) != 0 )
            {
              v7 = 1;
              p_MiniportInitialConfig->IPsecV1.IPv4ESP = (_NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4ESP>)(*(_DWORD *)&p_MiniportInitialConfig->IPsecV1.IPv4ESP & 0xFFFFFF3F | 0x40);
              v15 = *((_DWORD *)i + 10);
            }
            if ( (v15 & 0x10) != 0 )
            {
              v7 = 1;
              p_MiniportInitialConfig->IPsecV1.IPv4ESP = (_NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4ESP>)(*(_DWORD *)&p_MiniportInitialConfig->IPsecV1.IPv4ESP & 0xFFFFFCFF | 0x100);
              v15 = *((_DWORD *)i + 10);
            }
            if ( (v15 & 2) != 0 )
            {
              v7 = 1;
              p_MiniportInitialConfig->IPsecV1.IPv4ESP = (_NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4ESP>)(*(_DWORD *)&p_MiniportInitialConfig->IPsecV1.IPv4ESP & 0xFFFFFFF3 | 4);
            }
            if ( v7 == 1 )
              p_MiniportInitialConfig->IPsecV1.Supported.Encapsulation = 2;
            *((_DWORD *)i + 10) &= ~0x20u;
          }
        }
        else
        {
          if ( v11 != 16 )
            break;
          a1->Offload->Ndis5Xsum = 1;
          v16 = *((_DWORD *)i + 5);
          if ( (v16 & 1) != 0 )
          {
            v3 = 1;
            *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Transmit + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Transmit
                                                                               + 1) & 0xFFFFFFFC | 1;
            v16 = *((_DWORD *)i + 5);
          }
          if ( (v16 & 2) != 0 )
          {
            v3 = 1;
            *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Transmit + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Transmit
                                                                               + 1) & 0xFFFFFFF3 | 4;
            v16 = *((_DWORD *)i + 5);
          }
          if ( (v16 & 4) != 0 )
          {
            v3 = 1;
            *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Transmit + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Transmit
                                                                               + 1) & 0xFFFFFFCF | 0x10;
            v16 = *((_DWORD *)i + 5);
          }
          if ( (v16 & 8) != 0 )
          {
            v3 = 1;
            *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Transmit + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Transmit
                                                                               + 1) & 0xFFFFFF3F | 0x40;
            v16 = *((_DWORD *)i + 5);
          }
          if ( (v16 & 0x10) != 0 )
          {
            v3 = 1;
            *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Transmit + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Transmit
                                                                               + 1) & 0xFFFFFCFF | 0x100;
          }
          if ( v3 == 1 )
            p_MiniportInitialConfig->Checksum.IPv4Transmit.Encapsulation = 2;
          v17 = *((_DWORD *)i + 6);
          if ( (v17 & 1) != 0 )
          {
            v2 = 1;
            *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Receive + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Receive
                                                                              + 1) & 0xFFFFFFFC | 1;
            v17 = *((_DWORD *)i + 6);
          }
          if ( (v17 & 2) != 0 )
          {
            v2 = 1;
            *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Receive + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Receive
                                                                              + 1) & 0xFFFFFFF3 | 4;
            v17 = *((_DWORD *)i + 6);
          }
          if ( (v17 & 4) != 0 )
          {
            v2 = 1;
            *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Receive + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Receive
                                                                              + 1) & 0xFFFFFFCF | 0x10;
            v17 = *((_DWORD *)i + 6);
          }
          if ( (v17 & 8) != 0 )
          {
            v2 = 1;
            *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Receive + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Receive
                                                                              + 1) & 0xFFFFFF3F | 0x40;
            v17 = *((_DWORD *)i + 6);
          }
          if ( (v17 & 0x10) != 0 )
          {
            v2 = 1;
            *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Receive + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv4Receive
                                                                              + 1) & 0xFFFFFCFF | 0x100;
          }
          if ( v2 == 1 )
            p_MiniportInitialConfig->Checksum.IPv4Receive.Encapsulation = 2;
          v18 = *((_DWORD *)i + 8);
          if ( (v18 & 1) != 0 )
          {
            p_MiniportInitialConfig->Checksum.IPv6Receive.Encapsulation = 0;
            *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Receive + 1) &= 0xFFFFFF00;
          }
          else
          {
            if ( (v18 & 2) != 0 )
            {
              v5 = 1;
              *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Receive + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Receive
                                                                                + 1) & 0xFFFFFFF3 | 4;
              v18 = *((_DWORD *)i + 8);
            }
            if ( (v18 & 4) != 0 )
            {
              v5 = 1;
              *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Receive + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Receive
                                                                                + 1) & 0xFFFFFFCF | 0x10;
              v18 = *((_DWORD *)i + 8);
            }
            if ( (v18 & 8) != 0 )
            {
              v5 = 1;
              *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Receive + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Receive
                                                                                + 1) & 0xFFFFFF3F | 0x40;
            }
            if ( v5 == 1 )
              p_MiniportInitialConfig->Checksum.IPv6Receive.Encapsulation = 2;
          }
          v19 = *((_DWORD *)i + 7);
          if ( (v19 & 1) != 0 )
          {
            p_MiniportInitialConfig->Checksum.IPv6Transmit.Encapsulation = 0;
            *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Transmit + 1) &= 0xFFFFFF00;
          }
          else
          {
            if ( (v19 & 2) != 0 )
            {
              v4 = 1;
              *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Transmit + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Transmit
                                                                                 + 1) & 0xFFFFFFF3 | 4;
              v19 = *((_DWORD *)i + 7);
            }
            if ( (v19 & 4) != 0 )
            {
              v4 = 1;
              *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Transmit + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Transmit
                                                                                 + 1) & 0xFFFFFFCF | 0x10;
              v19 = *((_DWORD *)i + 7);
            }
            if ( (v19 & 8) != 0 )
            {
              v4 = 1;
              *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Transmit + 1) = *((_DWORD *)&p_MiniportInitialConfig->Checksum.IPv6Transmit
                                                                                 + 1) & 0xFFFFFF3F | 0x40;
            }
            if ( v4 == 1 )
              p_MiniportInitialConfig->Checksum.IPv6Transmit.Encapsulation = 2;
          }
        }
        v20 = *((unsigned int *)i + 3);
        if ( !(_DWORD)v20 )
          return;
        v9 += v20;
        if ( v9 > 0x90 )
          return;
      }
    }
    ExFreePoolWithTag(a1->Offload, 0);
    a1->Offload = 0LL;
  }
}
