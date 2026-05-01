/*
 * XREFs of sub_18008299C @ 0x18008299C
 * Callers:
 *     sub_180082A64 @ 0x180082A64 (sub_180082A64.c)
 *     sub_180082F4C @ 0x180082F4C (sub_180082F4C.c)
 *     sub_180083178 @ 0x180083178 (sub_180083178.c)
 * Callees:
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 */

__int64 __fastcall sub_18008299C(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdx

  result = *(unsigned __int8 *)(a1 + 32);
  if ( (_BYTE)result != 5 && (_BYTE)result )
    result = SleepstudyHelperBlockerActiveDereference(*(_QWORD *)(a1 + 8 * result + 64));
  v3 = (_QWORD *)(a1 + 72);
  v4 = 4LL;
  do
  {
    if ( *v3 )
    {
      result = SleepstudyHelperDestroyBlocker();
      *v3 = 0LL;
    }
    ++v3;
    --v4;
  }
  while ( v4 );
  if ( *(_QWORD *)(a1 + 56) )
  {
    result = SleepstudyHelperDestroyBlocker();
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 )
  {
    sub_18001E380();
    if ( (*(_QWORD *)(v5 + 592))-- == 1LL )
      sub_18000A1AC(v5 - 64, v6);
    return (__int64)sub_18000F390();
  }
  return result;
}
