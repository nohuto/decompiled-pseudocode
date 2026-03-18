/*
 * XREFs of sub_1C0057830 @ 0x1C0057830
 * Callers:
 *     sub_1C0057020 @ 0x1C0057020 (sub_1C0057020.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0015C80 @ 0x1C0015C80 (sub_1C0015C80.c)
 *     sub_1C0016670 @ 0x1C0016670 (sub_1C0016670.c)
 *     sub_1C00583EC @ 0x1C00583EC (sub_1C00583EC.c)
 */

void __fastcall sub_1C0057830(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi

  sub_1C0011220(a2);
  v6 = sub_1C0015C80(a1, a2, a3, 0x44746573u);
  v7 = v6;
  if ( v6 )
  {
    sub_1C000FD80(a1, 32, 1936028740, 0LL, v6);
    sub_1C00583EC(a1, v7, a2);
    sub_1C0016670(a1, v7, a3, 0x44746573u);
  }
}
