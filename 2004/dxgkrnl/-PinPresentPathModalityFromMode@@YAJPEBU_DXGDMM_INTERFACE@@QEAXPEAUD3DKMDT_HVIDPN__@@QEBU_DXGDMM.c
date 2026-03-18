/*
 * XREFs of ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C025D030
 * Callers:
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C025E268 (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A6AC (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C000C6CC (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C011D6E0 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0131BDC (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C01322E0 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C01331A4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C01380F4 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C013A464 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 *     ConvertGdiScalingToDMMScaling @ 0x1C0146A38 (ConvertGdiScalingToDMMScaling.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1C01697B0 (DxgkGetGlobalRawmodeFlag.c)
 *     ?ConvertD3DddiRotationToDmmRotation@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DDDI_ROTATION@@@Z @ 0x1C025CBCC (-ConvertD3DddiRotationToDmmRotation@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DDDI_ROTAT.c)
 *     ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C025CC38 (-ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QE.c)
 *     ?RetrievePinnedModeForTarget@@YAJQEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPN__@@IPEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C025DC5C (-RetrievePinnedModeForTarget@@YAJQEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPN__@@IPEAU_D3DKMD.c)
 *     ?DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAU_D3DKMDT_2DREGION@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C02DC560 (-DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3D.c)
 *     ?DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C02DC8B8 (-DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?DmmGetMostImportantVidPnPathTargetsFromSource@@YAJQEAXPEAUD3DKMDT_HVIDPN__@@IQEAI@Z @ 0x1C02DCC34 (-DmmGetMostImportantVidPnPathTargetsFromSource@@YAJQEAXPEAUD3DKMDT_HVIDPN__@@IQEAI@Z.c)
 */

