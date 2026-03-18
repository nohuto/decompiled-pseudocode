/*
 * XREFs of ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01C6EB4
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B85D0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C01C1110 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C01C66CC (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C01C69E4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01C8BD0 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C02BFF14 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C0044E7C (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     ?DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01C6F6C (-DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(
        ADAPTER_RENDER *this,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  int v6; // eax
  unsigned int v7; // ebp
  ADAPTER_DISPLAY *v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-28h]
  __int64 v13; // [rsp+28h] [rbp-20h]

  v6 = *((_DWORD *)this + 161);
  v7 = a3;
  if ( (v6 & a5) != 0 )
    WdLogSingleEntry5(0LL, 275LL, 39LL, *((_QWORD *)this + 2), a5 & v6, 0LL);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v13) = v7;
    LODWORD(v12) = a2;
    McTemplateK0pqtqq_EtwWriteTransfer(
      (__int64)this,
      &FlushPresentReferencesAndDisableOverlays,
      a3,
      *((_QWORD *)this + 2),
      v12,
      v13,
      a4,
      a5);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned int))(*(_QWORD *)(*((_QWORD *)this + 78) + 8LL)
                                                                       + 992LL))(
    *((_QWORD *)this + 79),
    a2,
    v7,
    a4,
    a5);
  *((_DWORD *)this + 161) |= a5;
  if ( a4 )
  {
    v11 = *(ADAPTER_DISPLAY **)(*((_QWORD *)this + 2) + 2792LL);
    if ( v11 )
      ADAPTER_DISPLAY::DisableAllPlanesOnVidPnSourcesImmediate(v11, a4);
  }
  return 0LL;
}
