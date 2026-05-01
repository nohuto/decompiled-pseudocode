/*
 * XREFs of sub_1800421D8 @ 0x1800421D8
 * Callers:
 *     sub_180041D10 @ 0x180041D10 (sub_180041D10.c)
 *     sub_180042120 @ 0x180042120 (sub_180042120.c)
 *     sub_180042214 @ 0x180042214 (sub_180042214.c)
 *     sub_180042298 @ 0x180042298 (sub_180042298.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 */

__int64 __fastcall sub_1800421D8(__int64 a1, unsigned int a2)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 <= *(_DWORD *)(a1 + 32) )
    return 0LL;
  sub_180003268(
    retaddr,
    1410,
    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    -2147483637);
  return 2147483659LL;
}
