/*
 * XREFs of sub_180066C5C @ 0x180066C5C
 * Callers:
 *     sub_18003A464 @ 0x18003A464 (sub_18003A464.c)
 *     sub_18003A538 @ 0x18003A538 (sub_18003A538.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_180066C5C(_DWORD *a1)
{
  unsigned int v1; // edx
  _BOOL8 result; // rax

  result = 0;
  if ( *a1 )
  {
    v1 = a1[1];
    if ( ((v1 | ((v1 | (v1 >> 2)) >> 2)) & 0x300) != 0 || (v1 & 0x3F000000) != 0 || (v1 & 2) != 0 )
      return 1;
  }
  return result;
}
