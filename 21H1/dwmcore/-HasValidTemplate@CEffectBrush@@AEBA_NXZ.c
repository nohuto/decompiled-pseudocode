/*
 * XREFs of ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x18009CCF8
 * Callers:
 *     ?OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18009CC60 (-OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?TryCreateEffectInstance@CEffectBrush@@AEAAJXZ @ 0x18009CD14 (-TryCreateEffectInstance@CEffectBrush@@AEAAJXZ.c)
 *     ?OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18009D0D0 (-OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetPropertySet@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETPROPERTYSET@@@Z @ 0x18009DD30 (-ProcessSetPropertySet@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETPROPE.c)
 * Callees:
 *     <none>
 */

bool __fastcall CEffectBrush::HasValidTemplate(CEffectBrush *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 11);
  result = 0;
  if ( v1 )
    return *(_QWORD *)(v1 + 72) != 0LL;
  return result;
}
