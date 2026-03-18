/*
 * XREFs of sub_1C004AD84 @ 0x1C004AD84
 * Callers:
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 *     sub_1C004AC90 @ 0x1C004AC90 (sub_1C004AC90.c)
 *     sub_1C005C614 @ 0x1C005C614 (sub_1C005C614.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

char *__fastcall sub_1C004AD84(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // r8
  __int64 v5; // rax
  _DWORD *i; // rcx

  v2 = a2;
  sub_1C000F050(a1);
  sub_1C000FD80(a1, 128, 1702380607, 0LL, v2);
  v4 = 0LL;
  v5 = 0LL;
  for ( i = &unk_1C005F7F0; (_DWORD)v2 != *i; i += 6 )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= 0x8E )
      return (char *)v4;
  }
  return (char *)&unk_1C005F7F0 + 24 * v5;
}
