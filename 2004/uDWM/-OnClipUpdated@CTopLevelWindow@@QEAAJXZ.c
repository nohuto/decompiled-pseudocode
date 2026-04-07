/*
 * XREFs of ?OnClipUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18000F59C
 * Callers:
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029200 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ @ 0x180012234 (-UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ.c)
 *     ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18002892C (-OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z @ 0x180040154 (-SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::OnClipUpdated(CAccent **this)
{
  CAccent *v2; // rcx
  int updated; // eax
  unsigned int v4; // ebx
  CAccent *v6; // rdx

  if ( (*((_BYTE *)this[91] + 609) & 4) != 0 )
    CTopLevelWindow::OnBlurBehindUpdated((CTopLevelWindow *)this);
  v2 = this[34];
  if ( v2 )
  {
    v6 = this[91];
    if ( (*((_BYTE *)v6 + 156) & 0x10) != 0 )
      CAccent::SetClipRegion(v2, *((struct CBaseGeometryProxy **)v6 + 46));
  }
  updated = CTopLevelWindow::UpdateRemoteAppRenderTargetOpacity((CTopLevelWindow *)this);
  v4 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x647u);
  return v4;
}
