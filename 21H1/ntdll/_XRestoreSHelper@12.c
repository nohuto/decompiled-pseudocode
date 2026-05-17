/*
 * XREFs of _XRestoreSHelper@12 @ 0x4B308A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __stdcall XRestoreSHelper(int a1, __int64 a2)
{
  __int64 result; // rax

  _ECX = a1;
  result = a2;
  __asm { xrstors byte ptr [ecx] }
  return result;
}
