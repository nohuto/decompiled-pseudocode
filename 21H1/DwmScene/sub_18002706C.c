/*
 * XREFs of sub_18002706C @ 0x18002706C
 * Callers:
 *     sub_18002BD94 @ 0x18002BD94 (sub_18002BD94.c)
 *     sub_180063C48 @ 0x180063C48 (sub_180063C48.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18002706C(__int64 *a1, _QWORD *a2, unsigned int *a3)
{
  __int64 *v3; // r10
  __int64 *v4; // r9
  __int64 *v5; // rax
  __int64 *v6; // rcx
  unsigned int v7; // r11d
  _QWORD *result; // rax

  v3 = (__int64 *)*a1;
  v4 = (__int64 *)*a1;
  v5 = *(__int64 **)(*a1 + 8);
  v6 = v5;
  if ( !*((_BYTE *)v5 + 25) )
  {
    v7 = *a3;
    do
    {
      if ( *((_DWORD *)v6 + 8) >= v7 )
      {
        if ( *((_BYTE *)v4 + 25) && v7 < *((_DWORD *)v6 + 8) )
          v4 = v6;
        v3 = v6;
        v6 = (__int64 *)*v6;
      }
      else
      {
        v6 = (__int64 *)v6[2];
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
  }
  if ( !*((_BYTE *)v4 + 25) )
    v5 = (__int64 *)*v4;
  while ( !*((_BYTE *)v5 + 25) )
  {
    if ( *a3 >= *((_DWORD *)v5 + 8) )
    {
      v5 = (__int64 *)v5[2];
    }
    else
    {
      v4 = v5;
      v5 = (__int64 *)*v5;
    }
  }
  *a2 = v3;
  result = a2;
  a2[1] = v4;
  return result;
}
