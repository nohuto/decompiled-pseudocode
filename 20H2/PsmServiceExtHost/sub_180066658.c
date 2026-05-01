/*
 * XREFs of sub_180066658 @ 0x180066658
 * Callers:
 *     sub_180064440 @ 0x180064440 (sub_180064440.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 (*sub_180066658())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_1800B5030;
  if ( qword_1800B5030 )
    return (__int64 (*)(void))result();
  result = (__int64 (*)(void))qword_1800B5040;
  if ( qword_1800B5040 )
    return (__int64 (*)(void))result();
  return result;
}
