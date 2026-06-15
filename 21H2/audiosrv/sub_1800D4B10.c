/*
 * XREFs of sub_1800D4B10 @ 0x1800D4B10
 * Callers:
 *     sub_1800D7D70 @ 0x1800D7D70 (sub_1800D7D70.c)
 *     sub_180136310 @ 0x180136310 (sub_180136310.c)
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 */

_QWORD *__fastcall sub_1800D4B10(_QWORD *a1, _QWORD *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // r8

  v4 = sub_180055F40(0x18uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = off_180155258;
    *((_QWORD *)v4 + 2) = *a2;
    *a2 = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  a1[1] = v5;
  *a1 = v5 + 4;
  return a1;
}
