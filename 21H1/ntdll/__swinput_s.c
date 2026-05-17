/*
 * XREFs of __swinput_s @ 0x4B302D82
 * Callers:
 *     __snwscanf_s @ 0x4B2FF810 (__snwscanf_s.c)
 *     _swscanf_s @ 0x4B3004B0 (_swscanf_s.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     __winput_s @ 0x4B302E38 (__winput_s.c)
 */

int __cdecl _swinput_s(char *a1, unsigned int a2, int a3, int a4)
{
  FILE Stream; // [esp+0h] [ebp-20h] BYREF

  memset(&Stream._file, 0, 16);
  if ( a1 && a3 && a2 <= 0x3FFFFFFF )
  {
    Stream._base = a1;
    Stream._ptr = a1;
    Stream._cnt = 2 * a2;
    Stream._flag = 73;
    return _winput_s(&Stream, a3, a4);
  }
  else
  {
    _invalid_parameter();
    return -1;
  }
}
