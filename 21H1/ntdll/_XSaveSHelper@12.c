/*
 * XREFs of _XSaveSHelper@12 @ 0x4B308A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __stdcall XSaveSHelper(int a1, __int64 a2)
{
  __int64 result; // rax

  _ECX = a1;
  result = a2;
  __asm { xsaves  byte ptr [ecx] }
  return result;
}
