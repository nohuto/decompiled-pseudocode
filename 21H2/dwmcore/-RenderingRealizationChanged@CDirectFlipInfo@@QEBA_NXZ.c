/*
 * XREFs of ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180113274
 * Callers:
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x1800B9300 (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 *     ?ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N2@Z @ 0x1800BC2AC (-ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV-$vector@PEBVCVisual@@V-$allocat.c)
 *     ?Activate@CDirectFlipInfo@@QEAAJXZ @ 0x1801DEEC8 (-Activate@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z @ 0x1801DF0D8 (-AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CDirectFlipInfo::RenderingRealizationChanged(CDirectFlipInfo *this)
{
  __int64 v2; // rcx
  struct CComposition *CurrentFrameId; // rdi
  int v4; // eax
  bool v5; // zf
  bool v6; // cl

  CurrentFrameId = GetCurrentFrameId();
  if ( *(struct CComposition **)(v2 + 112) == CurrentFrameId )
    return *(_BYTE *)(v2 + 120);
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 16) + 280LL))(*(_QWORD *)(v2 + 16));
  v5 = *((_DWORD *)this + 26) == v4;
  *((_DWORD *)this + 26) = v4;
  v6 = !v5;
  *((_QWORD *)this + 14) = CurrentFrameId;
  *((_BYTE *)this + 120) = !v5;
  return v6;
}
