/*
 * XREFs of ?ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0027CE4
 * Callers:
 *     ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1C01036B8 (-ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C00184FC (WPP_RECORDER_SF_qDD_ea_1C00184FC.c)
 *     ?NdisTraceLoggingOffloadConfigRead@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0021FD8 (-NdisTraceLoggingOffloadConfigRead@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisOpenConfigurationEx @ 0x1C0028340 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C0028580 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C0028660 (NdisReadConfiguration.c)
 */

__int64 __fastcall ndisReadOffloadRegistry(struct _NDIS_MINIPORT_BLOCK *a1)
{
  NDIS_STATUS v2; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  PVOID v5; // rsi
  unsigned int v6; // edi
  unsigned int Value; // ecx
  unsigned int IntegerData; // edx
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // edx
  unsigned int v25; // edx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  unsigned int v45; // edx
  unsigned int v46; // edx
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  unsigned int v52; // ecx
  unsigned int v53; // edx
  unsigned int v54; // edx
  unsigned int v55; // ecx
  PNDIS_CONFIGURATION_PARAMETER v56; // rcx
  unsigned int v57; // edx
  unsigned int v58; // r8d
  unsigned int v59; // r8d
  unsigned int v60; // edx
  unsigned int v61; // ecx
  unsigned int v62; // ecx
  unsigned int v63; // ecx
  unsigned int v64; // ecx
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+40h] [rbp-20h] BYREF
  int Status; // [rsp+90h] [rbp+30h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+98h] [rbp+38h] BYREF
  PVOID ConfigurationHandle; // [rsp+A0h] [rbp+40h] BYREF

  ParameterValue = 0LL;
  ConfigurationHandle = 0LL;
  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  *(&ConfigObject.Flags + 1) = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x42u,
      &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
      a1);
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Flags = 0;
  v2 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v5 = ConfigurationHandle;
  v6 = v2;
  Status = v2;
  if ( !v2 )
  {
    a1->OffloadRegistry.Value |= 0x20000u;
    NdisReadConfiguration(&Status, &ParameterValue, v5, &IPXsumIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      Value = a1->OffloadRegistry.Value;
      IntegerData = ParameterValue->ParameterData.IntegerData;
      if ( IntegerData )
      {
        v9 = IntegerData - 1;
        if ( v9 )
        {
          if ( v9 == 1 )
            v10 = Value & 0xFFFFFFFC | 1;
          else
            v10 = Value & 0xFFFFFFFC;
        }
        else
        {
          v10 = Value & 0xFFFFFFFC | 2;
        }
      }
      else
      {
        v10 = Value | 3;
      }
      a1->OffloadRegistry.Value = v10;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v5, &TCPXsumIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v11 = a1->OffloadRegistry.Value;
      v12 = ParameterValue->ParameterData.IntegerData;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          if ( v13 == 1 )
            v14 = v11 & 0xFFFFFFF3 | 4;
          else
            v14 = v11 & 0xFFFFFFF3;
        }
        else
        {
          v14 = v11 & 0xFFFFFFF3 | 8;
        }
      }
      else
      {
        v14 = v11 | 0xC;
      }
      a1->OffloadRegistry.Value = v14;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v5, &UDPXsumIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v15 = a1->OffloadRegistry.Value;
      v16 = ParameterValue->ParameterData.IntegerData;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          if ( v17 == 1 )
            v18 = v15 & 0xFFFFFFCF | 0x10;
          else
            v18 = v15 & 0xFFFFFFCF;
        }
        else
        {
          v18 = v15 & 0xFFFFFFCF | 0x20;
        }
      }
      else
      {
        v18 = v15 | 0x30;
      }
      a1->OffloadRegistry.Value = v18;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v5, &TCPXsumIPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v19 = a1->OffloadRegistry.Value;
      v20 = ParameterValue->ParameterData.IntegerData;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          if ( v21 == 1 )
            v22 = v19 & 0xFFFFFF3F | 0x40;
          else
            v22 = v19 & 0xFFFFFF3F;
        }
        else
        {
          v22 = v19 & 0xFFFFFF3F | 0x80;
        }
      }
      else
      {
        v22 = v19 | 0xC0;
      }
      a1->OffloadRegistry.Value = v22;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v5, &UDPXsumIPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v23 = a1->OffloadRegistry.Value;
      v24 = ParameterValue->ParameterData.IntegerData;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( v25 )
        {
          if ( v25 == 1 )
            v26 = v23 & 0xFFFFFCFF | 0x100;
          else
            v26 = v23 & 0xFFFFFCFF;
        }
        else
        {
          v26 = v23 & 0xFFFFFCFF | 0x200;
        }
      }
      else
      {
        v26 = v23 | 0x300;
      }
      a1->OffloadRegistry.Value = v26;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v5, &TCPUDPChecksumOffloadIPv4Str, NdisParameterInteger);
    if ( !Status && !ParameterValue->ParameterData.IntegerData )
      a1->OffloadRegistry.Value |= 0x3Fu;
    NdisReadConfiguration(&Status, &ParameterValue, v5, &TCPUDPChecksumOffloadIPv6Str, NdisParameterInteger);
    if ( !Status && !ParameterValue->ParameterData.IntegerData )
      a1->OffloadRegistry.Value |= 0x3C0u;
    NdisReadConfiguration(&Status, &ParameterValue, v5, &LsoV2IPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v27 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v28 = v27 & 0xFFFFEFFF;
      else
        v28 = v27 | 0x1000;
      a1->OffloadRegistry.Value = v28;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v5, &LsoV2IPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v29 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v30 = v29 & 0xFFFFF7FF;
      else
        v30 = v29 | 0x800;
      a1->OffloadRegistry.Value = v30;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v5, &LsoV1IPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v42 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v43 = v42 & 0xFFFFFBFF;
      else
        v43 = v42 | 0x400;
      a1->OffloadRegistry.Value = v43;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v5, &IPsecIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v44 = a1->OffloadRegistry.Value;
      v45 = ParameterValue->ParameterData.IntegerData;
      if ( v45 )
      {
        v46 = v45 - 1;
        if ( v46 )
        {
          if ( v46 == 1 )
            v47 = v44 & 0xFFFF9FFF | 0x2000;
          else
            v47 = v44 & 0xFFFF9FFF;
        }
        else
        {
          v47 = v44 & 0xFFFF9FFF | 0x4000;
        }
      }
      else
      {
        v47 = v44 | 0x6000;
      }
      a1->OffloadRegistry.Value = v47;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v5, &TCPConnectionOffloadIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v48 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v49 = v48 & 0xFFFF7FFF;
      else
        v49 = v48 | 0x8000;
      a1->OffloadRegistry.Value = v49;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v5, &TCPConnectionOffloadIPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v50 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v51 = v50 & 0xFFFEFFFF;
      else
        v51 = v50 | 0x10000;
      a1->OffloadRegistry.Value = v51;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v5, &IPsecV2Str, NdisParameterInteger);
    if ( Status )
    {
      NdisReadConfiguration(&Status, &ParameterValue, v5, &IPsecV2IPv4Str, NdisParameterInteger);
      if ( !Status )
      {
        v56 = ParameterValue;
        v57 = a1->OffloadRegistry.Value | 0x400000;
        a1->OffloadRegistry.Value = v57;
        v58 = v56->ParameterData.IntegerData;
        if ( v58 )
        {
          v59 = v58 - 1;
          if ( v59 )
          {
            if ( v59 == 1 )
              v60 = v57 & 0xFFCFFFFF | 0x100000;
            else
              v60 = v57 & 0xFFCFFFFF;
          }
          else
          {
            v60 = v57 & 0xFFCFFFFF | 0x200000;
          }
        }
        else
        {
          v60 = v57 | 0x300000;
        }
        a1->OffloadRegistry.Value = v60;
      }
    }
    else
    {
      v52 = a1->OffloadRegistry.Value;
      v53 = ParameterValue->ParameterData.IntegerData;
      if ( v53 )
      {
        v54 = v53 - 1;
        if ( v54 )
        {
          if ( v54 == 1 )
            v55 = v52 & 0xFFF3FFFF | 0x40000;
          else
            v55 = v52 & 0xFFF3FFFF;
        }
        else
        {
          v55 = v52 & 0xFFF3FFFF | 0x80000;
        }
      }
      else
      {
        v55 = v52 | 0xC0000;
      }
      a1->OffloadRegistry.Value = v55;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v5, &RscIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v32 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v33 = v32 & 0xFF7FFFFF;
      else
        v33 = v32 | 0x800000;
      a1->OffloadRegistry.Value = v33;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v5, &RscIPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v34 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v35 = v34 & 0xFEFFFFFF;
      else
        v35 = v34 | 0x1000000;
      a1->OffloadRegistry.Value = v35;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v5, &EncapsulatedPacketTaskOffloadStr, NdisParameterInteger);
    if ( !Status )
    {
      v36 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v37 = v36 & 0xFDFFFFFF;
      else
        v37 = v36 | 0x2000000;
      a1->OffloadRegistry.Value = v37;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v5, &EncapsulatedPacketTaskOffloadNvgreStr, NdisParameterInteger);
    if ( !Status )
    {
      v38 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v39 = v38 & 0xFBFFFFFF;
      else
        v39 = v38 | 0x4000000;
      a1->OffloadRegistry.Value = v39;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v5, &EncapsulatedPacketTaskOffloadVxlanStr, NdisParameterInteger);
    if ( !Status )
    {
      v40 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v41 = v40 & 0xF7FFFFFF;
      else
        v41 = v40 | 0x8000000;
      a1->OffloadRegistry.Value = v41;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v5, &UsoIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v61 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v62 = v61 & 0xEFFFFFFF;
      else
        v62 = v61 | 0x10000000;
      a1->OffloadRegistry.Value = v62;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v5, &UsoIPv6Str, NdisParameterInteger);
    v6 = Status;
    if ( !Status )
    {
      v63 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v64 = v63 & 0xDFFFFFFF;
      else
        v64 = v63 | 0x20000000;
      a1->OffloadRegistry.Value = v64;
    }
  }
  if ( v5 )
    NdisCloseConfiguration(v5);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x43u,
      &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
      (char)a1,
      v6,
      a1->OffloadRegistry.Value);
  if ( (a1->OffloadRegistry.Value & 0x20000) != 0 )
    NdisTraceLoggingOffloadConfigRead(a1, v3, v4);
  return v6;
}
