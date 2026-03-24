/*
 * XREFs of ?DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0211B8C
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0109440 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0005898 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0009C58 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0014FD0 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C001E9EC (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?UnpinTransitionalPrimaryAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@I@Z @ 0x1C0256C98 (-UnpinTransitionalPrimaryAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@I@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableTransitionalPrimaryAllocations(
        DXGADAPTER **this,
        struct DXGDEVICE *a2,
        struct DXGALLOCATION *a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // edi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  char *v28; // rdx

  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v8 + 24) = 3429LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v11 + 24) = 3430LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13, v12);
    *(_QWORD *)(v14 + 24) = 3431LL;
    WdLogEvent5_WdAssertion(v14);
  }
  while ( a3 )
  {
    v15 = *((_QWORD *)a3 + 6);
    if ( !v15 )
    {
      v16 = WdLogNewEntry5_WdAssertion(0LL, v12);
      *(_QWORD *)(v16 + 24) = 3437LL;
      WdLogEvent5_WdAssertion(v16);
      v15 = *((_QWORD *)a3 + 6);
    }
    if ( (*(_DWORD *)(v15 + 4) & 1) == 0 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v15, v12);
      *(_QWORD *)(v17 + 24) = 3438LL;
      WdLogEvent5_WdAssertion(v17);
      v15 = *((_QWORD *)a3 + 6);
    }
    v18 = (*(_DWORD *)(v15 + 4) >> 6) & 0xF;
    if ( v18 >= *((_DWORD *)this + 20) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v15, v12);
      *(_QWORD *)(v19 + 24) = 3441LL;
      WdLogEvent5_WdAssertion(v19);
    }
    v20 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
    if ( *((_QWORD *)a2 + 231) != v20 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v20, v12);
      *(_QWORD *)(v21 + 24) = 3443LL;
      WdLogEvent5_WdAssertion(v21);
    }
    if ( DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)a2, v18) == a3 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v23, v22);
      *(_QWORD *)(v24 + 24) = 3444LL;
      WdLogEvent5_WdAssertion(v24);
    }
    v25 = *(unsigned int *)(*((_QWORD *)a3 + 6) + 4LL);
    if ( (v25 & 0x10) != 0 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v25, v22);
      *(_QWORD *)(v26 + 24) = 3445LL;
      WdLogEvent5_WdAssertion(v26);
    }
    if ( ADAPTER_DISPLAY::GetVidPnSourceOwner((ADAPTER_DISPLAY *)this, v18) == a2 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2)
                                                                                             + 640LL)
                                                                                 + 8LL)
                                                                     + 696LL))(
             *(_QWORD *)(*((_QWORD *)a2 + 2) + 648LL),
             *((_QWORD *)a3 + 3),
             0LL) )
      {
        COREDEVICEACCESS::Release(a4, v27);
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 640LL) + 8LL)
                                                       + 704LL))(
          *(_QWORD *)(*((_QWORD *)a2 + 2) + 648LL),
          *((_QWORD *)a3 + 3),
          v18);
        COREDEVICEACCESS::AcquireSharedUncheck(a4, v28);
      }
    }
    DXGDEVICE::UnpinTransitionalPrimaryAllocation(a2, a3, v18);
    a3 = (struct DXGALLOCATION *)*((_QWORD *)a3 + 8);
  }
}
