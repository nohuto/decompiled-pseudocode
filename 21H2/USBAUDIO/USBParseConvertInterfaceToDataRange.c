/*
 * XREFs of USBParseConvertInterfaceToDataRange @ 0x1C00318FC
 * Callers:
 *     USBParseGetAudioStreamingDataranges @ 0x1C0031E14 (USBParseGetAudioStreamingDataranges.c)
 * Callees:
 *     Feature_1615179064__private_IsEnabledDeviceUsage @ 0x1C00045BC (Feature_1615179064__private_IsEnabledDeviceUsage.c)
 *     USBParseGetNextAudioInterface @ 0x1C002EE00 (USBParseGetNextAudioInterface.c)
 *     USBParseFindDescriptorInConfiguration @ 0x1C002EE50 (USBParseFindDescriptorInConfiguration.c)
 *     USBParseGetAudioSpecificInterface @ 0x1C002EF28 (USBParseGetAudioSpecificInterface.c)
 *     USBParseGetEndpointDescriptor @ 0x1C002EFA8 (USBParseGetEndpointDescriptor.c)
 */

__int64 __fastcall USBParseConvertInterfaceToDataRange(
        struct _USB_CONFIGURATION_DESCRIPTOR *a1,
        unsigned __int8 *a2,
        __int64 a3)
{
  unsigned int v3; // edi
  unsigned __int8 *v7; // rbp
  unsigned int v8; // r13d
  PUSB_COMMON_DESCRIPTOR AudioSpecificInterface; // rax
  PUSB_COMMON_DESCRIPTOR v10; // r14
  PUSB_COMMON_DESCRIPTOR DescriptorInConfiguration; // rax
  unsigned __int8 *p_bLength; // rbx
  PUSB_COMMON_DESCRIPTOR EndpointDescriptor; // rax
  PUSB_COMMON_DESCRIPTOR v14; // rax
  PUSB_COMMON_DESCRIPTOR v15; // rcx
  PUSB_COMMON_DESCRIPTOR v16; // rax
  PUSB_COMMON_DESCRIPTOR v17; // rcx
  UCHAR bLength; // al
  unsigned int v19; // ecx
  GUID v20; // xmm0
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned __int8 *v24; // r15
  int v25; // eax
  __int16 v26; // cx
  __int64 v27; // rax
  __int16 v28; // cx
  __int64 v29; // rax
  unsigned __int8 v30; // al
  __int64 v31; // rax
  BOOL v32; // ecx
  __int64 v33; // rax
  unsigned __int8 v34; // al
  __int64 v35; // rax
  BOOL v36; // ecx
  int v38; // ecx
  _DWORD *PoolWithTag; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  unsigned __int8 *v42; // rbp
  unsigned int v43; // ecx
  PUSB_COMMON_DESCRIPTOR v44; // [rsp+20h] [rbp-48h]
  int v45; // [rsp+80h] [rbp+18h]
  PUSB_INTERFACE_DESCRIPTOR NextAudioInterface; // [rsp+88h] [rbp+20h]

  v3 = 0;
  v7 = 0LL;
  v8 = 0;
  AudioSpecificInterface = USBParseGetAudioSpecificInterface(a1, a2, a3, 7uLL);
  v44 = AudioSpecificInterface;
  v10 = AudioSpecificInterface;
  if ( !AudioSpecificInterface )
    return v3;
  DescriptorInConfiguration = USBParseFindDescriptorInConfiguration(
                                (unsigned __int16 *)&a1->bLength,
                                (char *)&AudioSpecificInterface->bLength + AudioSpecificInterface->bLength,
                                36,
                                8uLL);
  p_bLength = &DescriptorInConfiguration->bLength;
  if ( !DescriptorInConfiguration )
    return v3;
  *(_QWORD *)(a3 + 152) = DescriptorInConfiguration;
  *(_DWORD *)(a3 + 216) = *(unsigned __int16 *)&v10[2].bDescriptorType;
  *(_BYTE *)(a3 + 186) = v10[2].bLength;
  *(_QWORD *)(a3 + 136) = a2;
  *(_DWORD *)(a3 + 104) = DescriptorInConfiguration[3].bLength;
  EndpointDescriptor = USBParseGetEndpointDescriptor(a1, a2, 0);
  *(_QWORD *)(a3 + 168) = EndpointDescriptor;
  if ( !EndpointDescriptor )
    return (unsigned int)-1073741668;
  *(_DWORD *)(a3 + 220) = (unsigned __int16)EndpointDescriptor[2];
  if ( (EndpointDescriptor[1].bDescriptorType & 0xC) == 4 )
  {
    v45 = EndpointDescriptor[4].bLength & 0xF;
    NextAudioInterface = USBParseGetNextAudioInterface(a1, a2);
    v14 = USBParseFindDescriptorInConfiguration(
            (unsigned __int16 *)&a1->bLength,
            (char *)(*(_QWORD *)(a3 + 168) + **(unsigned __int8 **)(a3 + 168)),
            5,
            7uLL);
    v15 = v14;
    if ( !v14 || (v14[1].bLength & 0xF) != v45 || NextAudioInterface && v14 > (PUSB_COMMON_DESCRIPTOR)NextAudioInterface )
      v15 = 0LL;
    *(_QWORD *)(a3 + 176) = v15;
  }
  v16 = USBParseGetEndpointDescriptor(a1, a2, 1);
  *(_QWORD *)(a3 + 160) = v16;
  v17 = v16;
  if ( !v16 )
    return (unsigned int)-1073741438;
  if ( *(char *)(*(_QWORD *)(a3 + 168) + 2LL) >= 0 )
  {
    bLength = v16[2].bLength;
    if ( bLength )
    {
      if ( *(_WORD *)&v17[2].bDescriptorType && (*(_QWORD *)(a3 + 176) || (unsigned __int8)(bLength - 1) > 1u) )
        return (unsigned int)-1073741438;
    }
  }
  v19 = *(unsigned __int16 *)&v10[2].bDescriptorType;
  if ( v19 > 0x1001 )
  {
    v21 = v19 - 4098;
    if ( v21 )
    {
      v22 = v21 - 4095;
      if ( v22 )
      {
        v23 = v22 - 2;
        if ( v23 )
        {
          if ( v23 != 252 )
            return (unsigned int)-1073741198;
          v20 = (GUID)KSDATAFORMAT_SUBTYPE_WMA_SPDIF;
        }
        else
        {
          v20 = (GUID)KSDATAFORMAT_SUBTYPE_DOLBY_MP3_SPDIF;
        }
      }
      else
      {
        v20 = (GUID)KSDATAFORMAT_SUBTYPE_DOLBY_AC3_SPDIF;
      }
    }
    else
    {
      v20 = KSDATAFORMAT_SUBTYPE_AC3_AUDIO;
    }
  }
  else if ( v19 == 4097 )
  {
    v20 = (GUID)KSDATAFORMAT_SUBTYPE_MPEG;
  }
  else
  {
    if ( !*(_WORD *)&v10[2].bDescriptorType )
      return (unsigned int)-1073741198;
    if ( v19 <= 2 )
    {
      v20 = KSDATAFORMAT_SUBTYPE_PCM;
    }
    else
    {
      switch ( v19 )
      {
        case 3u:
          v20 = KSDATAFORMAT_SUBTYPE_IEEE_FLOAT;
          break;
        case 4u:
          v20 = (GUID)KSDATAFORMAT_SUBTYPE_ALAW;
          break;
        case 5u:
          v20 = (GUID)KSDATAFORMAT_SUBTYPE_MULAW;
          break;
        default:
          return (unsigned int)-1073741198;
      }
    }
  }
  *(GUID *)(a3 + 32) = v20;
  *(_QWORD *)a3 = 88LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(GUID *)(a3 + 16) = KSDATAFORMAT_TYPE_AUDIO;
  *(GUID *)(a3 + 48) = KSDATAFORMAT_SPECIFIER_WAVEFORMATEX;
  v24 = &a1->bLength + a1->wTotalLength;
  v25 = *(_WORD *)&v10[2].bDescriptorType & 0xF000;
  if ( v25 )
  {
    if ( v25 != 4096 )
    {
      if ( v25 != 0x2000 )
        goto LABEL_80;
      *(_DWORD *)(a3 + 64) = 2;
      *(_DWORD *)(a3 + 68) = 16;
      *(_DWORD *)(a3 + 72) = 16;
      if ( (unsigned int)Feature_1615179064__private_IsEnabledDeviceUsage() )
      {
        v26 = *(_WORD *)&v44[2].bDescriptorType & 0xF000;
        v27 = *p_bLength;
        if ( (unsigned __int8)v27 < 8u || &p_bLength[v27] > v24 )
          goto LABEL_76;
        if ( v26 )
        {
          if ( v26 == 4096 )
            goto LABEL_69;
          goto LABEL_70;
        }
LABEL_71:
        v34 = p_bLength[7];
        goto LABEL_72;
      }
LABEL_78:
      v7 = p_bLength + 8;
      goto LABEL_79;
    }
    *(_QWORD *)(a3 + 64) = 6LL;
    *(_DWORD *)(a3 + 72) = 0;
    if ( !(unsigned int)Feature_1615179064__private_IsEnabledDeviceUsage() )
    {
      v7 = p_bLength + 9;
      goto LABEL_63;
    }
    v28 = *(_WORD *)&v10[2].bDescriptorType & 0xF000;
    v29 = *p_bLength;
    if ( (unsigned __int8)v29 >= 9u && &p_bLength[v29] <= v24 )
    {
      switch ( v28 )
      {
        case 0:
          goto LABEL_55;
        case 0x1000:
          v30 = p_bLength[8];
LABEL_56:
          if ( v30 )
            v31 = 3 * (v30 + 3LL);
          else
            v31 = 15LL;
          v32 = &p_bLength[v31] <= v24;
          goto LABEL_61;
        case 0x2000:
LABEL_55:
          v30 = p_bLength[7];
          goto LABEL_56;
      }
    }
    v32 = 0;
LABEL_61:
    v7 = (unsigned __int8 *)((unsigned __int64)(p_bLength + 9) & -(__int64)v32);
LABEL_63:
    v8 = p_bLength[8];
    goto LABEL_80;
  }
  *(_DWORD *)(a3 + 64) = p_bLength[4];
  *(_DWORD *)(a3 + 68) = 8 * p_bLength[5];
  *(_DWORD *)(a3 + 72) = 8 * p_bLength[5];
  *(_BYTE *)(a3 + 187) = p_bLength[5];
  if ( !(unsigned int)Feature_1615179064__private_IsEnabledDeviceUsage() )
    goto LABEL_78;
  v33 = *p_bLength;
  v26 = *(_WORD *)&v10[2].bDescriptorType & 0xF000;
  if ( (unsigned __int8)v33 < 8u || &p_bLength[v33] > v24 )
    goto LABEL_76;
  if ( !v26 )
    goto LABEL_71;
  if ( v26 == 4096 )
  {
LABEL_69:
    v34 = p_bLength[8];
LABEL_72:
    if ( v34 )
      v35 = 3LL * v34 + 8;
    else
      v35 = 14LL;
    v36 = &p_bLength[v35] <= v24;
    goto LABEL_77;
  }
LABEL_70:
  if ( v26 == 0x2000 )
    goto LABEL_71;
LABEL_76:
  v36 = 0;
LABEL_77:
  v7 = (unsigned __int8 *)((unsigned __int64)(p_bLength + 8) & -(__int64)v36);
LABEL_79:
  v8 = p_bLength[7];
LABEL_80:
  if ( (unsigned int)Feature_1615179064__private_IsEnabledDeviceUsage() && !v7 )
    return 3221225628LL;
  v38 = *v7 + ((v7[1] + (v7[2] << 8)) << 8);
  *(_DWORD *)(a3 + 76) = v38;
  *(_DWORD *)(a3 + 80) = v38;
  *(_DWORD *)(a3 + 108) = v8;
  if ( v8 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v8, 0x41627845u);
    *(_QWORD *)(a3 + 120) = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = *(_DWORD *)(a3 + 76);
      if ( v8 > 1 )
      {
        v40 = 4LL;
        v41 = v8 - 1;
        v42 = v7 + 4;
        do
        {
          v43 = *(v42 - 1) + ((*v42 + (v42[1] << 8)) << 8);
          *(_DWORD *)(v40 + *(_QWORD *)(a3 + 120)) = v43;
          if ( v43 < *(_DWORD *)(a3 + 76) )
            *(_DWORD *)(a3 + 76) = v43;
          if ( v43 > *(_DWORD *)(a3 + 80) )
            *(_DWORD *)(a3 + 80) = v43;
          v42 += 3;
          v40 += 4LL;
          --v41;
        }
        while ( v41 );
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    *(_DWORD *)(a3 + 80) = v7[3] + ((v7[4] + (v7[5] << 8)) << 8);
  }
  return v3;
}
