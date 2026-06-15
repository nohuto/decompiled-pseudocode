/*
 * XREFs of sub_18013D070 @ 0x18013D070
 * Callers:
 *     sub_18007CD5D @ 0x18007CD5D (sub_18007CD5D.c)
 *     sub_18013D33B @ 0x18013D33B (sub_18013D33B.c)
 *     sub_18013ECF0 @ 0x18013ECF0 (sub_18013ECF0.c)
 *     sub_18013F6E1 @ 0x18013F6E1 (sub_18013F6E1.c)
 *     sub_18013F964 @ 0x18013F964 (sub_18013F964.c)
 *     sub_18013FC54 @ 0x18013FC54 (sub_18013FC54.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18013D070(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 8LL))(v2, 1LL);
  *a1 = 0LL;
  return result;
}
