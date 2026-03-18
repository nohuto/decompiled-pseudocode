/*
 * XREFs of ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01D9EC4
 * Callers:
 *     ?SetRemarshalingFlags@CAnimationTriggerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01D91E0 (-SetRemarshalingFlags@CAnimationTriggerMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CEffectGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01D92F0 (-SetRemarshalingFlags@CEffectGroupMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CRotateTransform3DMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01D97B0 (-SetRemarshalingFlags@CRotateTransform3DMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CTranslateTransform3DMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01D9860 (-SetRemarshalingFlags@CTranslateTransform3DMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CScaleTransform3DMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01D98D0 (-SetRemarshalingFlags@CScaleTransform3DMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CScaleTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01D9970 (-SetRemarshalingFlags@CScaleTransformMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CSkewTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01D9C90 (-SetRemarshalingFlags@CSkewTransformMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CTransform3DGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01D9E20 (-SetRemarshalingFlags@CTransform3DGroupMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CTranslateTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01D9E70 (-SetRemarshalingFlags@CTranslateTransformMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CMatrixTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01DDF30 (-SetRemarshalingFlags@CMatrixTransformMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CManipulationTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01DECB0 (-SetRemarshalingFlags@CManipulationTransformMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CComponentTransform2DMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01DEDC0 (-SetRemarshalingFlags@CComponentTransform2DMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01DEFF0 (-SetRemarshalingFlags@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01DF8A0 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E2C80 (-SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CPropertySetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E6850 (-SetRemarshalingFlags@CPropertySetMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CDropShadowMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01EBEE0 (-SetRemarshalingFlags@CDropShadowMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CProjectedShadowCasterMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01F04E0 (-SetRemarshalingFlags@CProjectedShadowCasterMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CProjectedShadowReceiverMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01F0670 (-SetRemarshalingFlags@CProjectedShadowReceiverMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CProjectedShadowSceneMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01F06B0 (-SetRemarshalingFlags@CProjectedShadowSceneMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01D02A0 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
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
