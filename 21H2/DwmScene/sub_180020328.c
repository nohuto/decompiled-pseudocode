/*
 * XREFs of sub_180020328 @ 0x180020328
 * Callers:
 *     sub_18001950C @ 0x18001950C (sub_18001950C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 (*sub_180020328())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_18021F8E8;
  if ( qword_18021F8E8 )
    return (__int64 (*)(void))result();
  result = (__int64 (*)(void))qword_18021F8F0;
  if ( qword_18021F8F0 )
    return (__int64 (*)(void))result();
  return result;
}
