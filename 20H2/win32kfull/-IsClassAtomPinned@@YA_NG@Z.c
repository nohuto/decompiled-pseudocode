/*
 * XREFs of ?IsClassAtomPinned@@YA_NG@Z @ 0x1C00D35CC
 * Callers:
 *     DestroyClass @ 0x1C00D30CC (DestroyClass.c)
 *     ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1C01111B4 (-ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsClassAtomPinned(unsigned __int16 a1)
{
  return a1 >= gatomFirstPinned && a1 <= gatomLastPinned;
}