__int64 __fastcall PinPresentPathModalityFromMode(
        void (__fastcall **a1)(char *, struct D3DKMDT_HVIDPN__ *),
        char *a2,
        struct D3DKMDT_HVIDPN__ *a3,
        struct _DXGDMM_VIDPN_INTERFACE *a4,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a5,
        struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a6,
        unsigned int a7,
        unsigned __int64 a8,
        struct _D3DKMT_DISPLAYMODE *a9,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a10,
        unsigned int a11,
        unsigned int a12,
        struct D3DKMDT_HVIDPN__ **a13)
{
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v19; // r15
  __int64 v20; // rax
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v21; // rbx
  __int64 v22; // rax
  const struct _D3DDDI_RATIONAL *v23; // r12
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 (__fastcall *v28)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, unsigned __int64 *); // rax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  _QWORD *v33; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int16 v39; // ax
  __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rbx
  int MostImportantVidPnPathTargetsFromSource; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  _QWORD *v46; // rax
  unsigned int v47; // eax
  __int64 v48; // rsi
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rdi
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rcx
  bool v54; // al
  int v55; // eax
  __int64 v56; // rcx
  struct _D3DDDI_RATIONAL v57; // rax
  __int64 v58; // r8
  int v59; // eax
  __int64 v60; // rdx
  __int64 Numerator; // rcx
  __int64 v62; // rcx
  unsigned int i; // edi
  unsigned __int16 v64; // ax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v65; // r15
  unsigned int j; // esi
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v67; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v68; // rax
  __int64 v69; // rdx
  int v70; // ebx
  struct DXGPROCESS *Current; // rax
  struct D3DKMDT_HVIDPN__ **v72; // r15
  int v73; // edi
  int v74; // edi
  unsigned int k; // ebx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v76; // rax
  signed int PathModalityForAdapterWithCoreAccessHeld; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rax
  _BYTE v83[64]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v84; // [rsp+98h] [rbp-70h]
  _D3DKMDT_VIDPN_TARGET_MODE v85; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v87; // [rsp+160h] [rbp+58h] BYREF
  struct D3DKMDT_HVIDPN__ *v88; // [rsp+168h] [rbp+60h]
  struct _DXGDMM_VIDPN_INTERFACE *v89; // [rsp+170h] [rbp+68h]

  v89 = a4;
  v88 = a3;
  if ( !a2 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1, 0LL);
    *(_QWORD *)(v16 + 24) = 3990LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !a3 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v17 + 24) = 3991LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a4 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v18 + 24) = 3992LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v19 = a5;
  if ( !a5 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v20 + 24) = 3993LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v21 = a6;
  if ( !a6 )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v22 + 24) = 3994LL;
    WdLogEvent5_WdAssertion(v22);
  }
  v23 = (const struct _D3DDDI_RATIONAL *)a9;
  if ( !a9 )
  {
    v24 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v24 + 24) = 3995LL;
    WdLogEvent5_WdAssertion(v24);
  }
  v25 = a7;
  if ( a7 == -1 )
  {
    v26 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v26 + 24) = 3996LL;
    WdLogEvent5_WdAssertion(v26);
  }
  if ( !a13 )
  {
    v27 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v27 + 24) = 3997LL;
    WdLogEvent5_WdAssertion(v27);
  }
  v28 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, unsigned __int64 *))*((_QWORD *)v21 + 15);
  v87 = 0LL;
  v29 = v28(v19, &v87);
  v32 = v29;
  if ( v29 < 0 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
    v33[3] = v25;
    v33[4] = v19;
    v33[5] = v32;
    WdLogEvent5_WdError(v33);
    return (unsigned int)v32;
  }
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v83, v87, v87);
  v39 = v84;
  if ( v84 )
    v39 = *(_WORD *)(v84 + 22);
  if ( v39 >= (unsigned __int16)v87 )
  {
    v42 = *(_QWORD *)(a2 + 316);
    a10 = D3DKMDT_VPPS_UNINITIALIZED;
    MostImportantVidPnPathTargetsFromSource = DmmGetMostImportantVidPnPathTargetsFromSource(
                                                (DXGADAPTER *)a2,
                                                a3,
                                                v25,
                                                (unsigned int *const)&a10);
    v41 = MostImportantVidPnPathTargetsFromSource;
    if ( MostImportantVidPnPathTargetsFromSource >= 0 )
    {
      v47 = 0;
      a7 = 0;
      if ( v87 )
      {
        v48 = 0LL;
        while ( 1 )
        {
          a12 = 0;
          a11 = 0;
          PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v83, v47);
          v50 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, __int64, unsigned int *, unsigned int *))a6
                 + 16))(
                  v19,
                  v48,
                  &a12,
                  &a11);
          v41 = v50;
          if ( v50 < 0 )
            break;
          v53 = a12;
          *((_DWORD *)PathDescriptor + 6) = a12;
          *((_DWORD *)PathDescriptor + 7) = a11;
          *(_QWORD *)PathDescriptor |= 0x8700000000000uLL;
          *((_QWORD *)PathDescriptor + 2) = v42;
          v54 = a12 != (_DWORD)v25 || *((_BYTE *)DXGGLOBAL::GetGlobal(v53, v51) + 304369);
          v55 = ConvertVidPnPathToPathDescription(a2, v88, v89, a6, v19, a12, a11, v54, PathDescriptor);
          v41 = v55;
          if ( v55 < 0 )
          {
            v46 = (_QWORD *)WdLogNewEntry5_WdError(v56, v44);
            v46[3] = a12;
            v46[4] = a11;
            v46[5] = v19;
            v46[6] = v41;
            goto LABEL_54;
          }
          if ( a12 == (_DWORD)v25 )
          {
            *((_DWORD *)PathDescriptor + 24) = v23->Numerator;
            *((_DWORD *)PathDescriptor + 25) = v23->Denominator;
            *((_QWORD *)PathDescriptor + 13) = *((_QWORD *)PathDescriptor + 12);
            *((_DWORD *)PathDescriptor + 29) = v23[1].Numerator;
            *((_BYTE *)PathDescriptor + 128) = (v23[5].Numerator & 0x10) != 0;
            *(_QWORD *)PathDescriptor |= 0x100uLL;
            *((_QWORD *)PathDescriptor + 1) |= 0x100uLL;
            v57 = v23[2];
            *(_QWORD *)PathDescriptor |= 2uLL;
            *((_QWORD *)PathDescriptor + 1) |= 2uLL;
            *(struct _D3DDDI_RATIONAL *)((char *)PathDescriptor + 52) = v57;
            if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v56, v44) + 304320)
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
              v59 = ConvertD3DddiRotationToDmmRotation(v23[3].Denominator);
              *(_QWORD *)PathDescriptor |= 0x200uLL;
            }
            else
            {
              *(_QWORD *)PathDescriptor &= ~0x200uLL;
              v59 = 0;
            }
            *((_DWORD *)PathDescriptor + 33) = v59;
            if ( a11 == a10 )
              *((_DWORD *)PathDescriptor + 20) ^= (*((_DWORD *)PathDescriptor + 20) ^ v23[3].Numerator) & 7;
            v60 = *(_QWORD *)PathDescriptor;
            *(_QWORD *)PathDescriptor |= 4uLL;
            Numerator = v23[4].Numerator;
            if ( (unsigned int)(Numerator - 1) > 1 )
            {
              if ( (v60 & 0x40000000000LL) == 0 )
                DmmGetDefaultScaling(a2, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)PathDescriptor + 34);
            }
            else
            {
              ConvertGdiScalingToDMMScaling(Numerator, (_DWORD *)PathDescriptor + 34, v58);
            }
            v44 = 0x40000000000LL;
            *(_QWORD *)PathDescriptor |= 0x40000000000uLL;
          }
          else
          {
            *((_QWORD *)PathDescriptor + 1) |= *(_QWORD *)PathDescriptor & 0x18000820B8FLL;
          }
          v47 = a7 + 1;
          v48 = v47;
          ++a7;
          if ( v47 >= v87 )
            goto LABEL_49;
        }
        v46 = (_QWORD *)WdLogNewEntry5_WdError(v52, v51);
        v46[3] = v19;
        v46[4] = v41;
      }
      else
      {
LABEL_49:
        v62 = v84;
        for ( i = 0; ; ++i )
        {
          v64 = v62 ? *(_WORD *)(v62 + 20) : 0;
          if ( i >= v64 )
            break;
          v65 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v83, i);
          if ( (*(_QWORD *)v65 & 0x4000000000000LL) != 0 )
          {
            v62 = v84;
          }
          else
          {
            for ( j = i; ; ++j )
            {
              v62 = v84;
              v44 = v84 ? *(unsigned __int16 *)(v84 + 20) : 0LL;
              if ( j >= (unsigned __int16)v44 )
                break;
              v67 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v83, j);
              if ( CCD_TOPOLOGY::IsMatchingSource(v67, (const struct _LUID *)v65 + 2, *((_DWORD *)v65 + 6)) )
              {
                *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v83, j) + 46) = i | 0xFE540000;
                v68 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v83, j);
                *(_QWORD *)v68 |= 0x4000000000000uLL;
              }
            }
          }
        }
        v70 = 0;
        if ( DxgkGetGlobalRawmodeFlag(v62, v44) )
          v70 = 0x20000;
        Current = DXGPROCESS::GetCurrent(0x20000LL, v69);
        v72 = a13;
        v73 = v70 | 0x8000000;
        if ( !*((_BYTE *)Current + 346) )
          v73 = v70;
        v74 = v73 | 0x40000;
        if ( (int)BmlGetPathModalityForAdapterWithCoreAccessHeld(v84, (__int64)a2, 1, 2, v74, (__int64)a13) >= 0 )
          goto LABEL_79;
        for ( k = 0; k < v87; ++k )
        {
          v76 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v83, k);
          if ( *((_DWORD *)v76 + 6) == (_DWORD)v25 )
            *((_QWORD *)v76 + 1) &= ~2uLL;
        }
        PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                     v84,
                                                     (__int64)a2,
                                                     1,
                                                     2,
                                                     v74,
                                                     (__int64)v72);
        v41 = PathModalityForAdapterWithCoreAccessHeld;
        DxgkLogCodePointPacket(
          0x1Eu,
          PathModalityForAdapterWithCoreAccessHeld,
          a8 + (v25 & 0xFFFF0000),
          0,
          *(_QWORD *)(a2 + 316));
        if ( (int)v41 >= 0 )
        {
LABEL_79:
          memset(&v85, 0, sizeof(v85));
          LODWORD(v41) = RetrievePinnedModeForTarget(v89, *v72, a10, &v85);
          if ( (int)v41 < 0 )
          {
            v82 = WdLogNewEntry5_WdAssertion(v81, v80);
            *(_QWORD *)(v82 + 24) = 4292LL;
            WdLogEvent5_WdAssertion(v82);
            a1[8](a2, *v72);
            *v72 = 0LL;
          }
          else
          {
            DmmCalculatePresentationVSync(&v85.VideoSignalInfo, (struct _D3DDDI_RATIONAL *)&v23[2]);
            v23[1].Denominator = DmmMapVSyncFromRationalToInteger(
                                   v23 + 2,
                                   (unsigned int)((int)(*(_DWORD *)&v85.VideoSignalInfo.AdditionalSignalInfo << 29) >> 29),
                                   0LL);
          }
          goto LABEL_82;
        }
        v46 = (_QWORD *)WdLogNewEntry5_WdError(v79, v78);
        v46[3] = v41;
      }
    }
    else
    {
      v46 = (_QWORD *)WdLogNewEntry5_WdError(v45, v44);
      v46[3] = v25;
      v46[4] = v19;
      v46[5] = v41;
    }
LABEL_54:
    WdLogEvent5_WdError(v46);
  }
  else
  {
    v40 = WdLogNewEntry5_WdLowResource(v36, v35, v37, v38);
    *(_QWORD *)(v40 + 24) = v87;
    WdLogEvent5_WdLowResource(v40);
    LODWORD(v41) = -1073741801;
  }
LABEL_82:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v83);
  return (unsigned int)v41;
}
