/*
 * XREFs of ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C01470F8
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C006C8A0 (DrvSetDisplayConfig.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C0148B94 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C006C578 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x1C00A8064 (GetPathsModality.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C00A8124 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     _SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14136::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14136 @ 0x1C00D0208 (_SetDisplayConfigHandleBrokerProvidedPaths_--_2_--_AUTO_USING_PM_VirtualTopologyButNotVirtualMod.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N1PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C0144420 (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
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
  __int64 v17; // rcx
  char *v18; // rbx
  __int64 v19; // rcx
  _OWORD *v20; // rax
  __int128 v21; // xmm1
  __int64 v22; // rcx
  __int64 v23; // rax
  struct D3DKMT_GETPATHSMODALITY *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  struct D3DKMT_GETPATHSMODALITY *v27; // r8
  __int64 v28; // rcx
  char *v29; // rax
  unsigned int v30; // r14d
  unsigned int v31; // edi
  unsigned int *v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  unsigned int v37; // r9d
  __int64 v38; // r10
  unsigned int v39; // r10d
  unsigned int v40; // r11d
  __int64 v41; // rax
  __int64 v42; // rdx
  int v43; // ecx
  __int64 v44; // r10
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  struct D3DKMT_GETPATHSMODALITY *v50; // [rsp+40h] [rbp-20h]
  struct D3DKMT_GETPATHSMODALITY *v51; // [rsp+48h] [rbp-18h] BYREF
  __int64 v52; // [rsp+50h] [rbp-10h] BYREF
  int v53; // [rsp+58h] [rbp-8h]

  v7 = a4;
  v51 = 0LL;
  v50 = 0LL;
  if ( !a2 )
  {
    PathsModality = GetPathsModality(a1, &v51, 0x1000040u, 0);
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
          if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))qword_1C024AB20)(
                                   a1,
                                   *(_QWORD *)(v16 + 16),
                                   *(unsigned int *)(v16 + 28)) )
          {
            v17 = *((unsigned __int16 *)v50 + 10);
            v18 = (char *)v50 + 272 * v17;
            *((_WORD *)v50 + 10) = v17 + 1;
            v19 = 2LL;
            v20 = v18 + 48;
            do
            {
              *v20 = *(_OWORD *)v16;
              v20[1] = *(_OWORD *)(v16 + 16);
              v20[2] = *(_OWORD *)(v16 + 32);
              v20[3] = *(_OWORD *)(v16 + 48);
              v20[4] = *(_OWORD *)(v16 + 64);
              v20[5] = *(_OWORD *)(v16 + 80);
              v20[6] = *(_OWORD *)(v16 + 96);
              v20 += 8;
              v21 = *(_OWORD *)(v16 + 112);
              v16 += 128LL;
              *(v20 - 1) = v21;
              --v19;
            }
            while ( v19 );
            *v20 = *(_OWORD *)v16;
            v22 = *((_QWORD *)v18 + 6);
            if ( (v22 & 0x4000000000000LL) == 0 || (*((_DWORD *)v18 + 58) & 0xFFFF0000) == 0xFE500000 )
            {
              v23 = WdLogNewEntry5_WdAssertion(v22, 128LL);
              WdLogEvent5_WdAssertion(v23);
              v22 = *((_QWORD *)v18 + 6);
            }
            *((_QWORD *)v18 + 34) = 0LL;
            *((_QWORD *)v18 + 7) = v22 & 0x18000820B8FLL;
            *((_QWORD *)v18 + 6) = v22 | 0x80000000000000LL;
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
    v25 = WdLogNewEntry5_WdError(v13, v12, v14);
    WdLogEvent5_WdError(v25, v26);
    PathsModality = -1073741801;
    goto LABEL_66;
  }
  v24 = AllocPathsModality(a3);
  v50 = v24;
  if ( !v24 )
    goto LABEL_16;
  *((_WORD *)v24 + 10) = 0;
LABEL_18:
  v27 = v50;
  v28 = *((unsigned __int16 *)v50 + 10);
  v52 = (__int64)v50 + 48;
  v53 = v28;
  if ( (_DWORD)v28 )
  {
    v29 = (char *)v50 + 280;
    v12 = (unsigned int)v28;
    do
    {
      *(_DWORD *)v29 |= 0x80u;
      v29[32] = 0;
      v29 += 272;
      --v12;
    }
    while ( v12 );
    v27 = v50;
  }
  v30 = *((unsigned __int16 *)v27 + 10);
  v31 = 0;
  if ( a3 )
  {
    v32 = (unsigned int *)((char *)v7 + 28);
    do
    {
      if ( !a2 )
      {
        if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))qword_1C024AB20)(
                                 a1,
                                 *((_QWORD *)v7 + 25 * v31 + 2),
                                 *v32) )
        {
          v41 = WdLogNewEntry5_WdError(v34, v33, v35);
          WdLogEvent5_WdError(v41, v42);
          v43 = 43;
          PathsModality = -1073741790;
LABEL_42:
          *(_DWORD *)a7 = v43;
          goto LABEL_65;
        }
        v27 = v50;
      }
      PathsModality = ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(
                        (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)v7 + 200 * v31),
                        *((unsigned __int16 *)v27 + 10),
                        v31,
                        1,
                        1,
                        v27,
                        a6);
      if ( PathsModality < 0 )
      {
        v43 = 46;
        goto LABEL_42;
      }
      v12 = (__int64)v50;
      if ( (*((_QWORD *)v50 + 34 * *((unsigned __int16 *)v50 + 10) + 6) & 0x4000000000000LL) == 0 )
      {
        v36 = WdLogNewEntry5_WdAssertion(0x4000000000000LL, v50);
        WdLogEvent5_WdAssertion(v36);
        v12 = (__int64)v50;
      }
      v28 = 272LL * *(unsigned __int16 *)(v12 + 20);
      ++v31;
      v32 += 50;
      *(_QWORD *)(v28 + v12 + 48) &= ~0x4000000000000uLL;
      ++*((_WORD *)v50 + 10);
      v27 = v50;
    }
    while ( v31 < a3 );
  }
  v37 = v30;
  if ( v30 >= *((unsigned __int16 *)v27 + 10) )
  {
LABEL_61:
    if ( *((_WORD *)v27 + 10) )
    {
      PathsModality = 0;
      v50 = 0LL;
      *a5 = v27;
    }
    else
    {
      *(_DWORD *)a7 = 47;
      v45 = WdLogNewEntry5_WdError(v28, v12, v27);
      WdLogEvent5_WdError(v45, v46);
      PathsModality = -1073741811;
    }
    goto LABEL_65;
  }
  while ( 1 )
  {
    v28 = 272LL * v37;
    if ( *(_DWORD *)((char *)v27 + v28 + 72) == -2 )
    {
      *(_DWORD *)((char *)v27 + v28 + 72) = 0;
      while ( 1 )
      {
        v27 = v50;
        v12 = 0LL;
        if ( !*((_WORD *)v50 + 10) )
          goto LABEL_38;
        while ( 1 )
        {
          if ( (_DWORD)v12 != v37 )
          {
            v44 = 272LL * (unsigned int)v12;
            if ( *(_DWORD *)((char *)v50 + v44 + 64) == *(_DWORD *)((char *)v50 + v28 + 64)
              && *(_DWORD *)((char *)v50 + v44 + 68) == *(_DWORD *)((char *)v50 + v28 + 68)
              && *(_DWORD *)((char *)v50 + v44 + 72) == *(_DWORD *)((char *)v50 + v28 + 72) )
            {
              break;
            }
          }
          v12 = (unsigned int)(v12 + 1);
          if ( (unsigned int)v12 >= *((unsigned __int16 *)v50 + 10) )
            goto LABEL_38;
        }
        ++*(_DWORD *)((char *)v50 + v28 + 72);
      }
    }
    v12 = 0LL;
    if ( v30 )
      break;
LABEL_38:
    if ( (*(_QWORD *)((_BYTE *)v27 + v28 + 48) & 0x4000000000000LL) == 0 )
    {
      v39 = v37 + 1;
      v40 = v37 | 0xFE500000;
      while ( v39 < *((unsigned __int16 *)v27 + 10) )
      {
        v12 = 272LL * v39;
        if ( (*(_QWORD *)((_BYTE *)v27 + v12 + 48) & 0x4000000000000LL) == 0
          && *(_DWORD *)((char *)v27 + v12 + 232) == *(_DWORD *)((char *)v27 + v28 + 232) )
        {
          *(_DWORD *)((char *)v27 + v12 + 232) = v40;
          *(_QWORD *)((char *)v50 + v12 + 48) |= 0x4000000000000uLL;
          v27 = v50;
          if ( !*((_BYTE *)v50 + v28 + 177) || *((_BYTE *)v50 + v28 + 312) )
          {
            *(_DWORD *)((char *)v50 + v12 + 72) = *(_DWORD *)((char *)v50 + v28 + 72);
            v27 = v50;
          }
        }
        ++v39;
      }
      *(_DWORD *)((char *)v27 + v28 + 232) = v40;
      *(_QWORD *)((char *)v50 + v28 + 48) |= 0x4000000000000uLL;
      v27 = v50;
    }
    if ( ++v37 >= *((unsigned __int16 *)v27 + 10) )
      goto LABEL_61;
  }
  while ( 1 )
  {
    v38 = 272LL * (unsigned int)v12;
    if ( *(_DWORD *)((char *)v27 + v38 + 64) == *(_DWORD *)((char *)v27 + v28 + 64)
      && *(_DWORD *)((char *)v27 + v38 + 68) == *(_DWORD *)((char *)v27 + v28 + 68)
      && *(_DWORD *)((char *)v27 + v38 + 72) == *(_DWORD *)((char *)v27 + v28 + 72) )
    {
      break;
    }
    v12 = (unsigned int)(v12 + 1);
    if ( (unsigned int)v12 >= v30 )
      goto LABEL_38;
  }
  v47 = WdLogNewEntry5_WdError(v28, v12, v27);
  WdLogEvent5_WdError(v47, v48);
  PathsModality = -1073741790;
  *(_DWORD *)a7 = 48;
LABEL_65:
  SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14136::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14136(&v52);
LABEL_66:
  FreePathsModality(v51);
  FreePathsModality(v50);
  return (unsigned int)PathsModality;
}
