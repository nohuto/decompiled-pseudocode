/*
 * XREFs of ?RequestRedraw@CProjectedShadowCaster@@QEAAXXZ @ 0x180201D00
 * Callers:
 *     ?DirtyProjectedShadowCasters@CVisual@@QEAAXXZ @ 0x1801F73BC (-DirtyProjectedShadowCasters@CVisual@@QEAAXXZ.c)
 *     ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x180201868 (-InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?NotifyOnChanged@CProjectedShadowCaster@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180201A20 (-NotifyOnChanged@CProjectedShadowCaster@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetAncestorClipVisual@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCASTER_SETANCESTORCLIPVISUAL@@@Z @ 0x180201A78 (-ProcessSetAncestorClipVisual@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRO.c)
 *     ?ProcessSetBrush@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCASTER_SETBRUSH@@@Z @ 0x180201AF0 (-ProcessSetBrush@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWC.c)
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z @ 0x1802020F4 (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x1802373B0 (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowCaster::RequestRedraw(CProjectedShadowCaster *this)
{
  CProjectedShadowScene **v1; // rdi
  CProjectedShadowScene **i; // rbx

  if ( !CCommonRegistryData::DisableProjectedShadows )
  {
    v1 = (CProjectedShadowScene **)*((_QWORD *)this + 13);
    for ( i = (CProjectedShadowScene **)*((_QWORD *)this + 12); i != v1; ++i )
      CProjectedShadowScene::RequestRedrawAll(*i);
  }
}
