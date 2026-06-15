/*
 * XREFs of sub_18012F6E0 @ 0x18012F6E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18012FB78 @ 0x18012FB78 (sub_18012FB78.c)
 */

__int64 __fastcall sub_18012F6E0(__int64 a1, __int64 a2, __int64 a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 128) + 24LL))(
           *(_QWORD *)(a1 + 128),
           a2,
           a3);
}
