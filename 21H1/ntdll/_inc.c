/*
 * XREFs of _inc @ 0x4B2FE3FC
 * Callers:
 *     ReadString @ 0x4B2FE156 (ReadString.c)
 *     __input_l @ 0x4B2FE430 (__input_l.c)
 *     _whiteout @ 0x4B2FEB50 (_whiteout.c)
 *     ReadString_0 @ 0x4B3013DC (ReadString_0.c)
 *     __input_s @ 0x4B30166C (__input_s.c)
 *     _whiteout_0 @ 0x4B301E7E (_whiteout_0.c)
 * Callees:
 *     __filbuf_s @ 0x4B2FEE98 (__filbuf_s.c)
 */

int __cdecl inc(_DWORD *a1)
{
  if ( --a1[1] < 0 )
    return _filbuf_s(a1);
  else
    return *(unsigned __int8 *)(*a1)++;
}
