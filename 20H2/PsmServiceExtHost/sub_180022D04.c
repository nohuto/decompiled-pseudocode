/*
 * XREFs of sub_180022D04 @ 0x180022D04
 * Callers:
 *     sub_180022B60 @ 0x180022B60 (sub_180022B60.c)
 *     sub_18003489C @ 0x18003489C (sub_18003489C.c)
 *     sub_180079A1C @ 0x180079A1C (sub_180079A1C.c)
 * Callees:
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180022DB0 @ 0x180022DB0 (sub_180022DB0.c)
 *     memcmp @ 0x180046816 (memcmp.c)
 */

__int64 __fastcall sub_180022D04(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // eax
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 v9; // rdx
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0LL;
  v5 = sub_180022DB0(a1, *(_QWORD *)(a2 + 544), &v11);
  v6 = v11;
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( wcsicmp((const wchar_t *)a2, (const wchar_t *)(v11 + 24))
      || memcmp((const void *)(a2 + 464), (const void *)(v6 + 488), 0x58uLL) )
    {
      v7 = -1073741584;
    }
    else
    {
      *a3 = v6;
      v6 = 0LL;
      v7 = 0;
    }
  }
  if ( v6 )
  {
    sub_18001E380();
    if ( (*(_QWORD *)(v6 + 592))-- == 1LL )
      sub_18000A1AC(v6 - 64, v9);
    sub_18000F390();
  }
  return v7;
}
