/*
 * XREFs of ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1AEAUQDC_CONTEXT@@@Z @ 0x1C01B0F2C
 * Callers:
 *     ?GetRequestedPathsModality@@YAJI_NAEAUQDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C01B0DF8 (-GetRequestedPathsModality@@YAJI_NAEAUQDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C02F0370 (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 *     DxgkConvertPathsModalityToDisplayConfig @ 0x1C02F2D60 (DxgkConvertPathsModalityToDisplayConfig.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0011E60 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0011EC8 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C01A0570 (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?ConvertDmmToDisplayConfigScaling@@YA?AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C01B153C (-ConvertDmmToDisplayConfigScaling@@YA-AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 *     DMMVideoSignalInfoToDisplayConfigVideoSignalInfo @ 0x1C01B2BF0 (DMMVideoSignalInfoToDisplayConfigVideoSignalInfo.c)
 *     ?ConvertDmmToDisplayConfigColorEncoding@@YA?AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C01E3A50 (-ConvertDmmToDisplayConfigColorEncoding@@YA-AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FOR.c)
 */

__int64 __fastcall ConvertPathModalityToDisplayConfig(
        struct D3DKMT_GETPATHSMODALITY *a1,
        char a2,
        char a3,
        struct QDC_CONTEXT *a4)
{
  __int64 *v4; // rdi
  struct QDC_CONTEXT *v5; // r14
  __int64 v8; // rbp
  unsigned int v9; // eax
  __int64 v10; // rcx
  char v11; // r15
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v12; // rdx
  bool v13; // al
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned int v17; // r13d
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r10
  __int64 v31; // rax
  __int64 v32; // r10
  __int64 v33; // rcx
  int v34; // eax
  int v35; // edx
  int v36; // eax
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  int v40; // eax

