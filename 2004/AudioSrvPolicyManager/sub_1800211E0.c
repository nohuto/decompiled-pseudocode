/*
 * XREFs of sub_1800211E0 @ 0x1800211E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

BOOL __fastcall sub_1800211E0(__int64 a1)
{
  (*(void (__fastcall **)(__int64, _QWORD))(a1 + 8))(qword_18004FE78, *(_QWORD *)(a1 + 16));
  return sub_180039D98(*(void **)(a1 + 16));
}
