/*
 * XREFs of sub_180111BF0 @ 0x180111BF0
 * Callers:
 *     sub_180111980 @ 0x180111980 (sub_180111980.c)
 *     sub_180112180 @ 0x180112180 (sub_180112180.c)
 *     sub_180112C60 @ 0x180112C60 (sub_180112C60.c)
 *     sub_180112CEC @ 0x180112CEC (sub_180112CEC.c)
 *     sub_180113800 @ 0x180113800 (sub_180113800.c)
 *     sub_18013E790 @ 0x18013E790 (sub_18013E790.c)
 *     sub_18013E810 @ 0x18013E810 (sub_18013E810.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180111BF0(_QWORD *a1, __int64 a2)
{
  _QWORD *i; // rbx
  __int64 v4; // rsi

  for ( i = (_QWORD *)*a1; ; i = (_QWORD *)*i )
  {
    if ( !i )
      return 0LL;
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = i[2];
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
    if ( v4 == a2 )
      break;
  }
  return i;
}
