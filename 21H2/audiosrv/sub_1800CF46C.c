/*
 * XREFs of sub_1800CF46C @ 0x1800CF46C
 * Callers:
 *     sub_18002A978 @ 0x18002A978 (sub_18002A978.c)
 *     sub_18002C2A0 @ 0x18002C2A0 (sub_18002C2A0.c)
 *     sub_1800CE808 @ 0x1800CE808 (sub_1800CE808.c)
 *     sub_1800CED00 @ 0x1800CED00 (sub_1800CED00.c)
 *     sub_1800CFF9C @ 0x1800CFF9C (sub_1800CFF9C.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800CECB0 @ 0x1800CECB0 (sub_1800CECB0.c)
 */

__int64 __fastcall sub_1800CF46C(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 *v3; // r11
  __int64 v4; // r8

  if ( !*a2 )
    sub_1800B8610(-2147467259);
  v2 = sub_1800CECB0(a1, *a2);
  *v3 = v2;
  return v4 + 80;
}
