/*
 * XREFs of sub_1800634A4 @ 0x1800634A4
 * Callers:
 *     sub_180063500 @ 0x180063500 (sub_180063500.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_1800634A4(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rcx
  __int64 v4; // rcx

  result = off_18008D608;
  *a1 = off_18008D608;
  v3 = a1[33];
  if ( v3 )
    result = (__int64 (__fastcall **)())TpReleaseWork(v3);
  v4 = a1[36];
  if ( v4 )
    return (__int64 (__fastcall **)())(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return result;
}
