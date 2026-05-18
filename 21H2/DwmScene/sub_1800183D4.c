/*
 * XREFs of sub_1800183D4 @ 0x1800183D4
 * Callers:
 *     sub_18001AF60 @ 0x18001AF60 (sub_18001AF60.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800183D4(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx

  v4 = *a1;
  if ( v4 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return sub_180018334(a1, a2);
}
