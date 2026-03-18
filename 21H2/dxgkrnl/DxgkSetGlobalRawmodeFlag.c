/*
 * XREFs of DxgkSetGlobalRawmodeFlag @ 0x1C02F36C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C01ACA7C (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?SetUnsupportedMonitorModesFlag@CCD_BTL@@QEAAJ_N@Z @ 0x1C03AAD30 (-SetUnsupportedMonitorModesFlag@CCD_BTL@@QEAAJ_N@Z.c)
 */

__int64 __fastcall DxgkSetGlobalRawmodeFlag(char a1)
{
  CCD_BTL *v2; // rax

  v2 = CCD_BTL::Global();
  return CCD_BTL::SetUnsupportedMonitorModesFlag(v2, a1 != 0);
}
