/*
 * XREFs of ?ValidateClassAtomForRegisterClass@@YGGPAUtagPROCESSINFO@@G@Z @ 0xA6982
 * Callers:
 *     _InternalRegisterClassEx@16 @ 0x46B9C (_InternalRegisterClassEx@16.c)
 * Callees:
 *     ?IsClassAtomRegistered@@YG_NPAUtagPROCESSINFO@@G@Z @ 0x47148 (-IsClassAtomRegistered@@YG_NPAUtagPROCESSINFO@@G@Z.c)
 *     ?IsClassAtomPinned@@YG_NG@Z @ 0x473FE (-IsClassAtomPinned@@YG_NG@Z.c)
 */

unsigned __int16 __fastcall ValidateClassAtomForRegisterClass(int a1, unsigned __int16 a2)
{
  __int16 v4; // di
  __int16 v5; // dx

  v4 = 0;
  if ( IsClassAtomPinned(a2) || a2 < 0xC000u || IsClassAtomRegistered(a1, v5) )
    return a2;
  return v4;
}
