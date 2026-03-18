/*
 * XREFs of ?IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C000B7B0
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C000CB44 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C013BC38 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 * Callees:
 *     ?GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C000B004 (-GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 */

unsigned __int8 __fastcall IsValidGammaRamp(const struct _D3DKMDT_GAMMA_RAMP *a1)
{
  __int64 Type; // rcx
  unsigned __int8 result; // al

  Type = (unsigned int)a1->Type;
  if ( (unsigned int)(Type - 1) > 4 || a1->DataSize != GetSizeFromGammaRampType(Type) )
    return 0;
  result = 1;
  if ( (a1->Type != D3DDDI_GAMMARAMP_DEFAULT || a1->Data.pRgb256x3x16) && !a1->Data.pRgb256x3x16 )
    return 0;
  return result;
}
