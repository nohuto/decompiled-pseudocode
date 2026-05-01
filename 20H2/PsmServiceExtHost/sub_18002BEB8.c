/*
 * XREFs of sub_18002BEB8 @ 0x18002BEB8
 * Callers:
 *     sub_18002BD04 @ 0x18002BD04 (sub_18002BD04.c)
 *     sub_18003655C @ 0x18003655C (sub_18003655C.c)
 *     sub_18003B680 @ 0x18003B680 (sub_18003B680.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_18002BEB8(unsigned __int64 a1)
{
  __int64 v1; // rax
  _BOOL8 result; // rax

  result = 0;
  if ( (unsigned int)a1 <= 0x22 )
  {
    v1 = 0x50001FFF8LL;
    if ( _bittest64(&v1, a1) )
      return 1;
  }
  return result;
}
