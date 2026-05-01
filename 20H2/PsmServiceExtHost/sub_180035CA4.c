/*
 * XREFs of sub_180035CA4 @ 0x180035CA4
 * Callers:
 *     sub_180035C5C @ 0x180035C5C (sub_180035C5C.c)
 * Callees:
 *     sub_180008938 @ 0x180008938 (sub_180008938.c)
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180035D5C @ 0x180035D5C (sub_180035D5C.c)
 *     sub_180035E14 @ 0x180035E14 (sub_180035E14.c)
 */

_QWORD *__fastcall sub_180035CA4(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rdx
  bool v7; // zf
  __int64 v8; // rbx
  __int64 v9; // rdx

  result = (_QWORD *)sub_180008938((_QWORD *)(a1 + 16));
  if ( !(_DWORD)result )
  {
    v4 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (result = (_QWORD *)v3[1], (_QWORD *)*result != v3) )
      __fastfail(3u);
    *result = v4;
    *(_QWORD *)(v4 + 8) = result;
    *(_OWORD *)v3 = 0LL;
  }
  if ( !*(_BYTE *)(a1 + 40) )
    return (_QWORD *)sub_180035D5C(a1);
  if ( *(_BYTE *)(a1 + 40) == 1 )
    return (_QWORD *)sub_180035E14(a1);
  if ( (unsigned int)*(unsigned __int8 *)(a1 + 40) - 3 <= 1 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    sub_18001E380();
    v7 = (*(_QWORD *)(v5 + 592))-- == 1LL;
    if ( v7 )
      sub_18000A1AC(v5 - 64, v6);
    sub_18000F390();
    v8 = *(_QWORD *)(a1 + 56);
    sub_18001E380();
    v7 = (*(_QWORD *)(v8 + 592))-- == 1LL;
    if ( v7 )
      sub_18000A1AC(v8 - 64, v9);
    return sub_18000F390();
  }
  return result;
}
