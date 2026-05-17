/*
 * XREFs of _XSaveCHelper@12 @ 0x4B3089E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __stdcall XSaveCHelper(int a1, __int64 a2)
{
  __int64 result; // rax

  _ECX = a1;
  result = a2;
  __asm { xsavec  byte ptr [ecx] }
  return result;
}
