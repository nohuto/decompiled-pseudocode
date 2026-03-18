/*
 * XREFs of ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N1PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C0144420
 * Callers:
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C014497C (-ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPAT.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C01470F8 (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C01476AC (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 * Callees:
 *     ?ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEA_N@Z @ 0x1C01448FC (-ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAU.c)
 *     ?ConvertDisplayConfigWireFormatToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0144A38 (-ConvertDisplayConfigWireFormatToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@P.c)
 *     ?GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C0146C08 (-GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  char *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  int TargetVirtualization; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int8 v25; // r10
  __int64 v26; // rdx
  unsigned __int8 v27; // r9
  int v28; // r8d
  __int64 v29; // rcx
  __int64 v30; // rdx
  bool v31; // al
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // eax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // esi
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // ebx
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // rdx
  unsigned __int8 v48; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int8 v49[15]; // [rsp+41h] [rbp-27h] BYREF

  v7 = gpGraphicsDeviceList;
  v9 = (unsigned int)a3;
  v49[0] = 0;
  v48 = 0;
  while ( 1 )
  {
    if ( !v7 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2, a3);
      v11[3] = *((int *)a1 + 5);
      v13 = *((unsigned int *)a1 + 4);
      v11[5] = v9;
LABEL_8:
      v11[4] = v13;
LABEL_9:
      WdLogEvent5_WdError(v11, v12);
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
  v15 = (char *)a6 + 272 * (unsigned int)a2;
  *((_QWORD *)v15 + 6) = *(_QWORD *)a1;
  *((_QWORD *)v15 + 7) = *((_QWORD *)a1 + 1);
  v16 = *(_QWORD *)a1;
  if ( (*(_QWORD *)a1 & 0x8004700000000000uLL) != 0x8004700000000000uLL || (v16 & 0x7FD30E6FFF7CF070LL) != 0 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(0x8004700000000000uLL, v16, a3);
    v11[3] = *(_QWORD *)a1;
    goto LABEL_9;
  }
  v17 = *((_QWORD *)a1 + 1);
  if ( (v17 & 0xFFFFFE7FFF7DF470uLL) != 0 || (v16 & v17) != v17 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16, a3);
    v11[3] = *(_QWORD *)a1;
    v13 = *((_QWORD *)a1 + 1);
    goto LABEL_8;
  }
  TargetVirtualization = GetTargetVirtualization(
                           *(struct _LUID *)((char *)a1 + 16),
                           *((_DWORD *)a1 + 7),
                           v49,
                           &v48,
                           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v15 + 34,
                           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v15 + 35,
                           (enum _D3DKMT_DISPLAY_TARGET_USAGE *)(v15 + 260));
  v22 = TargetVirtualization;
  if ( TargetVirtualization < 0 )
  {
    v23 = WdLogNewEntry5_WdError(v20, v19, v21);
    *(_QWORD *)(v23 + 24) = v22;
    WdLogEvent5_WdError(v23, v24);
    return (unsigned int)v22;
  }
  v25 = v48;
  v26 = *((_QWORD *)v15 + 6) | 0x800000000000LL;
  v27 = v49[0];
  v28 = 2;
  *((_QWORD *)v15 + 6) = v26;
  *((_QWORD *)v15 + 8) = *((_QWORD *)v7 + 31);
  *((_DWORD *)v15 + 18) = *((_DWORD *)a1 + 6);
  *((_DWORD *)v15 + 19) = *((_DWORD *)a1 + 7);
  *((_DWORD *)v15 + 58) = *((_DWORD *)a1 + 39);
  v29 = 0x8000000000000LL;
  v30 = v26 | 0x8000000000000LL;
  v15[177] = (v25 == 0 ? 2 : 0) | (v27 == 0);
  *((_QWORD *)v15 + 6) = v30;
  if ( a5 )
  {
    *((_DWORD *)v15 + 70) |= 0x80u;
    v31 = !v25 && v27;
    v15[312] = v31;
  }
  if ( (*(_QWORD *)a1 & 0x8000000000000LL) != 0 && v15[177] != *((_BYTE *)a1 + 101) )
    goto LABEL_25;
  *((_QWORD *)v15 + 34) = 0LL;
  if ( (*(_BYTE *)a1 & 0x87) != 0 )
  {
    *((_DWORD *)v15 + 20) = (unsigned __int16)*((_DWORD *)a1 + 18);
    *((_DWORD *)v15 + 21) = *((_DWORD *)a1 + 16);
    *((_DWORD *)v15 + 22) = *((_DWORD *)a1 + 17);
    *((_DWORD *)v15 + 23) = *((_DWORD *)a1 + 14);
    *((_DWORD *)v15 + 24) = *((_DWORD *)a1 + 15);
    *((_DWORD *)v15 + 25) = *((_DWORD *)a1 + 12);
    *((_DWORD *)v15 + 26) = *((_DWORD *)a1 + 13);
    *((_DWORD *)v15 + 27) = *((_DWORD *)a1 + 10);
    *((_DWORD *)v15 + 28) = *((_DWORD *)a1 + 11);
    *((_QWORD *)v15 + 15) = *((_QWORD *)a1 + 4);
    *((_DWORD *)v15 + 32) ^= (*((_DWORD *)v15 + 32) ^ *((_DWORD *)a1 + 19)) & 7;
    *((_DWORD *)v15 + 32) = *((_DWORD *)v15 + 32) & 7 | (*((_DWORD *)a1 + 18) >> 13) & 0x1F8;
  }
  v29 = v30;
  if ( (v30 & 2) != 0 && !*((_DWORD *)v15 + 26) )
  {
LABEL_25:
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v29, v30, 2LL);
    v11[3] = v9;
    goto LABEL_9;
  }
  v32 = *(_QWORD *)a1;
  if ( (*(_QWORD *)a1 & 0x20000LL) != 0 )
  {
    *((_QWORD *)v15 + 25) = *(_QWORD *)((char *)a1 + 124);
    if ( !a4 || v27 && v25 )
      v33 = 0LL;
    else
      v33 = 0x20000000000000LL;
    v29 = v33 | v30;
    *((_QWORD *)v15 + 6) = v33 | v30;
    v32 = *(_QWORD *)a1;
  }
  if ( (v32 & 0x800) != 0 )
  {
    *((_QWORD *)v15 + 24) = *(_QWORD *)((char *)a1 + 116);
    v32 = *(_QWORD *)a1;
  }
  if ( (v32 & 0x100) != 0 )
  {
    *((_DWORD *)v15 + 36) = *((_DWORD *)a1 + 22);
    *((_DWORD *)v15 + 37) = *((_DWORD *)a1 + 23);
    *((_DWORD *)v15 + 38) = *((_DWORD *)a1 + 22);
    *((_DWORD *)v15 + 39) = *((_DWORD *)a1 + 23);
    v34 = *((_DWORD *)a1 + 24);
    *((_DWORD *)v15 + 42) = 0;
    *((_DWORD *)v15 + 43) = 0;
    *((_DWORD *)v15 + 41) = v34;
    v29 |= 0x100uLL;
    LOBYTE(v34) = *((_BYTE *)a1 + 100);
    *((_QWORD *)v15 + 6) = v29;
    v15[176] = v34;
    v32 = *(_QWORD *)a1;
  }
  if ( (v32 & 0x8000000000LL) != 0 )
  {
    v35 = *((_DWORD *)a1 + 24);
    v29 |= 0x8000000000uLL;
    *((_QWORD *)v15 + 6) = v29;
    *((_DWORD *)v15 + 41) = v35;
    v32 = *(_QWORD *)a1;
  }
  if ( (v32 & 0x10000000000LL) != 0 )
  {
    v15[176] = *((_BYTE *)a1 + 100);
    *((_QWORD *)v15 + 6) = v29 | 0x10000000000LL;
    v32 = *(_QWORD *)a1;
  }
  if ( (v32 & 0x800000) != 0 )
  {
    *(_OWORD *)(v15 + 216) = *(_OWORD *)((char *)a1 + 140);
    v32 = *(_QWORD *)a1;
  }
  if ( (v32 & 0x200) != 0 )
  {
    if ( *((_DWORD *)a1 + 26) == 1 )
    {
      v28 = 1;
    }
    else if ( *((_DWORD *)a1 + 26) != 2 )
    {
      if ( *((_DWORD *)a1 + 26) == 3 )
      {
        v28 = 3;
      }
      else if ( *((_DWORD *)a1 + 26) == 4 )
      {
        v28 = 4;
      }
      else
      {
        v28 = 0;
      }
    }
    *((_DWORD *)v15 + 45) = v28;
  }
  v38 = ConvertDisplayConfigScalingToPathModalityForPath(a1, (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v15 + 48), a7);
  if ( v38 >= 0 )
  {
    *((_DWORD *)v15 + 60) = 0;
    if ( (*(_BYTE *)a1 & 8) != 0
      && (v44 = ConvertDisplayConfigWireFormatToPathModalityForPath(
                  a1,
                  (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v15 + 48)),
          v44 < 0) )
    {
      v46 = WdLogNewEntry5_WdError(v43, v42, v45);
      *(_QWORD *)(v46 + 24) = v9;
      WdLogEvent5_WdError(v46, v47);
      return (unsigned int)v44;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    v40 = WdLogNewEntry5_WdError(v37, v36, v39);
    *(_QWORD *)(v40 + 24) = v9;
    WdLogEvent5_WdError(v40, v41);
    return (unsigned int)v38;
  }
}
