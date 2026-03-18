/*
 * XREFs of ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C013D524
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DE364 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C0114C30 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C0131400 (-DxgkCddDisable@@YAJIII@Z.c)
 *     DxgkDisplayOnOff @ 0x1C013CFD0 (DxgkDisplayOnOff.c)
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C015B830 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(DXGADAPTER **this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // r8d
  unsigned int v5; // edx
  __int64 v7; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v7 + 24) = 7826LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v4 = *((_DWORD *)this + 20);
  v5 = 0;
  if ( !v4 )
    return 0;
  while ( !*((_QWORD *)this[14] + 496 * v5 + 86) )
  {
    if ( ++v5 >= v4 )
      return 0;
  }
  return 1;
}
