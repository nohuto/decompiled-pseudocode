/*
 * XREFs of sub_1800D4618 @ 0x1800D4618
 * Callers:
 *     sub_1800C99E4 @ 0x1800C99E4 (sub_1800C99E4.c)
 *     sub_1800D32F4 @ 0x1800D32F4 (sub_1800D32F4.c)
 *     sub_1800D3CD4 @ 0x1800D3CD4 (sub_1800D3CD4.c)
 *     sub_1800D407C @ 0x1800D407C (sub_1800D407C.c)
 * Callees:
 *     sub_1800448E4 @ 0x1800448E4 (sub_1800448E4.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800D3078 @ 0x1800D3078 (sub_1800D3078.c)
 *     sub_1800D30A8 @ 0x1800D30A8 (sub_1800D30A8.c)
 *     sub_1800D31A8 @ 0x1800D31A8 (sub_1800D31A8.c)
 */

__int64 __fastcall sub_1800D4618(__int64 *a1)
{
  __int64 result; // rax
  int v2; // ebx
  int v4; // esi
  __int64 v5; // rbp
  int v6; // r14d

  result = *a1;
  v2 = 0;
  v4 = *(_DWORD *)(*a1 - 16);
  if ( v4 > 0 )
  {
    v5 = 0LL;
    do
    {
      result = sub_1800D3078(a1, v2);
      if ( (_WORD)result == 37 )
      {
        if ( (unsigned __int16)sub_1800D3078(a1, v2 + 1) == 37 )
        {
          result = sub_1800D30A8(a1, v2);
LABEL_10:
          --v4;
          goto LABEL_11;
        }
        result = sub_1800D3078(a1, v2 + 1);
        if ( (_WORD)result == 98 )
        {
          sub_1800D30A8(a1, v2);
          if ( v2 < 0 || (v6 = *(_DWORD *)(*a1 - 16), v2 >= v6) )
            sub_1800B8610(-2147024809);
          *(_WORD *)((char *)sub_1800D31A8((const void **)a1) + v5) = 124;
          result = sub_1800448E4(a1, v6);
          goto LABEL_10;
        }
      }
LABEL_11:
      ++v2;
      v5 += 2LL;
    }
    while ( v2 < v4 );
  }
  return result;
}
