/*
 * XREFs of ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z @ 0x1C0133828
 * Callers:
 *     ?GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C0133708 (-GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C0294314 (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 *     DxgkConvertPathsModalityToDisplayConfig @ 0x1C0296690 (DxgkConvertPathsModalityToDisplayConfig.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A4FC (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000A564 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?ConvertDmmToDisplayConfigScaling@@YA?AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0133F8C (-ConvertDmmToDisplayConfigScaling@@YA-AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 *     DMMVideoSignalInfoToDisplayConfigVideoSignalInfo @ 0x1C013521C (DMMVideoSignalInfoToDisplayConfigVideoSignalInfo.c)
 *     ?ConvertDmmToDisplayConfigColorEncoding@@YA?AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C013640C (-ConvertDmmToDisplayConfigColorEncoding@@YA-AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FOR.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C0136458 (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 */

__int64 __fastcall ConvertPathModalityToDisplayConfig(
        struct D3DKMT_GETPATHSMODALITY *a1,
        __int64 a2,
        __int64 a3,
        struct _QDC_CONTEXT *a4)
{
  __int64 *v4; // rdi
  __int64 v5; // r10
  struct _QDC_CONTEXT *v6; // r14
  char v7; // r12
  __int64 v9; // rbp
  __int64 v10; // rdx
  char v11; // r15
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v12; // r8
  bool v13; // al
  __int64 v14; // r9
  __int64 v15; // r8
  unsigned int v16; // r13d
  __int64 v17; // r8
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r10
  __int64 v30; // rax
  __int64 v31; // r10
  __int64 v32; // rcx
  int v33; // eax
  int v34; // edx
  int v35; // eax
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  int v39; // eax
  __int64 v40; // rax
  bool v41; // al
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  char v47; // [rsp+68h] [rbp+10h]

  v47 = a2;
  v4 = (__int64 *)*((_QWORD *)a4 + 1);
  v5 = 0LL;
  v6 = a4;
  v7 = a3;
  v9 = 1LL;
  if ( (_BYTE)a3 )
  {
    if ( *((_DWORD *)a4 + 1) )
      goto LABEL_3;
LABEL_57:
    v40 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v40 + 24) = *((unsigned int *)v6 + 1);
    if ( !v7 )
      v9 = *((unsigned __int16 *)a1 + 10);
    *(_QWORD *)(v40 + 32) = v9;
    WdLogEvent5_WdWarning(v40);
    return 3221225507LL;
  }
  if ( *((_DWORD *)a4 + 1) < (unsigned int)*((unsigned __int16 *)a1 + 10) )
    goto LABEL_57;
