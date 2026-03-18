/*
 * XREFs of ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1C011003C
 * Callers:
 *     InternalRegisterClassEx @ 0x1C008D05C (InternalRegisterClassEx.c)
 * Callees:
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C008DA48 (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     ?IsClassAtomPinned@@YA_NG@Z @ 0x1C008E22C (-IsClassAtomPinned@@YA_NG@Z.c)
 */

__int64 __fastcall ValidateClassAtomForRegisterClass(struct tagPROCESSINFO *a1, unsigned __int16 a2)
{
  unsigned __int16 v3; // bx
  __int16 v4; // dx
  struct tagPROCESSINFO *v5; // r8

  v3 = 0;
  if ( IsClassAtomPinned(a2) || (unsigned __int16)v4 < 0xC000u || IsClassAtomRegistered(v5, v4) )
    return a2;
  return v3;
}
