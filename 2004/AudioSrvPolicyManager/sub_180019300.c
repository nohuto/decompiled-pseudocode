/*
 * XREFs of sub_180019300 @ 0x180019300
 * Callers:
 *     sub_18001934C @ 0x18001934C (sub_18001934C.c)
 *     sub_18003C07E @ 0x18003C07E (sub_18003C07E.c)
 *     sub_18003C0A7 @ 0x18003C0A7 (sub_18003C0A7.c)
 * Callees:
 *     sub_180009CF0 @ 0x180009CF0 (sub_180009CF0.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

BOOL __fastcall sub_180019300(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = a2[8];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  sub_180009CF0((__int64)(a2 + 4));
  return sub_180039D98(a2);
}
