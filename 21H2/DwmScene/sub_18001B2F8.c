/*
 * XREFs of sub_18001B2F8 @ 0x18001B2F8
 * Callers:
 *     sub_180020210 @ 0x180020210 (sub_180020210.c)
 * Callees:
 *     sub_18001B374 @ 0x18001B374 (sub_18001B374.c)
 *     sub_180021EF8 @ 0x180021EF8 (sub_180021EF8.c)
 */

char __fastcall sub_18001B2F8(__int64 a1)
{
  char v1; // bl
  int v3; // eax

  v1 = 0;
  if ( *(_QWORD *)(a1 + 160) )
  {
    v3 = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 160) = 0LL;
    v3 = sub_180021EF8(sub_180016330, a1, 0LL);
  }
  if ( !v3
    && !(unsigned int)sub_18001B374(a1 + 144, 0x418A073AA3BC7C75LL, a1)
    && !(unsigned int)sub_18001B374(a1 + 152, 0x418A073AA3BC88F5LL, a1) )
  {
    return 1;
  }
  return v1;
}
