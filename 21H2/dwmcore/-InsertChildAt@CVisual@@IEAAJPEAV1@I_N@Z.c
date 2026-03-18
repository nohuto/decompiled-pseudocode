/*
 * XREFs of ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800487B4
 * Callers:
 *     ?ProcessInsertChildAt@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILDAT@@@Z @ 0x180048754 (-ProcessInsertChildAt@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILDAT@@@Z.c)
 *     ?ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_MOVECHILD@@@Z @ 0x1800E79BC (-ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_MOVECHILD@@@Z.c)
 *     ?SetRootVisual@CDesktopTree@@AEAAJPEAVCVisual@@@Z @ 0x1800F7A0C (-SetRootVisual@CDesktopTree@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?RemoveChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x180045B3C (-RemoveChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x180046F60 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x180048898 (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800488D8 (-DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x180048DDC (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180048E38 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::InsertChildAt(CVisual *this, CVisual **a2, unsigned int a3, bool a4)
{
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edi
  CVisual *v10; // rcx
  char v11; // cl
  int v12; // r8d
  int v13; // edx

  if ( a2[11] == this )
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024809, 0x227u, 0LL);
  }
  else
  {
    v7 = CPtrArrayBase::InsertAt((CVisual *)((char *)this + 80), (__int64)a2, a3);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x22Au, 0LL);
    }
    else
    {
      (*((void (__fastcall **)(CVisual **))*a2 + 1))(a2);
      v10 = a2[11];
      if ( v10 )
        CVisual::RemoveChild(v10, (struct CVisual *)a2, 0);
      a2[11] = this;
      CVisual::OnOuterTransformChanged((CVisual *)a2);
      CVisual::OnClipChanged((CVisual *)a2);
      if ( (*((_BYTE *)a2 + 103) & 2) != 0 )
      {
        CVisual::DirtyForVisibleChild(this, (struct CVisual *)a2, a4);
        v11 = *((_BYTE *)a2 + 272);
        v12 = *((_DWORD *)a2 + 67) + 1;
        if ( (v11 & 4) == 0 )
          v12 = *((_DWORD *)a2 + 67);
        v13 = *((_DWORD *)a2 + 66) + 1;
        if ( (v11 & 1) == 0 )
          v13 = *((_DWORD *)a2 + 66);
        CVisual::PropagateBackdropUpdates(this, v13, v12);
      }
    }
  }
  return v9;
}
