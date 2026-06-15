/*
 * XREFs of sub_18013909C @ 0x18013909C
 * Callers:
 *     sub_1800661E0 @ 0x1800661E0 (sub_1800661E0.c)
 *     sub_180138D68 @ 0x180138D68 (sub_180138D68.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_18013909C(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // esi
  __int64 v4; // rcx
  unsigned int v5; // ebp
  _QWORD *v6; // rdi
  __int64 v7; // r8

  v2 = 0;
  if ( a2[1] )
  {
    v4 = 0LL;
    do
    {
      _mm_lfence();
      v5 = 0;
      v6 = *(_QWORD **)(*a2 + 8 * v4);
      if ( v6[1] )
      {
        v7 = 0LL;
        do
        {
          sub_18006A148(*(void **)(*v6 + 8 * v7));
          v7 = ++v5;
        }
        while ( (unsigned __int64)v5 < v6[1] );
      }
      if ( *v6 )
        _o_free(*v6);
      sub_18006A148(v6);
      v4 = ++v2;
    }
    while ( (unsigned __int64)v2 < a2[1] );
  }
  return sub_18013A4D4(a2, 0LL);
}
