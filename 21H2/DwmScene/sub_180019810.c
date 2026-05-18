/*
 * XREFs of sub_180019810 @ 0x180019810
 * Callers:
 *     sub_18001D460 @ 0x18001D460 (sub_18001D460.c)
 *     sub_1801261D7 @ 0x1801261D7 (sub_1801261D7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180019810(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(qword_18021F908 + 40) + 1048LL))(
             *(_QWORD *)(qword_18021F908 + 40),
             *a1,
             0LL);
  v3 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
