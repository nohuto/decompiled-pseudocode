/*
 * XREFs of ?ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z @ 0x1C00A01B4
 * Callers:
 *     ?ndisPreOffloadAdminSettings@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C001F240 (-ndisPreOffloadAdminSettings@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     NdisOpenConfigurationEx @ 0x1C0028340 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C0028580 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C0028660 (NdisReadConfiguration.c)
 *     ?ndisWriteConfigurationIfPresent@@YAXPEAHPEAXPEAU_UNICODE_STRING@@PEAU_NDIS_CONFIGURATION_PARAMETER@@@Z @ 0x1C0065B24 (-ndisWriteConfigurationIfPresent@@YAXPEAHPEAXPEAU_UNICODE_STRING@@PEAU_NDIS_CONFIGURATION_PARAME.c)
 *     ?ndisConvertOffloadValueToString@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C009A160 (-ndisConvertOffloadValueToString@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 */

__int64 __fastcall ndisUpdateOffloadKeywords(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OFFLOAD_PARAMETERS *a2)
{
  _QWORD *v4; // r15
  UCHAR IPsecV2; // r13
  UCHAR IPsecV2IPv4; // r10
  unsigned __int8 v7; // bl
  UCHAR Type; // r12
  UCHAR v9; // r11
  UCHAR Revision; // cl
  unsigned __int8 v11; // al
  UCHAR IPv4Checksum; // al
  unsigned int v13; // r14d
  UCHAR TCPIPv4Checksum; // cl
  UCHAR TCPIPv6Checksum; // r8
  UCHAR UDPIPv4Checksum; // dl
  UCHAR v17; // r9
  unsigned int v18; // ebx
  NDIS_STATUS v19; // eax
  _NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> v20; // xmm6
  int v21; // eax
  int v22; // eax
  int v23; // eax
  unsigned int Value; // ecx
  unsigned int v25; // ecx
  int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  int v29; // eax
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  int v35; // eax
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // eax
  int LsoV2IPv4; // eax
  unsigned int v42; // eax
  unsigned int v43; // eax
  int LsoV2IPv6; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  int IPsecV1; // eax
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  int TcpConnectionIPv4; // eax
  unsigned int v53; // eax
  unsigned int v54; // eax
  unsigned int v55; // ecx
  unsigned int v56; // ecx
  int TcpConnectionIPv6; // eax
  unsigned int v58; // eax
  unsigned int v59; // eax
  unsigned __int8 v60; // si
  int v61; // ecx
  int v62; // ecx
  int v63; // ecx
  int v64; // ecx
  int v65; // ecx
  UCHAR v66; // si
  int v67; // ecx
  UCHAR v68; // si
  int v69; // ecx
  int Status; // [rsp+38h] [rbp-59h] BYREF
  UCHAR UDPIPv6Checksum; // [rsp+3Ch] [rbp-55h]
  UCHAR LsoV1; // [rsp+3Dh] [rbp-54h]
  struct _NDIS_CONFIGURATION_PARAMETER v74; // [rsp+40h] [rbp-51h] BYREF
  unsigned __int8 v75; // [rsp+58h] [rbp-39h]
  UCHAR v76; // [rsp+59h] [rbp-38h]
  PVOID ConfigurationHandle; // [rsp+60h] [rbp-31h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+68h] [rbp-29h] BYREF
  _NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> v79; // [rsp+80h] [rbp-11h]
  PNDIS_CONFIGURATION_PARAMETER ParameterValue[11]; // [rsp+90h] [rbp-1h] BYREF
  UCHAR v81; // [rsp+F8h] [rbp+67h]
  UCHAR v82; // [rsp+100h] [rbp+6Fh]
  unsigned __int8 v83; // [rsp+108h] [rbp+77h]
  UCHAR v84; // [rsp+110h] [rbp+7Fh]

  *(_QWORD *)&v79.IntegerData = 262146LL;
  ConfigurationHandle = 0LL;
  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  v79.StringData.Buffer = (wchar_t *)L"0";
  v4 = 0LL;
  *(&ConfigObject.Flags + 1) = 0;
  memset(&v74, 0, sizeof(v74));
  ParameterValue[0] = 0LL;
  v82 = 0;
  IPsecV2 = 0;
  v75 = 0;
  IPsecV2IPv4 = 0;
  v83 = 0;
  v7 = 0;
  UDPIPv6Checksum = 0;
  LsoV1 = 0;
  Type = 0;
  v84 = 0;
  v9 = 0;
  v76 = 0;
  v81 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xBEu,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      a1);
    IPsecV2IPv4 = 0;
    v9 = 0;
  }
  Revision = a2->Header.Revision;
  if ( Revision >= 2u && a2->Header.Size >= 0x16u )
  {
    IPsecV2IPv4 = a2->IPsecV2IPv4;
    IPsecV2 = a2->IPsecV2;
    v82 = IPsecV2IPv4;
  }
  if ( Revision >= 3u && a2->Header.Size >= 0x1Au )
  {
    v7 = *(&a2->IPsecV2IPv4 + 1);
    v11 = *(&a2->IPsecV2IPv4 + 2);
    v9 = a2[1].Header.Revision;
    Type = a2[1].Header.Type;
    v75 = v7;
    v83 = v11;
    v81 = v9;
  }
  if ( Revision >= 4u && a2->Header.Size >= 0x20u )
  {
    v84 = (v9 & 1) != 0 ? Type : 0;
    if ( (v9 & 2) != 0 )
    {
      v76 = Type;
      v84 = (v9 & 1) != 0 ? Type : 0;
    }
  }
  if ( Revision >= 5u && a2->Header.Size >= 0x22u )
  {
    UDPIPv6Checksum = a2[1].UDPIPv6Checksum;
    LsoV1 = a2[1].LsoV1;
  }
  IPv4Checksum = a2->IPv4Checksum;
  v13 = a1->Offload->MiniportHardwareCapabilities.Flags & 1;
  if ( IPv4Checksum > 4u )
    goto LABEL_217;
  TCPIPv4Checksum = a2->TCPIPv4Checksum;
  if ( TCPIPv4Checksum > 4u )
    goto LABEL_217;
  TCPIPv6Checksum = a2->TCPIPv6Checksum;
  if ( TCPIPv6Checksum > 4u )
    goto LABEL_217;
  UDPIPv4Checksum = a2->UDPIPv4Checksum;
  if ( UDPIPv4Checksum > 4u )
    goto LABEL_217;
  v17 = a2->UDPIPv6Checksum;
  if ( v17 > 4u
    || a2->LsoV1 > 2u
    || a2->LsoV2IPv4 > 2u
    || a2->LsoV2IPv6 > 2u
    || a2->IPsecV1 > 4u
    || a2->TcpConnectionIPv4 > 2u
    || a2->TcpConnectionIPv6 > 2u
    || IPsecV2 > 4u
    || IPsecV2IPv4 > 4u
    || v7 > 2u
    || v83 > 2u
    || Type > 2u
    || v9 > 3u
    || Type && !v9 )
  {
    goto LABEL_217;
  }
  if ( UDPIPv6Checksum > 2u || LsoV1 > 2u )
    goto LABEL_217;
  if ( IPsecV2 && IPsecV2IPv4 )
    return (unsigned int)-1073676267;
  if ( (_BYTE)v13 && (IPv4Checksum != TCPIPv4Checksum || IPv4Checksum != UDPIPv4Checksum || TCPIPv6Checksum != v17) )
    return (unsigned int)-1073741811;
  a1->OffloadRegistry.Value |= 0x20000u;
  ConfigObject.Flags = 0;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  v19 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v4 = ConfigurationHandle;
  v18 = v19;
  Status = v19;
  if ( v19 )
    goto LABEL_218;
  v20 = v79;
  if ( (_BYTE)v13 )
  {
    v21 = a2->IPv4Checksum;
    if ( (_BYTE)v21 )
    {
      v74.ParameterType = NdisParameterString;
      v74.ParameterData = v79;
      Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, v21 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_218;
      ndisWriteConfigurationIfPresent(&Status, v4, &TCPUDPChecksumOffloadIPv4Str, &v74);
    }
    v22 = a2->TCPIPv6Checksum;
    if ( (_BYTE)v22 )
    {
      v74.ParameterType = NdisParameterString;
      v74.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, v22 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_218;
      ndisWriteConfigurationIfPresent(&Status, v4, &TCPUDPChecksumOffloadIPv6Str, &v74);
    }
  }
  else
  {
    NdisReadConfiguration(
      &Status,
      ParameterValue,
      ConfigurationHandle,
      &TCPUDPChecksumOffloadIPv4Str,
      NdisParameterString);
  }
  v23 = a2->IPv4Checksum;
  if ( (_BYTE)v23 )
  {
    if ( !(_BYTE)v13 )
    {
      v74.ParameterType = NdisParameterString;
      v74.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, v23 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_218;
      ndisWriteConfigurationIfPresent(&Status, v4, &IPXsumIPv4Str, &v74);
      LOBYTE(v23) = a2->IPv4Checksum;
    }
    Value = a1->OffloadRegistry.Value;
    switch ( (unsigned __int8)v23 )
    {
      case 1u:
        v25 = Value | 3;
        break;
      case 2u:
        v25 = Value & 0xFFFFFFFC | 2;
        break;
      case 3u:
        v25 = Value & 0xFFFFFFFC | 1;
        break;
      default:
        v25 = Value & 0xFFFFFFFC;
        break;
    }
    a1->OffloadRegistry.Value = v25;
  }
  v26 = a2->TCPIPv4Checksum;
  if ( (_BYTE)v26 )
  {
    if ( !(_BYTE)v13 )
    {
      v74.ParameterType = NdisParameterString;
      v74.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, v26 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_218;
      ndisWriteConfigurationIfPresent(&Status, v4, &TCPXsumIPv4Str, &v74);
      LOBYTE(v26) = a2->TCPIPv4Checksum;
    }
    v27 = a1->OffloadRegistry.Value;
    switch ( (unsigned __int8)v26 )
    {
      case 1u:
        v28 = v27 | 0xC;
        break;
      case 2u:
        v28 = v27 & 0xFFFFFFF3 | 8;
        break;
      case 3u:
        v28 = v27 & 0xFFFFFFF3 | 4;
        break;
      default:
        v28 = v27 & 0xFFFFFFF3;
        break;
    }
    a1->OffloadRegistry.Value = v28;
  }
  v29 = a2->TCPIPv6Checksum;
  if ( (_BYTE)v29 )
  {
    if ( !(_BYTE)v13 )
    {
      v74.ParameterType = NdisParameterString;
      v74.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, v29 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_218;
      ndisWriteConfigurationIfPresent(&Status, v4, &TCPXsumIPv6Str, &v74);
      LOBYTE(v29) = a2->TCPIPv6Checksum;
    }
    v30 = a1->OffloadRegistry.Value;
    switch ( (unsigned __int8)v29 )
    {
      case 1u:
        v31 = v30 | 0xC0;
        break;
      case 2u:
        v31 = v30 & 0xFFFFFF3F | 0x80;
        break;
      case 3u:
        v31 = v30 & 0xFFFFFF3F | 0x40;
        break;
      default:
        v31 = v30 & 0xFFFFFF3F;
        break;
    }
    a1->OffloadRegistry.Value = v31;
  }
  v32 = a2->UDPIPv4Checksum;
  if ( (_BYTE)v32 )
  {
    if ( !(_BYTE)v13 )
    {
      v74.ParameterType = NdisParameterString;
      v74.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, v32 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_218;
      ndisWriteConfigurationIfPresent(&Status, v4, &UDPXsumIPv4Str, &v74);
      LOBYTE(v32) = a2->UDPIPv4Checksum;
    }
    v33 = a1->OffloadRegistry.Value;
    switch ( (unsigned __int8)v32 )
    {
      case 1u:
        v34 = v33 | 0x30;
        break;
      case 2u:
        v34 = v33 & 0xFFFFFFCF | 0x20;
        break;
      case 3u:
        v34 = v33 & 0xFFFFFFCF | 0x10;
        break;
      default:
        v34 = v33 & 0xFFFFFFCF;
        break;
    }
    a1->OffloadRegistry.Value = v34;
  }
  v35 = a2->UDPIPv6Checksum;
  if ( (_BYTE)v35 )
  {
    if ( !(_BYTE)v13 )
    {
      v74.ParameterType = NdisParameterString;
      v74.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, v35 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_218;
      ndisWriteConfigurationIfPresent(&Status, v4, &UDPXsumIPv6Str, &v74);
      LOBYTE(v35) = a2->UDPIPv6Checksum;
    }
    v36 = a1->OffloadRegistry.Value;
    switch ( (unsigned __int8)v35 )
    {
      case 1u:
        v37 = v36 | 0x300;
        break;
      case 2u:
        v37 = v36 & 0xFFFFFCFF | 0x200;
        break;
      case 3u:
        v37 = v36 & 0xFFFFFCFF | 0x100;
        break;
      default:
        v37 = v36 & 0xFFFFFCFF;
        break;
    }
    a1->OffloadRegistry.Value = v37;
  }
  v38 = a2->LsoV1;
  if ( (_BYTE)v38 )
  {
    if ( (unsigned __int8)v38 > 2u )
      goto LABEL_217;
    v74.ParameterType = NdisParameterString;
    v74.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, v38 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_218;
    ndisWriteConfigurationIfPresent(&Status, v4, &LsoV1IPv4Str, &v74);
    v39 = a1->OffloadRegistry.Value;
    if ( a2->LsoV1 == 1 )
      v40 = v39 | 0x400;
    else
      v40 = v39 & 0xFFFFFBFF;
    a1->OffloadRegistry.Value = v40;
  }
  LsoV2IPv4 = a2->LsoV2IPv4;
  if ( (_BYTE)LsoV2IPv4 )
  {
    if ( (unsigned __int8)LsoV2IPv4 > 2u )
      goto LABEL_217;
    v74.ParameterType = NdisParameterString;
    v74.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, LsoV2IPv4 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_218;
    ndisWriteConfigurationIfPresent(&Status, v4, &LsoV2IPv4Str, &v74);
    v42 = a1->OffloadRegistry.Value;
    if ( a2->LsoV2IPv4 == 1 )
      v43 = v42 | 0x800;
    else
      v43 = v42 & 0xFFFFF7FF;
    a1->OffloadRegistry.Value = v43;
  }
  LsoV2IPv6 = a2->LsoV2IPv6;
  if ( (_BYTE)LsoV2IPv6 )
  {
    if ( (unsigned __int8)LsoV2IPv6 > 2u )
      goto LABEL_217;
    v74.ParameterType = NdisParameterString;
    v74.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, LsoV2IPv6 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_218;
    ndisWriteConfigurationIfPresent(&Status, v4, &LsoV2IPv6Str, &v74);
    v45 = a1->OffloadRegistry.Value;
    if ( a2->LsoV2IPv6 == 1 )
      v46 = v45 | 0x1000;
    else
      v46 = v45 & 0xFFFFEFFF;
    a1->OffloadRegistry.Value = v46;
  }
  IPsecV1 = a2->IPsecV1;
  if ( (_BYTE)IPsecV1 )
  {
    if ( (unsigned __int8)IPsecV1 > 4u )
      goto LABEL_217;
    v74.ParameterType = NdisParameterString;
    v74.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, IPsecV1 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_218;
    ndisWriteConfigurationIfPresent(&Status, v4, &IPsecIPv4Str, &v74);
    v48 = a1->OffloadRegistry.Value;
    switch ( a2->IPsecV1 )
    {
      case 1u:
        v49 = v48 | 0x6000;
        break;
      case 2u:
        v49 = v48 & 0xFFFF9FFF | 0x4000;
        break;
      case 3u:
        v49 = v48 & 0xFFFF9FFF | 0x2000;
        break;
      default:
        v49 = v48 & 0xFFFF9FFF;
        break;
    }
    a1->OffloadRegistry.Value = v49;
  }
  if ( IPsecV2 )
  {
    v74.ParameterType = NdisParameterString;
    v74.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, (unsigned int)IPsecV2 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_218;
    ndisWriteConfigurationIfPresent(&Status, v4, &IPsecV2Str, &v74);
    v50 = a1->OffloadRegistry.Value;
    switch ( IPsecV2 )
    {
      case 1u:
        v51 = v50 | 0xC0000;
        break;
      case 2u:
        v51 = v50 & 0xFFF3FFFF | 0x80000;
        break;
      case 3u:
        v51 = v50 & 0xFFF3FFFF | 0x40000;
        break;
      default:
        v51 = v50 & 0xFFF3FFFF;
        break;
    }
    a1->OffloadRegistry.Value = v51;
  }
  else if ( v82 )
  {
    v74.ParameterType = NdisParameterString;
    v74.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, (unsigned int)v82 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_218;
    ndisWriteConfigurationIfPresent(&Status, v4, &IPsecV2IPv4Str, &v74);
    v55 = a1->OffloadRegistry.Value;
    switch ( v82 )
    {
      case 1u:
        v56 = v55 | 0x300000;
        break;
      case 2u:
        v56 = v55 & 0xFFCFFFFF | 0x200000;
        break;
      case 3u:
        v56 = v55 & 0xFFCFFFFF | 0x100000;
        break;
      default:
        v56 = v55 & 0xFFCFFFFF;
        break;
    }
    a1->OffloadRegistry.Value = v56;
  }
  TcpConnectionIPv4 = a2->TcpConnectionIPv4;
  if ( (_BYTE)TcpConnectionIPv4 )
  {
    if ( (unsigned __int8)TcpConnectionIPv4 > 2u )
      goto LABEL_217;
    v74.ParameterType = NdisParameterString;
    v74.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, TcpConnectionIPv4 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_218;
    ndisWriteConfigurationIfPresent(&Status, v4, &TCPConnectionOffloadIPv4Str, &v74);
    v53 = a1->OffloadRegistry.Value;
    if ( a2->TcpConnectionIPv4 == 1 )
      v54 = v53 | 0x8000;
    else
      v54 = v53 & 0xFFFF7FFF;
    a1->OffloadRegistry.Value = v54;
  }
  TcpConnectionIPv6 = a2->TcpConnectionIPv6;
  if ( (_BYTE)TcpConnectionIPv6 )
  {
    if ( (unsigned __int8)TcpConnectionIPv6 <= 2u )
    {
      v74.ParameterType = NdisParameterString;
      v74.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, TcpConnectionIPv6 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_218;
      ndisWriteConfigurationIfPresent(&Status, v4, &TCPConnectionOffloadIPv6Str, &v74);
      v58 = a1->OffloadRegistry.Value;
      if ( a2->TcpConnectionIPv6 == 1 )
        v59 = v58 | 0x10000;
      else
        v59 = v58 & 0xFFFEFFFF;
      a1->OffloadRegistry.Value = v59;
      goto LABEL_180;
    }
LABEL_217:
    v18 = -1073676267;
    goto LABEL_218;
  }
