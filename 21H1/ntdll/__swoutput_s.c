/*
 * XREFs of __swoutput_s @ 0x4B301EAA
 * Callers:
 *     __vsnwprintf_s @ 0x4B2FF780 (__vsnwprintf_s.c)
 *     _vswprintf_s @ 0x4B300450 (_vswprintf_s.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     __flsbuf_s @ 0x4B2FB99A (__flsbuf_s.c)
 *     __woutput_s @ 0x4B301F94 (__woutput_s.c)
 */

int __cdecl _swoutput_s(_WORD *a1, unsigned int a2, int a3, int a4)
{
  int v4; // ebx
  _BYTE *v5; // eax
  _BYTE *v7; // [esp+Ch] [ebp-20h] BYREF
  int v8; // [esp+10h] [ebp-1Ch]
  _WORD *v9; // [esp+14h] [ebp-18h]
  int v10; // [esp+18h] [ebp-14h]
  int v11; // [esp+1Ch] [ebp-10h]
  int v12; // [esp+20h] [ebp-Ch]
  int v13; // [esp+24h] [ebp-8h]
  int v14; // [esp+28h] [ebp-4h]

  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  if ( a2 )
  {
    if ( a2 == -1 )
    {
      v8 = 0x7FFFFFFF;
      goto LABEL_6;
    }
    if ( a2 <= 0x3FFFFFFF )
    {
      v8 = 2 * a2;
LABEL_6:
      v9 = a1;
      v7 = a1;
      v10 = 66;
      v4 = _woutput_s(&v7, a3, a4);
      a1[a2 - 1] = 0;
      if ( v4 < 0 )
      {
        if ( v8 >= 0 )
        {
          if ( a1 )
            *a1 = 0;
          return v4;
        }
        return -2;
      }
      if ( --v8 < 0 )
      {
        if ( _flsbuf_s(0, (int)&v7) == -1 )
          return -2;
        v5 = v7;
      }
      else
      {
        *v7 = 0;
        v5 = ++v7;
      }
      if ( --v8 >= 0 )
      {
        *v5 = 0;
        return v4;
      }
      if ( _flsbuf_s(0, (int)&v7) != -1 )
        return v4;
      return -2;
    }
  }
  _invalid_parameter();
  return -1;
}
