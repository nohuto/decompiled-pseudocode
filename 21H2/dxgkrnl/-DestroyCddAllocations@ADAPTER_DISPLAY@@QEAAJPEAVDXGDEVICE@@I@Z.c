/*
 * XREFs of ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C014BF2C
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00E1F50 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013FB1C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C014A6EC (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C014B84C (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C014BE84 (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C02DE764 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B73C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0119AC8 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C014BD78 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C014D364 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C015CAD4 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DestroyCddAllocations(PERESOURCE **this, struct DXGDEVICE *a2, unsigned int a3)
{
  __int64 v4; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  PERESOURCE *v14; // rax
  unsigned int v15; // ecx
  PERESOURCE *v16; // r9
  __int64 v17; // r14
  __int64 v18; // rbp
  PERESOURCE *v19; // rax
  struct DXGALLOCATION *v20; // r8
  PERESOURCE *v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdx
  PERESOURCE *v25; // rdx
  PERESOURCE v26; // r9
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  PERESOURCE v33; // rcx

  v4 = a3;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2])
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v28 + 24) = 1161LL;
    WdLogEvent5_WdAssertion(v28);
  }
  v8 = 496 * v4;
  if ( DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)&this[14][496 * v4]) )
  {
    Current = DXGPROCESS::GetCurrent(v10, v9);
    Flink = this[14][v8 + 3]->SystemResourcesList.Flink;
    Blink = Flink[1164].Blink;
    if ( *((struct _LIST_ENTRY **)Current + 7) != Blink )
    {
      v30 = WdLogNewEntry5_WdAssertion(Flink, Blink);
      *(_QWORD *)(v30 + 24) = 1178LL;
      WdLogEvent5_WdAssertion(v30);
    }
    v14 = this[2];
    if ( *((int *)v14 + 582) >= 0x2000 )
      v15 = *((_DWORD *)v14 + 70);
    else
      v15 = 1;
    if ( *((_DWORD *)a2 + 144) == 4 )
    {
      if ( v15 )
      {
        v31 = v8 * 8 + 88;
        v32 = v15;
        do
        {
          *(PERESOURCE *)((char *)this[14] + v31) = 0LL;
          v31 += 8LL;
          --v32;
        }
        while ( v32 );
      }
      this[14][v8 + 75] = 0LL;
    }
    else
    {
      v16 = this[14];
      if ( v16[v8 + 11] )
      {
        if ( v15 )
        {
          v17 = v8 * 8 + 88;
          v18 = v15;
          v19 = this[14];
          do
          {
            v20 = *(struct DXGALLOCATION **)((char *)v19 + v17);
            v16 = v19;
            if ( v20 )
            {
              ADAPTER_DISPLAY::DisablePrimaryAllocation(this, a2, v20);
              v16 = this[14];
            }
            v19 = this[14];
            v17 += 8LL;
            --v18;
          }
          while ( v18 );
        }
        DXGDEVICE::DestroyAllocationInternal(
          a2,
          0,
          0LL,
          (struct DXGRESOURCE *)v16[v8 + 11]->ExclusiveWaiters,
          0LL,
          DXGDEVICE::DestroyFlagsDefault);
        v21 = this[2];
        if ( *((int *)v21 + 582) >= 0x2000 )
          v22 = *((_DWORD *)v21 + 70);
        else
          v22 = 1;
        if ( v22 )
        {
          v23 = v8 * 8 + 88;
          v24 = v22;
          do
          {
            *(PERESOURCE *)((char *)this[14] + v23) = 0LL;
            v23 += 8LL;
            --v24;
          }
          while ( v24 );
        }
      }
      v25 = this[14];
      v26 = v25[v8 + 75];
      if ( v26 )
      {
        if ( *((_QWORD *)a2 + 231) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) || (*((_BYTE *)a2 + 1869) & 1) != 0 )
        {
          DXGDEVICE::DestroyAllocationInternal(
            a2,
            0,
            0LL,
            (struct DXGRESOURCE *)v26->ExclusiveWaiters,
            0LL,
            DXGDEVICE::DestroyFlagsDefault);
        }
        else
        {
          v33 = v25[v8 + 77];
          if ( v33 )
          {
            ObfDereferenceObject(v33);
            this[14][v8 + 77] = 0LL;
          }
        }
        this[14][v8 + 75] = 0LL;
      }
      if ( *((_DWORD *)this[2] + 50) == 1 )
        OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this[13], (unsigned int)v4, 0LL, 0LL, 0, 1);
    }
    return 0LL;
  }
  else
  {
    v29 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v29 + 24) = this[2];
    *(_QWORD *)(v29 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v29);
    return 3221225485LL;
  }
}
