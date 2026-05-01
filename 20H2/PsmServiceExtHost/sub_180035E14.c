/*
 * XREFs of sub_180035E14 @ 0x180035E14
 * Callers:
 *     sub_180035CA4 @ 0x180035CA4 (sub_180035CA4.c)
 * Callees:
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 */

_QWORD *__fastcall sub_180035E14(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx
  bool v4; // zf
  _QWORD *result; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx

  v1 = *(_QWORD *)(a1 + 48);
  if ( v1 )
  {
    sub_18001E380();
    v4 = (*(_QWORD *)(v1 + 592))-- == 1LL;
    if ( v4 )
      sub_18000A1AC(v1 - 64, v3);
    result = sub_18000F390();
  }
  v6 = *(_QWORD *)(a1 + 56);
  if ( v6 )
  {
    sub_18001E380();
    v4 = (*(_QWORD *)(v6 + 592))-- == 1LL;
    if ( v4 )
      sub_18000A1AC(v6 - 64, v7);
    return sub_18000F390();
  }
  return result;
}
