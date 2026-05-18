/*
 * XREFs of sub_180104D08 @ 0x180104D08
 * Callers:
 *     sub_180104C90 @ 0x180104C90 (sub_180104C90.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall sub_180104D08(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  _UNKNOWN **result; // rax
  _QWORD *v7; // rdi
  _QWORD *i; // rbx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v7 = *(_QWORD **)(a1 + 160);
  for ( i = *(_QWORD **)(a1 + 152); i != v7; i += 2 )
    result = (_UNKNOWN **)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int, int))(*(_QWORD *)*i + 8LL))(
                            *i,
                            a2,
                            a3,
                            a4,
                            a5,
                            a6);
  return result;
}
