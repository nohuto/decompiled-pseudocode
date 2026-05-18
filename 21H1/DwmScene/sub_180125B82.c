/*
 * XREFs of sub_180125B82 @ 0x180125B82
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_98 @ 0x180010B7C (unknown_libname_98.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180125B82(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rax

  v3 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 128) + 8LL))(*(_QWORD *)(a2 + 128));
  unknown_libname_98((__int64 *)(a2 + 176), v3);
  return 0LL;
}
