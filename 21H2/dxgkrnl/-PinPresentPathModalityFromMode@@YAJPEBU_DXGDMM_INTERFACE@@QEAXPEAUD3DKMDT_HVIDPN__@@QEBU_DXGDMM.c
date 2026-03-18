/*
 * XREFs of ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_DXGK_DISPLAYMODE_INFO@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C02F765C
 * Callers:
 *     ?CreateFunctionalVidPnWithEnabledVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EPEAU_DXGK_DISPLAYMODE_INFO@@PEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@PEAY0BA@I@Z @ 0x1C02F6FB8 (-CreateFunctionalVidPnWithEnabledVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIW4_D3DKMDT_VIDPN_PR.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C00123E4 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C0019678 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01ABE88 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C01ADE34 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C01AEBD8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C01BD1A4 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C01BE360 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ConvertGdiScalingToDMMScaling @ 0x1C01D3BFC (ConvertGdiScalingToDMMScaling.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1C01E91F0 (DxgkGetGlobalRawmodeFlag.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C01E9B80 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?ConvertD3DddiRotationToDmmRotation@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DDDI_ROTATION@@@Z @ 0x1C02F6A08 (-ConvertD3DddiRotationToDmmRotation@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DDDI_ROTAT.c)
 *     ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C02F6A9C (-ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QE.c)
 *     ?RetrievePinnedModeForTarget@@YAJQEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPN__@@IPEAU_D3DKMDT_VIDPN_TARGET_MODE@@PEAU_D3DDDI_RATIONAL@@PEAI@Z @ 0x1C02F8724 (-RetrievePinnedModeForTarget@@YAJQEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPN__@@IPEAU_D3DKMD.c)
 *     ?DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAU_D3DKMDT_2DREGION@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C039AD04 (-DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3D.c)
 *     ?DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C039B040 (-DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?DmmGetMostImportantVidPnPathTargetsFromSource@@YAJQEAXPEAUD3DKMDT_HVIDPN__@@IQEAI@Z @ 0x1C039B3C8 (-DmmGetMostImportantVidPnPathTargetsFromSource@@YAJQEAXPEAUD3DKMDT_HVIDPN__@@IQEAI@Z.c)
 */

