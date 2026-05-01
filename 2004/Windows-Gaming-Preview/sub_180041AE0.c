/*
 * XREFs of sub_180041AE0 @ 0x180041AE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 */

__int64 __fastcall sub_180041AE0(__int64 a1, unsigned int a2, _DWORD *a3, _QWORD *a4, _DWORD *a5)
{
  int v5; // edx
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( !a4 )
  {
    v5 = 1242;
LABEL_3:
    sub_180003268(
      retaddr,
      v5,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      -2147467261);
    return 2147500035LL;
  }
  if ( !a5 )
  {
    v5 = 1243;
    goto LABEL_3;
  }
  if ( !a3 )
  {
    v5 = 1244;
    goto LABEL_3;
  }
  if ( a2 < *(unsigned __int16 *)(a1 + 50) )
  {
    v7 = *(_QWORD *)(a1 + 56);
    v8 = 2LL * a2;
    if ( *(_QWORD *)(v7 + 8 * v8 + 8) )
    {
      *a3 = *(_DWORD *)(v7 + 8 * v8);
      *a5 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 8 * v8 + 4) >> 1;
      result = 0LL;
      *a4 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v8 + 8);
    }
    else
    {
      sub_180003268(
        retaddr,
        1246,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        -2147418113);
      return 2147549183LL;
    }
  }
  else
  {
    sub_180003268(
      retaddr,
      1245,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      -2147483637);
    return 2147483659LL;
  }
  return result;
}
