/*
 * XREFs of ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0146E2C
 * Callers:
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C00DCFB0 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C0145CCC (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014AF68 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C000CE58 (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00F58E0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0111200 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01165A8 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C014750C (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C0148944 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C014A9F4 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateCddAllocations(
        ADAPTER_DISPLAY *this,
        struct _DXGK_ALLOCATIONINFO *a2,
        unsigned int a3,
        const struct _D3DKMT_DISPLAYMODE *a4,
        struct COREDEVICEACCESS *a5)
{
  struct COREDEVICEACCESS *v5; // r15
  __int64 v7; // r13
  const struct _D3DKMT_DISPLAYMODE *v9; // rsi
  PERESOURCE *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v14; // rcx
  __int64 v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct DXGPROCESS *v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 (__fastcall *v23)(); // r8
  _DWORD *v24; // rcx
  bool v25; // r13
  UINT Width; // ecx
  UINT Height; // edx
  int StandardAllocation; // eax
  __int64 v29; // rcx
  __int64 v30; // r15
  __int64 v31; // rax
  unsigned int v32; // eax
  __int64 v33; // r12
  __int64 v34; // rsi
  DXGPUSHLOCK *v35; // rdi
  unsigned int *v36; // r13
  unsigned int v37; // r15d
  __int64 v38; // rax
  __int64 v39; // r8
  int v40; // ecx
  __int64 v41; // rax
  __int64 v42; // r15
  __int64 v43; // rax
  ADAPTER_RENDER *v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r15
  UINT v49; // ecx
  UINT v50; // edx
  D3DDDIFORMAT Format; // eax
  int v52; // r13d
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  int v57; // ecx
  struct DXGPROCESS *v58; // r12
  unsigned int v59; // r14d
  __int64 v60; // rax
  __int64 v61; // r8
  int v62; // ecx
  __int64 v63; // rax
  __int64 v64; // r14
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rcx
  void *v76; // rax
  ADAPTER_RENDER *Size; // rcx
  int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r15
  _QWORD *v83; // rax
  int v84; // eax
  __int64 v85; // rcx
  _QWORD *v86; // rax
  _QWORD *v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  int v90; // eax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  _QWORD *v94; // rax
  _QWORD *v95; // rax
  __int64 v96; // rax
  unsigned int v97; // eax
  __int64 v98; // rdi
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rax
  int v105; // ecx
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rax
  char v109; // [rsp+30h] [rbp-D0h]
  char v110; // [rsp+31h] [rbp-CFh]
  bool v111; // [rsp+32h] [rbp-CEh]
  int v112; // [rsp+34h] [rbp-CCh]
  __int128 v114; // [rsp+40h] [rbp-C0h] BYREF
  struct COREDEVICEACCESS *v115; // [rsp+50h] [rbp-B0h]
  struct DXGPROCESS *v116; // [rsp+58h] [rbp-A8h]
  struct _DXGKARG_DESCRIBEALLOCATION v117; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v118; // [rsp+98h] [rbp-68h]
  const struct _D3DKMT_DISPLAYMODE *v119; // [rsp+A0h] [rbp-60h]
  _QWORD v120[54]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v121; // [rsp+260h] [rbp+160h] BYREF
  _DWORD v122[3]; // [rsp+270h] [rbp+170h] BYREF
  D3DDDI_RATIONAL RefreshRate; // [rsp+27Ch] [rbp+17Ch]
  int v124; // [rsp+284h] [rbp+184h]

  v5 = a5;
  v7 = a3;
  v115 = a5;
  v119 = a4;
  v9 = a4;
  v114 = 0LL;
  memset(v120, 0, 0x1A8uLL);
  v10 = (PERESOURCE *)*((_QWORD *)this + 2);
  v112 = 0;
  memset(&v117, 0, sizeof(v117));
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(v10)
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a2->Size + 16)) )
  {
    v71 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v71 + 24) = 739LL;
    WdLogEvent5_WdAssertion(v71);
  }
  Current = DXGPROCESS::GetCurrent(v12, v11);
  v14 = *((_QWORD *)this + 14);
  v15 = v7;
  v16 = 3968 * v7;
  v116 = Current;
  *(_QWORD *)&v121 = v7;
  v118 = 3968 * v7;
  if ( !DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)(3968 * v7 + v14)) )
  {
    v72 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v72 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v72 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v72);
    return 3221225485LL;
  }
  v19 = DXGPROCESS::GetCurrent(v18, v17);
  v20 = *((_QWORD *)this + 14);
  v21 = **(_QWORD **)(v20 + v16 + 24);
  v22 = *(_QWORD *)(v21 + 18632);
  if ( *((_QWORD *)v19 + 7) != v22 )
  {
    v73 = WdLogNewEntry5_WdAssertion(v22, v21);
    *(_QWORD *)(v73 + 24) = 759LL;
    WdLogEvent5_WdAssertion(v73);
    v20 = *((_QWORD *)this + 14);
  }
  if ( *(_QWORD *)(v20 + v16 + 88) )
  {
    if ( !*(_QWORD *)(v20 + v16 + 600) )
    {
      v74 = WdLogNewEntry5_WdAssertion(v22, v21);
      *(_QWORD *)(v74 + 24) = 766LL;
      WdLogEvent5_WdAssertion(v74);
      v20 = *((_QWORD *)this + 14);
    }
    v75 = *(_QWORD *)(*(_QWORD *)(v20 + v16 + 88) + 48LL);
    if ( (*(_DWORD *)(v75 + 4) & 0x10) == 0 )
    {
      v76 = *(void **)(v75 + 16);
      Size = (ADAPTER_RENDER *)a2->Size;
      v117.hAllocation = v76;
      v78 = ADAPTER_RENDER::DdiDescribeAllocation(Size, &v117, v20);
      v82 = v78;
      if ( v78 >= 0 )
      {
        if ( v117.Width == v9->Width
          && v117.Height == v9->Height
          && v117.Format == D3DDDIFMT_A8R8G8B8
          && v117.RefreshRate.Numerator == v9->RefreshRate.Numerator
          && v117.RefreshRate.Denominator == v9->RefreshRate.Denominator
          && *(_DWORD *)(*((_QWORD *)this + 14) + v16 + 1040) == v9->DisplayOrientation )
        {
          return 0LL;
        }
      }
      else
      {
        v83 = (_QWORD *)WdLogNewEntry5_WdWarning(v80, v79, v81);
        v83[3] = a2;
        v83[4] = *(_QWORD *)(*((_QWORD *)this + 14) + v16 + 88);
        v83[5] = v7;
        v83[6] = v82;
        WdLogEvent5_WdWarning(v83);
      }
    }
    v84 = ADAPTER_DISPLAY::DestroyCddAllocations(this, (struct DXGDEVICE *)a2, v7);
    v30 = v84;
    if ( v84 < 0 )
    {
      v86 = (_QWORD *)WdLogNewEntry5_WdError(v85, v21);
      v86[3] = a2;
      v86[4] = v7;
      v86[5] = v30;
      WdLogEvent5_WdError(v86);
      return (unsigned int)v30;
    }
    v88 = *((_QWORD *)this + 14);
    if ( *(_QWORD *)(v88 + v16 + 88) || *(_QWORD *)(v88 + v16 + 600) )
    {
      v89 = WdLogNewEntry5_WdAssertion(v85, v21);
      *(_QWORD *)(v89 + 24) = 819LL;
      WdLogEvent5_WdAssertion(v89);
    }
    v5 = v115;
  }
  v23 = DxgkCreateDoDPrimarySection;
  v24 = *(_DWORD **)(a2->Size + 16);
  if ( a2[21].pPrivateDriverData == v24 || (a2[21].Size & 0x10000000000LL) != 0 )
  {
    v25 = 0;
    v109 = 1;
    v111 = 0;
  }
  else
  {
    v109 = 0;
    v25 = (v24[87] & 0x10) != 0;
    v111 = v25;
    if ( (v24[87] & 0x10) == 0 )
    {
      v110 = 1;
      goto LABEL_28;
    }
  }
  v120[1] = 0LL;
  Width = v9->Width;
  Height = v9->Height;
  v124 = v15;
  RefreshRate = v9->RefreshRate;
  v120[3] = v122;
  v110 = 0;
  v122[0] = Width;
  v122[1] = Height;
  v122[2] = 21;
  v120[0] = 2049LL;
  LODWORD(v120[2]) = 1;
  if ( v25 )
  {
    if ( *((_BYTE *)this + 249) || ((v9->DisplayOrientation - 2) & 0xFFFFFFFD) != 0 )
    {
      v90 = Height * Width;
      Height = Width;
      DWORD1(v114) = 4 * v90;
    }
    else
    {
      DWORD1(v114) = 4 * Height * Width;
    }
    v120[4] = DxgkCreateDoDPrimarySection;
    v120[5] = &v114;
    v112 = 4 * Height;
  }
  StandardAllocation = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v120, v5);
  v30 = StandardAllocation;
  if ( StandardAllocation >= 0 )
  {
    if ( !LODWORD(v120[1]) )
    {
      v91 = WdLogNewEntry5_WdAssertion(v29, v21);
      *(_QWORD *)(v91 + 24) = 903LL;
      WdLogEvent5_WdAssertion(v91);
    }
    if ( !HIDWORD(v120[1]) )
    {
      v92 = WdLogNewEntry5_WdAssertion(v29, v21);
      *(_QWORD *)(v92 + 24) = 905LL;
      WdLogEvent5_WdAssertion(v92);
    }
    v31 = *((_QWORD *)this + 2);
    if ( *(int *)(v31 + 2328) >= 0x2000 )
      v32 = *(_DWORD *)(v31 + 280);
    else
      v32 = 1;
    if ( !v32 )
    {
LABEL_28:
      v43 = *((_QWORD *)this + 14);
      if ( v109 )
      {
        v44 = (ADAPTER_RENDER *)a2->Size;
        v117.hAllocation = *(HANDLE *)(*(_QWORD *)(*(_QWORD *)(v16 + v43 + 88) + 48LL) + 16LL);
        v45 = ADAPTER_RENDER::DdiDescribeAllocation(v44, &v117, (__int64)v23);
        v48 = v45;
        if ( v45 >= 0 )
        {
          *(D3DDDI_MULTISAMPLINGMETHOD *)(*((_QWORD *)this + 14) + v16 + 1056) = v117.MultisampleMethod;
          *(_DWORD *)(*((_QWORD *)this + 14) + v16 + 1064) = v117.PrivateDriverFormatAttribute;
LABEL_31:
          if ( v25 )
          {
            v105 = v114;
            if ( !(_DWORD)v114 || !*((_QWORD *)&v114 + 1) )
            {
              v106 = WdLogNewEntry5_WdAssertion((unsigned int)v114, v21);
              *(_QWORD *)(v106 + 24) = 1101LL;
              WdLogEvent5_WdAssertion(v106);
              v105 = v114;
            }
            *(_DWORD *)(*((_QWORD *)this + 14) + v16 + 612) = v105;
            *(_QWORD *)(*((_QWORD *)this + 14) + v16 + 616) = *((_QWORD *)&v114 + 1);
            v107 = *((_QWORD *)this + 14);
            *(_QWORD *)(v107 + v16 + 600) = *(_QWORD *)(v107 + v16 + 88);
            if ( !v112 )
            {
              v108 = WdLogNewEntry5_WdAssertion(v107, v21);
              *(_QWORD *)(v108 + 24) = 1114LL;
              WdLogEvent5_WdAssertion(v108);
            }
            *(_DWORD *)(*((_QWORD *)this + 14) + v16 + 608) = v112;
            goto LABEL_50;
          }
          v121 = 0LL;
          if ( *((_BYTE *)this + 249) || ((v9->DisplayOrientation - 2) & 0xFFFFFFFD) != 0 )
          {
            v49 = v9->Width;
            v50 = v9->Height;
          }
          else
          {
            v49 = v9->Height;
            v50 = v9->Width;
          }
          Format = v9->Format;
          v120[0] = 0LL;
          v120[3] = &v121;
          *(_QWORD *)((char *)&v121 + 4) = __PAIR64__(Format, v50);
          LODWORD(v121) = v49;
          LODWORD(v120[2]) = 2;
          if ( v110 )
          {
            LODWORD(v120[0]) = 2049;
            v52 = 4 * v49;
            v120[4] = DxgkCreateDoDPrimarySection;
            v120[5] = &v114;
            DWORD1(v114) = 4 * v50 * v49;
          }
          else
          {
            v52 = v112;
          }
          v53 = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v120, v115);
          v30 = v53;
          if ( v53 >= 0 )
          {
            if ( !HIDWORD(v120[6]) || !LODWORD(v120[1]) )
            {
              v100 = WdLogNewEntry5_WdAssertion(v55, v54);
              *(_QWORD *)(v100 + 24) = 1055LL;
              WdLogEvent5_WdAssertion(v100);
            }
            v57 = HIDWORD(v121);
            if ( !HIDWORD(v121) )
            {
              v101 = WdLogNewEntry5_WdAssertion(0LL, v54);
              *(_QWORD *)(v101 + 24) = 1060LL;
              WdLogEvent5_WdAssertion(v101);
              v57 = HIDWORD(v121);
            }
            v58 = v116;
            *(_DWORD *)(*((_QWORD *)this + 14) + v16 + 608) = v57;
            v59 = HIDWORD(v120[6]);
            DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v58 + 208));
            v60 = (v59 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v60 < *((_DWORD *)v58 + 64) )
            {
              v61 = *((_QWORD *)v58 + 30);
              v62 = *(_DWORD *)(v61 + 16 * v60 + 8);
              if ( ((v59 >> 25) & 0x60) == (*(_BYTE *)(v61 + 16 * v60 + 8) & 0x60)
                && (v62 & 0x2000) == 0
                && (v62 & 0x1F) != 0 )
              {
                v70 = v62 & 0x1F;
                if ( (_BYTE)v70 == 5 )
                {
                  v64 = *(_QWORD *)(v61 + 16LL * (unsigned int)v60);
                  goto LABEL_47;
                }
                v63 = WdLogNewEntry5_WdError(v70, 2LL * (unsigned int)v60);
                *(_QWORD *)(v63 + 24) = 267LL;
                WdLogEvent5_WdError(v63);
              }
            }
            v64 = 0LL;
LABEL_47:
            ExReleasePushLockSharedEx((char *)v58 + 208, 0LL);
            KeLeaveCriticalRegion();
            *(_QWORD *)(*((_QWORD *)this + 14) + v16 + 600) = v64;
            v67 = *((_QWORD *)this + 14);
            if ( !*(_QWORD *)(v67 + v16 + 600) )
            {
              v102 = WdLogNewEntry5_WdAssertion(v66, v65);
              *(_QWORD *)(v102 + 24) = 1064LL;
              WdLogEvent5_WdAssertion(v102);
              v67 = *((_QWORD *)this + 14);
            }
            *(_DWORD *)(v67 + v16 + 612) = 0;
            *(_QWORD *)(*((_QWORD *)this + 14) + v16 + 616) = 0LL;
            if ( v110 )
            {
              if ( (_DWORD)v114 && *((_QWORD *)&v114 + 1) )
              {
                *(_DWORD *)(*((_QWORD *)this + 14) + v16 + 612) = v114;
                *(_QWORD *)(*((_QWORD *)this + 14) + v16 + 616) = *((_QWORD *)&v114 + 1);
              }
              v103 = *((_QWORD *)this + 14);
              *(_QWORD *)(v103 + v16 + 88) = *(_QWORD *)(v103 + v16 + 600);
              if ( !v52 )
              {
                v104 = WdLogNewEntry5_WdAssertion(v103, v65);
                *(_QWORD *)(v104 + 24) = 1090LL;
                WdLogEvent5_WdAssertion(v104);
              }
              *(_DWORD *)(*((_QWORD *)this + 14) + v16 + 608) = v52;
            }
LABEL_50:
            if ( *(_DWORD *)(*((_QWORD *)this + 14) + v16 + 696) == 1 )
              ADAPTER_DISPLAY::RemoveVidPnOwnership(this, a3);
            ADAPTER_DISPLAY::SetCddDisplayMode((PERESOURCE **)this, a3, v9);
            return 0LL;
          }
          v95 = (_QWORD *)WdLogNewEntry5_WdWarning(v55, v54, v56);
          v95[3] = (unsigned int)v121;
          v95[4] = DWORD1(v121);
          v95[5] = a2;
          v95[6] = v15;
          v95[7] = v30;
          WdLogEvent5_WdWarning(v95);
          if ( v109 )
          {
            DXGDEVICE::DestroyAllocationInternal(
              (DXGDEVICE *)a2,
              0,
              0LL,
              *(struct DXGRESOURCE **)(*(_QWORD *)(*((_QWORD *)this + 14) + v16 + 88) + 40LL),
              0LL,
              DXGDEVICE::DestroyFlagsDefault);
            v96 = *((_QWORD *)this + 2);
            v97 = *(int *)(v96 + 2328) < 0x2000 ? 1 : *(_DWORD *)(v96 + 280);
            if ( v97 )
            {
              v98 = v16 + 88;
              v99 = v97;
              do
              {
                *(_QWORD *)(v98 + *((_QWORD *)this + 14)) = 0LL;
                v98 += 8LL;
                --v99;
              }
              while ( v99 );
            }
          }
          return (unsigned int)v30;
        }
        v94 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v21, v47);
        v94[3] = a2;
        v94[4] = *(_QWORD *)(*((_QWORD *)this + 14) + v16 + 88);
        v94[5] = v15;
        v94[6] = v48;
        WdLogEvent5_WdWarning(v94);
        *(_DWORD *)(*((_QWORD *)this + 14) + v16 + 1056) = 1;
      }
      else
      {
        *(_DWORD *)(v16 + v43 + 1056) = 1;
      }
      *(_DWORD *)(*((_QWORD *)this + 14) + v16 + 1060) = 1;
      *(_DWORD *)(*((_QWORD *)this + 14) + v16 + 1064) = 0;
      goto LABEL_31;
    }
    v33 = v16 + 88;
    v34 = v32;
    v35 = (struct DXGPROCESS *)((char *)v116 + 208);
    v36 = (unsigned int *)&v120[6] + 1;
    while ( 1 )
    {
      v37 = *v36;
      DXGPUSHLOCK::AcquireShared(v35);
      v38 = (v37 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v38 < *((_DWORD *)v116 + 64) )
      {
        v39 = *((_QWORD *)v116 + 30);
        v40 = *(_DWORD *)(v39 + 16 * v38 + 8);
        if ( ((v37 >> 25) & 0x60) == (*(_BYTE *)(v39 + 16 * v38 + 8) & 0x60) && (v40 & 0x2000) == 0 && (v40 & 0x1F) != 0 )
        {
          v69 = v40 & 0x1F;
          if ( (_BYTE)v69 == 5 )
          {
            v42 = *(_QWORD *)(v39 + 16LL * (unsigned int)v38);
            goto LABEL_24;
          }
          v41 = WdLogNewEntry5_WdError(v69, 2LL * (unsigned int)v38);
          *(_QWORD *)(v41 + 24) = 267LL;
          WdLogEvent5_WdError(v41);
        }
      }
      v42 = 0LL;
LABEL_24:
      ExReleasePushLockSharedEx(v35, 0LL);
      KeLeaveCriticalRegion();
      *(_QWORD *)(v33 + *((_QWORD *)this + 14)) = v42;
      if ( (a2[21].Size & 0x10000000000LL) != 0 )
      {
        v93 = *(_QWORD *)(*(_QWORD *)(v33 + *((_QWORD *)this + 14)) + 48LL);
        *(_DWORD *)(v93 + 4) |= 2u;
      }
      v33 += 8LL;
      ++v36;
      if ( !--v34 )
      {
        v16 = v118;
        v9 = v119;
        v15 = v121;
        v25 = v111;
        goto LABEL_28;
      }
    }
  }
  v87 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v21, v23);
  v87[3] = v9->Width;
  v87[4] = v9->Height;
  v87[5] = a2;
  v87[6] = v15;
  v87[7] = v30;
  WdLogEvent5_WdWarning(v87);
  return (unsigned int)v30;
}
