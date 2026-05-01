/*
 * XREFs of sub_180063B04 @ 0x180063B04
 * Callers:
 *     sub_180063D08 @ 0x180063D08 (sub_180063D08.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180063B04(unsigned int *a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  bool result; // al

  result = 1;
  if ( (a1[10] & 0x10) == 0 )
  {
    if ( *a1 > 0x28 )
      return 0;
    v1 = (int)*a1;
    v2 = 0x11000002000LL;
    if ( !_bittest64(&v2, v1) )
      return 0;
  }
  return result;
}
