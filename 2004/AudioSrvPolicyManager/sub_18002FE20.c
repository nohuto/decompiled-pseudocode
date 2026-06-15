/*
 * XREFs of sub_18002FE20 @ 0x18002FE20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002FE20(__int64 a1, _QWORD *a2)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 8LL))(*(_QWORD *)(a1 + 8));
  *a2 = *(_QWORD *)(a1 + 8);
  return 0LL;
}
