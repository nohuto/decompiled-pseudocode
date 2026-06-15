/*
 * XREFs of sub_1800BDB5C @ 0x1800BDB5C
 * Callers:
 *     sub_1800BDC10 @ 0x1800BDC10 (sub_1800BDC10.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800BDB5C(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *a1 = &off_180148898;
  v2 = a1[7];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = a1[6];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  sub_1800BDAD4(a1);
}
