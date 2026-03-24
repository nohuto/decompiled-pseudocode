/*
 * XREFs of ?RequestRedraw@CProjectedShadowCaster@@QEAAXXZ @ 0x180011CAC
 * Callers:
 *     ?ProcessSetAncestorClipVisual@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCASTER_SETANCESTORCLIPVISUAL@@@Z @ 0x18001024C (-ProcessSetAncestorClipVisual@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRO.c)
 *     ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x1800102E0 (-InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?DirtyProjectedShadowCasters@CVisual@@QEAAXXZ @ 0x180010334 (-DirtyProjectedShadowCasters@CVisual@@QEAAXXZ.c)
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z @ 0x18001067C (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z.c)
 *     ?NotifyOnChanged@CProjectedShadowCaster@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18001DEA0 (-NotifyOnChanged@CProjectedShadowCaster@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetBrush@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCASTER_SETBRUSH@@@Z @ 0x1801E415C (-ProcessSetBrush@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWC.c)
 * Callees:
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x18000CDD4 (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowCaster::RequestRedraw(CProjectedShadowCaster *this)
{
  __int64 v1; // rbx
  CProjectedShadowScene **v2; // rdi
  unsigned __int64 v3; // rsi

  v1 = 0LL;
  if ( !CCommonRegistryData::DisableProjectedShadows )
  {
    v2 = (CProjectedShadowScene **)*((_QWORD *)this + 11);
    v3 = (unsigned __int64)(*((_QWORD *)this + 12) - (_QWORD)v2 + 7LL) >> 3;
    if ( (unsigned __int64)v2 > *((_QWORD *)this + 12) )
      v3 = 0LL;
    if ( v3 )
    {
      do
      {
        CProjectedShadowScene::RequestRedrawAll(*v2);
        ++v1;
        ++v2;
      }
      while ( v1 != v3 );
    }
  }
}
