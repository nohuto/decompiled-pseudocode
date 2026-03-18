/*
 * XREFs of ?IsEnteringIndependentFlip@CDirectFlipInfo@@QEBA_NXZ @ 0x180103C78
 * Callers:
 *     ?ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N2@Z @ 0x1800BC2AC (-ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV-$vector@PEBVCVisual@@V-$allocat.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CDirectFlipInfo::IsEnteringIndependentFlip(CDirectFlipInfo *this)
{
  return *((_BYTE *)this + 122)
      && (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 328LL))(*((_QWORD *)this + 2)) == 2;
}
