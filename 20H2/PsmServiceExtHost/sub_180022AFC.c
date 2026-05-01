/*
 * XREFs of sub_180022AFC @ 0x180022AFC
 * Callers:
 *     sub_18000DF0C @ 0x18000DF0C (sub_18000DF0C.c)
 *     sub_18000FAA0 @ 0x18000FAA0 (sub_18000FAA0.c)
 * Callees:
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180021954 @ 0x180021954 (sub_180021954.c)
 *     sub_180022B60 @ 0x180022B60 (sub_180022B60.c)
 */

__int64 __fastcall sub_180022AFC(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int v5; // eax
  __int64 v6; // rbx
  int v7; // edi
  __int64 v9; // rdx
  __int64 v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v11[0] = 0LL;
  v5 = sub_180022B60(a1, a2, a3, v11);
  v6 = v11[0];
  v7 = v5;
  if ( v5 >= 0 )
  {
    v7 = sub_180021954(v11[0]);
    if ( v7 >= 0 )
    {
      *a4 = v6;
      v6 = 0LL;
    }
  }
  if ( v6 )
  {
    sub_18001E380();
    if ( (*(_QWORD *)(v6 + 592))-- == 1LL )
      sub_18000A1AC(v6 - 64, v9);
    sub_18000F390();
  }
  return (unsigned int)v7;
}
