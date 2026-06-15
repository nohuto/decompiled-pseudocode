/*
 * XREFs of sub_18012F960 @ 0x18012F960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18012FB78 @ 0x18012FB78 (sub_18012FB78.c)
 */

__int64 __fastcall sub_18012F960(__int64 a1, __int64 a2, unsigned int a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 144) + 24LL))(
           *(_QWORD *)(a1 + 144),
           a2,
           a3);
}
