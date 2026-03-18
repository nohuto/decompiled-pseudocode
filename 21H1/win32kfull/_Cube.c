/*
 * XREFs of _Cube @ 0xED8F8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __cdecl Cube(int a1)
{
  unsigned __int64 result; // rax
  unsigned int v2; // ecx
  unsigned __int64 v3; // rax
  int v4; // [esp-4h] [ebp-8h]

  result = a1;
  LODWORD(result) = abs32(a1);
  if ( (_DWORD)result )
  {
    v4 = HIDWORD(result);
    v2 = result;
    if ( (_UNKNOWN *)result != (_UNKNOWN *)((char *)&loc_F423E + 2) )
    {
      v3 = (unsigned __int64)&loc_7A120 + (unsigned int)result * (unsigned __int64)(unsigned int)result;
      if ( HIDWORD(v3) >= (unsigned int)&loc_F423E + 2
        || (result = (unsigned __int64)&loc_7A120
                   + v2 * (unsigned __int64)(unsigned int)(v3 / ((unsigned int)&loc_F423E + 2)),
            HIDWORD(result) >= (unsigned int)&loc_F423E + 2) )
      {
        LODWORD(result) = 0x7FFFFFFF;
      }
      else
      {
        LODWORD(result) = result / ((unsigned int)&loc_F423E + 2);
      }
    }
    LODWORD(result) = (v4 ^ result) - v4;
  }
  return (int)result;
}
