/*
 * XREFs of ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C014F918
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0098260 (DrvSetDisplayConfig.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C01513B4 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0098EEC (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x1C0098F20 (GetPathsModality.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C0098FE0 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     _SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14135::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14135 @ 0x1C014C9F8 (_SetDisplayConfigHandleBrokerProvidedPaths_--_2_--_AUTO_USING_PM_VirtualTopologyButNotVirtualMod.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N1PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C014CC40 (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 */

__int64 __fastcall SetDisplayConfigHandleBrokerProvidedPaths(
        __int64 a1,
        char a2,
        unsigned int a3,
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a4,
        struct D3DKMT_GETPATHSMODALITY **a5,
        bool *a6,
        enum _DXGK_DIAG_SDC_STAGE *a7)
{
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v7; // r13
  int PathsModality; // ebx
  struct D3DKMT_GETPATHSMODALITY *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // esi
  __int64 v16; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  char *v20; // rbx
  __int64 v21; // rcx
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  __int64 v24; // rcx
  __int64 v25; // rax
  struct D3DKMT_GETPATHSMODALITY *v26; // rax
  __int64 v27; // rax
  struct D3DKMT_GETPATHSMODALITY *v28; // r8
  __int64 v29; // rcx
  char *v30; // rax
  unsigned int v31; // r14d
  unsigned int v32; // edi
  unsigned int *v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  unsigned int v40; // r9d
  __int64 v41; // r10
  unsigned int v42; // r10d
  unsigned int v43; // r11d
  __int64 v44; // rax
  int v45; // ecx
  __int64 v46; // r10
  __int64 v47; // rax
  __int64 v48; // rax
  struct D3DKMT_GETPATHSMODALITY *v50; // [rsp+40h] [rbp-20h]
  struct D3DKMT_GETPATHSMODALITY *v51; // [rsp+48h] [rbp-18h] BYREF
  __int64 v52; // [rsp+50h] [rbp-10h] BYREF
  int v53; // [rsp+58h] [rbp-8h]

  v7 = a4;
  v51 = 0LL;
  v50 = 0LL;
  if ( !a2 )
  {
    PathsModality = GetPathsModality(a1, &v51, 16777280LL, 0LL);
    if ( PathsModality < 0 )
    {
      *(_DWORD *)a7 = 44;
      goto LABEL_66;
    }
    v11 = AllocPathsModality((unsigned __int16)a3 + *((_WORD *)v51 + 10));
    v50 = v11;
    if ( v11 )
    {
      *((_WORD *)v11 + 10) = 0;
      v15 = 0;
      v12 = (__int64)v51;
      if ( *((_WORD *)v51 + 10) )
      {
        do
        {
          v16 = 272LL * v15 + v12 + 48;
          if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))qword_1C0252B40)(
                                   a1,
                                   *(_QWORD *)(v16 + 16),
                                   *(unsigned int *)(v16 + 28)) )
          {
            v19 = *((unsigned __int16 *)v50 + 10);
            v20 = (char *)v50 + 272 * v19;
            *((_WORD *)v50 + 10) = v19 + 1;
            v21 = 2LL;
            v22 = v20 + 48;
            do
            {
              *v22 = *(_OWORD *)v16;
              v22[1] = *(_OWORD *)(v16 + 16);
              v22[2] = *(_OWORD *)(v16 + 32);
              v22[3] = *(_OWORD *)(v16 + 48);
              v22[4] = *(_OWORD *)(v16 + 64);
              v22[5] = *(_OWORD *)(v16 + 80);
              v22[6] = *(_OWORD *)(v16 + 96);
              v22 += 8;
              v23 = *(_OWORD *)(v16 + 112);
              v16 += 128LL;
              *(v22 - 1) = v23;
              --v21;
            }
            while ( v21 );
            *v22 = *(_OWORD *)v16;
            v24 = *((_QWORD *)v20 + 6);
            if ( (v24 & 0x4000000000000LL) == 0 || (*((_DWORD *)v20 + 58) & 0xFFFF0000) == 0xFE500000 )
            {
              v25 = WdLogNewEntry5_WdAssertion(v24, 128LL, v17, v18);
              WdLogEvent5_WdAssertion(v25);
              v24 = *((_QWORD *)v20 + 6);
            }
            *((_QWORD *)v20 + 34) = 0LL;
            *((_QWORD *)v20 + 7) = v24 & 0x18000820B8FLL;
            *((_QWORD *)v20 + 6) = v24 | 0x80000000000000LL;
          }
          v12 = (__int64)v51;
          ++v15;
        }
        while ( v15 < *((unsigned __int16 *)v51 + 10) );
        v7 = a4;
      }
      goto LABEL_18;
    }
