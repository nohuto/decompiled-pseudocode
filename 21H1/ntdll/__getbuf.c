/*
 * XREFs of __getbuf @ 0x4B2FEF3A
 * Callers:
 *     __ungetc_nolock @ 0x4B2FEE9C (__ungetc_nolock.c)
 * Callees:
 *     <none>
 */

_DWORD *__cdecl _getbuf(_DWORD *a1)
{
  _DWORD *result; // eax

  a1[3] |= 4u;
  result = a1 + 5;
  a1[5] = 0;
  a1[1] = 0;
  a1[2] = a1 + 5;
  a1[6] = 2;
  *a1 = a1 + 5;
  return result;
}