  v4 = (__int64 *)*((_QWORD *)a4 + 1);
  v5 = a4;
  v8 = 1LL;
  v9 = *((_DWORD *)a4 + 1);
  if ( a3 )
  {
    if ( v9 )
      goto LABEL_3;
LABEL_61:
    WdLogSingleEntry2(3LL, v9, v8);
    return 3221225507LL;
  }
  v10 = *((unsigned __int16 *)a1 + 10);
  if ( v9 < (unsigned int)v10 )
  {
    v8 = v10;
    goto LABEL_61;
  }
LABEL_3:
  v11 = 0;
  if ( !*((_WORD *)a1 + 10) )
    goto LABEL_55;
  v12 = (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)((char *)a1 + 144);
  do
  {
    v13 = IsInternalVideoOutput(*v12);
    v12 = (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v16 + 296);
    if ( v13 )
      v11 = 1;
  }
  while ( v14 != 1 );
  v17 = v15;
  v18 = 0x100000000000LL;
  do
  {
    v19 = 296LL * v17;
    if ( a3 )
    {
      if ( v11 )
      {
        if ( !IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)((char *)a1 + v19 + 144)) )
          goto LABEL_53;
      }
    }
    *v4 = v15;
    v20 = v15;
    v4[1] = v15;
    v21 = *(_QWORD *)((char *)a1 + v19 + 56);
    if ( (v21 & v18) == 0 )
    {
      WdLogSingleEntry1(1LL, 1075LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pCurrentPathModality->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_ADAPTER_VALID",
        1075LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v21 = *(_QWORD *)((char *)a1 + v19 + 56);
      v18 = 0x100000000000LL;
      v20 = *v4;
    }
    v22 = v20 | v18 & v21;
    *v4 = v22;
    v4[2] = *(_QWORD *)((char *)a1 + v19 + 72);
    v23 = *(_QWORD *)((char *)a1 + v19 + 56);
    if ( (v23 & 0x200000000000LL) == 0 )
    {
      WdLogSingleEntry1(1LL, 1079LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pCurrentPathModality->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_SOURCEID_VALID",
        1079LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v23 = *(_QWORD *)((char *)a1 + v19 + 56);
      v22 = *v4;
    }
    v24 = v22 | v23 & 0x200000000000LL;
    *v4 = v24;
    *((_DWORD *)v4 + 6) = *(_DWORD *)((char *)a1 + v19 + 80);
    v25 = v24 | *(_QWORD *)((_BYTE *)a1 + v19 + 56) & 0x4000000000000000LL;
    *v4 = v25;
    v26 = *(_QWORD *)((char *)a1 + v19 + 56);
    if ( (v26 & 0x400000000000LL) == 0 )
    {
      WdLogSingleEntry1(1LL, 1085LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pCurrentPathModality->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_TARGETID_VALID",
        1085LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v26 = *(_QWORD *)((char *)a1 + v19 + 56);
      v25 = *v4;
    }
    v27 = v25 | v26 & 0x400000000000LL;
    *v4 = v27;
    *((_DWORD *)v4 + 7) = *(_DWORD *)((char *)a1 + v19 + 84);
    v28 = *(_QWORD *)((char *)a1 + v19 + 56);
    if ( (v28 & 0x800000000000LL) == 0 )
    {
      WdLogSingleEntry1(1LL, 1089LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pCurrentPathModality->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_TARGET_OUTPUT_TECH_VALID",
        1089LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v28 = *(_QWORD *)((char *)a1 + v19 + 56);
      v27 = *v4;
    }
    v29 = v27 | v28 & 0x800000000000LL;
    *v4 = v29;
    *((_DWORD *)v4 + 20) = *(_DWORD *)((char *)a1 + v19 + 144);
    *((_DWORD *)v4 + 21) = *(_DWORD *)((char *)a1 + v19 + 148);
    *((_DWORD *)v4 + 47) = *(_DWORD *)((char *)a1 + v19 + 268);
    v30 = *(_QWORD *)((char *)a1 + v19 + 56);
    if ( (v30 & 0x4000000000000LL) != 0 )
    {
      v31 = v29 | *(_QWORD *)((_BYTE *)a1 + v19 + 56) & 0x4000000000000LL;
      *v4 = v31;
      v29 = v31;
      *((_DWORD *)v4 + 39) = *(_DWORD *)((char *)a1 + v19 + 240);
      v4[21] = *(_QWORD *)((char *)a1 + v19 + 252);
      v30 = *(_QWORD *)((char *)a1 + v19 + 56);
    }
    if ( (v30 & 0x8000000000000LL) == 0 )
    {
      WdLogSingleEntry1(1LL, 1102LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pCurrentPathModality->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_VIRTUAL_MODE_SUPPORT_VALID",
        1102LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v30 = *(_QWORD *)((char *)a1 + v19 + 56);
      v29 = *v4;
    }
    v32 = v29 | v30 & 0x8000000000000LL;
    *v4 = v32;
    *((_BYTE *)v4 + 101) = *((_BYTE *)a1 + v19 + 185);
    v33 = *(_QWORD *)((char *)a1 + v19 + 56);
    if ( (v33 & 0x87) != 0 )
    {
      *v4 = v32 | *(_QWORD *)((_BYTE *)a1 + v19 + 56) & 0x87LL;
      DMMVideoSignalInfoToDisplayConfigVideoSignalInfo((char *)a1 + v19 + 88, v4 + 4);
      v33 = *(_QWORD *)((char *)a1 + v19 + 56);
      v32 = *v4;
    }
    if ( (v33 & 0x1000000) != 0 )
    {
      v32 |= 0x1000000uLL;
      *v4 = v32;
      *((_DWORD *)v4 + 49) = *(_DWORD *)((char *)a1 + v19 + 280);
      *((_DWORD *)v4 + 50) = *(_DWORD *)((char *)a1 + v19 + 284);
      *((_DWORD *)v4 + 53) = *(_DWORD *)((char *)a1 + v19 + 296);
      v33 = *(_QWORD *)((char *)a1 + v19 + 56);
    }
    if ( (v33 & 0x800000000LL) != 0 )
    {
      v32 |= 0x800000000uLL;
      *v4 = v32;
      *((_DWORD *)v4 + 51) = *(_DWORD *)((char *)a1 + v19 + 288);
      *((_DWORD *)v4 + 52) = *(_DWORD *)((char *)a1 + v19 + 292);
      v33 = *(_QWORD *)((char *)a1 + v19 + 56);
    }
    if ( (v33 & 0x200) != 0 )
    {
      *v4 = v32 | 0x200;
      v34 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(_DWORD *)((char *)a1 + v19 + 188));
      v35 = 1;
      if ( (unsigned int)(v34 - 1) <= 3 )
        v35 = v34;
      *((_DWORD *)v4 + 26) = v35;
      v33 = *(_QWORD *)((char *)a1 + v19 + 56);
    }
    if ( (v33 & 0x10000) != 0 )
    {
      *v4 = v32 | 0x10000;
      v40 = ConvertDmmToDisplayConfigScaling(*(unsigned int *)((char *)a1 + v19 + 196));
      v32 = *v4;
      *((_DWORD *)v4 + 28) = v40;
      v33 = *(_QWORD *)((char *)a1 + v19 + 56);
    }
    if ( (v33 & 0x40000000000LL) != 0 )
    {
      *v4 = v32 | 0x40000000000LL;
      v36 = ConvertDmmToDisplayConfigScaling(*(unsigned int *)((char *)a1 + v19 + 192));
      v32 = *v4;
      *((_DWORD *)v4 + 27) = v36;
      v33 = *(_QWORD *)((char *)a1 + v19 + 56);
    }
    if ( (v33 & 0x800) != 0 )
    {
      v32 |= 0x800uLL;
      *v4 = v32;
      *(__int64 *)((char *)v4 + 116) = *(_QWORD *)((char *)a1 + v19 + 200);
      v33 = *(_QWORD *)((char *)a1 + v19 + 56);
    }
    if ( (v33 & 0x1000000000000LL) != 0 )
    {
      v32 |= 0x1000000000000uLL;
      *v4 = v32;
      *((_DWORD *)v4 + 48) = *(_DWORD *)((char *)a1 + v19 + 272);
      v33 = *(_QWORD *)((char *)a1 + v19 + 56);
    }
    v15 = 0LL;
    v37 = v32 | v33 & 0xBF00001000000000uLL;
    *v4 = v37;
    if ( a2 || (v38 = *(_QWORD *)((char *)a1 + v19 + 56), v38 < 0) )
    {
      v37 |= 0x8000000000000000uLL;
      *v4 = v37;
      v38 = *(_QWORD *)((char *)a1 + v19 + 56);
    }
    if ( (v38 & 0x20000) != 0 )
    {
      v37 |= 0x20000uLL;
      *v4 = v37;
      *(__int64 *)((char *)v4 + 124) = *(_QWORD *)((char *)a1 + v19 + 208);
      v38 = *(_QWORD *)((char *)a1 + v19 + 56);
    }
    if ( (v38 & 0x100) != 0 )
    {
      v37 |= 0x100uLL;
      *v4 = v37;
      *((_DWORD *)v4 + 22) = *(_DWORD *)((char *)a1 + v19 + 152);
      *((_DWORD *)v4 + 23) = *(_DWORD *)((char *)a1 + v19 + 156);
      *((_DWORD *)v4 + 24) = *(_DWORD *)((char *)a1 + v19 + 172);
      *((_BYTE *)v4 + 100) = *((_BYTE *)a1 + v19 + 184);
      v38 = *(_QWORD *)((char *)a1 + v19 + 56);
    }
    if ( (v38 & 0x800000) != 0 )
    {
      v37 |= 0x800000uLL;
      *v4 = v37;
      *(_OWORD *)((char *)v4 + 140) = *(_OWORD *)((char *)a1 + v19 + 224);
      v38 = *(_QWORD *)((char *)a1 + v19 + 56);
    }
    if ( (v38 & 8) != 0 )
    {
      *v4 = v37 | 8;
      *((_DWORD *)v4 + 45) = GetColorDepthFromPickedWireFormat(*(union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)((char *)a1 + v19 + 260));
      *((_DWORD *)v4 + 44) = ConvertDmmToDisplayConfigColorEncoding(*(unsigned int *)((char *)a1 + v19 + 260));
      v15 = 0LL;
      *((_DWORD *)v4 + 46) = *(_DWORD *)((char *)a1 + v19 + 264);
    }
    *((_DWORD *)v4 + 40) = *(_DWORD *)((char *)a1 + v19 + 244);
    *((_DWORD *)v4 + 41) = *(_DWORD *)((char *)a1 + v19 + 248);
    v4 += 27;
    if ( a3 )
      break;
    v18 = 0x100000000000LL;
LABEL_53:
    ++v17;
  }
  while ( v17 < *((unsigned __int16 *)a1 + 10) );
  v5 = a4;
LABEL_55:
  *((_QWORD *)v5 + 2) = v4;
  return 0LL;
}
