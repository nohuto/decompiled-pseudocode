/*
 * XREFs of ??_GVIDPN_MGR@@UEAAPEAXI@Z @ 0x1C005AE50
 * Callers:
 *     ??_EVIDPN_MGR@@WBA@EAAPEAXI@Z @ 0x1C00276F0 (--_EVIDPN_MGR@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C005A280 (--1VIDPN_MGR@@UEAA@XZ.c)
 */

VIDPN_MGR *__fastcall VIDPN_MGR::`scalar deleting destructor'(VIDPN_MGR *P, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  VIDPN_MGR::~VIDPN_MGR(P, a2);
  if ( (v2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
