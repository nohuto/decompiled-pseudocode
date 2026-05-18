/*
 * XREFs of sub_1800999C8 @ 0x1800999C8
 * Callers:
 *     sub_1800997D8 @ 0x1800997D8 (sub_1800997D8.c)
 *     sub_1800998A4 @ 0x1800998A4 (sub_1800998A4.c)
 * Callees:
 *     memset @ 0x18012396A (memset.c)
 */

_QWORD *__fastcall sub_1800999C8(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rsi
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx

  v2 = a2;
  v3 = a1;
  if ( a2 )
  {
    v4 = a1 + 6;
    do
    {
      memset(v3 + 1, 0, 0x50uLL);
      *v3 = 0LL;
      v3 += 11;
      *(v4 - 5) = 0LL;
      *((_DWORD *)v4 - 7) = 0;
      *(v4 - 3) = 0LL;
      *(v4 - 2) = 0LL;
      *(v4 - 1) = 0LL;
      *v4 = 0LL;
      v4[1] = 0LL;
      v4[2] = 0LL;
      v4[3] = 0LL;
      v4[4] = 0LL;
      *((_BYTE *)v4 - 32) = 1;
      v4 += 11;
      --v2;
    }
    while ( v2 );
  }
  return v3;
}
