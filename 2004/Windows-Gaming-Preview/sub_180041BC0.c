/*
 * XREFs of sub_180041BC0 @ 0x180041BC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 */

__int64 __fastcall sub_180041BC0(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  int v5; // edx
  __int64 v7; // rdx
  int v8; // ecx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    v5 = 1258;
LABEL_3:
    sub_180003268(
      retaddr,
      v5,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      -2147467261);
    return 2147500035LL;
  }
  if ( !a4 )
  {
    v5 = 1259;
    goto LABEL_3;
  }
  if ( a2 < *(unsigned __int16 *)(a1 + 52) )
  {
    v7 = 2LL * a2;
    v8 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 8 * v7);
    *(_DWORD *)a3 = v8;
    if ( (v8 & 0x10000000) != 0 )
    {
      *a4 = 0;
      a4[2] = *(_WORD *)(a3 + 2) & 0x7FF;
    }
    else
    {
      *a4 = 1;
      *((_QWORD *)a4 + 1) = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v7 + 8);
      a4[4] = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 8 * v7 + 4);
    }
    return 0LL;
  }
  else
  {
    sub_180003268(
      retaddr,
      1261,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      -2147483637);
    return 2147483659LL;
  }
}
