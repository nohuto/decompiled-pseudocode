/*
 * XREFs of sub_180069060 @ 0x180069060
 * Callers:
 *     sub_1800669B4 @ 0x1800669B4 (sub_1800669B4.c)
 *     sub_18010E868 @ 0x18010E868 (sub_18010E868.c)
 *     sub_18010E960 @ 0x18010E960 (sub_18010E960.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180069060(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
  *a1 = 0LL;
  return result;
}
