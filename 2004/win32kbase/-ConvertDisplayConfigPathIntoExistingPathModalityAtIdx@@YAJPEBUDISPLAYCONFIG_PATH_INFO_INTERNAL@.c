/*
 * XREFs of ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N1PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C01468F0
 * Callers:
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C0146E4C (-ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPAT.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C01495C8 (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0149B7C (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 * Callees:
 *     ?ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEA_N@Z @ 0x1C0146DCC (-ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAU.c)
 *     ?ConvertDisplayConfigWireFormatToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0146F08 (-ConvertDisplayConfigWireFormatToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@P.c)
 *     ?GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C01490D8 (-GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_.c)
 */

__int64 __fastcall ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        bool a5,
        struct D3DKMT_GETPATHSMODALITY *a6,
        bool *a7)
{
  wchar_t *v7; // rsi
  __int64 v9; // rbp
  _QWORD *v11; // rax
  __int64 v12; // rcx
  char *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  int TargetVirtualization; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r14
  __int64 v22; // rax
  unsigned __int8 v23; // r10
  __int64 v24; // rdx
  unsigned __int8 v25; // r9
  int v26; // r8d
  __int64 v27; // rcx
  __int64 v28; // rdx
  bool v29; // al
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // eax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // esi
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // ebx
  __int64 v42; // r8
  __int64 v43; // rax
  unsigned __int8 v44; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int8 v45[15]; // [rsp+41h] [rbp-27h] BYREF

  v7 = gpGraphicsDeviceList;
  v9 = (unsigned int)a3;
  v45[0] = 0;
  v44 = 0;
  while ( 1 )
  {
    if ( !v7 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2, a3);
      v11[3] = *((int *)a1 + 5);
      v12 = *((unsigned int *)a1 + 4);
      v11[5] = v9;
LABEL_8:
      v11[4] = v12;
LABEL_9:
      WdLogEvent5_WdError(v11);
      return 3221225485LL;
    }
    if ( (*((_DWORD *)v7 + 40) & 0x800000) != 0
      && *((_DWORD *)v7 + 62) == *((_DWORD *)a1 + 4)
      && *((_DWORD *)v7 + 63) == *((_DWORD *)a1 + 5) )
    {
      break;
    }
    v7 = (wchar_t *)*((_QWORD *)v7 + 16);
  }
  v14 = (char *)a6 + 272 * (unsigned int)a2;
  *((_QWORD *)v14 + 6) = *(_QWORD *)a1;
  *((_QWORD *)v14 + 7) = *((_QWORD *)a1 + 1);
  v15 = *(_QWORD *)a1;
  if ( (*(_QWORD *)a1 & 0x8004700000000000uLL) != 0x8004700000000000uLL || (v15 & 0x7FD30E6FFF7CF070LL) != 0 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(0x8004700000000000uLL, v15, a3);
    v11[3] = *(_QWORD *)a1;
    goto LABEL_9;
  }
  v16 = *((_QWORD *)a1 + 1);
  if ( (v16 & 0xFFFFFE7FFF7DF470uLL) != 0 || (v15 & v16) != v16 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15, a3);
    v11[3] = *(_QWORD *)a1;
    v12 = *((_QWORD *)a1 + 1);
    goto LABEL_8;
  }
  TargetVirtualization = GetTargetVirtualization(
                           *(struct _LUID *)((char *)a1 + 16),
                           *((_DWORD *)a1 + 7),
                           v45,
                           &v44,
                           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v14 + 34,
                           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v14 + 35,
                           (enum _D3DKMT_DISPLAY_TARGET_USAGE *)(v14 + 260));
  v21 = TargetVirtualization;
  if ( TargetVirtualization < 0 )
  {
    v22 = WdLogNewEntry5_WdError(v19, v18, v20);
    *(_QWORD *)(v22 + 24) = v21;
    WdLogEvent5_WdError(v22);
    return (unsigned int)v21;
  }
  v23 = v44;
  v24 = *((_QWORD *)v14 + 6) | 0x800000000000LL;
  v25 = v45[0];
  v26 = 2;
  *((_QWORD *)v14 + 6) = v24;
  *((_QWORD *)v14 + 8) = *((_QWORD *)v7 + 31);
  *((_DWORD *)v14 + 18) = *((_DWORD *)a1 + 6);
  *((_DWORD *)v14 + 19) = *((_DWORD *)a1 + 7);
  *((_DWORD *)v14 + 58) = *((_DWORD *)a1 + 39);
  v27 = 0x8000000000000LL;
  v28 = v24 | 0x8000000000000LL;
  v14[177] = (v23 == 0 ? 2 : 0) | (v25 == 0);
  *((_QWORD *)v14 + 6) = v28;
  if ( a5 )
  {
    *((_DWORD *)v14 + 70) |= 0x80u;
    v29 = !v23 && v25;
    v14[312] = v29;
  }
  if ( (*(_QWORD *)a1 & 0x8000000000000LL) != 0 && v14[177] != *((_BYTE *)a1 + 101) )
    goto LABEL_25;
  *((_QWORD *)v14 + 34) = 0LL;
  if ( (*(_BYTE *)a1 & 0x87) != 0 )
  {
    *((_DWORD *)v14 + 20) = (unsigned __int16)*((_DWORD *)a1 + 18);
    *((_DWORD *)v14 + 21) = *((_DWORD *)a1 + 16);
    *((_DWORD *)v14 + 22) = *((_DWORD *)a1 + 17);
    *((_DWORD *)v14 + 23) = *((_DWORD *)a1 + 14);
    *((_DWORD *)v14 + 24) = *((_DWORD *)a1 + 15);
    *((_DWORD *)v14 + 25) = *((_DWORD *)a1 + 12);
    *((_DWORD *)v14 + 26) = *((_DWORD *)a1 + 13);
    *((_DWORD *)v14 + 27) = *((_DWORD *)a1 + 10);
    *((_DWORD *)v14 + 28) = *((_DWORD *)a1 + 11);
    *((_QWORD *)v14 + 15) = *((_QWORD *)a1 + 4);
    *((_DWORD *)v14 + 32) ^= (*((_DWORD *)v14 + 32) ^ *((_DWORD *)a1 + 19)) & 7;
    *((_DWORD *)v14 + 32) = *((_DWORD *)v14 + 32) & 7 | (*((_DWORD *)a1 + 18) >> 13) & 0x1F8;
  }
  v27 = v28;
  if ( (v28 & 2) != 0 && !*((_DWORD *)v14 + 26) )
  {
LABEL_25:
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v27, v28, 2LL);
    v11[3] = v9;
    goto LABEL_9;
  }
  v30 = *(_QWORD *)a1;
  if ( (*(_QWORD *)a1 & 0x20000LL) != 0 )
  {
    *((_QWORD *)v14 + 25) = *(_QWORD *)((char *)a1 + 124);
    if ( !a4 || v25 && v23 )
      v31 = 0LL;
    else
      v31 = 0x20000000000000LL;
    v27 = v31 | v28;
    *((_QWORD *)v14 + 6) = v31 | v28;
    v30 = *(_QWORD *)a1;
  }
  if ( (v30 & 0x800) != 0 )
  {
    *((_QWORD *)v14 + 24) = *(_QWORD *)((char *)a1 + 116);
    v30 = *(_QWORD *)a1;
  }
  if ( (v30 & 0x100) != 0 )
  {
    *((_DWORD *)v14 + 36) = *((_DWORD *)a1 + 22);
    *((_DWORD *)v14 + 37) = *((_DWORD *)a1 + 23);
    *((_DWORD *)v14 + 38) = *((_DWORD *)a1 + 22);
    *((_DWORD *)v14 + 39) = *((_DWORD *)a1 + 23);
    v32 = *((_DWORD *)a1 + 24);
    *((_DWORD *)v14 + 42) = 0;
    *((_DWORD *)v14 + 43) = 0;
    *((_DWORD *)v14 + 41) = v32;
    v27 |= 0x100uLL;
    LOBYTE(v32) = *((_BYTE *)a1 + 100);
    *((_QWORD *)v14 + 6) = v27;
    v14[176] = v32;
    v30 = *(_QWORD *)a1;
  }
  if ( (v30 & 0x8000000000LL) != 0 )
  {
    v33 = *((_DWORD *)a1 + 24);
    v27 |= 0x8000000000uLL;
    *((_QWORD *)v14 + 6) = v27;
    *((_DWORD *)v14 + 41) = v33;
    v30 = *(_QWORD *)a1;
  }
  if ( (v30 & 0x10000000000LL) != 0 )
  {
    v14[176] = *((_BYTE *)a1 + 100);
    *((_QWORD *)v14 + 6) = v27 | 0x10000000000LL;
    v30 = *(_QWORD *)a1;
  }
  if ( (v30 & 0x800000) != 0 )
  {
    *(_OWORD *)(v14 + 216) = *(_OWORD *)((char *)a1 + 140);
    v30 = *(_QWORD *)a1;
  }
  if ( (v30 & 0x200) != 0 )
  {
    if ( *((_DWORD *)a1 + 26) == 1 )
    {
      v26 = 1;
    }
    else if ( *((_DWORD *)a1 + 26) != 2 )
    {
      if ( *((_DWORD *)a1 + 26) == 3 )
      {
        v26 = 3;
      }
      else if ( *((_DWORD *)a1 + 26) == 4 )
      {
        v26 = 4;
      }
      else
      {
        v26 = 0;
      }
    }
    *((_DWORD *)v14 + 45) = v26;
  }
  v36 = ConvertDisplayConfigScalingToPathModalityForPath(a1, (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v14 + 48), a7);
  if ( v36 >= 0 )
  {
    *((_DWORD *)v14 + 60) = 0;
    if ( (*(_BYTE *)a1 & 8) != 0
      && (v41 = ConvertDisplayConfigWireFormatToPathModalityForPath(
                  a1,
                  (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v14 + 48)),
          v41 < 0) )
    {
      v43 = WdLogNewEntry5_WdError(v40, v39, v42);
      *(_QWORD *)(v43 + 24) = v9;
      WdLogEvent5_WdError(v43);
      return (unsigned int)v41;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    v38 = WdLogNewEntry5_WdError(v35, v34, v37);
    *(_QWORD *)(v38 + 24) = v9;
    WdLogEvent5_WdError(v38);
    return (unsigned int)v36;
  }
}
