/*
 * XREFs of ?IssueLightChangedNotification@CCompositionLight@@IEAAXXZ @ 0x1800CCEF0
 * Callers:
 *     ?ProcessSetCoordinateSpace@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE@@@Z @ 0x1800CCC68 (-ProcessSetCoordinateSpace@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMP.c)
 *     ?SetDirectionProperty@CCompositionLight@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800CCD00 (-SetDirectionProperty@CCompositionLight@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?ProcessSetCoordinateSpace@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETCOORDINATESPACE@@@Z @ 0x1800CCD5C (-ProcessSetCoordinateSpace@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSI.c)
 *     ?SetInnerConeAngle@CCompositionSpotLight@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800CCDF0 (-SetInnerConeAngle@CCompositionSpotLight@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetOuterConeAngle@CCompositionSpotLight@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800CCE50 (-SetOuterConeAngle@CCompositionSpotLight@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetAnimatedProperty@CCompositionLight@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800CCEB0 (-SetAnimatedProperty@CCompositionLight@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?ProcessSetCoordinateSpace@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONPOINTLIGHT_SETCOORDINATESPACE@@@Z @ 0x1801BA9BC (-ProcessSetCoordinateSpace@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOS.c)
 * Callees:
 *     <none>
 */

void __fastcall CCompositionLight::IssueLightChangedNotification(CCompositionLight *this)
{
  char v1; // al
  CCompositionLight *v2; // r8

  v1 = *((_BYTE *)this + 161);
  v2 = this;
  if ( v1 )
    v2 = 0LL;
  (*(void (__fastcall **)(CCompositionLight *, _QWORD, CCompositionLight *))(*(_QWORD *)this + 72LL))(
    this,
    v1 != 0 ? 1 : 11,
    v2);
}
