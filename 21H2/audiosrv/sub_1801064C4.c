/*
 * XREFs of sub_1801064C4 @ 0x1801064C4
 * Callers:
 *     sub_1800BB014 @ 0x1800BB014 (sub_1800BB014.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1801064C4()
{
  __int64 result; // rax

  if ( qword_18019F850 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18019F850 + 40LL))(qword_18019F850);
    if ( qword_18019F850 )
    {
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18019F850 + 16LL))(qword_18019F850);
      qword_18019F850 = 0LL;
    }
  }
  return result;
}
