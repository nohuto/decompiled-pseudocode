/*
 * XREFs of ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C015A9DC
 * Callers:
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C015A878 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E8324 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03A3518 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C001F210 (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0179C10 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019EA90 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C01C43A4 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C01C77B4 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01C8BD0 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01CF87C (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateCddAllocations(
        ADAPTER_DISPLAY *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        const struct _D3DKMT_DISPLAYMODE *a4,
        struct COREDEVICEACCESS *a5)
{
  __int64 v6; // r15
  const struct _D3DKMT_DISPLAYMODE *v8; // r14
  PERESOURCE *v9; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rdi
  struct DXGPROCESS *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rcx
  char v17; // r8
  D3DDDI_RATIONAL RefreshRate; // rax
  UINT Width; // ecx
  UINT Height; // edx
  int StandardAllocation; // eax
  __int64 v22; // r15
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // r13
  DXGPUSHLOCK *v26; // rcx
  __int64 v27; // rdi
  unsigned int *v28; // r14
  char v29; // r15
  __int64 v30; // rax
  ADAPTER_RENDER *v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  UINT v34; // edx
  UINT v35; // ecx
  D3DDDIFORMAT Format; // eax
  int v37; // eax
  int v38; // ecx
  __int64 v39; // rax
  __int64 v41; // rcx
  void *v42; // rax
  ADAPTER_RENDER *v43; // rcx
  int v44; // eax
  int v45; // eax
  __int64 v46; // rax
  int v47; // eax
  unsigned int v48; // r15d
  __int64 v49; // rax
  __int64 v50; // r8
  int v51; // ecx
  __int64 v52; // r15
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned int v55; // eax
  __int64 v56; // rdi
  __int64 v57; // rcx
  struct DXGPROCESS *v58; // r13
  unsigned int v59; // esi
  __int64 v60; // rax
  __int64 v61; // r8
  int v62; // ecx
  __int64 v63; // rsi
  int v64; // esi
  int v65; // ecx
  char v66; // [rsp+50h] [rbp-B0h]
  char v67; // [rsp+51h] [rbp-AFh]
  char v68; // [rsp+52h] [rbp-AEh]
  int v69; // [rsp+54h] [rbp-ACh]
  __int128 v71; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGPROCESS *v72; // [rsp+70h] [rbp-90h]
  DXGPUSHLOCK *v73; // [rsp+78h] [rbp-88h]
  struct COREDEVICEACCESS *v74; // [rsp+80h] [rbp-80h]
  _DXGKARG_DESCRIBEALLOCATION v75; // [rsp+88h] [rbp-78h] BYREF
  __int64 v76; // [rsp+B8h] [rbp-48h]
  const struct _D3DKMT_DISPLAYMODE *v77; // [rsp+C0h] [rbp-40h]
  _QWORD v78[54]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v79; // [rsp+280h] [rbp+180h] BYREF
  _DWORD v80[3]; // [rsp+290h] [rbp+190h] BYREF
  D3DDDI_RATIONAL v81; // [rsp+29Ch] [rbp+19Ch]
  int v82; // [rsp+2A4h] [rbp+1A4h]

  v6 = a3;
  v74 = a5;
  v77 = a4;
  v8 = a4;
  v71 = 0LL;
  memset(v78, 0, 0x1A8uLL);
  v9 = (PERESOURCE *)*((_QWORD *)this + 2);
  memset(&v75, 0, sizeof(v75));
  v69 = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(v9)
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 781LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsCoreResourceExclusiveOwner() && pCddDevice->GetRenderAdapter()->IsCoreResourceExclusiveOwner()",
      781LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent();
  v11 = *((_QWORD *)this + 16);
  v12 = v6;
  v13 = 4000 * v6;
  v72 = Current;
  *(_QWORD *)&v79 = v6;
  v76 = 4000 * v6;
  if ( !DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)(4000 * v6 + v11)) )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 2), -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Current adapter 0x%I64x is no owned by current session, returning 0x%I64x.",
      *((_QWORD *)this + 2),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v14 = DXGPROCESS::GetCurrent();
  v15 = *((_QWORD *)this + 16);
  if ( *((_QWORD *)v14 + 7) != *(_QWORD *)(**(_QWORD **)(v15 + v13 + 24) + 18648LL) )
  {
    WdLogSingleEntry1(1LL, 801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGPROCESS::GetCurrent()->GetEProcess() == m_pDisplaySource[VidPnSourceId].m_SessionAdapterOwner->GetOwne"
                "dSession().GetEProcessCSRSS()",
      801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v15 = *((_QWORD *)this + 16);
  }
  if ( *(_QWORD *)(v15 + v13 + 88) )
  {
    if ( !*(_QWORD *)(v15 + v13 + 600) )
    {
      WdLogSingleEntry1(1LL, 808LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_pDisplaySource[VidPnSourceId].m_pCddShadowAllocation != NULL",
        808LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v15 = *((_QWORD *)this + 16);
    }
    v41 = *(_QWORD *)(*(_QWORD *)(v15 + v13 + 88) + 48LL);
    if ( (*(_DWORD *)(v41 + 4) & 0x10) == 0 )
    {
      v42 = *(void **)(v41 + 16);
      v43 = (ADAPTER_RENDER *)*((_QWORD *)a2 + 2);
      v75.hAllocation = v42;
      v44 = ADAPTER_RENDER::DdiDescribeAllocation(v43, &v75);
      if ( v44 >= 0 )
      {
        if ( v75.Width == v8->Width
          && v75.Height == v8->Height
          && v75.Format == D3DDDIFMT_A8R8G8B8
          && v75.RefreshRate.Numerator == v8->RefreshRate.Numerator
          && v75.RefreshRate.Denominator == v8->RefreshRate.Denominator
          && *(_DWORD *)(*((_QWORD *)this + 16) + v13 + 1036) == v8->DisplayOrientation )
        {
          return 0LL;
        }
      }
      else
      {
        WdLogSingleEntry4(3LL, a2, *(_QWORD *)(*((_QWORD *)this + 16) + v13 + 88), v6, v44);
      }
    }
    v45 = ADAPTER_DISPLAY::DestroyCddAllocations(this, a2, v6);
    v22 = v45;
    if ( v45 < 0 )
    {
      WdLogSingleEntry3(2LL, a2, v12, v45);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to destroy the existing CDD allocations on DXGDEVICE 0x%I64x VidPn source 0x%I64x (Status = 0x%I64x).",
        (__int64)a2,
        v12,
        v22,
        0LL,
        0LL);
      return (unsigned int)v22;
    }
    v46 = *((_QWORD *)this + 16);
    if ( *(_QWORD *)(v46 + v13 + 88) || *(_QWORD *)(v46 + v13 + 600) )
    {
      WdLogSingleEntry1(1LL, 861LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(m_pDisplaySource[VidPnSourceId].m_pCddPrimaryAllocation[0] == NULL) && (m_pDisplaySource[VidPnSourceId"
                  "].m_pCddShadowAllocation == NULL)",
        861LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    LODWORD(v6) = v12;
  }
  v16 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  if ( *((_QWORD *)a2 + 231) == v16 || (*((_BYTE *)a2 + 1869) & 1) != 0 )
  {
    v67 = 1;
    v17 = 0;
    goto LABEL_9;
  }
  v67 = 0;
  if ( (*(_DWORD *)(v16 + 436) & 0x10) != 0 )
  {
    v17 = 1;
LABEL_9:
    RefreshRate = v8->RefreshRate;
    v78[1] = 0LL;
    Width = v8->Width;
    Height = v8->Height;
    v81 = RefreshRate;
    v78[3] = v80;
    v66 = v17;
    v68 = 0;
    v82 = v6;
    v80[0] = Width;
    v80[1] = Height;
    v80[2] = 21;
    v78[0] = 2049LL;
    LODWORD(v78[2]) = 1;
    if ( v17 )
    {
      if ( *((_BYTE *)this + 289) || ((v8->DisplayOrientation - 2) & 0xFFFFFFFD) != 0 )
      {
        v47 = 4 * Width;
        DWORD1(v71) = 4 * Width * Height;
      }
      else
      {
        v47 = 4 * Height;
        DWORD1(v71) = 4 * Height * Width;
      }
      v69 = v47;
      v78[5] = &v71;
      v78[4] = DxgkCreateDoDPrimarySection;
    }
    StandardAllocation = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v78, v74);
    LODWORD(v22) = StandardAllocation;
    if ( StandardAllocation < 0 )
    {
      WdLogSingleEntry5(3LL, v8->Width, v8->Height, a2, v12, StandardAllocation);
      return (unsigned int)v22;
    }
    if ( !LODWORD(v78[1]) )
    {
      WdLogSingleEntry1(1LL, 945LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"NULL != CreateStandardAlloc.hResource",
        945LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !HIDWORD(v78[1]) )
    {
      WdLogSingleEntry1(1LL, 947LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"0 != CreateStandardAlloc.hGlobalShare",
        947LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v23 = *((_QWORD *)this + 2);
    if ( *(int *)(v23 + 2424) < 0x2000 )
    {
      v24 = 1;
    }
    else
    {
      v24 = *(_DWORD *)(v23 + 288);
      if ( !v24 )
      {
LABEL_22:
        v29 = v66;
        goto LABEL_23;
      }
    }
    v25 = v13 + 88;
    v26 = (struct DXGPROCESS *)((char *)v72 + 248);
    v27 = v24;
    v73 = (struct DXGPROCESS *)((char *)v72 + 248);
    v28 = (unsigned int *)&v78[6] + 1;
    do
    {
      v48 = *v28;
      DXGPUSHLOCK::AcquireShared(v26);
      v49 = (v48 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v49 < *((_DWORD *)v72 + 74)
        && (v50 = *((_QWORD *)v72 + 35),
            v51 = *(_DWORD *)(v50 + 16 * v49 + 8),
            ((v48 >> 25) & 0x60) == (*(_BYTE *)(v50 + 16 * v49 + 8) & 0x60))
        && (v51 & 0x2000) == 0
        && (v51 & 0x1F) != 0 )
      {
        if ( (v51 & 0x1F) == 5 )
        {
          v52 = *(_QWORD *)(v50 + 16LL * (unsigned int)v49);
        }
        else
        {
          WdLogSingleEntry1(2LL, 267LL);
          v52 = 0LL;
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      else
      {
        v52 = 0LL;
      }
      ExReleasePushLockSharedEx(v73, 0LL);
      KeLeaveCriticalRegion();
      *(_QWORD *)(*((_QWORD *)this + 16) + v25) = v52;
      if ( (*((_BYTE *)a2 + 1869) & 1) != 0 )
      {
        v53 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 16) + v25) + 48LL);
        *(_DWORD *)(v53 + 4) |= 2u;
      }
      v26 = v73;
      v25 += 8LL;
      ++v28;
      --v27;
    }
    while ( v27 );
    v13 = v76;
    v8 = v77;
    v12 = v79;
    goto LABEL_22;
  }
  v68 = 1;
  v29 = 0;
LABEL_23:
  v30 = *((_QWORD *)this + 16);
  if ( !v67 )
  {
    *(_DWORD *)(v13 + v30 + 1052) = 1;
    goto LABEL_84;
  }
  v31 = (ADAPTER_RENDER *)*((_QWORD *)a2 + 2);
  v75.hAllocation = *(HANDLE *)(*(_QWORD *)(*(_QWORD *)(v13 + v30 + 88) + 48LL) + 16LL);
  v32 = ADAPTER_RENDER::DdiDescribeAllocation(v31, &v75);
  v33 = *((_QWORD *)this + 16);
  if ( v32 < 0 )
  {
    WdLogSingleEntry4(3LL, a2, *(_QWORD *)(v13 + v33 + 88), v12, v32);
    *(_DWORD *)(*((_QWORD *)this + 16) + v13 + 1052) = 1;
LABEL_84:
    *(_DWORD *)(*((_QWORD *)this + 16) + v13 + 1056) = 1;
    *(_DWORD *)(*((_QWORD *)this + 16) + v13 + 1060) = 0;
    goto LABEL_26;
  }
  *(D3DDDI_MULTISAMPLINGMETHOD *)(v13 + v33 + 1052) = v75.MultisampleMethod;
  *(_DWORD *)(*((_QWORD *)this + 16) + v13 + 1060) = v75.PrivateDriverFormatAttribute;
LABEL_26:
  if ( v29 )
  {
    v65 = v71;
    if ( !(_DWORD)v71 || !*((_QWORD *)&v71 + 1) )
    {
      WdLogSingleEntry1(1LL, 1143LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(SectionCreationInfo.Size != 0) && (SectionCreationInfo.Section != NULL)",
        1143LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v65 = v71;
    }
    v64 = v69;
    *(_DWORD *)(*((_QWORD *)this + 16) + v13 + 612) = v65;
    *(_QWORD *)(*((_QWORD *)this + 16) + v13 + 616) = *((_QWORD *)&v71 + 1);
    *(_QWORD *)(*((_QWORD *)this + 16) + v13 + 600) = *(_QWORD *)(*((_QWORD *)this + 16) + v13 + 88);
    if ( !v69 )
    {
      WdLogSingleEntry1(1LL, 1156LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 != DoDShadowPitch", 1156LL, 0LL, 0LL, 0LL, 0LL);
    }
    goto LABEL_115;
  }
  v79 = 0LL;
  if ( *((_BYTE *)this + 289) || ((v8->DisplayOrientation - 2) & 0xFFFFFFFD) != 0 )
  {
    v34 = v8->Width;
    v35 = v8->Height;
  }
  else
  {
    v34 = v8->Height;
    v35 = v8->Width;
  }
  Format = v8->Format;
  v78[0] = 0LL;
  v78[3] = &v79;
  *(_QWORD *)((char *)&v79 + 4) = __PAIR64__(Format, v35);
  LODWORD(v79) = v34;
  LODWORD(v78[2]) = 2;
  if ( v68 )
  {
    LODWORD(v78[0]) = 2049;
    v69 = 4 * v34;
    v78[4] = DxgkCreateDoDPrimarySection;
    v78[5] = &v71;
    DWORD1(v71) = 4 * v34 * v35;
  }
  v37 = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v78, v74);
  LODWORD(v22) = v37;
  if ( v37 >= 0 )
  {
    if ( !HIDWORD(v78[6]) || !LODWORD(v78[1]) )
    {
      WdLogSingleEntry1(1LL, 1097LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(NULL != CreateStandardAlloc.hAllocation[0]) && (NULL != CreateStandardAlloc.hResource)",
        1097LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v38 = HIDWORD(v79);
    if ( !HIDWORD(v79) )
    {
      WdLogSingleEntry1(1LL, 1102LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 != ShadowSurfaceData.Pitch", 1102LL, 0LL, 0LL, 0LL, 0LL);
      v38 = HIDWORD(v79);
    }
    v58 = v72;
    *(_DWORD *)(*((_QWORD *)this + 16) + v13 + 608) = v38;
    v59 = HIDWORD(v78[6]);
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v58 + 248));
    v60 = (v59 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v60 < *((_DWORD *)v58 + 74) )
    {
      v61 = *((_QWORD *)v58 + 35);
      v62 = *(_DWORD *)(v61 + 16 * v60 + 8);
      if ( ((v59 >> 25) & 0x60) == (*(_BYTE *)(v61 + 16 * v60 + 8) & 0x60) && (v62 & 0x2000) == 0 && (v62 & 0x1F) != 0 )
      {
        if ( (v62 & 0x1F) == 5 )
        {
          v63 = *(_QWORD *)(v61 + 16LL * (unsigned int)v60);
LABEL_36:
          ExReleasePushLockSharedEx((char *)v58 + 248, 0LL);
          KeLeaveCriticalRegion();
          *(_QWORD *)(*((_QWORD *)this + 16) + v13 + 600) = v63;
          v39 = *((_QWORD *)this + 16);
          if ( !*(_QWORD *)(v39 + v13 + 600) )
          {
            WdLogSingleEntry1(1LL, 1106LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_pDisplaySource[VidPnSourceId].m_pCddShadowAllocation != NULL",
              1106LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v39 = *((_QWORD *)this + 16);
          }
          *(_DWORD *)(v39 + v13 + 612) = 0;
          *(_QWORD *)(*((_QWORD *)this + 16) + v13 + 616) = 0LL;
          if ( !v68 )
            goto LABEL_39;
          if ( (_DWORD)v71 && *((_QWORD *)&v71 + 1) )
          {
            *(_DWORD *)(*((_QWORD *)this + 16) + v13 + 612) = v71;
            *(_QWORD *)(*((_QWORD *)this + 16) + v13 + 616) = *((_QWORD *)&v71 + 1);
          }
          v64 = v69;
          *(_QWORD *)(*((_QWORD *)this + 16) + v13 + 88) = *(_QWORD *)(*((_QWORD *)this + 16) + v13 + 600);
          if ( !v69 )
          {
            WdLogSingleEntry1(1LL, 1132LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 != DoDShadowPitch", 1132LL, 0LL, 0LL, 0LL, 0LL);
          }
LABEL_115:
          *(_DWORD *)(*((_QWORD *)this + 16) + v13 + 608) = v64;
LABEL_39:
          if ( *(_DWORD *)(*((_QWORD *)this + 16) + v13 + 736) == 1 )
            ADAPTER_DISPLAY::RemoveVidPnOwnership(this, a3);
          ADAPTER_DISPLAY::SetCddDisplayMode((PERESOURCE **)this, a3, v8);
          return 0LL;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v63 = 0LL;
    goto LABEL_36;
  }
  WdLogSingleEntry5(3LL, (unsigned int)v79, DWORD1(v79), a2, v12, v37);
  if ( !v67 )
    return (unsigned int)v22;
  DXGDEVICE::DestroyAllocationInternal(
    a2,
    0,
    0LL,
    *(struct DXGRESOURCE **)(*(_QWORD *)(*((_QWORD *)this + 16) + v13 + 88) + 40LL),
    0LL,
    DXGDEVICE::DestroyFlagsDefault);
  v54 = *((_QWORD *)this + 2);
  if ( *(int *)(v54 + 2424) < 0x2000 )
  {
    v55 = 1;
    goto LABEL_92;
  }
  v55 = *(_DWORD *)(v54 + 288);
  if ( v55 )
  {
LABEL_92:
    v56 = v13 + 88;
    v57 = v55;
    do
    {
      *(_QWORD *)(v56 + *((_QWORD *)this + 16)) = 0LL;
      v56 += 8LL;
      --v57;
    }
    while ( v57 );
  }
  return (unsigned int)v22;
}
