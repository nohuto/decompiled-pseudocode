/*
 * XREFs of sub_180009A30 @ 0x180009A30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180009A30(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  *a2 = v2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return 0LL;
}
