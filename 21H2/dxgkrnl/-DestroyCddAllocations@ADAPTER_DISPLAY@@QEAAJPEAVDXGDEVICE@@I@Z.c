/*
 * XREFs of ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C01C77B4
 * Callers:
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C015A9DC (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B85D0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C01C1110 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C01C770C (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C039CA5C (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03A3518 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019EA90 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C019F49C (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C01C43A4 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C01C66CC (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DestroyCddAllocations(ADAPTER_DISPLAY *this, struct DXGDEVICE *a2, unsigned int a3)
{
  __int64 v4; // r15
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // r14
  struct DXGALLOCATION *v20; // r8
  __int64 v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r8
  void *v27; // rcx

  v4 = a3;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2))
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 1203LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsCoreResourceExclusiveOwner() && pCddDevice->GetRenderAdapter()->IsCoreResourceExclusiveOwner()",
      1203LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = 4000 * v4;
  if ( DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)(4000 * v4 + *((_QWORD *)this + 16))) )
  {
    if ( *((_QWORD *)DXGPROCESS::GetCurrent(v8, v7, v9, v10) + 7) != *(_QWORD *)(**(_QWORD **)(v6
                                                                                             + *((_QWORD *)this + 16)
                                                                                             + 24)
                                                                               + 18648LL) )
    {
      WdLogSingleEntry1(1LL, 1220LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DXGPROCESS::GetCurrent()->GetEProcess() == m_pDisplaySource[VidPnSourceId].m_SessionAdapterOwner->GetOw"
                  "nedSession().GetEProcessCSRSS()",
        1220LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v11 = *((_QWORD *)this + 2);
    if ( *(int *)(v11 + 2424) < 0x2000 )
      v12 = 1;
    else
      v12 = *(_DWORD *)(v11 + 288);
    if ( *((_DWORD *)a2 + 144) == 4 )
    {
      if ( v12 )
      {
        v25 = v6 + 88;
        v26 = v12;
        do
        {
          *(_QWORD *)(v25 + *((_QWORD *)this + 16)) = 0LL;
          v25 += 8LL;
          --v26;
        }
        while ( v26 );
      }
      *(_QWORD *)(v6 + *((_QWORD *)this + 16) + 600) = 0LL;
      return 0LL;
    }
    v13 = *((_QWORD *)this + 16);
    if ( !*(_QWORD *)(v6 + v13 + 88) )
    {
LABEL_10:
      v14 = *((_QWORD *)this + 16);
      v15 = *(_QWORD *)(v6 + v14 + 600);
      if ( v15 )
      {
        if ( *((_QWORD *)a2 + 231) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) || (*((_BYTE *)a2 + 1869) & 1) != 0 )
        {
          DXGDEVICE::DestroyAllocationInternal(
            a2,
            0LL,
            0LL,
            *(struct DXGRESOURCE **)(v15 + 40),
            0LL,
            DXGDEVICE::DestroyFlagsDefault);
        }
        else
        {
          v27 = *(void **)(v6 + v14 + 616);
          if ( v27 )
          {
            ObfDereferenceObject(v27);
            *(_QWORD *)(v6 + *((_QWORD *)this + 16) + 616) = 0LL;
          }
        }
        *(_QWORD *)(v6 + *((_QWORD *)this + 16) + 600) = 0LL;
      }
      if ( *(_DWORD *)(*((_QWORD *)this + 2) + 200LL) == 1 )
        OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(*((struct _KTHREAD ***)this + 15), v4, 0LL, 0, 0, 1);
      return 0LL;
    }
    if ( v12 )
    {
      v17 = *((_QWORD *)this + 16);
      v18 = v12;
      v19 = v6 + 88;
      do
      {
        v20 = *(struct DXGALLOCATION **)(v19 + v13);
        if ( v20 )
        {
          ADAPTER_DISPLAY::DisablePrimaryAllocation((PERESOURCE **)this, a2, v20);
          v13 = *((_QWORD *)this + 16);
          v17 = v13;
        }
        v19 += 8LL;
        --v18;
      }
      while ( v18 );
      v13 = v17;
    }
    DXGDEVICE::DestroyAllocationInternal(
      a2,
      0LL,
      0LL,
      *(struct DXGRESOURCE **)(*(_QWORD *)(v6 + v13 + 88) + 40LL),
      0LL,
      DXGDEVICE::DestroyFlagsDefault);
    v21 = *((_QWORD *)this + 2);
    if ( *(int *)(v21 + 2424) < 0x2000 )
    {
      v22 = 1;
    }
    else
    {
      v22 = *(_DWORD *)(v21 + 288);
      if ( !v22 )
        goto LABEL_10;
    }
    v23 = v6 + 88;
    v24 = v22;
    do
    {
      *(_QWORD *)(v23 + *((_QWORD *)this + 16)) = 0LL;
      v23 += 8LL;
      --v24;
    }
    while ( v24 );
    goto LABEL_10;
  }
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
