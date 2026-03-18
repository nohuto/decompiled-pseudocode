/*
 * XREFs of ?RemoveChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800A20F0
 * Callers:
 *     ?ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVECHILD@@@Z @ 0x1800A0AEC (-ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVECHILD@@@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800A47D0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_MOVECHILD@@@Z @ 0x1800D0238 (-ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_MOVECHILD@@@Z.c)
 * Callees:
 *     ?AddToInputSinkPossibleDirtyList@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x1800A2078 (-AddToInputSinkPossibleDirtyList@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800A2198 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x1800A2A54 (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800BDC0C (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::RemoveChild(CComposition **this, struct CVisual *a2, bool a3)
{
  char v6; // cl
  int v7; // r8d
  int v8; // edx
  int v9; // r8d

  if ( CPtrArrayBase::Remove((CPtrArrayBase *)(this + 9), (unsigned __int64)a2) )
  {
    if ( (*((_BYTE *)a2 + 95) & 2) != 0 )
      CVisual::DirtyForInvisibleChild((CVisual *)this, a2, a3);
    *((_QWORD *)a2 + 10) = 0LL;
    CComposition::AddToInputSinkPossibleDirtyList(this[2], a2);
    v6 = *((_BYTE *)a2 + 264);
    v7 = *((_DWORD *)a2 + 65) + 1;
    if ( (v6 & 2) == 0 )
      v7 = *((_DWORD *)a2 + 65);
    v8 = *((_DWORD *)a2 + 64) + 1;
    v9 = -v7;
    if ( (v6 & 1) == 0 )
      v8 = *((_DWORD *)a2 + 64);
    CVisual::PropagateBackdropUpdates((CVisual *)this, -v8, v9);
    (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 16LL))(a2);
  }
}
