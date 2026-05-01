/*
 * XREFs of sub_180040470 @ 0x180040470
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     _o_memcpy_s @ 0x18004539C (_o_memcpy_s.c)
 */

__int64 __fastcall sub_180040470(__int64 a1, __int64 a2)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 36) >= 3u )
    {
      o_memcpy_s(a2, 696LL, a1 + 32, 696LL);
      return 0LL;
    }
    else
    {
      sub_180003268(
        retaddr,
        609,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        -2147024883);
      return 2147942413LL;
    }
  }
  else
  {
    sub_180003268(
      retaddr,
      607,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      -2147467261);
    return 2147500035LL;
  }
}
