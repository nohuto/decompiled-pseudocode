/*
 * XREFs of ?RemoveChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x180045B3C
 * Callers:
 *     ?ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVECHILD@@@Z @ 0x180045710 (-ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVECHILD@@@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800487B4 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_MOVECHILD@@@Z @ 0x1800E79BC (-ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_MOVECHILD@@@Z.c)
 * Callees:
 *     ?UpdateBackdropCounts@CVisual@@IEAAXPEBV1@_N@Z @ 0x1800460B0 (-UpdateBackdropCounts@CVisual@@IEAAXPEBV1@_N@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800486D0 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x180062408 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisual::RemoveChild(CVisual *this, struct CVisual *a2, bool a3)
{
  if ( CPtrArrayBase::Remove((CVisual *)((char *)this + 80), (unsigned __int64)a2) )
  {
    if ( (*((_BYTE *)a2 + 103) & 2) != 0 )
    {
      CVisual::DirtyForInvisibleChild(this, a2, a3);
      CVisual::UpdateBackdropCounts(this, a2, 0);
    }
    *((_QWORD *)a2 + 11) = 0LL;
    (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 16LL))(a2);
  }
}
