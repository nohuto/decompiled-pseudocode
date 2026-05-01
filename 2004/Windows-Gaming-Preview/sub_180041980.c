/*
 * XREFs of sub_180041980 @ 0x180041980
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 */

__int64 __fastcall sub_180041980(__int64 a1, _QWORD *a2, int *a3)
{
  int v3; // edx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v3 = 1202;
LABEL_3:
    sub_180003268(
      retaddr,
      v3,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      -2147467261);
    return 2147500035LL;
  }
  if ( !*(_QWORD *)(a1 + 40) )
  {
    v3 = 1203;
    goto LABEL_3;
  }
  if ( !a3 )
  {
    v3 = 1204;
    goto LABEL_3;
  }
  *a3 = *(unsigned __int16 *)(a1 + 48) >> 1;
  *a2 = *(_QWORD *)(a1 + 40);
  return 0LL;
}
