/*
 * XREFs of sub_1800FA18C @ 0x1800FA18C
 * Callers:
 *     sub_180062644 @ 0x180062644 (sub_180062644.c)
 *     sub_1800FEC48 @ 0x1800FEC48 (sub_1800FEC48.c)
 *     sub_1800FFDC0 @ 0x1800FFDC0 (sub_1800FFDC0.c)
 * Callees:
 *     sub_18005262C @ 0x18005262C (sub_18005262C.c)
 *     sub_1800628AC @ 0x1800628AC (sub_1800628AC.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800FABB0 @ 0x1800FABB0 (sub_1800FABB0.c)
 */

__int64 __fastcall sub_1800FA18C(__int64 a1)
{
  struct _TP_WAIT *v2; // rcx
  HKEY v3; // rcx

  v2 = *(struct _TP_WAIT **)(a1 + 136);
  if ( v2 )
    sub_1800FABB0(v2);
  sub_18005262C((void **)(a1 + 128));
  v3 = *(HKEY *)(a1 + 120);
  if ( v3 )
    RegCloseKey(v3);
  sub_1800628AC(a1);
  sub_18006A148((void *)a1);
  return a1;
}
