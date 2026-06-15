/*
 * XREFs of sub_1800BD6C0 @ 0x1800BD6C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180071C14 @ 0x180071C14 (sub_180071C14.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800BD6C0(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v3; // rcx

  result = sub_180071C14((_QWORD *)(a1 + 32));
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
