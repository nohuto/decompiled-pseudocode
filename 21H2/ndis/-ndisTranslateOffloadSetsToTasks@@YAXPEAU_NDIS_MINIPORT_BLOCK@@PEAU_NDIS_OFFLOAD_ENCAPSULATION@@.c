/*
 * XREFs of ?ndisTranslateOffloadSetsToTasks@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_ENCAPSULATION@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C009FCF4
 * Callers:
 *     ?ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C002F238 (-ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 */

void __fastcall ndisTranslateOffloadSetsToTasks(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OFFLOAD_ENCAPSULATION *a2,
        struct _NDIS_OFFLOAD *a3)
{
  unsigned __int8 *v4; // rbx
  bool v5; // bp
  char v6; // di
  char v7; // r14
  unsigned int Enabled; // eax
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  unsigned int v11; // r9d
  unsigned int v12; // r10d
  int v13; // r8d
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  unsigned int Flags; // eax
  _NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4AH> IPv4AH; // r8d
  int v21; // edx
  unsigned int v22; // edx
  _NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4AH> v23; // r8d
  _NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4ESP> IPv4ESP; // r8d
  int v25; // edx
  unsigned int v26; // edx
  _NDIS_IPSEC_OFFLOAD_V1::<unnamed_type_IPv4ESP> v27; // r8d

  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xA8u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      a1);
  Enabled = a2->IPv4.Enabled;
  Offload = a1->Offload;
  v11 = a2->IPv6.Enabled;
  if ( Enabled == 1 )
  {
    v5 = Offload->MiniportCurrentConfig.LsoV1.IPv4.Encapsulation != 0;
    if ( Offload->MiniportCurrentConfig.Checksum.IPv4Transmit.Encapsulation
      || Offload->MiniportCurrentConfig.Checksum.IPv4Receive.Encapsulation )
    {
      v6 = 1;
    }
    if ( Offload->MiniportCurrentConfig.IPsecV1.Supported.Encapsulation )
      v7 = 1;
  }
  if ( v11 == 1
    && (Offload->MiniportCurrentConfig.Checksum.IPv6Transmit.Encapsulation
     || Offload->MiniportCurrentConfig.Checksum.IPv6Receive.Encapsulation) )
  {
    v6 = 1;
  }
  *(_DWORD *)&Offload->MiniportTask[20] |= 1u;
  v12 = 28;
  *(_DWORD *)&Offload->MiniportTask[4] = 28;
  *(_DWORD *)Offload->MiniportTask = 1;
  *(_DWORD *)&Offload->MiniportTask[16] = 2;
  *(_DWORD *)&Offload->MiniportTask[24] = 14;
  if ( v5 || v6 == 1 || v7 == 1 )
  {
    v4 = &Offload->MiniportTask[28];
    *(_DWORD *)&Offload->MiniportTask[12] = 28;
    *(_DWORD *)&Offload->MiniportTask[32] = 24;
    *(_DWORD *)&Offload->MiniportTask[28] = 1;
  }
  else
  {
    *(_DWORD *)&Offload->MiniportTask[12] = 0;
  }
  if ( v6 )
  {
    *((_DWORD *)v4 + 2) = 0;
    *((_DWORD *)v4 + 4) = 16;
    v12 = 64;
    *((_DWORD *)v4 + 3) = 36;
    *(_OWORD *)(v4 + 20) = 0LL;
    if ( Enabled == 1 )
    {
      v13 = *((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv4Transmit + 1);
      v14 = 0;
      if ( (v13 & 0xC) == 4 )
      {
        *((_DWORD *)v4 + 5) = 2;
        v14 = 2;
        v13 = *((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv4Transmit + 1);
      }
      if ( (v13 & 3) == 1 )
      {
        v14 |= 1u;
        *((_DWORD *)v4 + 5) = v14;
        v13 = *((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv4Transmit + 1);
      }
      if ( (v13 & 0x30) == 0x10 )
      {
        v14 |= 4u;
        *((_DWORD *)v4 + 5) = v14;
        v13 = *((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv4Transmit + 1);
      }
      if ( (v13 & 0xC0) == 0x40 )
      {
        v14 |= 8u;
        *((_DWORD *)v4 + 5) = v14;
        v13 = *((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv4Transmit + 1);
      }
      if ( (v13 & 0x300) == 0x100 )
        *((_DWORD *)v4 + 5) = v14 | 0x10;
      v15 = *((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv4Receive + 1);
      if ( (v15 & 0xC) == 4 )
      {
        *((_DWORD *)v4 + 6) |= 2u;
        v15 = *((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv4Receive + 1);
      }
      if ( (v15 & 3) == 1 )
      {
        *((_DWORD *)v4 + 6) |= 1u;
        v15 = *((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv4Receive + 1);
      }
      if ( (v15 & 0x30) == 0x10 )
      {
        *((_DWORD *)v4 + 6) |= 4u;
        v15 = *((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv4Receive + 1);
      }
      if ( (v15 & 0xC0) == 0x40 )
      {
        *((_DWORD *)v4 + 6) |= 8u;
        v15 = *((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv4Receive + 1);
      }
      if ( (v15 & 0x300) == 0x100 )
        *((_DWORD *)v4 + 6) |= 0x10u;
    }
    if ( v11 == 1 )
    {
      v16 = *((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv6Transmit + 1);
      if ( (v16 & 0xC) == 4 )
      {
        *((_DWORD *)v4 + 7) |= 2u;
        v16 = *((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv6Transmit + 1);
      }
      if ( (v16 & 0x30) == 0x10 )
      {
        *((_DWORD *)v4 + 7) |= 4u;
        v16 = *((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv6Transmit + 1);
      }
      if ( (v16 & 0xC0) == 0x40 )
        *((_DWORD *)v4 + 7) |= 8u;
      v17 = *((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv6Receive + 1);
      if ( (v17 & 0xC) == 4 )
      {
        *((_DWORD *)v4 + 8) |= 2u;
        v17 = *((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv6Receive + 1);
      }
      if ( (v17 & 0x30) == 0x10 )
      {
        *((_DWORD *)v4 + 8) |= 4u;
        v17 = *((_DWORD *)&Offload->MiniportCurrentConfig.Checksum.IPv6Receive + 1);
      }
      if ( (v17 & 0xC0) == 0x40 )
        *((_DWORD *)v4 + 8) |= 8u;
    }
    if ( !v5 && !v7 )
      goto LABEL_93;
    v4 += *((unsigned int *)v4 + 3);
    *((_DWORD *)v4 + 1) = 24;
    *(_DWORD *)v4 = 1;
  }
  if ( v5 )
  {
    *((_DWORD *)v4 + 2) = 2;
    *((_DWORD *)v4 + 4) = 16;
    v12 += 36;
    *((_DWORD *)v4 + 3) = 36;
    *(_OWORD *)(v4 + 20) = 0LL;
    v18 = *((_DWORD *)&Offload->MiniportCurrentConfig.LsoV1.IPv4 + 3);
    if ( (v18 & 0xC) == 4 )
    {
      v4[33] = 1;
      v18 = *((_DWORD *)&Offload->MiniportCurrentConfig.LsoV1.IPv4 + 3);
    }
    if ( (v18 & 3) == 1 )
      v4[32] = 1;
    *((_DWORD *)v4 + 6) = Offload->MiniportCurrentConfig.LsoV1.IPv4.MaxOffLoadSize;
    *((_DWORD *)v4 + 7) = Offload->MiniportCurrentConfig.LsoV1.IPv4.MinSegmentCount;
    if ( v7 )
    {
      v4 += *((unsigned int *)v4 + 3);
      *((_DWORD *)v4 + 1) = 24;
      *(_DWORD *)v4 = 1;
    }
    else
    {
      *((_DWORD *)v4 + 3) = 0;
    }
  }
  if ( v7 )
  {
    *((_QWORD *)v4 + 1) = 1LL;
    *((_DWORD *)v4 + 4) = 24;
    *(_OWORD *)(v4 + 20) = 0LL;
    v12 += 44;
    *(_QWORD *)(v4 + 36) = 0LL;
    if ( Offload->MiniportCurrentConfig.IPsecV1.Supported.AhEspCombined == 1 )
      *((_DWORD *)v4 + 5) = 1;
    *((_DWORD *)v4 + 6) = 0;
    if ( Offload->MiniportCurrentConfig.IPsecV1.Supported.IPv4Options == 1 )
      *((_DWORD *)v4 + 7) = 1;
    Flags = Offload->MiniportCurrentConfig.IPsecV1.Supported.Flags;
    if ( Flags )
      *((_DWORD *)v4 + 8) = Flags;
    IPv4AH = Offload->MiniportCurrentConfig.IPsecV1.IPv4AH;
    if ( (*(_BYTE *)&IPv4AH & 3) == 1 )
    {
      *((_DWORD *)v4 + 9) |= 1u;
      IPv4AH = Offload->MiniportCurrentConfig.IPsecV1.IPv4AH;
    }
    if ( (*(_BYTE *)&IPv4AH & 0xC) == 4 )
    {
      *((_DWORD *)v4 + 9) |= 2u;
      IPv4AH = Offload->MiniportCurrentConfig.IPsecV1.IPv4AH;
    }
    v21 = *((_DWORD *)v4 + 9);
    if ( (*(_BYTE *)&IPv4AH & 0x30) == 0x10 )
      v21 |= 4u;
    v22 = v21 & 0xFFFFFFF7;
    *((_DWORD *)v4 + 9) = v22;
    v23 = Offload->MiniportCurrentConfig.IPsecV1.IPv4AH;
    if ( (*(_WORD *)&v23 & 0x300) == 0x100 )
    {
      v22 |= 0x10u;
      *((_DWORD *)v4 + 9) = v22;
      v23 = Offload->MiniportCurrentConfig.IPsecV1.IPv4AH;
    }
    if ( (*(_WORD *)&v23 & 0xC00) == 0x400 )
      *((_DWORD *)v4 + 9) = v22 | 0x20;
    IPv4ESP = Offload->MiniportCurrentConfig.IPsecV1.IPv4ESP;
    if ( (*(_BYTE *)&IPv4ESP & 3) == 1 )
    {
      *((_DWORD *)v4 + 10) |= 1u;
      IPv4ESP = Offload->MiniportCurrentConfig.IPsecV1.IPv4ESP;
    }
    if ( (*(_BYTE *)&IPv4ESP & 0xC) != 0 )
    {
      *((_DWORD *)v4 + 10) |= 2u;
      IPv4ESP = Offload->MiniportCurrentConfig.IPsecV1.IPv4ESP;
    }
    if ( (*(_BYTE *)&IPv4ESP & 0x30) == 0x10 )
    {
      *((_DWORD *)v4 + 10) |= 4u;
      IPv4ESP = Offload->MiniportCurrentConfig.IPsecV1.IPv4ESP;
    }
    v25 = *((_DWORD *)v4 + 10);
    if ( (*(_WORD *)&IPv4ESP & 0x300) == 0x100 )
      v25 |= 0x10u;
    v26 = v25 & 0xFFFFFFDF;
    *((_DWORD *)v4 + 10) = v26;
    v27 = Offload->MiniportCurrentConfig.IPsecV1.IPv4ESP;
    if ( (*(_WORD *)&v27 & 0x3000) == 0x1000 )
    {
      v26 |= 0x40u;
      *((_DWORD *)v4 + 10) = v26;
      v27 = Offload->MiniportCurrentConfig.IPsecV1.IPv4ESP;
    }
    if ( (*(_WORD *)&v27 & 0xC000) == 0x4000 )
      *((_DWORD *)v4 + 10) = v26 | 0x80;
LABEL_93:
    *((_DWORD *)v4 + 3) = 0;
  }
  a1->Offload->MiniportTaskSize = v12;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xA9u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      a1);
}
