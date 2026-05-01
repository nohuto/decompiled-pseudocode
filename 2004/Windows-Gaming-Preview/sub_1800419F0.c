/*
 * XREFs of sub_1800419F0 @ 0x1800419F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180042604 @ 0x180042604 (sub_180042604.c)
 */

__int64 __fastcall sub_1800419F0(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v3; // edx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v2 = -2147467261;
    v3 = 1214;
LABEL_3:
    sub_180003268(
      retaddr,
      v3,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      v2);
    return (unsigned int)v2;
  }
  v2 = sub_180042604(a1, a2);
  if ( v2 < 0 )
  {
    v3 = 1216;
    goto LABEL_3;
  }
  return 0LL;
}
