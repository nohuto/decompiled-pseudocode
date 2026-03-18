/*
 * XREFs of sub_1C0052ED0 @ 0x1C0052ED0
 * Callers:
 *     sub_1C0052948 @ 0x1C0052948 (sub_1C0052948.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

char __fastcall sub_1C0052ED0(__int64 a1, unsigned __int8 *a2)
{
  unsigned int v3; // eax

  if ( *a2 == 7 )
  {
    v3 = *(_DWORD *)(a2 + 3);
    if ( (v3 & 0xFFFF00E1) != 0 )
      sub_1C000FD80(a1, 256, 1448423986, v3, 0LL);
    return 1;
  }
  else
  {
    sub_1C000FD80(a1, 256, 1448423985, *a2, 0LL);
    return 0;
  }
}
