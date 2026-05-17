/*
 * XREFs of _swoutput_s @ 0x1800998AC
 * Callers:
 *     _vsnwprintf_s @ 0x180096B20 (_vsnwprintf_s.c)
 *     vswprintf_s @ 0x180097A90 (vswprintf_s.c)
 * Callees:
 *     _invalid_parameter @ 0x18008C168 (_invalid_parameter.c)
 *     _woutput_s @ 0x1800999DC (_woutput_s.c)
 *     _flsbuf_s @ 0x18009B260 (_flsbuf_s.c)
 */

__int64 __fastcall swoutput_s(_WORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  unsigned int v7; // esi
  _BYTE *v8; // rax
  _BYTE *v10; // [rsp+30h] [rbp-30h] BYREF
  int v11; // [rsp+38h] [rbp-28h]
  int v12; // [rsp+3Ch] [rbp-24h]
  _WORD *v13; // [rsp+40h] [rbp-20h]
  int v14; // [rsp+48h] [rbp-18h]
  __int128 v15; // [rsp+4Ch] [rbp-14h]
  int v16; // [rsp+5Ch] [rbp-4h]

  v12 = 0;
  v16 = 0;
  v15 = 0LL;
  if ( a2 )
  {
    if ( a2 == -1LL )
    {
      v11 = 0x7FFFFFFF;
      goto LABEL_6;
    }
    if ( a2 <= 0x3FFFFFFF )
    {
      v11 = 2 * a2;
LABEL_6:
      v13 = a1;
      v10 = a1;
      v14 = 66;
      v6 = woutput_s(&v10, a3, a4);
      a1[a2 - 1] = 0;
      v7 = v6;
      if ( v6 < 0 )
      {
        if ( v11 >= 0 )
        {
          if ( a1 )
          {
            if ( a2 )
              *a1 = 0;
          }
          return v7;
        }
        return 4294967294LL;
      }
      if ( --v11 < 0 )
      {
        if ( (unsigned int)flsbuf_s(0LL, &v10) == -1 )
          return 4294967294LL;
        v8 = v10;
      }
      else
      {
        *v10 = 0;
        v8 = ++v10;
      }
      if ( --v11 >= 0 )
      {
        *v8 = 0;
        return v7;
      }
      if ( (unsigned int)flsbuf_s(0LL, &v10) != -1 )
        return v7;
      return 4294967294LL;
    }
  }
  invalid_parameter();
  return 0xFFFFFFFFLL;
}
