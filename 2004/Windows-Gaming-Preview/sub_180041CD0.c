/*
 * XREFs of sub_180041CD0 @ 0x180041CD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 */

__int64 __fastcall sub_180041CD0(__int64 a1, _DWORD *a2)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    *a2 = *(_DWORD *)(a1 + 36);
    return 0LL;
  }
  else
  {
    sub_180003268(
      retaddr,
      1294,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      -2147467261);
    return 2147500035LL;
  }
}
