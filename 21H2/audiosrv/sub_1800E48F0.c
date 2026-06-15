/*
 * XREFs of sub_1800E48F0 @ 0x1800E48F0
 * Callers:
 *     sub_1800BB014 @ 0x1800BB014 (sub_1800BB014.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1800E48F0()
{
  __int64 result; // rax

  if ( qword_18019EE60 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18019EE60 + 16LL))(qword_18019EE60);
    qword_18019EE60 = 0LL;
  }
  if ( qword_18019EE48 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18019EE48 + 16LL))(qword_18019EE48);
    qword_18019EE48 = 0LL;
  }
  if ( qword_18019EE50 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18019EE50 + 16LL))(qword_18019EE50);
    qword_18019EE50 = 0LL;
  }
  return result;
}
