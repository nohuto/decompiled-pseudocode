/*
 * XREFs of ___ascii_stricmp @ 0x4B2FCE20
 * Callers:
 *     __stricmp @ 0x4B2F7400 (__stricmp.c)
 * Callees:
 *     <none>
 */

int __cdecl __ascii_stricmp(_BYTE *a1, _BYTE *a2)
{
  int result; // eax
  char v5; // t0

  LOBYTE(result) = -1;
  while ( (_BYTE)result )
  {
    LOBYTE(result) = *a2++;
    BYTE1(result) = *a1++;
    if ( BYTE1(result) != (_BYTE)result )
    {
      v5 = BYTE1(result);
      BYTE1(result) = ((unsigned __int8)(result - 65) < 0x1Au ? 0x20 : 0) + result;
      LOBYTE(result) = ((unsigned __int8)(v5 - 65) < 0x1Au ? 0x20 : 0) + v5;
      if ( (_BYTE)result != BYTE1(result) )
      {
        LOBYTE(result) = -((unsigned __int8)result < BYTE1(result)) - (((unsigned __int8)result < BYTE1(result)) - 1);
        return (char)result;
      }
    }
  }
  return (char)result;
}
