/*
 * XREFs of sub_180044834 @ 0x180044834
 * Callers:
 *     sub_1800470E0 @ 0x1800470E0 (sub_1800470E0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_180044834()
{
  __int64 result; // rax

  if ( qword_1800B4320 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1800B4320 + 16LL))(qword_1800B4320);
  return result;
}
