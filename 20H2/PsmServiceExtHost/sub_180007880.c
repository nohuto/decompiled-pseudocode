/*
 * XREFs of sub_180007880 @ 0x180007880
 * Callers:
 *     sub_180007740 @ 0x180007740 (sub_180007740.c)
 * Callees:
 *     sub_1800079FC @ 0x1800079FC (sub_1800079FC.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 */

__int64 __fastcall sub_180007880(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax

  sub_18001E380(a1);
  v2 = *(_DWORD *)(a1 + 1280);
  v3 = 0;
  if ( v2 == 1 )
  {
    v4 = -2147220219;
  }
  else if ( v2 )
  {
    if ( *(_BYTE *)(a1 + 12) )
    {
      v4 = -2147220220;
    }
    else
    {
      v4 = sub_1800079FC(*(_QWORD *)(a1 + 24), a1);
      if ( v4 >= 0 )
        v4 = 0;
    }
  }
  else
  {
    v4 = -2147220218;
  }
  if ( v4 < 0 )
    v3 = v4;
  sub_18000F390();
  return v3;
}
