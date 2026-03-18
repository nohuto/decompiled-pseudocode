/*
 * XREFs of _HWInsertAfter@4 @ 0xA50E8
 * Callers:
 *     _LinkWindow@12 @ 0x34D24 (_LinkWindow@12.c)
 *     ?ValidateZorder@@YGHPAUtagCVR@@@Z @ 0x93140 (-ValidateZorder@@YGHPAUtagCVR@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall HWInsertAfter(unsigned int a1)
{
  if ( a1 <= 1 || a1 > 0xFFFFFFFD )
    return a1;
  else
    return *(_DWORD *)a1;
}