LABEL_16:
    *(_DWORD *)a7 = 45;
    v27 = WdLogNewEntry5_WdError(v13, v12, v14);
    WdLogEvent5_WdError(v27);
    PathsModality = -1073741801;
    goto LABEL_66;
  }
  v26 = AllocPathsModality(a3);
  v50 = v26;
  if ( !v26 )
    goto LABEL_16;
  *((_WORD *)v26 + 10) = 0;
LABEL_18:
  v28 = v50;
  v29 = *((unsigned __int16 *)v50 + 10);
  v52 = (__int64)v50 + 48;
  v53 = v29;
  if ( (_DWORD)v29 )
  {
    v30 = (char *)v50 + 280;
    v12 = (unsigned int)v29;
    do
    {
      *(_DWORD *)v30 |= 0x80u;
      v30[32] = 0;
      v30 += 272;
      --v12;
    }
    while ( v12 );
    v28 = v50;
  }
  v31 = *((unsigned __int16 *)v28 + 10);
  v32 = 0;
  if ( a3 )
  {
    v33 = (unsigned int *)((char *)v7 + 28);
    do
    {
      if ( !a2 )
      {
        if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))qword_1C0252B40)(
                                 a1,
                                 *((_QWORD *)v7 + 25 * v32 + 2),
                                 *v33) )
        {
          v44 = WdLogNewEntry5_WdError(v35, v34, v36);
          WdLogEvent5_WdError(v44);
          v45 = 43;
          PathsModality = -1073741790;
LABEL_42:
          *(_DWORD *)a7 = v45;
          goto LABEL_65;
        }
        v28 = v50;
      }
      PathsModality = ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(
                        (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)v7 + 200 * v32),
                        *((unsigned __int16 *)v28 + 10),
                        v32,
                        1,
                        1,
                        v28,
                        a6);
      if ( PathsModality < 0 )
      {
        v45 = 46;
        goto LABEL_42;
      }
      v12 = (__int64)v50;
      if ( (*((_QWORD *)v50 + 34 * *((unsigned __int16 *)v50 + 10) + 6) & 0x4000000000000LL) == 0 )
      {
        v39 = WdLogNewEntry5_WdAssertion(0x4000000000000LL, v50, v37, v38);
        WdLogEvent5_WdAssertion(v39);
        v12 = (__int64)v50;
      }
      v29 = 272LL * *(unsigned __int16 *)(v12 + 20);
      ++v32;
      v33 += 50;
      *(_QWORD *)(v29 + v12 + 48) &= ~0x4000000000000uLL;
      ++*((_WORD *)v50 + 10);
      v28 = v50;
    }
    while ( v32 < a3 );
  }
  v40 = v31;
  if ( v31 >= *((unsigned __int16 *)v28 + 10) )
  {
LABEL_61:
    if ( *((_WORD *)v28 + 10) )
    {
      PathsModality = 0;
      v50 = 0LL;
      *a5 = v28;
    }
    else
    {
      *(_DWORD *)a7 = 47;
      v47 = WdLogNewEntry5_WdError(v29, v12, v28);
      WdLogEvent5_WdError(v47);
      PathsModality = -1073741811;
    }
    goto LABEL_65;
  }
  while ( 1 )
  {
    v29 = 272LL * v40;
    if ( *(_DWORD *)((char *)v28 + v29 + 72) == -2 )
    {
      *(_DWORD *)((char *)v28 + v29 + 72) = 0;
      while ( 1 )
      {
        v28 = v50;
        v12 = 0LL;
        if ( !*((_WORD *)v50 + 10) )
          goto LABEL_38;
        while ( 1 )
        {
          if ( (_DWORD)v12 != v40 )
          {
            v46 = 272LL * (unsigned int)v12;
            if ( *(_DWORD *)((char *)v50 + v46 + 64) == *(_DWORD *)((char *)v50 + v29 + 64)
              && *(_DWORD *)((char *)v50 + v46 + 68) == *(_DWORD *)((char *)v50 + v29 + 68)
              && *(_DWORD *)((char *)v50 + v46 + 72) == *(_DWORD *)((char *)v50 + v29 + 72) )
            {
              break;
            }
          }
          v12 = (unsigned int)(v12 + 1);
          if ( (unsigned int)v12 >= *((unsigned __int16 *)v50 + 10) )
            goto LABEL_38;
        }
        ++*(_DWORD *)((char *)v50 + v29 + 72);
      }
    }
    v12 = 0LL;
    if ( v31 )
      break;
LABEL_38:
    if ( (*(_QWORD *)((_BYTE *)v28 + v29 + 48) & 0x4000000000000LL) == 0 )
    {
      v42 = v40 + 1;
      v43 = v40 | 0xFE500000;
      while ( v42 < *((unsigned __int16 *)v28 + 10) )
      {
        v12 = 272LL * v42;
        if ( (*(_QWORD *)((_BYTE *)v28 + v12 + 48) & 0x4000000000000LL) == 0
          && *(_DWORD *)((char *)v28 + v12 + 232) == *(_DWORD *)((char *)v28 + v29 + 232) )
        {
          *(_DWORD *)((char *)v28 + v12 + 232) = v43;
          *(_QWORD *)((char *)v50 + v12 + 48) |= 0x4000000000000uLL;
          v28 = v50;
          if ( !*((_BYTE *)v50 + v29 + 177) || *((_BYTE *)v50 + v29 + 312) )
          {
            *(_DWORD *)((char *)v50 + v12 + 72) = *(_DWORD *)((char *)v50 + v29 + 72);
            v28 = v50;
          }
        }
        ++v42;
      }
      *(_DWORD *)((char *)v28 + v29 + 232) = v43;
      *(_QWORD *)((char *)v50 + v29 + 48) |= 0x4000000000000uLL;
      v28 = v50;
    }
    if ( ++v40 >= *((unsigned __int16 *)v28 + 10) )
      goto LABEL_61;
  }
  while ( 1 )
  {
    v41 = 272LL * (unsigned int)v12;
    if ( *(_DWORD *)((char *)v28 + v41 + 64) == *(_DWORD *)((char *)v28 + v29 + 64)
      && *(_DWORD *)((char *)v28 + v41 + 68) == *(_DWORD *)((char *)v28 + v29 + 68)
      && *(_DWORD *)((char *)v28 + v41 + 72) == *(_DWORD *)((char *)v28 + v29 + 72) )
    {
      break;
    }
    v12 = (unsigned int)(v12 + 1);
    if ( (unsigned int)v12 >= v31 )
      goto LABEL_38;
  }
  v48 = WdLogNewEntry5_WdError(v29, v12, v28);
  WdLogEvent5_WdError(v48);
  PathsModality = -1073741790;
  *(_DWORD *)a7 = 48;
LABEL_65:
  SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14135::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14135(&v52);
LABEL_66:
  FreePathsModality(v51);
  FreePathsModality(v50);
  return (unsigned int)PathsModality;
}
