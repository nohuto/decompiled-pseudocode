/*
 * XREFs of __sinput_s @ 0x4B301E1A
 * Callers:
 *     __snscanf_s @ 0x4B2FF710 (__snscanf_s.c)
 *     _sscanf_s @ 0x4B2FFFE0 (_sscanf_s.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     __input_s @ 0x4B30166C (__input_s.c)
 */

int __cdecl _sinput_s(char *a1, unsigned int a2, unsigned __int8 *a3, int *a4)
{
  FILE Stream; // [esp+0h] [ebp-20h] BYREF

  memset(&Stream._file, 0, 16);
  if ( a1 && a3 && a2 <= 0x7FFFFFFF )
  {
    Stream._base = a1;
    Stream._ptr = a1;
    Stream._flag = 73;
    Stream._cnt = a2;
    return _input_s(&Stream, a3, a4);
  }
  else
  {
    _invalid_parameter();
    return -1;
  }
}
