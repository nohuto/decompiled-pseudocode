/*
 * XREFs of sub_18007EC18 @ 0x18007EC18
 * Callers:
 *     sub_18007A780 @ 0x18007A780 (sub_18007A780.c)
 * Callees:
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000EE6C @ 0x18000EE6C (sub_18000EE6C.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18007E97C @ 0x18007E97C (sub_18007E97C.c)
 */

__int64 __fastcall sub_18007EC18(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  int v6; // eax
  __int64 v7; // rdi
  unsigned int v8; // esi
  int v9; // eax
  __int64 v10; // rdx
  bool v11; // zf
  __int64 v12; // rdx
  __int64 v14[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  v14[0] = 0LL;
  v4 = 0LL;
  v15 = 0LL;
  v6 = sub_18000EE6C(a1, a2, v14);
  v7 = v14[0];
  v8 = v6;
  if ( v6 >= 0 )
  {
    v9 = sub_18000EE6C(a1, a3, &v15);
    v4 = v15;
    v8 = v9;
    if ( v9 >= 0 )
      v8 = sub_18007E97C(v7, v15, 0);
  }
  if ( v7 )
  {
    sub_18001E380();
    v11 = (*(_QWORD *)(v7 + 592))-- == 1LL;
    if ( v11 )
      sub_18000A1AC(v7 - 64, v10);
    sub_18000F390();
  }
  if ( v4 )
  {
    sub_18001E380();
    v11 = (*(_QWORD *)(v4 + 592))-- == 1LL;
    if ( v11 )
      sub_18000A1AC(v4 - 64, v12);
    sub_18000F390();
  }
  return v8;
}
