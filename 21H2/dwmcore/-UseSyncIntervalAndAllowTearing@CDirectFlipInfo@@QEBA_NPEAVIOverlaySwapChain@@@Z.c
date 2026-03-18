/*
 * XREFs of ?UseSyncIntervalAndAllowTearing@CDirectFlipInfo@@QEBA_NPEAVIOverlaySwapChain@@@Z @ 0x1801B8964
 * Callers:
 *     ?ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N2@Z @ 0x1800BC2AC (-ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV-$vector@PEBVCVisual@@V-$allocat.c)
 *     ?Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1801DF7EC (-Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@U.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CDirectFlipInfo::UseSyncIntervalAndAllowTearing(CDirectFlipInfo *this, struct IOverlaySwapChain *a2)
{
  char v2; // bl

  v2 = 0;
  if ( !*((_BYTE *)this + 123) && *((_BYTE *)this + 124) )
    return (*(unsigned __int8 (__fastcall **)(struct IOverlaySwapChain *))(*(_QWORD *)a2 + 144LL))(a2) != 0;
  return v2;
}
