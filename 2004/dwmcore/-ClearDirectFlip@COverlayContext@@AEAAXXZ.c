/*
 * XREFs of ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x180024B64
 * Callers:
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x180024ABC (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ?ApplyConfiguration@COverlayContext@@QEAAJPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N1@Z @ 0x18007DF2C (-ApplyConfiguration@COverlayContext@@QEAAJPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@@s.c)
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I_N@Z @ 0x1800E6210 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x1801544F4 (McTemplateU0xq_EventWriteTransfer.c)
 *     ??_GCDirectFlipInfo@@QEAAPEAXI@Z @ 0x18017B9A8 (--_GCDirectFlipInfo@@QEAAPEAXI@Z.c)
 */

void __fastcall COverlayContext::ClearDirectFlip(COverlayContext *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  unsigned int v4; // eax
  __int64 v5; // rcx

  v2 = *((_QWORD *)this + 1412);
  if ( v2 )
  {
    v3 = 1;
    if ( *(_DWORD *)(v2 + 52) != 1 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v2 + 16) + 304LL))(*(_QWORD *)(v2 + 16), 1LL, 0LL);
      v2 = *((_QWORD *)this + 1412);
    }
    if ( v2 )
      CDirectFlipInfo::`scalar deleting destructor'((CDirectFlipInfo *)v2, v3);
    *((_QWORD *)this + 1412) = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 176LL))(*(_QWORD *)this);
      McTemplateU0xq_EventWriteTransfer(v5, &EVTDESC_ETWGUID_DIRECTFLIP_TRANSITIONEVENT, v4, 0LL);
    }
  }
}
