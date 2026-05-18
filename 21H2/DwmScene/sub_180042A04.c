/*
 * XREFs of sub_180042A04 @ 0x180042A04
 * Callers:
 *     sub_18003A200 @ 0x18003A200 (sub_18003A200.c)
 *     sub_18003C740 @ 0x18003C740 (sub_18003C740.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180042A04(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 104);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
