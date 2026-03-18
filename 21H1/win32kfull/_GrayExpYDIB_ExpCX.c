/*
 * XREFs of _GrayExpYDIB_ExpCX @ 0x1C92C6
 * Callers:
 *     _GrayExpandDIB_CY_ExpCX @ 0x1C9C3C (_GrayExpandDIB_CY_ExpCX.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall GrayExpYDIB_ExpCX(_DWORD *a1, unsigned __int8 *a2, _BYTE *a3, _BYTE *a4)
{
  _DWORD *result; // eax
  unsigned __int16 v7; // dx
  int v8; // ecx
  int v9; // ebx
  unsigned int v10; // [esp+18h] [ebp+8h]

  result = a1;
  do
  {
    v10 = (unsigned __int16)*result;
    a2 += v10 >> 15;
    v7 = result[1];
    v8 = *a2 * HIWORD(result[1]);
    if ( v7 )
    {
      v9 = HIWORD(*result);
      v8 += v7 * *(a2 - 1);
      if ( v9 )
      {
        v8 += v9 * *(a2 - 2);
        if ( (v10 & 0xFFFF3FFF) != 0 )
          v8 += (v10 & 0xFFFF3FFF) * *(a2 - 3);
      }
    }
    *a3++ = (unsigned int)(v8 + 4096) >> 13;
    result += 2;
  }
  while ( a3 != a4 );
  return result;
}
