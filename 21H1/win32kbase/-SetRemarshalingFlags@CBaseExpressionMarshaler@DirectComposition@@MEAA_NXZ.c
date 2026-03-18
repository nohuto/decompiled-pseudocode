/*
 * XREFs of ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01ECA60
 * Callers:
 *     ?SetRemarshalingFlags@CExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01EC910 (-SetRemarshalingFlags@CExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01ECD60 (-SetRemarshalingFlags@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01ED3B0 (-SetRemarshalingFlags@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01F55E0 (-SetRemarshalingFlags@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01D84F0 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(
        DirectComposition::CBaseExpressionMarshaler *this)
{
  bool v2; // al
  char v3; // dl

  *((_DWORD *)this + 4) &= 0xFFFFFB3F;
  v2 = DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this);
  v3 = 0;
  if ( v2 || (*((_BYTE *)this + 120) & 3) != 0 )
    return 1;
  return v3;
}
