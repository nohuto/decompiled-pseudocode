/*
 * XREFs of ?RemoveChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x18007C790
 * Callers:
 *     ?ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVECHILD@@@Z @ 0x18007B6FC (-ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVECHILD@@@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18007EF90 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_MOVECHILD@@@Z @ 0x1800C8E28 (-ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_MOVECHILD@@@Z.c)
 * Callees:
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x180037EF0 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?AddToInputSinkPossibleDirtyList@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18007C718 (-AddToInputSinkPossibleDirtyList@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x18007C838 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x18007D0F4 (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::RemoveChild(CComposition **this, struct CVisual *a2, bool a3)
{
  char v6; // cl
  int v7; // r8d
  int v8; // edx
  int v9; // r8d

  if ( CPtrArrayBase::Remove((CPtrArrayBase *)(this + 9), (__int64)a2) )
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
