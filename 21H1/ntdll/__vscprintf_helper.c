/*
 * XREFs of __vscprintf_helper @ 0x4B2F761C
 * Callers:
 *     __vscprintf @ 0x4B2F7600 (__vscprintf.c)
 *     __vscwprintf @ 0x4B2F7710 (__vscwprintf.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 */

int __cdecl _vscprintf_helper(int (__cdecl *a1)(_DWORD *, int, int, int), int a2, int a3, int a4)
{
  _DWORD v5[8]; // [esp+0h] [ebp-20h] BYREF

  if ( a2 )
  {
    v5[2] = 0;
    v5[0] = 0;
    v5[1] = 0x7FFFFFFF;
    v5[3] = 66;
    return a1(v5, a2, a3, a4);
  }
  else
  {
    _invalid_parameter();
    return -1;
  }
}
