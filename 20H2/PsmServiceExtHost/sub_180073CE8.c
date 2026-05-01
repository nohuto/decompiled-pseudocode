/*
 * XREFs of sub_180073CE8 @ 0x180073CE8
 * Callers:
 *     sub_18000220C @ 0x18000220C (sub_18000220C.c)
 *     sub_180016100 @ 0x180016100 (sub_180016100.c)
 * Callees:
 *     sub_1800024C4 @ 0x1800024C4 (sub_1800024C4.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180073964 @ 0x180073964 (sub_180073964.c)
 */

char __fastcall sub_180073CE8(__int64 a1, _QWORD *a2)
{
  _QWORD *i; // rbx
  __int64 v4; // rdi
  char result; // al
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  for ( i = (_QWORD *)*a2; i != a2; i = (_QWORD *)*i )
  {
    sub_1800024C4(&v6, i[2]);
    v4 = v6;
    result = sub_180073964(v6, 0);
    if ( v4 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
