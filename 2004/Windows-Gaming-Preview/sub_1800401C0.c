/*
 * XREFs of sub_1800401C0 @ 0x1800401C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 */

__int64 __fastcall sub_1800401C0(__int64 a1, unsigned int a2, _OWORD *a3)
{
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    if ( a2 < *(_DWORD *)(a1 + 800) )
    {
      result = 0LL;
      *a3 = *(_OWORD *)(a2 * *(_DWORD *)(a1 + 52) + *(_QWORD *)(a1 + 744));
    }
    else
    {
      sub_180003268(
        retaddr,
        555,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        -2147483637);
      return 2147483659LL;
    }
  }
  else
  {
    sub_180003268(
      retaddr,
      554,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      -2147467261);
    return 2147500035LL;
  }
  return result;
}
