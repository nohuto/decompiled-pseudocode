/*
 * XREFs of ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01C8BD0
 * Callers:
 *     ?RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z @ 0x1C004C398 (-RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C015A9DC (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01C80AC (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C01EE334 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C02C18E4 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C02C1AEC (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C0014310 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1C01603BC (-Flush@BLTQUEUE@@QEAAXXZ.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01962B0 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C019F49C (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01C6EB4 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C03BE07C (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::RemoveVidPnOwnership(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  BLTQUEUE *v11; // rbx

  v3 = 4000LL * a2;
  v4 = a2;
  v6 = *((_QWORD *)this + 16);
  if ( !*(_QWORD *)(v3 + v6 + 728) )
  {
    WdLogSingleEntry1(1LL, 201LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"NULL != m_pDisplaySource[VidPnSourceId].m_VidPnSourceOwner",
      201LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v6 = *((_QWORD *)this + 16);
  }
  if ( !*(_DWORD *)(v3 + v6 + 736) )
  {
    WdLogSingleEntry1(1LL, 202LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"D3DKMT_VIDPNSOURCEOWNER_UNOWNED != m_pDisplaySource[VidPnSourceId].m_VidPnSourceOwnerType",
      202LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v6 = *((_QWORD *)this + 16);
  }
  if ( *(_QWORD *)(*(_QWORD *)(v3 + v6 + 728) + 1848LL) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + v6 + 728) + 16LL)
                                                                     + 16LL)
    && *(_DWORD *)(*((_QWORD *)this + 2) + 200LL) == 1 )
  {
    if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(*((DXGADAPTER **)this + 2)) )
    {
      v9 = *(_QWORD *)(v3 + v7 + 728);
      v10 = *(_QWORD *)(v9 + 1848);
      if ( v10 == *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL) )
        ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v10 + 2792), a2);
    }
    else
    {
      ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(
        *(ADAPTER_RENDER **)(*(_QWORD *)(v3 + v7 + 728) + 16LL),
        1 << a2,
        0LL,
        1 << a2,
        0);
    }
  }
  v8 = *((_QWORD *)this + 56);
  if ( v8 )
  {
    v11 = (BLTQUEUE *)(*(_QWORD *)(v8 + 8) + 2920 * v4);
    BLTQUEUE::Flush(v11);
    BLTQUEUE::Reset(v11, 1u);
  }
  *(_QWORD *)(v3 + *((_QWORD *)this + 16) + 728) = 0LL;
  *(_QWORD *)(v3 + *((_QWORD *)this + 16) + 752) = 0LL;
  *(_DWORD *)(v3 + *((_QWORD *)this + 16) + 736) = 0;
  *(_DWORD *)(v3 + *((_QWORD *)this + 16) + 740) = 0;
  *(_QWORD *)(v3 + *((_QWORD *)this + 16) + 744) = 0LL;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 200LL) == 1 )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(*((struct _KTHREAD ***)this + 15), a2, 0LL, 0, 0, 1);
}
