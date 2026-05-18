/*
 * XREFs of sub_1800940F8 @ 0x1800940F8
 * Callers:
 *     sub_180093F08 @ 0x180093F08 (sub_180093F08.c)
 *     sub_180093FD4 @ 0x180093FD4 (sub_180093FD4.c)
 * Callees:
 *     memset @ 0x18011E09A (memset.c)
 */

_QWORD *__fastcall sub_1800940F8(_QWORD *a1, __int64 a2)
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
