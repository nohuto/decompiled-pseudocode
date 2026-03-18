/*
 * XREFs of ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C01C66CC
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C019B990 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C01C77B4 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0002580 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C00025BC (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0013B54 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0013DA8 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C0014310 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C015D620 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C01BB044 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C01C3758 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C01C5A1C (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C01C69E4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01C6EB4 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C01C71C4 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01C7E74 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C02E5840 (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C02E7898 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisablePrimaryAllocation(
        PERESOURCE **this,
        struct DXGDEVICE *a2,
        struct DXGALLOCATION *a3)
{
  struct DXGDEVICE *VidPnSourceOwner; // rsi
  char v6; // r12
  __int64 v7; // rbp
  __int64 v8; // r9
  __int64 v9; // r8
  unsigned __int8 IsLegacyDisplayStateSynchronization; // di
  struct ADAPTER_RENDER *v11; // r9
  bool v12; // bl
  unsigned int v13; // r9d
  int v14; // eax
  int v15; // r8d
  struct COREDEVICEACCESS *v16; // r9
  int v17; // eax
  __int64 v18; // rdx
  int VidPnSourceOwnerType; // eax
  __int64 v20; // rbx

  VidPnSourceOwner = a2;
  v6 = 0;
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 3338LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDevice != NULL", 3338LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a3 || !*((_QWORD *)a3 + 6) )
  {
    WdLogSingleEntry1(1LL, 3339LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDxgAllocation != NULL) && (pDxgAllocation->m_pAllocation != NULL)",
      3339LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) & 3) == 0 )
  {
    WdLogSingleEntry1(1LL, 3340LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDxgAllocation->m_pAllocation->m_CddPrimary || pDxgAllocation->m_pAllocation->m_Primary",
      3340LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 3341LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->GetRenderCore()->IsCoreResourceExclusiveOwner()",
      3341LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 3342LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 3342LL, 0LL, 0LL, 0LL, 0LL);
  }
  v7 = (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) >> 6) & 0xF;
  if ( (unsigned int)v7 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 3345LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < GetNumVidPnSources()",
      3345LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = *((_QWORD *)VidPnSourceOwner + 2);
  if ( *((_QWORD *)VidPnSourceOwner + 231) == *(_QWORD *)(v8 + 16)
    && (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) & 0x10) == 0 )
  {
    IsLegacyDisplayStateSynchronization = DXGADAPTER::IsLegacyDisplayStateSynchronization(*(DXGADAPTER **)(v8 + 16));
    if ( *(int *)(v9 + 2692) < 2000 )
    {
      ADAPTER_DISPLAY::DisableAllPrimaries((ADAPTER_DISPLAY *)this, v11);
    }
    else
    {
      v12 = 0;
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)this, v7)
        && ADAPTER_DISPLAY::GetVidPnSourceOwner((ADAPTER_DISPLAY *)this, v7)
        && (*((_DWORD *)ADAPTER_DISPLAY::GetVidPnSourceOwner((ADAPTER_DISPLAY *)this, v7) + v7 + 302) & 0x200) != 0 )
      {
        VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)this, v7);
        if ( VidPnSourceOwnerType == 3 && (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) & 2) != 0 )
        {
          v6 = 1;
          v12 = 1;
        }
        else if ( ADAPTER_DISPLAY::GetVidPnSourceOwner((ADAPTER_DISPLAY *)this, v7) == VidPnSourceOwner )
        {
          v12 = 1;
        }
      }
      else
      {
        v12 = ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)this, v7, 0) == *((struct DXGADAPTERALLOCATION **)a3
                                                                                          + 6);
      }
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) + 200LL) == 1 )
      {
        if ( IsLegacyDisplayStateSynchronization )
        {
          ADAPTER_RENDER::FlushScheduler(*((_QWORD *)VidPnSourceOwner + 2), 8u, v7, 0);
        }
        else
        {
          v13 = 0;
          if ( v12 )
            v13 = 1 << v7;
          ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(
            *((ADAPTER_RENDER **)VidPnSourceOwner + 2),
            1 << v7,
            0,
            v13,
            0);
        }
      }
      if ( v12 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) + 200LL) == 1 )
          ADAPTER_RENDER::DisableOverlays(*((ADAPTER_RENDER **)VidPnSourceOwner + 2));
        DXGADAPTER::IncrementVSyncWaiter(*(DXGADAPTER **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL), v7);
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2)
                                                                                       + 624LL)
                                                                           + 8LL)
                                                               + 544LL))(
               *(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 632LL),
               (unsigned int)v7) )
        {
          ADAPTER_DISPLAY::WaitForVerticalBlankEvent((DXGADAPTER **)this);
        }
        DXGADAPTER::DecrementVSyncWaiter(*(DXGADAPTER **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL), v7);
        v17 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v7, 0, 2u, 0);
        if ( v17 < 0 )
        {
          v20 = v17;
          WdLogSingleEntry3(2LL, (unsigned int)v7, this[2], v17);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to turn Visibility on VidPn source 0x%I64x on adapter 0x%I64x (Status = 0x%I64x).",
            (unsigned int)v7,
            (__int64)this[2],
            v20,
            0LL,
            0LL);
        }
      }
      if ( *((_DWORD *)VidPnSourceOwner + 108) == 2 )
      {
        v18 = *((_QWORD *)a3 + 6);
        if ( (*(_DWORD *)(v18 + 4) & 2) == 0 )
        {
          WdLogSingleEntry1(1LL, 3476LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pDxgAllocation->m_pAllocation->m_CddPrimary",
            3476LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v18 = *((_QWORD *)a3 + 6);
        }
        if ( !*(_QWORD *)(v18 + 8) )
        {
          WdLogSingleEntry1(1LL, 3477LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pDxgAllocation->m_pAllocation->m_hVidMmAllocation != NULL",
            3477LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v18 = *((_QWORD *)a3 + 6);
        }
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 648LL) + 8LL)
                                               + 200LL))(
          *(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 656LL),
          *(_QWORD *)(v18 + 8));
        *(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) |= 0x10u;
        if ( v6 )
          VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner((ADAPTER_DISPLAY *)this, v7);
      }
      v14 = *((_DWORD *)VidPnSourceOwner + 108);
      if ( v14 != 2 )
      {
        if ( v14 )
        {
          DXGDEVICE::UnpinPrimaryAllocations(VidPnSourceOwner, v7);
          if ( *(int *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) + 2692LL) < 2200 )
            DXGDEVICE::UnpinAllDirectFlipAllocations(VidPnSourceOwner, v7, v15, v16);
        }
        else
        {
          DXGDEVICE::InvalidatePrimaryAllocations(VidPnSourceOwner, v7);
        }
      }
    }
  }
}
