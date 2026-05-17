/*
 * XREFs of __atan_default @ 0x4B2F80A6
 * Callers:
 *     _atan @ 0x4B2F8080 (_atan.c)
 * Callees:
 *     __fload_withFB @ 0x4B2FAFA5 (__fload_withFB.c)
 */

int __cdecl _atan_default(int a1)
{
  int v1; // ecx

  _fload_withFB(v1);
  return sub_4B2F80AF(a1);
}
