/*
 * XREFs of sub_180132A3C @ 0x180132A3C
 * Callers:
 *     sub_180132E0C @ 0x180132E0C (sub_180132E0C.c)
 * Callees:
 *     sub_1800BCA78 @ 0x1800BCA78 (sub_1800BCA78.c)
 */

_BOOL8 __fastcall sub_180132A3C(_WORD *a1, size_t a2, __int64 a3, _WORD *a4, _WORD *a5)
{
  size_t v7; // [rsp+48h] [rbp+18h] BYREF
  _WORD *v8; // [rsp+50h] [rbp+20h] BYREF

  v7 = a2;
  v8 = 0LL;
  return !(unsigned int)sub_1800BCA78(a1, 0x25CuLL, aAppeventsSchem, &v8, &v7, 0)
      && !(unsigned int)sub_1800BCA78(v8, v7, aApps, &v8, &v7, 0)
      && !(unsigned int)sub_1800BCA78(v8, v7, a4, &v8, &v7, 0)
      && !(unsigned int)sub_1800BCA78(v8, v7, asc_18019DAA0, &v8, &v7, 0)
      && !(unsigned int)sub_1800BCA78(v8, v7, a5, &v8, &v7, 0)
      && !(unsigned int)sub_1800BCA78(v8, v7, asc_18019DAA0, &v8, &v7, 0)
      && !(unsigned int)sub_1800BCA78(v8, v7, aCurrent, &v8, &v7, 0);
}
