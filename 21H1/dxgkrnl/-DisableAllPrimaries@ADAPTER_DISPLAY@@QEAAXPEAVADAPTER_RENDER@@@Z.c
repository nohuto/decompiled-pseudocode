/*
 * XREFs of ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01402B0
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010C740 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C013ECC4 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C013FA94 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C020D908 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00099D0 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C000A37C (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00115CC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0013AA4 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0013AF0 (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C012B9C0 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C012BF80 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0140574 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C0140CE8 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C0140E74 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0141764 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C0152430 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C0250C74 (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableAllPrimaries(PERESOURCE **this, PERESOURCE **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  PERESOURCE v8; // rcx
  unsigned int v9; // edi
  unsigned int v10; // eax
  bool v11; // bp
  unsigned int i; // ebp
  unsigned int v13; // edi
  __int64 v14; // r14
  PERESOURCE *v15; // rax
  struct ADAPTER_RENDER **v16; // rbp
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v18; // r14
  __int64 v19; // r15
  __int64 v20; // rdi
  __int64 v21; // rdi
  unsigned int v22; // eax
  int v23; // r8d
  struct COREDEVICEACCESS *v24; // r9
  int v25; // eax
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  DXGDODPRESENT *v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax

  if ( !a2 )
  {
    v27 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v27 + 24) = 3656LL;
    WdLogEvent5_WdAssertion(v27);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a2[2]) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v28 + 24) = 3657LL;
    WdLogEvent5_WdAssertion(v28);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v29 + 24) = 3658LL;
    WdLogEvent5_WdAssertion(v29);
  }
  if ( this[2][335] )
  {
    if ( *((_DWORD *)a2[2] + 50) != 1 )
    {
      v30 = *((unsigned int *)a2[2] + 50);
      if ( (_DWORD)v30 != 5 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v30, v6);
        *(_QWORD *)(v31 + 24) = 3668LL;
        WdLogEvent5_WdAssertion(v31);
      }
    }
    ADAPTER_RENDER::DisableOverlays((ADAPTER_RENDER *)a2);
  }
  else
  {
    v32 = (DXGDODPRESENT *)this[48];
    if ( v32 )
      DXGDODPRESENT::Flush(v32);
  }
  if ( *((_DWORD *)a2[2] + 50) == 1 )
    ADAPTER_RENDER::FlushScheduler((__int64)a2, 8, 0xFFFFFFFF, 0);
  v8 = (PERESOURCE)*((unsigned int *)this[2] + 50);
  if ( (_DWORD)v8 == 1 )
  {
    v9 = 0;
    v8 = this[2][335];
    v10 = *((_DWORD *)this + 20);
    if ( v10 )
    {
      v11 = v8 == 0LL;
      do
      {
        if ( ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)this, v9) )
        {
          if ( !v11 )
          {
            DXGADAPTER::IncrementVSyncWaiter((DXGADAPTER *)a2[2], v9);
            if ( (*(unsigned __int8 (__fastcall **)(PERESOURCE *, _QWORD))&a2[77][1][5].ActiveCount)(a2[78], v9) )
              ADAPTER_DISPLAY::WaitForVerticalBlankEvent((ADAPTER_DISPLAY *)this, v9);
            DXGADAPTER::DecrementVSyncWaiter((DXGADAPTER *)a2[2], v9);
            v11 = 1;
          }
          v25 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v9, 0, 4, 0);
          v26 = v25;
          if ( v25 < 0 )
          {
            v33 = (_QWORD *)WdLogNewEntry5_WdError(v8, v6);
            v33[3] = v26;
            v33[4] = this[2];
            v33[5] = v9;
            WdLogEvent5_WdError(v33);
          }
        }
        v10 = *((_DWORD *)this + 20);
        ++v9;
      }
      while ( v9 < v10 );
    }
  }
  else
  {
    v10 = *((_DWORD *)this + 20);
  }
  for ( i = 0; i < v10; ++i )
  {
    v6 = 3968LL * i;
    if ( this[14][(unsigned __int64)v6 / 8 + 11] )
    {
      NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)this[2]);
      if ( NumDifferentPhysicalAdapters )
      {
        v18 = v6 + 88;
        v19 = NumDifferentPhysicalAdapters;
        do
        {
          v20 = *(__int64 *)((char *)this[14] + v18);
          if ( v20 )
          {
            v21 = *(_QWORD *)(v20 + 48);
            if ( !v21 )
            {
              v34 = WdLogNewEntry5_WdAssertion(v8, v6);
              *(_QWORD *)(v34 + 24) = 3744LL;
              WdLogEvent5_WdAssertion(v34);
            }
            v22 = *(_DWORD *)(v21 + 4);
            if ( (v22 & 2) == 0 )
            {
              v35 = WdLogNewEntry5_WdAssertion(v8, v6);
              *(_QWORD *)(v35 + 24) = 3745LL;
              WdLogEvent5_WdAssertion(v35);
              v22 = *(_DWORD *)(v21 + 4);
            }
            if ( ((v22 >> 6) & 0xF) != i )
            {
              v36 = WdLogNewEntry5_WdAssertion(v8, v6);
              *(_QWORD *)(v36 + 24) = 3746LL;
              WdLogEvent5_WdAssertion(v36);
            }
            if ( !*(_QWORD *)(v21 + 8) )
            {
              v37 = WdLogNewEntry5_WdAssertion(v8, v6);
              *(_QWORD *)(v37 + 24) = 3747LL;
              WdLogEvent5_WdAssertion(v37);
            }
            if ( (*(_DWORD *)(v21 + 4) & 0x10) == 0 )
            {
              if ( *((_DWORD *)a2[2] + 50) != 1 )
              {
                v38 = *((unsigned int *)a2[2] + 50);
                if ( (_DWORD)v38 != 5 )
                {
                  v39 = WdLogNewEntry5_WdAssertion(v38, v6);
                  *(_QWORD *)(v39 + 24) = 3758LL;
                  WdLogEvent5_WdAssertion(v39);
                }
              }
              ((void (__fastcall *)(PERESOURCE *, _QWORD))a2[80][1][1].SpinLock)(a2[81], *(_QWORD *)(v21 + 8));
              *(_DWORD *)(v21 + 4) |= 0x10u;
            }
          }
          v18 += 8LL;
          --v19;
        }
        while ( v19 );
      }
    }
    v10 = *((_DWORD *)this + 20);
  }
  v13 = 0;
  if ( v10 )
  {
    do
    {
      v14 = 496LL * v13;
      v15 = this[14];
      v16 = (struct ADAPTER_RENDER **)v15[v14 + 86];
      if ( v16 )
      {
        if ( a2 != (PERESOURCE **)v16[2] )
        {
          v40 = WdLogNewEntry5_WdAssertion(v8, v6);
          *(_QWORD *)(v40 + 24) = 3778LL;
          WdLogEvent5_WdAssertion(v40);
          v15 = this[14];
        }
        if ( LODWORD(v15[v14 + 86][4].OwnerTable) )
        {
          DXGDEVICE::UnpinPrimaryAllocations((DXGDEVICE *)v16, v13);
          v8 = (PERESOURCE)*((_QWORD *)v16[2] + 2);
          if ( (int)v8[24].NumberOfExclusiveWaiters < 2200 )
            DXGDEVICE::UnpinAllDirectFlipAllocations((DXGDEVICE *)v16, v13, v23, v24);
        }
        else
        {
          DXGDEVICE::InvalidatePrimaryAllocations((DXGDEVICE *)v16, v13);
        }
      }
      ++v13;
    }
    while ( v13 < *((_DWORD *)this + 20) );
  }
}
