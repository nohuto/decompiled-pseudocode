/*
 * XREFs of ScsiToNVMe @ 0x1C0003A60
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0003960 (NVMeHwBuildIo.c)
 * Callees:
 *     ScsiInquiryRequest @ 0x1C0001254 (ScsiInquiryRequest.c)
 *     ScsiUnmapRequest @ 0x1C0001C54 (ScsiUnmapRequest.c)
 *     ScsiModeSenseRequest @ 0x1C0001E0C (ScsiModeSenseRequest.c)
 *     GetSrbScsiData @ 0x1C00034C8 (GetSrbScsiData.c)
 *     ScsiReadCapacityRequest @ 0x1C0003858 (ScsiReadCapacityRequest.c)
 *     MdlToPrp @ 0x1C0003FE0 (MdlToPrp.c)
 *     ScsiSyncCacheRequest @ 0x1C00042B8 (ScsiSyncCacheRequest.c)
 *     __security_check_cookie @ 0x1C00050E0 (__security_check_cookie.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C001310C (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C00132FC (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeSplitIoCommand @ 0x1C0013E0C (NVMeSplitIoCommand.c)
 *     NVMeWriteBufferFirmwareActivate @ 0x1C0014304 (NVMeWriteBufferFirmwareActivate.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C00145EC (NVMeWriteBufferFirmwareDownload.c)
 *     ScsiLogSenseRequest @ 0x1C00154BC (ScsiLogSenseRequest.c)
 *     ScsiModeSelectRequest @ 0x1C0015548 (ScsiModeSelectRequest.c)
 *     ScsiReportLunsCommand @ 0x1C0015718 (ScsiReportLunsCommand.c)
 *     ScsiSanitizeRequest @ 0x1C00157F4 (ScsiSanitizeRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C001598C (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C0015A94 (ScsiSecurityProtocolOutRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C0015B9C (ScsiStartStopUnitRequest.c)
 *     SglToPrp @ 0x1C0015EFC (SglToPrp.c)
 *     NVMeSetSenseData @ 0x1C001AFC8 (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiToNVMe(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // r10
  unsigned int started; // esi
  char v6; // r11
  unsigned int v9; // r13d
  unsigned __int8 *v10; // r12
  __int64 v11; // rdx
  unsigned int v12; // eax
  unsigned int *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  bool v16; // r15
  unsigned __int8 v17; // cl
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rdi
  unsigned int v21; // r8d
  __int64 v22; // rax
  int *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  unsigned int v26; // r11d
  int v27; // eax
  int v28; // ecx
  __int64 v29; // r15
  __int64 v30; // r9
  unsigned int v31; // ecx
  unsigned int v32; // r9d
  __int64 v33; // rax
  __int16 v34; // ax
  __int64 v35; // rax
  unsigned __int8 v36; // cl
  __int64 v37; // r15
  int v38; // ecx
  _DWORD *v39; // rax
  unsigned int v40; // r9d
  unsigned int v41; // r8d
  unsigned int v42; // r8d
  unsigned __int8 v43; // al
  int v44; // eax
  int v45; // ecx
  int v46; // ecx
  unsigned int v47; // r8d
  unsigned int v48; // eax
  unsigned int v49; // eax
  unsigned __int64 v51; // r8
  int v52; // ecx
  unsigned __int8 *v53; // rax
  unsigned __int8 *v54; // rax
  unsigned __int8 v55; // al
  char v56; // al
  int v57; // eax
  __int64 v58; // r8
  unsigned __int32 v59; // eax
  __int64 v60; // rdx
  _BYTE *SrbScsiData; // rax
  char v62; // r8
  unsigned int v63; // r9d
  unsigned __int8 v64; // dl
  __int64 v65; // rcx
  _DWORD *v66; // rcx
  __int64 v67; // rax
  int v68; // edx
  unsigned int v69; // ecx
  int v70; // ecx
  unsigned int v71; // eax
  int v72; // [rsp+20h] [rbp-79h]
  int v73; // [rsp+20h] [rbp-79h]
  __int64 v74; // [rsp+28h] [rbp-71h]
  __int64 v75; // [rsp+28h] [rbp-71h]
  __int64 v76; // [rsp+30h] [rbp-69h]
  __int64 v77; // [rsp+30h] [rbp-69h]
  unsigned int v78; // [rsp+30h] [rbp-69h]
  unsigned int v79; // [rsp+38h] [rbp-61h]
  int v80; // [rsp+38h] [rbp-61h]
  __int64 v81; // [rsp+38h] [rbp-61h]
  unsigned int v82; // [rsp+40h] [rbp-59h] BYREF
  unsigned int v83; // [rsp+44h] [rbp-55h]
  __int64 v84; // [rsp+48h] [rbp-51h]
  __int64 v85; // [rsp+50h] [rbp-49h]
  __int64 v86; // [rsp+58h] [rbp-41h] BYREF
  __int64 v87; // [rsp+60h] [rbp-39h]
  __int64 v88; // [rsp+68h] [rbp-31h]
  __int64 v89; // [rsp+70h] [rbp-29h] BYREF
  __int64 v90; // [rsp+78h] [rbp-21h]
  __int64 v91; // [rsp+80h] [rbp-19h] BYREF
  _OWORD v92[2]; // [rsp+88h] [rbp-11h] BYREF
  __int64 v93; // [rsp+A8h] [rbp+Fh]

  v4 = *(_BYTE *)(a2 + 2);
  started = 0;
  v6 = 0;
  v83 = 0;
  v9 = 0;
  v10 = 0LL;
  if ( v4 == 40 )
  {
    v11 = 40LL;
    if ( *(_DWORD *)(a2 + 20) || (v12 = *(_DWORD *)(a2 + 56)) == 0 )
    {
LABEL_93:
      v9 = 0;
      v83 = 0;
      goto LABEL_13;
    }
    v13 = (unsigned int *)(a2 + 120);
    a4 = v12;
    do
    {
      v14 = *v13;
      if ( (unsigned int)v14 >= 0x80 && (unsigned int)v14 <= *(_DWORD *)(a2 + 16) )
      {
        a3 = *(unsigned int *)(a2 + v14);
        v15 = a2 + v14;
        if ( (_DWORD)a3 == 64 )
        {
          v9 = *(unsigned __int8 *)(v15 + 10);
          v6 = 1;
          v83 = v9;
          if ( (_BYTE)v9 )
            v10 = (unsigned __int8 *)(v15 + 24);
        }
        else
        {
          a3 = (unsigned int)(a3 - 65);
          if ( (_DWORD)a3 )
          {
            if ( (_DWORD)a3 == 1 )
            {
              v53 = (unsigned __int8 *)(v15 + 32);
              v83 = *(_DWORD *)(v15 + 12);
              v9 = v83;
              v6 = 1;
              if ( !v83 )
                v53 = v10;
              v10 = v53;
            }
          }
          else
          {
            v9 = *(unsigned __int8 *)(v15 + 10);
            v54 = (unsigned __int8 *)(v15 + 24);
            v83 = v9;
            v6 = 1;
            if ( !(_BYTE)v9 )
              v54 = v10;
            v10 = v54;
          }
        }
      }
      ++v13;
      --a4;
    }
    while ( a4 );
  }
  v11 = v4;
  if ( v4 )
  {
    if ( v6 )
      goto LABEL_13;
    goto LABEL_93;
  }
  v9 = *(unsigned __int8 *)(a2 + 10);
  v83 = v9;
  if ( (_BYTE)v9 )
    v10 = (unsigned __int8 *)(a2 + 72);
LABEL_13:
  v16 = 0;
  LOBYTE(v86) = 0;
  if ( (_BYTE)v11 == 40 )
    v17 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v17 = *(_BYTE *)(a2 + 7);
  v18 = v17;
  LODWORD(v87) = v17;
  if ( v9 < 6 || !v10 )
  {
    LOBYTE(a4) = 32;
    goto LABEL_173;
  }
  v19 = *v10;
  if ( (_BYTE)v19 != 0xA0 && !*(_QWORD *)(a1 + 8 * v18 + 1720) )
  {
    LOBYTE(a4) = 37;
LABEL_173:
    LOBYTE(a3) = 5;
    LOBYTE(v11) = 8;
    NVMeSetSenseData(a2, v11, a3, a4);
    return 3238002695LL;
  }
  if ( v19 != 40 )
  {
    v51 = 0x1C0000000uLL;
    switch ( *v10 )
    {
      case 0u:
      case 0x2Fu:
      case 0x8Fu:
        *(_BYTE *)(a2 + 3) = 1;
        goto LABEL_62;
      case 0x12u:
        started = ScsiInquiryRequest(a1, a2, (__int64)v10, a4);
        goto LABEL_62;
      case 0x15u:
      case 0x55u:
        started = ScsiModeSelectRequest(a1, a2, v10);
        goto LABEL_62;
      case 0x1Au:
      case 0x5Au:
        started = ScsiModeSenseRequest(a1, a2, v10);
        goto LABEL_62;
      case 0x1Bu:
        started = ScsiStartStopUnitRequest(a1, a2, v10);
        goto LABEL_62;
      case 0x25u:
      case 0x9Eu:
        started = ScsiReadCapacityRequest(a1, a2, v10, v9);
        goto LABEL_62;
      case 0x2Au:
      case 0x88u:
      case 0x8Au:
        goto LABEL_20;
      case 0x35u:
        started = ScsiSyncCacheRequest(a1, a2);
        goto LABEL_62;
      case 0x3Bu:
        v56 = v10[1] & 0x1F;
        if ( v56 == 14 )
        {
          v57 = NVMeWriteBufferFirmwareDownload(a1, a2, v10);
        }
        else if ( v56 == 15 )
        {
          v57 = NVMeWriteBufferFirmwareActivate(a1, a2, v10);
        }
        else
        {
          LOBYTE(a4) = 36;
          LOBYTE(v51) = 5;
          LOBYTE(v11) = 6;
          NVMeSetSenseData(a2, v11, v51, a4);
          v57 = -1056964602;
        }
        started = v57;
        goto LABEL_62;
      case 0x42u:
        started = ScsiUnmapRequest(a1, a2);
        goto LABEL_62;
      case 0x48u:
        started = ScsiSanitizeRequest(a1, a2, v10);
        goto LABEL_62;
      case 0x4Du:
        started = ScsiLogSenseRequest(a1, a2, v10);
        goto LABEL_62;
      case 0x9Bu:
        if ( (v10[1] & 0x1F) != 0x1C )
          goto LABEL_108;
        v55 = v10[14];
        if ( v55 )
        {
          if ( (unsigned __int8)(v55 - 16) > 0xDFu )
          {
LABEL_108:
            *(_BYTE *)(a2 + 3) = 6;
            started = -1056964601;
          }
          else
          {
            started = NVMeGetDeviceTelemetryData(a1, a2, v10);
          }
        }
        else
        {
          started = NVMeGetDeviceTelemetryHeader(a1, a2);
        }
        break;
      case 0xA0u:
        started = ScsiReportLunsCommand(a1, a2);
        goto LABEL_62;
      case 0xA2u:
        started = ScsiSecurityProtocolInRequest(a1, a2, v10);
        goto LABEL_62;
      case 0xB5u:
        started = ScsiSecurityProtocolOutRequest(a1, a2, v10);
        goto LABEL_62;
      default:
        LOBYTE(a4) = 32;
        LOBYTE(v51) = 5;
        LOBYTE(v11) = 6;
        NVMeSetSenseData(a2, v11, v51, a4);
        started = -1056964601;
        goto LABEL_62;
    }
    goto LABEL_62;
  }
LABEL_20:
  if ( (_BYTE)v11 == 40 )
    v20 = *(_QWORD *)(a2 + 104);
  else
    v20 = *(_QWORD *)(a2 + 56);
  if ( (v20 & 0xFFF) != 0 )
    v20 = v20 - (v20 & 0xFFF) + 4096;
  if ( (_BYTE)v11 == 40 )
  {
    v79 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
    v21 = v79;
    HIDWORD(v84) = v79;
    v22 = 60LL;
  }
  else
  {
    v79 = *(unsigned __int8 *)(a2 + 7);
    v21 = v79;
    HIDWORD(v84) = v79;
    v22 = 16LL;
  }
  v23 = (int *)(a2 + v22);
  v88 = a2 + v22;
  v24 = a1 + 8 * (v21 + 215LL);
  v25 = *(_QWORD *)v24;
  v85 = v24;
  v26 = *(_DWORD *)(v25 + 52);
  LODWORD(v76) = v26;
  if ( !v26
    || !*(_QWORD *)(v25 + 56)
    || ((LOWORD(v84) = *(_WORD *)(v25 + 92), (_BYTE)v11 != 40)
      ? (v27 = *(_DWORD *)(a2 + 12))
      : (v27 = *(_DWORD *)(a2 + 24)),
        (v27 & 0xC0) == 0 || (v28 = *v23) == 0 || ((v26 - 1) & v28) != 0) )
  {
    LOBYTE(a4) = 36;
    LOBYTE(v24) = 5;
    LOBYTE(v11) = 6;
    NVMeSetSenseData(a2, v11, v24, a4);
    started = -1056964602;
    goto LABEL_62;
  }
  *(_BYTE *)(v20 + 4253) = *(_BYTE *)(v20 + 4253) & 0xFC | 2;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v29 = *(_QWORD *)(a2 + 104);
  else
    v29 = *(_QWORD *)(a2 + 56);
  if ( (v29 & 0xFFF) != 0 )
    v29 = v29 - (v29 & 0xFFF) + 4096;
  if ( (*(_BYTE *)(v29 + 4253) & 1) != 0 )
  {
    v34 = *(_WORD *)(a1 + 328);
    goto LABEL_48;
  }
  if ( *(_BYTE *)(a1 + 16) )
  {
    v34 = *(_WORD *)(*(_QWORD *)(a1 + 768) + 40LL);
    goto LABEL_48;
  }
  LODWORD(v91) = 0;
  StorPortExtendedFunction(
    15LL,
    a1,
    a2,
    &v89,
    v72,
    v74,
    v76,
    v79,
    0,
    v84,
    v85,
    v86,
    v87,
    v88,
    0x1400000002LL,
    0LL,
    v91,
    *(_QWORD *)&v92[0]);
  WORD2(v86) = v90;
  if ( (_WORD)v91 == 0xFFFF && BYTE2(v91) == 0xFF )
    StorPortExtendedFunction(
      17LL,
      a1,
      &v91,
      v30,
      v73,
      v75,
      v77,
      v80,
      v82,
      v84,
      v85,
      v86,
      v87,
      v88,
      v89,
      v90,
      v91,
      *(_QWORD *)&v92[0]);
  StorPortExtendedFunction(
    56LL,
    a1,
    &v91,
    &v82,
    v73,
    v75,
    v77,
    v80,
    v82,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91,
    *(_QWORD *)&v92[0]);
  v31 = *(unsigned __int16 *)(a1 + 210);
  v32 = v82;
  if ( v82 >= v31 )
  {
    v32 = v82 % v31;
    v82 %= v31;
  }
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 240) + 48LL * v32 + 40) )
  {
    v58 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 24LL * WORD2(v86) + 16);
    v59 = _InterlockedExchangeAdd((volatile signed __int32 *)(v58 + 184), 1u);
    v9 = v83;
    v60 = *(_QWORD *)(*(_QWORD *)(v58 + 192) + 8LL * (v59 % *(_DWORD *)(v58 + 180)));
    *(_QWORD *)(*(_QWORD *)(a1 + 240) + 48LL * v32 + 40) = v60;
    ++*(_WORD *)(v60 + 52);
    v32 = v82;
    v79 = HIDWORD(v84);
  }
  if ( *(_BYTE *)(a1 + 3800) )
  {
    SrbScsiData = (_BYTE *)GetSrbScsiData(a2, (_DWORD *)&v86 + 1, 0LL, 0LL, 0LL);
    if ( *SrbScsiData != 40
      && *SrbScsiData != 42
      && (unsigned __int8)*SrbScsiData != 136
      && (unsigned __int8)*SrbScsiData != 138 )
    {
      v33 = v82;
      goto LABEL_46;
    }
    v62 = *(_BYTE *)(a2 + 2);
    if ( v62 == 40 && (v63 = *(_DWORD *)(a2 + 56)) != 0 )
    {
      v64 = 0;
      while ( 1 )
      {
        v65 = *(unsigned int *)(a2 + 4LL * v64 + 120);
        if ( (unsigned int)v65 >= 0x80 && (unsigned int)v65 < *(_DWORD *)(a2 + 16) )
        {
          v66 = (_DWORD *)(a2 + v65);
          if ( *v66 == 128 )
            break;
        }
        if ( ++v64 >= v63 )
          goto LABEL_136;
      }
    }
    else
    {
LABEL_136:
      v66 = 0LL;
      if ( v62 != 40 )
      {
        v67 = 16LL;
LABEL_139:
        v68 = *(_DWORD *)(a1 + 3812);
        if ( (v68 & 0x80u) != 0 || *(_DWORD *)(a2 + v67) <= *(_DWORD *)(a1 + 3808) && v66 && (v66[2] & 2) == 0 )
        {
          if ( (v68 & 0x40) != 0 )
            v69 = *(unsigned __int16 *)(a1 + 282);
          else
            v69 = *(unsigned __int16 *)(a1 + 284);
          v34 = *(_WORD *)(136LL * (unsigned __int16)(v82 % v69) + *(_QWORD *)(a1 + 768) + 40);
        }
        else
        {
          v34 = *(_WORD *)(136LL
                         * (unsigned __int16)(*(_WORD *)(a1 + 284)
                                            + v82 % (unsigned __int16)(*(_WORD *)(a1 + 282) - *(_WORD *)(a1 + 284)))
                         + *(_QWORD *)(a1 + 768)
                         + 40);
        }
        goto LABEL_47;
      }
    }
    v67 = 60LL;
    goto LABEL_139;
  }
  v33 = v32;
LABEL_46:
  v34 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 48 * v33 + 40) + 40LL);
LABEL_47:
  v24 = v85;
  v26 = v76;
LABEL_48:
  *(_WORD *)(v29 + 4244) = v34;
  if ( v79 < *(_DWORD *)(a1 + 200) && *(_QWORD *)v24 )
    HIDWORD(v84) = *(_DWORD *)(*(_QWORD *)v24 + 16LL);
  else
    HIDWORD(v84) = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v35 = *(unsigned int *)(a2 + 52);
    v85 = a2 + 60;
    v36 = *(_BYTE *)(v35 + a2 + 10);
  }
  else
  {
    v36 = *(_BYTE *)(a2 + 7);
    v85 = a2 + 16;
  }
  v37 = v36;
  v38 = *v10;
  if ( v38 == 40 )
    goto LABEL_54;
  v52 = v38 - 42;
  if ( !v52 )
  {
LABEL_77:
    *(_BYTE *)(v20 + 4096) = 1;
    if ( (*(_BYTE *)(a1 + 3776) & 3) == 3 && *(unsigned __int8 *)(a1 + 3777) == (_DWORD)v37 && *(_WORD *)(a1 + 3780) )
    {
      v93 = 0LL;
      memset(v92, 0, sizeof(v92));
      LOWORD(v92[0]) = 1;
      if ( (unsigned int)StorPortExtendedFunction(
                           28LL,
                           a1,
                           a2,
                           v92,
                           v72,
                           v74,
                           v76,
                           v79,
                           v82,
                           v84,
                           v85,
                           v86,
                           v87,
                           v88,
                           v89,
                           v90,
                           v91,
                           *(_QWORD *)&v92[0])
        || (WORD4(v92[0]) & 0x100) == 0
        || (unsigned int)(HIDWORD(v92[0]) - 1) > 0xFFFE
        || HIDWORD(v92[0]) > *(unsigned __int16 *)(a1 + 3780) )
      {
        v26 = v78;
      }
      else
      {
        v26 = v78;
        if ( WORD6(v92[0]) )
        {
          v71 = *(_DWORD *)(v20 + 4144) & 0xFF1FFFFF;
          *(_WORD *)(v20 + 4150) = WORD6(v92[0]);
          *(_DWORD *)(v20 + 4144) = v71 | 0x100000;
        }
      }
    }
    goto LABEL_55;
  }
  v70 = v52 - 94;
  if ( v70 )
  {
    if ( v70 != 2 )
      goto LABEL_55;
    goto LABEL_77;
  }
LABEL_54:
  *(_BYTE *)(v20 + 4096) = 2;
LABEL_55:
  *(_DWORD *)(v20 + 4096) &= 0xFFFFFCFF;
  *(_DWORD *)(v20 + 4100) = HIDWORD(v84);
  v39 = (_DWORD *)v85;
  *(_QWORD *)(v20 + 4112) = 0LL;
  v40 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v37 + 1720) + 52LL);
  v41 = v40 + *v39 - 1;
  if ( v40 == 512 )
    v42 = v41 >> 9;
  else
    v42 = v41 / v40;
  if ( v9 == 16 )
  {
    BYTE4(v81) = v10[5];
    BYTE3(v81) = v10[6];
    HIBYTE(v81) = v10[2];
    BYTE2(v81) = v10[7];
    BYTE6(v81) = v10[3];
    BYTE1(v81) = v10[8];
    v43 = v10[9];
    BYTE5(v81) = v10[4];
  }
  else
  {
    BYTE3(v81) = v10[2];
    BYTE2(v81) = v10[3];
    BYTE1(v81) = v10[4];
    v43 = v10[5];
    HIDWORD(v81) = 0;
  }
  LOBYTE(v81) = v43;
  *(_WORD *)(v20 + 4144) = v42 - 1;
  *(_DWORD *)(v20 + 4144) &= 0xC3FFFFFF;
  v44 = *(_DWORD *)(v20 + 4144) & 0x3FFFFFFF;
  *(_QWORD *)(v20 + 4136) = v81;
  v45 = v10[1] & 8;
  *(_BYTE *)(v20 + 4148) = 0;
  v46 = v44 | (v45 << 27);
  *(_QWORD *)(v20 + 4152) = 0LL;
  *(_DWORD *)(v20 + 4144) = v46;
  v47 = *(_DWORD *)(a1 + 52);
  if ( v47 >= v26 && !(v47 % v26) )
  {
    LOWORD(v48) = v84;
    goto LABEL_165;
  }
  LOWORD(v48) = v84;
  if ( (_WORD)v84 )
  {
LABEL_165:
    v85 = v81;
    if ( (_WORD)v48 )
      v48 = (unsigned __int16)v48;
    else
      v48 = v47 / v26;
    v16 = v85 / v48 != (v85 + (unsigned int)(unsigned __int16)v46 + 1 - 1LL) / v48;
    goto LABEL_62;
  }
  v16 = 0;
LABEL_62:
  if ( !*(_BYTE *)(a2 + 3) )
  {
    if ( (*(_DWORD *)(a1 + 56) & 8) != 0 )
      v49 = MdlToPrp(a1, a2);
    else
      v49 = SglToPrp(a1, a2);
    if ( v49 )
      ++*(_DWORD *)(a1 + 3840);
    started = v49;
    if ( v49 )
    {
      *(_BYTE *)(a2 + 3) = 4;
    }
    else if ( v16 )
    {
      NVMeSplitIoCommand(a1, a2);
    }
  }
  return started;
}
