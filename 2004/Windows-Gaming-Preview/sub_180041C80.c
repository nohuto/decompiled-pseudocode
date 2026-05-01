/*
 * XREFs of sub_180041C80 @ 0x180041C80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 */

__int64 __fastcall sub_180041C80(__int64 a1, _QWORD *a2)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    *a2 = *(_QWORD *)(a1 + 24);
    return 0LL;
  }
  else
  {
    sub_180003268(
      retaddr,
      1285,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      -2147467261);
    return 2147500035LL;
  }
}