LABEL_180:
  v60 = v75;
  if ( v75 )
  {
    v74.ParameterType = NdisParameterString;
    v74.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, (unsigned int)v75 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_218;
    ndisWriteConfigurationIfPresent(&Status, v4, &RscIPv4Str, &v74);
    v61 = 0;
    if ( v60 == 1 )
      v61 = 0x800000;
    a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFF7FFFFF | v61;
  }
  if ( v83 )
  {
    v74.ParameterType = NdisParameterString;
    v74.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, (unsigned int)v83 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_218;
    ndisWriteConfigurationIfPresent(&Status, v4, &RscIPv6Str, &v74);
    v62 = 0;
    if ( v83 == 1 )
      v62 = 0x1000000;
    a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFEFFFFFF | v62;
  }
  if ( Type )
  {
    v74.ParameterType = NdisParameterString;
    v74.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, Type == 1);
    v18 = Status;
    if ( Status )
      goto LABEL_218;
    if ( Type == 2 && v81 == 3 || Type == 1 )
    {
      ndisWriteConfigurationIfPresent(&Status, v4, &EncapsulatedPacketTaskOffloadStr, &v74);
      v63 = 0;
      if ( Type == 2 )
        v63 = 0x2000000;
      a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFDFFFFFF | v63;
    }
    if ( (v81 & 1) != 0 )
    {
      ndisWriteConfigurationIfPresent(&Status, v4, &EncapsulatedPacketTaskOffloadNvgreStr, &v74);
      v64 = 0;
      if ( v84 == 2 )
        v64 = 0x4000000;
      a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFBFFFFFF | v64;
    }
    if ( (v81 & 2) != 0 )
    {
      ndisWriteConfigurationIfPresent(&Status, v4, &EncapsulatedPacketTaskOffloadVxlanStr, &v74);
      v65 = 0;
      if ( v76 == 2 )
        v65 = 0x8000000;
      a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xF7FFFFFF | v65;
    }
  }
  v66 = UDPIPv6Checksum;
  if ( UDPIPv6Checksum )
  {
    v74.ParameterType = NdisParameterString;
    v74.ParameterData = v20;
    Status = ndisConvertOffloadValueToString(
               (struct _UNICODE_STRING *)&v74.ParameterData,
               (unsigned int)UDPIPv6Checksum - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_218;
    ndisWriteConfigurationIfPresent(&Status, v4, &UsoIPv4Str, &v74);
    v67 = 0;
    if ( v66 == 1 )
      v67 = 0x10000000;
    a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xEFFFFFFF | v67;
  }
  v68 = LsoV1;
  if ( LsoV1 )
  {
    v74.ParameterType = NdisParameterString;
    v74.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, (unsigned int)LsoV1 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_218;
    ndisWriteConfigurationIfPresent(&Status, v4, &UsoIPv6Str, &v74);
    v69 = 0;
    if ( v68 == 1 )
      v69 = 0x20000000;
    a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xDFFFFFFF | v69;
  }
  v18 = 0;
LABEL_218:
  if ( v4 )
    NdisCloseConfiguration(v4);
  return v18;
}
