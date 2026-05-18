/*
 * XREFs of sub_180125701 @ 0x180125701
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180125701(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 56) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a2 + 56) + 8LL))(
                           *(_QWORD *)(a2 + 56),
                           *(_QWORD *)(a2 + 64));
  return 0LL;
}
