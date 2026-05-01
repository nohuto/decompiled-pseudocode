/*
 * XREFs of sub_180040130 @ 0x180040130
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 */

__int64 __fastcall sub_180040130(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    result = 0LL;
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 32);
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 48);
  }
  else
  {
    sub_180003268(
      retaddr,
      536,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      -2147467261);
    return 2147500035LL;
  }
  return result;
}
