/*
 * XREFs of sub_180017EA4 @ 0x180017EA4
 * Callers:
 *     sub_18001A700 @ 0x18001A700 (sub_18001A700.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180017EA4(__int64 *a1, int *a2, _QWORD *a3)
{
  __int64 v5; // rcx

  v5 = *a1;
  if ( v5 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return sub_180017E00(a1, a2, a3);
}
