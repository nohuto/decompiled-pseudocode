/*
 * XREFs of __soutput_s @ 0x4B3012D8
 * Callers:
 *     __vsnprintf_s @ 0x4B2FF680 (__vsnprintf_s.c)
 *     _vsprintf_s @ 0x4B2FFF90 (_vsprintf_s.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     __flsbuf_s @ 0x4B2FB99A (__flsbuf_s.c)
 *     __output_s @ 0x4B3008FA (__output_s.c)
 */

int __cdecl _soutput_s(_BYTE *a1, unsigned int a2, signed __int8 *a3, int a4)
{
  int v4; // ebx
  _BYTE *v6; // [esp+Ch] [ebp-20h] BYREF
  int v7; // [esp+10h] [ebp-1Ch]
  _BYTE *v8; // [esp+14h] [ebp-18h]
  int v9; // [esp+18h] [ebp-14h]
  int v10; // [esp+1Ch] [ebp-10h]
  int v11; // [esp+20h] [ebp-Ch]
  int v12; // [esp+24h] [ebp-8h]
  int v13; // [esp+28h] [ebp-4h]

  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  if ( a2 )
  {
    if ( a2 == -1 )
    {
      v7 = 0x7FFFFFFF;
      goto LABEL_6;
    }
    if ( a2 <= 0x7FFFFFFF )
    {
      v7 = a2;
LABEL_6:
      v8 = a1;
      v6 = a1;
      v9 = 66;
      v4 = _output_s((int)&v6, a3, a4);
      a1[a2 - 1] = 0;
      if ( v4 < 0 )
      {
        if ( v7 >= 0 )
        {
          if ( a1 )
            *a1 = 0;
          return v4;
        }
        return -2;
      }
      if ( --v7 < 0 )
      {
        if ( _flsbuf_s(0, (int)&v6) == -1 )
          return -2;
      }
      else
      {
        *v6 = 0;
      }
      return v4;
    }
  }
  _invalid_parameter();
  return -1;
}
