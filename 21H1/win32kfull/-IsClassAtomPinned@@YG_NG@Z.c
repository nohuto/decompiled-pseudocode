/*
 * XREFs of ?IsClassAtomPinned@@YG_NG@Z @ 0x473FE
 * Callers:
 *     _DestroyClass@8 @ 0x472A4 (_DestroyClass@8.c)
 *     ?ValidateClassAtomForRegisterClass@@YGGPAUtagPROCESSINFO@@G@Z @ 0xA6982 (-ValidateClassAtomForRegisterClass@@YGGPAUtagPROCESSINFO@@G@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsClassAtomPinned(unsigned __int16 a1)
{
  return a1 >= _gatomFirstPinned && a1 <= _gatomLastPinned;
}
