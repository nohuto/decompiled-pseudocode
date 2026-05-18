/*
 * XREFs of sub_180020300 @ 0x180020300
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 (*sub_180020300())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_18021F8B8;
  if ( qword_18021F8B8 )
    return (__int64 (*)(void))result();
  result = (__int64 (*)(void))qword_18021F8C0;
  if ( qword_18021F8C0 )
    return (__int64 (*)(void))result();
  return result;
}
