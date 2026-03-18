/*
 * XREFs of ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01C7E74
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C019B990 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C01C66CC (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01C80AC (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C02BFF14 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0002580 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C00025BC (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000F6D8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C001D470 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C015D620 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C016037C (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C01BB044 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C01C5A1C (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C01C69E4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C01C71C4 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C02E5840 (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C02E7898 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableAllPrimaries(PERESOURCE **this, PERESOURCE **a2)
{
  unsigned int v4; // ebp
  unsigned int v5; // eax
  bool v6; // r15
  unsigned int i; // edi
  unsigned int v8; // ebx
  __int64 v9; // rbp
  PERESOURCE *v10; // rax
  struct ADAPTER_RENDER **v11; // rdi
  int v12; // r8d
  struct COREDEVICEACCESS *v13; // r9
  int v14; // eax
  DXGDODPRESENT *v15; // rcx
  __int64 v16; // rdi
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v18; // rdx
  __int64 v19; // r15
  __int64 v20; // rbp
  __int64 v21; // rbx
  __int64 v22; // rbx
  unsigned int v23; // eax

  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 3770LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pRenderCore != NULL", 3770LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a2[2]) )
  {
    WdLogSingleEntry1(1LL, 3771LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pRenderCore->IsCoreResourceExclusiveOwner()",
      3771LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 3772LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 3772LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( this[2][350] )
  {
    if ( *((_DWORD *)a2[2] + 50) != 1 && *((_DWORD *)a2[2] + 50) != 5 )
    {
      WdLogSingleEntry1(1LL, 3782LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pRenderCore->GetAdapter()->IsActive() || pRenderCore->GetAdapter()->RemovePending()",
        3782LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    ADAPTER_RENDER::DisableOverlays((ADAPTER_RENDER *)a2);
  }
  else
  {
    v15 = (DXGDODPRESENT *)this[56];
    if ( v15 )
      DXGDODPRESENT::Flush(v15);
  }
  if ( *((_DWORD *)a2[2] + 50) == 1 )
    ADAPTER_RENDER::FlushScheduler((__int64)a2, 8u, 0xFFFFFFFF, 0);
  if ( *((_DWORD *)this[2] + 50) == 1 )
  {
    v4 = 0;
    v5 = *((_DWORD *)this + 24);
    if ( v5 )
    {
      v6 = this[2][350] == 0LL;
      do
      {
        if ( ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)this, v4) )
        {
          if ( !v6 )
          {
            DXGADAPTER::IncrementVSyncWaiter((DXGADAPTER *)a2[2], v4);
            if ( (*(unsigned __int8 (__fastcall **)(PERESOURCE *, _QWORD))&a2[78][1][5].ActiveCount)(a2[79], v4) )
              ADAPTER_DISPLAY::WaitForVerticalBlankEvent((DXGADAPTER **)this);
            DXGADAPTER::DecrementVSyncWaiter((DXGADAPTER *)a2[2], v4);
            v6 = 1;
          }
          v14 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v4, 0, 4, 0);
          if ( v14 < 0 )
          {
            v16 = v14;
            WdLogSingleEntry3(2LL, v14, this[2], v4);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"NTSTATUS:0x%I64x ADAPTER_DISPLAY:0x%I64x SetVidPnSourceVisibility failed disabling VidPnSourceId 0x%I64x",
              v16,
              (__int64)this[2],
              v4,
              0LL,
              0LL);
          }
        }
        v5 = *((_DWORD *)this + 24);
        ++v4;
      }
      while ( v4 < v5 );
    }
  }
  else
  {
    v5 = *((_DWORD *)this + 24);
  }
  for ( i = 0; i < v5; ++i )
  {
    if ( this[16][500 * i + 11] )
    {
      NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)this[2]);
      if ( NumDifferentPhysicalAdapters )
      {
        v19 = v18 + 88;
        v20 = NumDifferentPhysicalAdapters;
        do
        {
          v21 = *(__int64 *)((char *)this[16] + v19);
          if ( v21 )
          {
            v22 = *(_QWORD *)(v21 + 48);
            if ( !v22 )
            {
              WdLogSingleEntry1(1LL, 3858LL);
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAllocation != NULL", 3858LL, 0LL, 0LL, 0LL, 0LL);
            }
            v23 = *(_DWORD *)(v22 + 4);
            if ( (v23 & 2) == 0 )
            {
              WdLogSingleEntry1(1LL, 3859LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pAllocation->m_CddPrimary",
                3859LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v23 = *(_DWORD *)(v22 + 4);
            }
            if ( ((v23 >> 6) & 0xF) != i )
            {
              WdLogSingleEntry1(1LL, 3860LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pAllocation->m_VidPnSourceId == VidPnSourceId",
                3860LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( !*(_QWORD *)(v22 + 8) )
            {
              WdLogSingleEntry1(1LL, 3861LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pAllocation->m_hVidMmAllocation != NULL",
                3861LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( (*(_DWORD *)(v22 + 4) & 0x10) == 0 )
            {
              if ( *((_DWORD *)a2[2] + 50) != 1 && *((_DWORD *)a2[2] + 50) != 5 )
              {
                WdLogSingleEntry1(1LL, 3872LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"pRenderCore->GetAdapter()->IsActive() || pRenderCore->GetAdapter()->RemovePending()",
                  3872LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              ((void (__fastcall *)(PERESOURCE *, _QWORD))a2[81][1][1].SpinLock)(a2[82], *(_QWORD *)(v22 + 8));
              *(_DWORD *)(v22 + 4) |= 0x10u;
            }
          }
          v19 += 8LL;
          --v20;
        }
        while ( v20 );
      }
    }
    v5 = *((_DWORD *)this + 24);
  }
  v8 = 0;
  if ( v5 )
  {
    do
    {
      v9 = 500LL * v8;
      v10 = this[16];
      v11 = (struct ADAPTER_RENDER **)v10[v9 + 91];
      if ( v11 )
      {
        if ( a2 != (PERESOURCE **)v11[2] )
        {
          WdLogSingleEntry1(1LL, 3892LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pRenderCore == pDevice->GetRenderCore()",
            3892LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v10 = this[16];
        }
        if ( LODWORD(v10[v9 + 91][4].OwnerTable) )
        {
          DXGDEVICE::UnpinPrimaryAllocations((DXGDEVICE *)v11, v8);
          if ( *(int *)(*((_QWORD *)v11[2] + 2) + 2692LL) < 2200 )
            DXGDEVICE::UnpinAllDirectFlipAllocations((DXGDEVICE *)v11, v8, v12, v13);
        }
        else
        {
          DXGDEVICE::InvalidatePrimaryAllocations((DXGDEVICE *)v11, v8);
        }
      }
      ++v8;
    }
    while ( v8 < *((_DWORD *)this + 24) );
  }
}
