/*
 * XREFs of sub_1C003AC5C @ 0x1C003AC5C
 * Callers:
 *     sub_1C0018990 @ 0x1C0018990 (sub_1C0018990.c)
 *     sub_1C0019118 @ 0x1C0019118 (sub_1C0019118.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall sub_1C003AC5C(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax

  result = sub_1C000F050(a1);
  if ( *((_QWORD *)result + 535) )
    return (_DWORD *)(*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD))result + 535))(
                       *((_QWORD *)result + 529),
                       a2,
                       0LL);
  return result;
}
