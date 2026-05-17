/*
 * XREFs of RtlULongAdd @ 0x180038AC4
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180033BCC (LdrpSearchResourceSection_U.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlULongAdd(unsigned int a1, int a2, int *a3)
{
  unsigned int v3; // eax
  int v4; // edx
  __int64 result; // rax

  v3 = a1 + a2;
  v4 = -1;
  if ( v3 >= a1 )
    v4 = v3;
  result = v3 < a1 ? 0xC0000095 : 0;
  *a3 = v4;
  return result;
}
