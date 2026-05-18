/*
 * XREFs of sub_180017DD4 @ 0x180017DD4
 * Callers:
 *     sub_18001E0C4 @ 0x18001E0C4 (sub_18001E0C4.c)
 *     sub_18002A430 @ 0x18002A430 (sub_18002A430.c)
 *     sub_18002EC90 @ 0x18002EC90 (sub_18002EC90.c)
 *     sub_18002EF30 @ 0x18002EF30 (sub_18002EF30.c)
 *     sub_180030690 @ 0x180030690 (sub_180030690.c)
 *     _expandlocale @ 0x1800418BC (_expandlocale.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall sub_180017DD4(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return a1;
}