__int64 __fastcall PinPresentPathModalityFromMode(
        void (__fastcall **a1)(char *, struct D3DKMDT_HVIDPN__ *),
        char *a2,
        struct D3DKMDT_HVIDPN__ *a3,
        struct _DXGDMM_VIDPN_INTERFACE *a4,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a5,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a6,
        unsigned int a7,
        unsigned __int64 a8,
        struct _DXGK_DISPLAYMODE_INFO *a9,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a10,
        unsigned int a11,
        unsigned int a12,
        struct D3DKMDT_HVIDPN__ **a13)
{
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v16; // r14
  const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v17; // rbx
  struct _DXGK_DISPLAYMODE_INFO *v18; // r12
  __int64 v19; // r15
  int v20; // r8d
  __int64 (__fastcall *v21)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, unsigned __int64 *); // rax
  int v22; // eax
  __int64 v23; // rsi
  unsigned __int16 v24; // ax
  __int64 v25; // rbx
  int MostImportantVidPnPathTargetsFromSource; // eax
  const wchar_t *v27; // r9
  unsigned int v28; // eax
  __int64 v29; // rsi
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rdi
  int v31; // eax
  bool v32; // al
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rdx
  unsigned int v40; // ecx
  __int64 v41; // rcx
  unsigned int i; // edi
  unsigned __int16 v43; // ax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v44; // r14
  unsigned int j; // esi
  unsigned __int16 v46; // dx
  int v47; // ebx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v48; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  int v53; // ebx
  struct DXGPROCESS *Current; // rax
  struct D3DKMDT_HVIDPN__ **v55; // r14
  int v56; // edi
  int v57; // edi
  unsigned int k; // ebx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v59; // rax
  signed int PathModalityForAdapterWithCoreAccessHeld; // eax
  struct D3DKMDT_HVIDPN__ *v61; // rdx
  __int64 v63; // [rsp+28h] [rbp-E0h]
  __int64 v64; // [rsp+30h] [rbp-D8h]
  struct _D3DKMDT_2DREGION *v65; // [rsp+38h] [rbp-D0h]
  struct _D3DDDI_RATIONAL *v66; // [rsp+40h] [rbp-C8h]
  _BYTE v67[64]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v68; // [rsp+98h] [rbp-70h]
  _D3DKMDT_VIDPN_TARGET_MODE v69[2]; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int64 v71; // [rsp+170h] [rbp+68h] BYREF
  struct D3DKMDT_HVIDPN__ *v72; // [rsp+178h] [rbp+70h]
  struct _DXGDMM_VIDPN_INTERFACE *v73; // [rsp+180h] [rbp+78h]

  v73 = a4;
  v72 = a3;
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 4110LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_hAdapter != NULL", 4110LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry1(1LL, 4111LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_hVidPn != NULL", 4111LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry1(1LL, 4112LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_pDmmVidPnInterface != NULL", 4112LL, 0LL, 0LL, 0LL, 0LL);
  }
  v16 = a5;
  if ( !a5 )
  {
    WdLogSingleEntry1(1LL, 4113LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_hVidPnTopology != NULL", 4113LL, 0LL, 0LL, 0LL, 0LL);
  }
  v17 = a6;
  if ( !a6 )
  {
    WdLogSingleEntry1(1LL, 4114LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"i_pDmmVidPnTopologyInterface != NULL",
      4114LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v18 = a9;
  if ( !a9 )
  {
    WdLogSingleEntry1(1LL, 4115LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"io_pDisplayModeInfo != NULL", 4115LL, 0LL, 0LL, 0LL, 0LL);
  }
  v19 = a7;
  if ( a7 == -1 )
  {
    WdLogSingleEntry1(1LL, 4116LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      v19 | v20,
      (__int64)L"i_VidPnSourceId != D3DDDI_ID_UNINITIALIZED",
      4116LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a13 )
  {
    WdLogSingleEntry1(1LL, 4117LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"o_phFunctionalizedVidPn != NULL", 4117LL, 0LL, 0LL, 0LL, 0LL);
  }
  v21 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, unsigned __int64 *))*((_QWORD *)v17 + 15);
  v71 = 0LL;
  v22 = v21(v16, &v71);
  v23 = v22;
  if ( v22 >= 0 )
  {
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v67, v71, v71);
    if ( v68 )
      v24 = *(_WORD *)(v68 + 22);
    else
      v24 = 0;
    if ( v24 >= (unsigned __int16)v71 )
    {
      v25 = *(_QWORD *)(a2 + 404);
      a10 = D3DKMDT_VPPS_UNINITIALIZED;
      MostImportantVidPnPathTargetsFromSource = DmmGetMostImportantVidPnPathTargetsFromSource(
                                                  (DXGADAPTER *)a2,
                                                  a3,
                                                  v19,
                                                  (unsigned int *const)&a10);
      v23 = MostImportantVidPnPathTargetsFromSource;
      if ( MostImportantVidPnPathTargetsFromSource >= 0 )
      {
        v28 = 0;
        a7 = 0;
        if ( v71 )
        {
          v29 = 0LL;
          while ( 1 )
          {
            a12 = 0;
            a11 = 0;
            PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v67, v28);
            v31 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, __int64, unsigned int *, unsigned int *))a6
                   + 16))(
                    v16,
                    v29,
                    &a12,
                    &a11);
            v23 = v31;
            if ( v31 < 0 )
              break;
            *((_DWORD *)PathDescriptor + 6) = a12;
            *((_DWORD *)PathDescriptor + 7) = a11;
            *(_QWORD *)PathDescriptor |= 0x8700000000000uLL;
            *((_QWORD *)PathDescriptor + 2) = v25;
            v32 = a12 != (_DWORD)v19 || *((_BYTE *)DXGGLOBAL_GetGlobal() + 304569);
            v33 = ConvertVidPnPathToPathDescription(a2, v72, v73, a6, v16, a12, a11, v32, PathDescriptor);
            v23 = v33;
            if ( v33 < 0 )
            {
              WdLogSingleEntry4(2LL, a12, a11, v16, v33);
              v27 = L"Failed to convert paths from source 0x%I64x to target 0x%I64x in VidPn topology 0x%I64x to PathsModa"
                     "lity (status = 0x%I64x)";
              v66 = (struct _D3DDDI_RATIONAL *)v23;
              v65 = (struct _D3DKMDT_2DREGION *)v16;
              v64 = a11;
              v63 = a12;
              goto LABEL_55;
            }
            if ( a12 == (_DWORD)v19 )
            {
              *((_DWORD *)PathDescriptor + 24) = *(_DWORD *)v18;
              *((_DWORD *)PathDescriptor + 25) = *((_DWORD *)v18 + 1);
              *((_QWORD *)PathDescriptor + 13) = *((_QWORD *)PathDescriptor + 12);
              *((_DWORD *)PathDescriptor + 29) = *((_DWORD *)v18 + 2);
              *((_BYTE *)PathDescriptor + 128) = (*((_DWORD *)v18 + 10) & 0x10) != 0;
              *(_QWORD *)PathDescriptor |= 0x100uLL;
              *((_QWORD *)PathDescriptor + 1) |= 0x100uLL;
              v34 = *((_QWORD *)v18 + 7);
              v35 = *((_QWORD *)PathDescriptor + 1);
              v36 = *(_QWORD *)PathDescriptor | 2LL;
              *(_QWORD *)PathDescriptor = v36;
              v35 |= 2uLL;
              *((_QWORD *)PathDescriptor + 1) = v35;
              *(_QWORD *)((char *)PathDescriptor + 52) = v34;
              *((_QWORD *)PathDescriptor + 28) = *((_QWORD *)v18 + 2);
              *((_DWORD *)PathDescriptor + 60) = *((_DWORD *)v18 + 18);
              *(_QWORD *)PathDescriptor = v36 | 0x1000000;
              *((_QWORD *)PathDescriptor + 1) = v35 | 0x1000000;
              if ( *((_BYTE *)DXGGLOBAL_GetGlobal() + 304512)
                && DmmGetClientVidPnTargetModeInfo(
                     a2,
                     a11,
                     0LL,
                     0LL,
                     0LL,
                     0LL,
                     (struct _D3DKMDT_2DREGION *)((char *)PathDescriptor + 44),
                     0LL) >= 0 )
              {
                *(_QWORD *)PathDescriptor |= 1uLL;
                *((_QWORD *)PathDescriptor + 1) |= 1uLL;
              }
              if ( a11 == a10 )
              {
                v37 = ConvertD3DddiRotationToDmmRotation((enum _D3DDDI_ROTATION)*((_DWORD *)v18 + 7));
                *(_QWORD *)PathDescriptor |= 0x200uLL;
              }
              else
              {
                *(_QWORD *)PathDescriptor &= ~0x200uLL;
                v37 = 0;
              }
              v38 = *(_QWORD *)PathDescriptor;
              *((_DWORD *)PathDescriptor + 33) = v37;
              if ( a11 == a10 )
                *((_DWORD *)PathDescriptor + 20) ^= (*((_DWORD *)PathDescriptor + 20) ^ *((_DWORD *)v18 + 6)) & 7;
              v39 = v38 | 4;
              *(_QWORD *)PathDescriptor = v39;
              v40 = *((_DWORD *)v18 + 8);
              if ( v40 - 1 <= 1 )
              {
                ConvertGdiScalingToDMMScaling(v40, (_DWORD *)PathDescriptor + 34);
              }
              else if ( (v39 & 0x40000000000LL) == 0 )
              {
                DmmGetDefaultScaling(a2, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)PathDescriptor + 34);
              }
              *(_QWORD *)PathDescriptor |= 0x40000000000uLL;
            }
            else
            {
              *((_QWORD *)PathDescriptor + 1) |= *(_QWORD *)PathDescriptor & 0x18001820B8FLL;
            }
            v28 = a7 + 1;
            v29 = v28;
            ++a7;
            if ( v28 >= v71 )
              goto LABEL_50;
          }
          WdLogSingleEntry2(2LL, v16, v31);
          v27 = L"Failed to enumerate the all the paths topology 0x%I64x (status = 0x%I64x)";
          v66 = 0LL;
          v65 = 0LL;
          v64 = v23;
          v63 = (__int64)v16;
        }
        else
        {
LABEL_50:
          v41 = v68;
          for ( i = 0; ; ++i )
          {
            v43 = v41 ? *(_WORD *)(v41 + 20) : 0;
            if ( i >= v43 )
              break;
            v44 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v67, i);
            if ( (*(_QWORD *)v44 & 0x4000000000000LL) != 0 )
            {
              v41 = v68;
            }
            else
            {
              for ( j = i; ; ++j )
              {
                v41 = v68;
                v46 = v68 ? *(_WORD *)(v68 + 20) : 0;
                if ( j >= v46 )
                  break;
                v47 = *((_DWORD *)v44 + 6);
                v48 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v67, j);
                if ( CCD_TOPOLOGY::IsMatchingSource(v48, (const struct _LUID *)v44 + 2, v47) )
                {
                  *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v67, j) + 46) = i | 0xFE540000;
                  v49 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v67, j);
                  *(_QWORD *)v49 |= 0x4000000000000uLL;
                }
              }
            }
          }
          v53 = 0;
          if ( DxgkGetGlobalRawmodeFlag() )
            v53 = 0x20000;
          Current = DXGPROCESS::GetCurrent(0x20000LL, v50, v51, v52);
          v55 = a13;
          v56 = v53 | 0x8000000;
          if ( (*((_DWORD *)Current + 106) & 4) == 0 )
            v56 = v53;
          v57 = v56 | 0x40000;
          if ( (int)BmlGetPathModalityForAdapterWithCoreAccessHeld(v68, (__int64)a2, 1, 2, v57, (__int64)a13) >= 0 )
            goto LABEL_80;
          for ( k = 0; k < v71; ++k )
          {
            v59 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v67, k);
            if ( *((_DWORD *)v59 + 6) == (_DWORD)v19 )
              *((_QWORD *)v59 + 1) &= 0xFFFFFFFFFEFFFFFDuLL;
          }
          PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                       v68,
                                                       (__int64)a2,
                                                       1,
                                                       2,
                                                       v57,
                                                       (__int64)v55);
          v23 = PathModalityForAdapterWithCoreAccessHeld;
          DxgkLogCodePointPacket(
            0x1Eu,
            PathModalityForAdapterWithCoreAccessHeld,
            a8 + (v19 & 0xFFFF0000),
            0,
            *(_QWORD *)(a2 + 404));
          if ( (int)v23 >= 0 )
          {
LABEL_80:
            memset(v69, 0, 0x50uLL);
            v61 = *v55;
            a6 = 0LL;
            a11 = 0;
            LODWORD(v23) = RetrievePinnedModeForTarget(v73, v61, a10, v69, (struct _D3DDDI_RATIONAL *)&a6, &a11);
            if ( (int)v23 < 0 )
            {
              WdLogSingleEntry1(1LL, 4432LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"Failed to update refresh rate!",
                4432LL,
                0LL,
                0LL,
                0LL,
                0LL);
              a1[8](a2, *v55);
              *v55 = 0LL;
            }
            else
            {
              *((_QWORD *)v18 + 7) = v69[0].VideoSignalInfo.VSyncFreq;
              v69[0].VideoSignalInfo.VSyncFreq = (D3DDDI_RATIONAL)a6;
              DmmCalculatePresentationVSync(&v69[0].VideoSignalInfo, (struct _D3DDDI_RATIONAL *)v18 + 2);
              *((_DWORD *)v18 + 3) = DmmMapVSyncFromRationalToInteger(
                                       (const struct _D3DDDI_RATIONAL *)v18 + 2,
                                       (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&v69[0].VideoSignalInfo.AdditionalSignalInfo << 29) >> 29),
                                       0LL);
              if ( *((_DWORD *)v18 + 18) != a11 )
              {
                WdLogSingleEntry1(1LL, 4426LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"io_pDisplayModeInfo->BoostRefreshRateMultiplier == BoostRefreshRateMultiplier",
                  4426LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            goto LABEL_84;
          }
          WdLogSingleEntry1(2LL, v23);
          v27 = L"After relaxing the refresh rate matching functionalize still failed (status = 0x%I64x)";
          v66 = 0LL;
          v65 = 0LL;
          v64 = 0LL;
          v63 = v23;
        }
      }
      else
      {
        WdLogSingleEntry3(2LL, v19, v16, MostImportantVidPnPathTargetsFromSource);
        v27 = L"Failed to find the most important paths originating from source 0x%I64x in topology 0x%I64x (status = 0x%I64x)";
        v66 = 0LL;
        v65 = (struct _D3DKMDT_2DREGION *)v23;
        v64 = (__int64)v16;
        v63 = v19;
      }
LABEL_55:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v27, v63, v64, (__int64)v65, (__int64)v66, 0LL);
    }
    else
    {
      WdLogSingleEntry1(6LL, v71);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate PathModality for 0x%I64x paths",
        v71,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v23) = -1073741801;
    }
LABEL_84:
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v67);
    return (unsigned int)v23;
  }
  WdLogSingleEntry3(2LL, v19, v16, v22);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to determine number of paths originating from source 0x%I64x in topology 0x%I64x (status = 0x%I64x)",
    v19,
    (__int64)v16,
    v23,
    0LL,
    0LL);
  return (unsigned int)v23;
}
