/*
 * XREFs of sub_1800C7FC4 @ 0x1800C7FC4
 * Callers:
 *     sub_1800C6588 @ 0x1800C6588 (sub_1800C6588.c)
 *     sub_1800C90C4 @ 0x1800C90C4 (sub_1800C90C4.c)
 *     sub_1800CADB4 @ 0x1800CADB4 (sub_1800CADB4.c)
 *     sub_1800D3024 @ 0x1800D3024 (sub_1800D3024.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800C7FC4(_QWORD *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(*a1 - 24LL);
  if ( v1 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1);
  else
    result = 0LL;
  if ( !result )
    return (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 32))(&qword_18019F818);
  return result;
}
