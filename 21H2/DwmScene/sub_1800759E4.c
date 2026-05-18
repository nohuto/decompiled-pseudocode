/*
 * XREFs of sub_1800759E4 @ 0x1800759E4
 * Callers:
 *     sub_180075FA4 @ 0x180075FA4 (sub_180075FA4.c)
 *     sub_1800A3BC8 @ 0x1800A3BC8 (sub_1800A3BC8.c)
 *     sub_1800A3CA0 @ 0x1800A3CA0 (sub_1800A3CA0.c)
 *     sub_1800A3D78 @ 0x1800A3D78 (sub_1800A3D78.c)
 *     sub_1800A754C @ 0x1800A754C (sub_1800A754C.c)
 *     sub_1800D46D0 @ 0x1800D46D0 (sub_1800D46D0.c)
 *     sub_18011AFEC @ 0x18011AFEC (sub_18011AFEC.c)
 * Callees:
 *     memcmp @ 0x18012398E (memcmp.c)
 */

__int64 *__fastcall sub_1800759E4(__int64 *a1, size_t *a2)
{
  __int64 *v2; // rsi
  __int64 *v4; // rbx
  const void *v5; // rdx
  const void *v6; // rcx
  size_t v7; // rbp
  size_t v8; // r8
  int v9; // eax
  bool v10; // sf

  v2 = (__int64 *)*a1;
  v4 = *(__int64 **)(*a1 + 8);
  while ( !*((_BYTE *)v4 + 25) )
  {
    v5 = a2;
    if ( a2[3] >= 0x10 )
      v5 = (const void *)*a2;
    v6 = v4 + 4;
    if ( (unsigned __int64)v4[7] >= 0x10 )
      v6 = (const void *)v4[4];
    v7 = v4[6];
    v8 = v7;
    if ( a2[2] < v7 )
      v8 = a2[2];
    v9 = memcmp(v6, v5, v8);
    v10 = v9 < 0;
    if ( !v9 )
    {
      if ( v7 < a2[2] )
        goto LABEL_14;
      if ( v7 > a2[2] )
        goto LABEL_13;
      v10 = 0;
    }
    if ( v10 )
    {
LABEL_14:
      v4 = (__int64 *)v4[2];
    }
    else
    {
LABEL_13:
      v2 = v4;
      v4 = (__int64 *)*v4;
    }
  }
  return v2;
}
