/*
 * XREFs of sub_180035A10 @ 0x180035A10
 * Callers:
 *     sub_1800199F0 @ 0x1800199F0 (sub_1800199F0.c)
 * Callees:
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000DC14 @ 0x18000DC14 (sub_18000DC14.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180045BE4 @ 0x180045BE4 (sub_180045BE4.c)
 */

__int64 __fastcall sub_180035A10(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r9
  int v5; // edi
  __int64 v6; // rdx

  if ( (unsigned __int8)sub_180045BE4() )
  {
    v2 = sub_18000DC14(a1);
    v3 = v2;
    v4 = 0LL;
    if ( v2 )
      v4 = *(_QWORD *)(v2 + 576);
    v5 = PackageSuspendedNotificationForStoreLicense2(
           a1 + 96,
           *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 88LL) + 160LL) + 88LL),
           *(_QWORD *)(a1 + 88) + 228LL,
           v4);
    if ( v5 >= 0 )
      v5 = 0;
    if ( v3 )
    {
      sub_18001E380();
      if ( (*(_QWORD *)(v3 + 592))-- == 1LL )
        sub_18000A1AC(v3 - 64, v6);
      sub_18000F390();
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v5;
}
