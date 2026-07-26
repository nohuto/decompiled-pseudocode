/*
 * XREFs of ?ndisFillOffloadCapsInTasks@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009A32C
 * Callers:
 *     ?ndisPreTaskOffloadQuery@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009E4E8 (-ndisPreTaskOffloadQuery@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 */

void __fastcall ndisFillOffloadCapsInTasks(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  char *v2; // rbp
  int *v3; // rdi
  char *v4; // rsi
  char *v6; // rbx
  _DWORD *InformationBuffer; // r11
  UINT v9; // r10d
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  int v11; // r8d
  char *v12; // r9
  int v13; // edx
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  _NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4AH> IPv4AH; // edx
  _NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4ESP> IPv4ESP; // edx

  v2 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v6 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xB6u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      a1);
  InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
  v9 = 28;
  Offload = a1->Offload;
  v11 = InformationBuffer[4];
  v12 = (char *)(InformationBuffer + 7);
  InformationBuffer[3] = 28;
  if ( Offload->TopCapabilities.LsoV1.IPv4.Encapsulation )
  {
    InformationBuffer[8] = 24;
    v4 = (char *)(InformationBuffer + 12);
    *(_DWORD *)v12 = 1;
    InformationBuffer[9] = 2;
    v2 = (char *)(InformationBuffer + 7);
    InformationBuffer[11] = 16;
    InformationBuffer[10] = 36;
    *((_OWORD *)InformationBuffer + 3) = 0LL;
    InformationBuffer[13] = Offload->TopCapabilities.LsoV1.IPv4.MaxOffLoadSize;
    InformationBuffer[14] = Offload->TopCapabilities.LsoV1.IPv4.MinSegmentCount;
    v13 = *((_DWORD *)&Offload->TopCapabilities.LsoV1.IPv4 + 3);
    if ( (v13 & 3) == 1 )
    {
      *((_BYTE *)InformationBuffer + 60) = 1;
      v13 = *((_DWORD *)&Offload->TopCapabilities.LsoV1.IPv4 + 3);
    }
    if ( (v13 & 0xC) == 4 )
      *((_BYTE *)InformationBuffer + 61) = 1;
    v14 = (unsigned int)InformationBuffer[10];
    v12 += v14;
    v9 = v14 + 28;
  }
  if ( Offload->TopCapabilities.Checksum.IPv4Receive.Encapsulation
    || Offload->TopCapabilities.Checksum.IPv4Transmit.Encapsulation
    || Offload->TopCapabilities.Checksum.IPv6Receive.Encapsulation
    || Offload->TopCapabilities.Checksum.IPv6Transmit.Encapsulation )
  {
    *((_DWORD *)v12 + 2) = 0;
    v3 = (int *)(v12 + 20);
    v9 += 36;
    *((_DWORD *)v12 + 1) = 24;
    *(_DWORD *)v12 = 1;
    *((_DWORD *)v12 + 4) = 16;
    v2 = v12;
    *((_DWORD *)v12 + 3) = 36;
    *(_OWORD *)(v12 + 20) = 0LL;
    if ( v11 == 2 )
    {
      if ( (Offload->TopCapabilities.Checksum.IPv4Transmit.Encapsulation & 2) != 0 )
      {
        v15 = *((_DWORD *)&Offload->TopCapabilities.Checksum.IPv4Transmit + 1);
        v16 = 0;
        if ( (v15 & 3) == 1 )
        {
          *v3 = 1;
          v16 = 1;
          v15 = *((_DWORD *)&Offload->TopCapabilities.Checksum.IPv4Transmit + 1);
        }
        if ( (v15 & 0xC) == 4 )
        {
          v16 |= 2u;
          *v3 = v16;
          v15 = *((_DWORD *)&Offload->TopCapabilities.Checksum.IPv4Transmit + 1);
        }
        if ( (v15 & 0x30) == 0x10 )
        {
          v16 |= 4u;
          *v3 = v16;
          v15 = *((_DWORD *)&Offload->TopCapabilities.Checksum.IPv4Transmit + 1);
        }
        if ( (v15 & 0xC0) == 0x40 )
        {
          v16 |= 8u;
          *v3 = v16;
          v15 = *((_DWORD *)&Offload->TopCapabilities.Checksum.IPv4Transmit + 1);
        }
        if ( (v15 & 0x300) == 0x100 )
          *v3 = v16 | 0x10;
      }
      if ( (Offload->TopCapabilities.Checksum.IPv4Receive.Encapsulation & 2) != 0 )
      {
        v17 = *((_DWORD *)&Offload->TopCapabilities.Checksum.IPv4Receive + 1);
        if ( (v17 & 3) == 1 )
        {
          *((_DWORD *)v12 + 6) |= 1u;
          v17 = *((_DWORD *)&Offload->TopCapabilities.Checksum.IPv4Receive + 1);
        }
        if ( (v17 & 0xC) == 4 )
        {
          *((_DWORD *)v12 + 6) |= 2u;
          v17 = *((_DWORD *)&Offload->TopCapabilities.Checksum.IPv4Receive + 1);
        }
        if ( (v17 & 0x30) == 0x10 )
        {
          *((_DWORD *)v12 + 6) |= 4u;
          v17 = *((_DWORD *)&Offload->TopCapabilities.Checksum.IPv4Receive + 1);
        }
        if ( (v17 & 0xC0) == 0x40 )
        {
          *((_DWORD *)v12 + 6) |= 8u;
          v17 = *((_DWORD *)&Offload->TopCapabilities.Checksum.IPv4Receive + 1);
        }
        if ( (v17 & 0x300) == 0x100 )
          *((_DWORD *)v12 + 6) |= 0x10u;
      }
      if ( (Offload->TopCapabilities.Checksum.IPv6Receive.Encapsulation & 2) != 0 )
      {
        v18 = *((_DWORD *)&Offload->TopCapabilities.Checksum.IPv6Receive + 1);
        if ( (v18 & 0xC) == 4 )
        {
          *((_DWORD *)v12 + 8) |= 2u;
          v18 = *((_DWORD *)&Offload->TopCapabilities.Checksum.IPv6Receive + 1);
        }
        if ( (v18 & 0x30) == 0x10 )
        {
          *((_DWORD *)v12 + 8) |= 4u;
          v18 = *((_DWORD *)&Offload->TopCapabilities.Checksum.IPv6Receive + 1);
        }
        if ( (v18 & 0xC0) == 0x40 )
          *((_DWORD *)v12 + 8) |= 8u;
      }
      if ( (Offload->TopCapabilities.Checksum.IPv6Transmit.Encapsulation & 2) != 0 )
      {
        v19 = *((_DWORD *)&Offload->TopCapabilities.Checksum.IPv6Transmit + 1);
        if ( (v19 & 0xC) == 4 )
        {
          *((_DWORD *)v12 + 7) |= 2u;
          v19 = *((_DWORD *)&Offload->TopCapabilities.Checksum.IPv6Transmit + 1);
        }
        if ( (v19 & 0x30) == 0x10 )
        {
          *((_DWORD *)v12 + 7) |= 4u;
          v19 = *((_DWORD *)&Offload->TopCapabilities.Checksum.IPv6Transmit + 1);
        }
        if ( (v19 & 0xC0) == 0x40 )
          *((_DWORD *)v12 + 7) |= 8u;
      }
    }
    v12 += *((unsigned int *)v12 + 3);
  }
  if ( Offload->TopCapabilities.IPsecV1.Supported.Encapsulation )
  {
    *((_DWORD *)v12 + 1) = 24;
    v6 = v12 + 20;
    *(_DWORD *)v12 = 1;
    *((_DWORD *)v12 + 2) = 1;
    *((_DWORD *)v12 + 4) = 24;
    v9 += 44;
    *((_DWORD *)v12 + 3) = 44;
    v2 = v12;
    *(_OWORD *)(v12 + 20) = 0LL;
    *(_QWORD *)(v12 + 36) = 0LL;
    *((_DWORD *)v12 + 5) = Offload->TopCapabilities.IPsecV1.Supported.AhEspCombined;
    *((_DWORD *)v12 + 6) = Offload->TopCapabilities.IPsecV1.Supported.TransportTunnelCombined;
    *((_DWORD *)v12 + 7) = Offload->TopCapabilities.IPsecV1.Supported.IPv4Options;
    *((_DWORD *)v12 + 8) = Offload->TopCapabilities.IPsecV1.Supported.Flags;
    IPv4AH = Offload->TopCapabilities.IPsecV1.IPv4AH;
    if ( (*(_BYTE *)&IPv4AH & 3) == 1 )
    {
      *((_DWORD *)v12 + 9) |= 1u;
      IPv4AH = Offload->TopCapabilities.IPsecV1.IPv4AH;
    }
    if ( (*(_BYTE *)&IPv4AH & 0xC) == 4 )
    {
      *((_DWORD *)v12 + 9) |= 2u;
      IPv4AH = Offload->TopCapabilities.IPsecV1.IPv4AH;
    }
    if ( (*(_BYTE *)&IPv4AH & 0x30) == 0x10 )
    {
      *((_DWORD *)v12 + 9) |= 4u;
      IPv4AH = Offload->TopCapabilities.IPsecV1.IPv4AH;
    }
    if ( (*(_WORD *)&IPv4AH & 0x300) == 0x100 )
    {
      *((_DWORD *)v12 + 9) |= 0x10u;
      IPv4AH = Offload->TopCapabilities.IPsecV1.IPv4AH;
    }
    if ( (*(_WORD *)&IPv4AH & 0xC00) == 0x400 )
      *((_DWORD *)v12 + 9) |= 0x20u;
    IPv4ESP = Offload->TopCapabilities.IPsecV1.IPv4ESP;
    if ( (*(_WORD *)&IPv4ESP & 0x300) == 0x100 )
    {
      *((_DWORD *)v12 + 10) |= 0x10u;
      IPv4ESP = Offload->TopCapabilities.IPsecV1.IPv4ESP;
    }
    if ( (*(_WORD *)&IPv4ESP & 0x3000) == 0x1000 )
    {
      *((_DWORD *)v12 + 10) |= 0x40u;
      IPv4ESP = Offload->TopCapabilities.IPsecV1.IPv4ESP;
    }
    if ( (*(_WORD *)&IPv4ESP & 0xC000) == 0x4000 )
    {
      *((_DWORD *)v12 + 10) |= 0x80u;
      IPv4ESP = Offload->TopCapabilities.IPsecV1.IPv4ESP;
    }
    if ( (*(_BYTE *)&IPv4ESP & 3) == 1 )
    {
      *((_DWORD *)v12 + 10) |= 1u;
      IPv4ESP = Offload->TopCapabilities.IPsecV1.IPv4ESP;
    }
    if ( (*(_BYTE *)&IPv4ESP & 0xC0) == 0x40 )
    {
      *((_DWORD *)v12 + 10) |= 8u;
      IPv4ESP = Offload->TopCapabilities.IPsecV1.IPv4ESP;
    }
    if ( (*(_BYTE *)&IPv4ESP & 0x30) == 0x10 )
    {
      *((_DWORD *)v12 + 10) |= 4u;
      IPv4ESP = Offload->TopCapabilities.IPsecV1.IPv4ESP;
    }
    if ( (*(_BYTE *)&IPv4ESP & 0xC) == 4 )
      *((_DWORD *)v12 + 10) |= 2u;
  }
  if ( !v4 && !v3 )
    InformationBuffer[3] &= -(v6 != 0LL);
  if ( v2 )
    *((_DWORD *)v2 + 3) = 0;
  a2->DATA.QUERY_INFORMATION.BytesWritten = v9;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xB7u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      a1);
}