LABEL_3:
  v10 = *((unsigned __int16 *)a1 + 10);
  v11 = 0;
  if ( (_WORD)v10 )
  {
    v12 = (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)((char *)a1 + 136);
    do
    {
      v13 = IsInternalVideoOutput(*v12);
      v12 = (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v15 + 272);
      if ( v13 )
        v11 = 1;
    }
    while ( v14 != 1 );
  }
  v16 = v5;
  if ( (unsigned __int16)v5 < (unsigned __int16)v10 )
  {
    v17 = 0x100000000000LL;
    while ( 1 )
    {
      v18 = 272LL * v16;
      if ( !v7
        || !v11
        || (v41 = IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)((char *)a1 + v18 + 136))) )
      {
        *v4 = v5;
        v19 = v5;
        v4[1] = v5;
        v20 = *(_QWORD *)((char *)a1 + v18 + 48);
        if ( (v20 & v17) == 0 )
        {
          v42 = WdLogNewEntry5_WdAssertion(v20, v10);
          *(_QWORD *)(v42 + 24) = 1076LL;
          WdLogEvent5_WdAssertion(v42);
          v20 = *(_QWORD *)((char *)a1 + v18 + 48);
          v17 = 0x100000000000LL;
          v19 = *v4;
        }
        v21 = v19 | v17 & v20;
        *v4 = v21;
        v4[2] = *(_QWORD *)((char *)a1 + v18 + 64);
        v22 = *(_QWORD *)((char *)a1 + v18 + 48);
        if ( (v22 & 0x200000000000LL) == 0 )
        {
          v43 = WdLogNewEntry5_WdAssertion(v21, v22);
          *(_QWORD *)(v43 + 24) = 1080LL;
          WdLogEvent5_WdAssertion(v43);
          v22 = *(_QWORD *)((char *)a1 + v18 + 48);
          v21 = *v4;
        }
        v23 = v21 | v22 & 0x200000000000LL;
        *v4 = v23;
        *((_DWORD *)v4 + 6) = *(_DWORD *)((char *)a1 + v18 + 72);
        v24 = v23 | *(_QWORD *)((_BYTE *)a1 + v18 + 48) & 0x4000000000000000LL;
        *v4 = v24;
        v25 = *(_QWORD *)((char *)a1 + v18 + 48);
        if ( (v25 & 0x400000000000LL) == 0 )
        {
          v44 = WdLogNewEntry5_WdAssertion(0x400000000000LL, v25);
          *(_QWORD *)(v44 + 24) = 1086LL;
          WdLogEvent5_WdAssertion(v44);
          v25 = *(_QWORD *)((char *)a1 + v18 + 48);
          v24 = *v4;
        }
        v26 = v24 | v25 & 0x400000000000LL;
        *v4 = v26;
        *((_DWORD *)v4 + 7) = *(_DWORD *)((char *)a1 + v18 + 76);
        v27 = *(_QWORD *)((char *)a1 + v18 + 48);
        if ( (v27 & 0x800000000000LL) == 0 )
        {
          v45 = WdLogNewEntry5_WdAssertion(v27, v26);
          *(_QWORD *)(v45 + 24) = 1090LL;
          WdLogEvent5_WdAssertion(v45);
          v27 = *(_QWORD *)((char *)a1 + v18 + 48);
          v26 = *v4;
        }
        v28 = v26 | v27 & 0x800000000000LL;
        *v4 = v28;
        *((_DWORD *)v4 + 20) = *(_DWORD *)((char *)a1 + v18 + 136);
        *((_DWORD *)v4 + 21) = *(_DWORD *)((char *)a1 + v18 + 140);
        *((_DWORD *)v4 + 47) = *(_DWORD *)((char *)a1 + v18 + 260);
        v29 = *(_QWORD *)((char *)a1 + v18 + 48);
        if ( (v29 & 0x4000000000000LL) != 0 )
        {
          v30 = v28 | *(_QWORD *)((_BYTE *)a1 + v18 + 48) & 0x4000000000000LL;
          *v4 = v30;
          v28 = v30;
          *((_DWORD *)v4 + 39) = *(_DWORD *)((char *)a1 + v18 + 232);
          v4[21] = *(_QWORD *)((char *)a1 + v18 + 244);
          v29 = *(_QWORD *)((char *)a1 + v18 + 48);
        }
        if ( (v29 & 0x8000000000000LL) == 0 )
        {
          v46 = WdLogNewEntry5_WdAssertion(v28, 0x4000000000000LL);
          *(_QWORD *)(v46 + 24) = 1103LL;
          WdLogEvent5_WdAssertion(v46);
          v29 = *(_QWORD *)((char *)a1 + v18 + 48);
          v28 = *v4;
        }
        v31 = v28 | v29 & 0x8000000000000LL;
        *v4 = v31;
        *((_BYTE *)v4 + 101) = *((_BYTE *)a1 + v18 + 177);
        v32 = *(_QWORD *)((char *)a1 + v18 + 48);
        if ( (v32 & 0x87) != 0 )
        {
          *v4 = v31 | *(_QWORD *)((_BYTE *)a1 + v18 + 48) & 0x87LL;
          DMMVideoSignalInfoToDisplayConfigVideoSignalInfo((char *)a1 + v18 + 80, v4 + 4);
          v32 = *(_QWORD *)((char *)a1 + v18 + 48);
          v31 = *v4;
        }
        if ( (v32 & 0x200) != 0 )
        {
          *v4 = v31 | 0x200;
          v33 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(_DWORD *)((char *)a1 + v18 + 180));
          v34 = 1;
          if ( (unsigned int)(v33 - 1) <= 3 )
            v34 = v33;
          *((_DWORD *)v4 + 26) = v34;
          v32 = *(_QWORD *)((char *)a1 + v18 + 48);
        }
        if ( (v32 & 0x10000) != 0 )
        {
          *v4 = v31 | 0x10000;
          v39 = ConvertDmmToDisplayConfigScaling(*(unsigned int *)((char *)a1 + v18 + 188));
          v31 = *v4;
          *((_DWORD *)v4 + 28) = v39;
          v32 = *(_QWORD *)((char *)a1 + v18 + 48);
        }
        if ( (v32 & 0x40000000000LL) != 0 )
        {
          *v4 = v31 | 0x40000000000LL;
          v35 = ConvertDmmToDisplayConfigScaling(*(unsigned int *)((char *)a1 + v18 + 184));
          v31 = *v4;
          *((_DWORD *)v4 + 27) = v35;
          v32 = *(_QWORD *)((char *)a1 + v18 + 48);
        }
        if ( (v32 & 0x800) != 0 )
        {
          v31 |= 0x800uLL;
          *v4 = v31;
          *(__int64 *)((char *)v4 + 116) = *(_QWORD *)((char *)a1 + v18 + 192);
          v32 = *(_QWORD *)((char *)a1 + v18 + 48);
        }
        v10 = 0x1000000000000LL;
        if ( (v32 & 0x1000000000000LL) != 0 )
        {
          v31 |= 0x1000000000000uLL;
          *v4 = v31;
          *((_DWORD *)v4 + 48) = *(_DWORD *)((char *)a1 + v18 + 264);
          v32 = *(_QWORD *)((char *)a1 + v18 + 48);
        }
        v36 = v31 | v32 & 0xBF00001000000000uLL;
        v5 = 0LL;
        *v4 = v36;
        if ( v47 || *(__int64 *)((char *)a1 + v18 + 48) < 0 )
        {
          v36 |= 0x8000000000000000uLL;
          *v4 = v36;
        }
        v37 = *(_QWORD *)((char *)a1 + v18 + 48);
        if ( (v37 & 0x20000) != 0 )
        {
          v36 |= 0x20000uLL;
          *v4 = v36;
          *(__int64 *)((char *)v4 + 124) = *(_QWORD *)((char *)a1 + v18 + 200);
          v37 = *(_QWORD *)((char *)a1 + v18 + 48);
        }
        if ( (v37 & 0x100) != 0 )
        {
          v36 |= 0x100uLL;
          *v4 = v36;
          *((_DWORD *)v4 + 22) = *(_DWORD *)((char *)a1 + v18 + 144);
          *((_DWORD *)v4 + 23) = *(_DWORD *)((char *)a1 + v18 + 148);
          *((_DWORD *)v4 + 24) = *(_DWORD *)((char *)a1 + v18 + 164);
          *((_BYTE *)v4 + 100) = *((_BYTE *)a1 + v18 + 176);
          v37 = *(_QWORD *)((char *)a1 + v18 + 48);
        }
        if ( (v37 & 0x800000) != 0 )
        {
          v36 |= 0x800000uLL;
          *v4 = v36;
          *(_OWORD *)((char *)v4 + 140) = *(_OWORD *)((char *)a1 + v18 + 216);
          v37 = *(_QWORD *)((char *)a1 + v18 + 48);
        }
        if ( (v37 & 8) != 0 )
        {
          *v4 = v36 | 8;
          *((_DWORD *)v4 + 45) = GetColorDepthFromPickedWireFormat(*(union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)((char *)a1 + v18 + 252));
          *((_DWORD *)v4 + 44) = ConvertDmmToDisplayConfigColorEncoding(*(unsigned int *)((char *)a1 + v18 + 252));
          v5 = 0LL;
          *((_DWORD *)v4 + 46) = *(_DWORD *)((char *)a1 + v18 + 256);
        }
        *((_DWORD *)v4 + 40) = *(_DWORD *)((char *)a1 + v18 + 236);
        *((_DWORD *)v4 + 41) = *(_DWORD *)((char *)a1 + v18 + 240);
        v4 += 25;
        if ( v7 )
        {
LABEL_51:
          v6 = a4;
          break;
        }
        v17 = 0x100000000000LL;
      }
      if ( ++v16 >= *((unsigned __int16 *)a1 + 10) )
        goto LABEL_51;
    }
  }
  *((_QWORD *)v6 + 2) = v4;
  return 0LL;
}
