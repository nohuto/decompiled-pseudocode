/*
 * XREFs of sub_1800D18A0 @ 0x1800D18A0
 * Callers:
 *     sub_180071970 @ 0x180071970 (sub_180071970.c)
 *     sub_180071E60 @ 0x180071E60 (sub_180071E60.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D18A0(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *a1;
  *a2 = v2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return 0LL;
}
