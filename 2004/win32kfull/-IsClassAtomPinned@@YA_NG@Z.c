/*
 * XREFs of ?IsClassAtomPinned@@YA_NG@Z @ 0x1C008E22C
 * Callers:
 *     DestroyClass @ 0x1C008DD2C (DestroyClass.c)
 *     ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1C011003C (-ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsClassAtomPinned(unsigned __int16 a1)
{
  return a1 >= gatomFirstPinned && a1 <= gatomLastPinned;
}
