/*
 * XREFs of sub_18012B49A @ 0x18012B49A
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_100 @ 0x180010C5C (unknown_libname_100.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18012B49A(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rax

  v3 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 128) + 8LL))(*(_QWORD *)(a2 + 128));
  unknown_libname_100((__int64 *)(a2 + 176), v3);
  return 0LL;
}
