/*
 * XREFs of ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E2114
 * Callers:
 *     ?SetRemarshalingFlags@CAnimationTriggerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E1430 (-SetRemarshalingFlags@CAnimationTriggerMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CEffectGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E1540 (-SetRemarshalingFlags@CEffectGroupMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CRotateTransform3DMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E1A00 (-SetRemarshalingFlags@CRotateTransform3DMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CTranslateTransform3DMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E1AB0 (-SetRemarshalingFlags@CTranslateTransform3DMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CScaleTransform3DMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E1B20 (-SetRemarshalingFlags@CScaleTransform3DMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CScaleTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E1BC0 (-SetRemarshalingFlags@CScaleTransformMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CSkewTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E1EE0 (-SetRemarshalingFlags@CSkewTransformMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CTransform3DGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E2070 (-SetRemarshalingFlags@CTransform3DGroupMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CTranslateTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E20C0 (-SetRemarshalingFlags@CTranslateTransformMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CMatrixTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E6180 (-SetRemarshalingFlags@CMatrixTransformMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CManipulationTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E6F00 (-SetRemarshalingFlags@CManipulationTransformMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CComponentTransform2DMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E7010 (-SetRemarshalingFlags@CComponentTransform2DMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E7240 (-SetRemarshalingFlags@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E7660 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01EAA40 (-SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CPropertySetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01EDBC0 (-SetRemarshalingFlags@CPropertySetMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CDropShadowMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01F3240 (-SetRemarshalingFlags@CDropShadowMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CProjectedShadowCasterMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01F7840 (-SetRemarshalingFlags@CProjectedShadowCasterMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CProjectedShadowReceiverMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01F79D0 (-SetRemarshalingFlags@CProjectedShadowReceiverMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CProjectedShadowSceneMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01F7A10 (-SetRemarshalingFlags@CProjectedShadowSceneMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01D84F0 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(
        DirectComposition::CPropertyChangeResourceMarshaler *this)
{
  char v1; // di

  v1 = 0;
  if ( *((_DWORD *)this + 16) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this)
    || (*((_DWORD *)this + 4) & 0x40) != 0 )
  {
    return 1;
  }
  return v1;
}
