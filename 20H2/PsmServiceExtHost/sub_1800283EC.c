/*
 * XREFs of sub_1800283EC @ 0x1800283EC
 * Callers:
 *     sub_18000FAA0 @ 0x18000FAA0 (sub_18000FAA0.c)
 *     sub_180028C4C @ 0x180028C4C (sub_180028C4C.c)
 *     sub_18007B958 @ 0x18007B958 (sub_18007B958.c)
 * Callees:
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000EE6C @ 0x18000EE6C (sub_18000EE6C.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18002831C @ 0x18002831C (sub_18002831C.c)
 */

__int64 __fastcall sub_1800283EC(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v12; // rdx
  __int64 v14; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+28h] [rbp-10h] BYREF

  v14 = 0LL;
  v7 = sub_18000EE6C(a1, a2, &v14);
  if ( v7 < 0 )
  {
    v9 = v14;
  }
  else
  {
    v8 = a2;
    v9 = v14;
    v7 = sub_18002831C(v14, v8, &v15);
    if ( v7 >= 0 )
    {
      v10 = v15;
      *a3 = v9;
      v9 = 0LL;
      v7 = 0;
      *a4 = v10;
    }
  }
  if ( v9 )
  {
    sub_18001E380();
    if ( (*(_QWORD *)(v9 + 592))-- == 1LL )
      sub_18000A1AC(v9 - 64, v12);
    sub_18000F390();
  }
  return (unsigned int)v7;
}
