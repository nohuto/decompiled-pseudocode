/*
 * XREFs of ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C014A9F4
 * Callers:
 *     ?RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z @ 0x1C0042670 (-RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0146E2C (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C014AB30 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C016F1F0 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C0212DC4 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C0212F34 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C000D304 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00EDA10 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C0156994 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1C0161960 (-Flush@BLTQUEUE@@QEAAXXZ.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C0215168 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C02FDEDC (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::RemoveVidPnOwnership(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r10
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  BLTQUEUE *v12; // rbx

  v4 = 3968LL * a2;
  v5 = a2;
  v6 = *((_QWORD *)this + 14);
  if ( !*(_QWORD *)(v4 + v6 + 688) )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, v6);
    *(_QWORD *)(v10 + 24) = 201LL;
    WdLogEvent5_WdAssertion(v10);
    v6 = *((_QWORD *)this + 14);
  }
  if ( !*(_DWORD *)(v4 + v6 + 696) )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, v6);
    *(_QWORD *)(v11 + 24) = 202LL;
    WdLogEvent5_WdAssertion(v11);
    v6 = *((_QWORD *)this + 14);
  }
  if ( *(_QWORD *)(*(_QWORD *)(v4 + v6 + 688) + 1848LL) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + v6 + 688) + 16LL)
                                                                     + 16LL)
    && *(_DWORD *)(*((_QWORD *)this + 2) + 200LL) == 1 )
  {
    if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(*((DXGADAPTER **)this + 2)) )
    {
      v8 = *(_QWORD *)(v7 + 1848);
      if ( v8 == *(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL) )
        ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v8 + 2696), a2);
    }
    else
    {
      ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(*(ADAPTER_RENDER **)(v7 + 16), 1 << a2, 0, 1 << a2, 0);
    }
  }
  v9 = *((_QWORD *)this + 48);
  if ( v9 )
  {
    v12 = (BLTQUEUE *)(*(_QWORD *)(v9 + 8) + 2904 * v5);
    BLTQUEUE::Flush(v12);
    BLTQUEUE::Reset(v12, 1u);
  }
  *(_QWORD *)(v4 + *((_QWORD *)this + 14) + 688) = 0LL;
  *(_QWORD *)(v4 + *((_QWORD *)this + 14) + 712) = 0LL;
  *(_DWORD *)(v4 + *((_QWORD *)this + 14) + 696) = 0;
  *(_DWORD *)(v4 + *((_QWORD *)this + 14) + 700) = 0;
  *(_QWORD *)(v4 + *((_QWORD *)this + 14) + 704) = 0LL;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 200LL) == 1 )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(*((_QWORD *)this + 13), a2, 0LL, 0LL, 0, 1);
}
