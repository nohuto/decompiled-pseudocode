/*
 * XREFs of ?IsTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C000B63C
 * Callers:
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C013A5E4 (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?SetTargetGamma@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C02E8510 (-SetTargetGamma@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DMMVIDEOPRESENTTARGET::IsTargetCurrentActive(DMMVIDEOPRESENTTARGET *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_BYTE *)this + 418) )
    return (unsigned __int8)*(_DWORD *)(*((_QWORD *)this + 67) + 168LL) == 14;
  return v1;
}
