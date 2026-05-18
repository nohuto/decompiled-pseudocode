/*
 * XREFs of sub_180024518 @ 0x180024518
 * Callers:
 *     sub_180024B60 @ 0x180024B60 (sub_180024B60.c)
 *     sub_180025B60 @ 0x180025B60 (sub_180025B60.c)
 *     sub_180029BC0 @ 0x180029BC0 (sub_180029BC0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180024518(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 4272);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
