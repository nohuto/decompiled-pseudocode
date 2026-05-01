/*
 * XREFs of sub_180042214 @ 0x180042214
 * Callers:
 *     sub_180041D10 @ 0x180041D10 (sub_180041D10.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180042120 @ 0x180042120 (sub_180042120.c)
 *     sub_1800421D8 @ 0x1800421D8 (sub_1800421D8.c)
 */

__int64 __fastcall sub_180042214(__int64 a1, _WORD *a2)
{
  int v4; // ebx
  int v5; // edx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v4 = sub_1800421D8(a1, 2u);
  if ( v4 < 0 )
  {
    v5 = 1417;
LABEL_3:
    sub_180003268(
      retaddr,
      v5,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      v4);
    return (unsigned int)v4;
  }
  *a2 = **(_WORD **)(a1 + 16);
  v4 = sub_180042120(a1, 2LL, 0);
  if ( v4 < 0 )
  {
    v5 = 1421;
    goto LABEL_3;
  }
  return 0LL;
}
